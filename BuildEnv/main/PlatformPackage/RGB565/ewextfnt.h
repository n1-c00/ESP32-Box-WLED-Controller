/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This software and related documentation ("Software") are intellectual
* property owned by TARA Systems and are copyright of TARA Systems.
* Any modification, copying, reproduction or redistribution of the Software in
* whole or in part by any means not in accordance with the End-User License
* Agreement for Embedded Wizard is expressly prohibited. The removal of this
* preamble is expressly prohibited.
*
********************************************************************************
*
* DESCRIPTION:
*   The header 'ewextfnt' declares the platform dependent representation of a
*   font resource. This includes data structures to store the attributes of a
*   font resource and a set of macros to cover these structures.
*
*   This header file provides the interface between the platform independent
*   Graphics Engine and the platform specific representation of resources as
*   they will be generated by the Embedded Wizard resource converters of the
*   particular target system.
*
*******************************************************************************/

#ifndef EWEXTFNT_H
#define EWEXTFNT_H


#ifdef __cplusplus
  extern "C"
  {
#endif


/* The following is an identification number for font resources. */
#define EW_MAGIC_NO_FONT           0x666E7464
#define EW_MAGIC_NO_FONT_BLOB      0x666E7444
#define EW_MAGIC_NO_BMP_FONT       0x666E7466
#define EW_MAGIC_NO_VEC_FONT       0x666E7456


/* The macro EW_FONT_PIXEL_SECTION_NAME is used to determine the section where
   the linker should locate the memory areas containing font pixel data. */
#if defined EW_FONT_PIXEL_SECTION_NAME && !defined EW_FONT_PIXEL_PRAGMA
  #if defined __ICCARM__
    #define EW_FONT_PIXEL_PRAGMA                                               \
      _Pragma(EW_STRINGIZE(location=EW_STRINGIZE( EW_FONT_PIXEL_SECTION_NAME )))
  #elif defined __CC_ARM
    #define EW_FONT_PIXEL_PRAGMA                                               \
      __attribute__((section ( EW_STRINGIZE( EW_FONT_PIXEL_SECTION_NAME ))))
  #elif defined __GNUC__
    #define EW_FONT_PIXEL_PRAGMA                                               \
      __attribute__((section ( EW_STRINGIZE( EW_FONT_PIXEL_SECTION_NAME ))))
  #endif
#endif

#ifndef EW_FONT_PIXEL_PRAGMA
  #define EW_FONT_PIXEL_PRAGMA
#endif


/* The macro EW_FONT_DATA_SECTION_NAME is used to determine the section where
   the linker should locate the memory areas containing glyph metrics data. */
#if defined EW_FONT_DATA_SECTION_NAME && !defined EW_FONT_DATA_PRAGMA
  #if defined __ICCARM__
    #define EW_FONT_DATA_PRAGMA                                                \
      _Pragma(EW_STRINGIZE(location=EW_STRINGIZE( EW_FONT_DATA_SECTION_NAME )))
  #elif defined __CC_ARM
    #define EW_FONT_DATA_PRAGMA                                                \
      __attribute__((section ( EW_STRINGIZE( EW_FONT_DATA_SECTION_NAME ))))
  #elif defined __GNUC__
    #define EW_FONT_DATA_PRAGMA                                                \
      __attribute__((section ( EW_STRINGIZE( EW_FONT_DATA_SECTION_NAME ))))
  #endif
#endif

#ifndef EW_FONT_DATA_PRAGMA
  #define EW_FONT_DATA_PRAGMA
#endif


/*******************************************************************************
* TYPE:
*   XFntGlyphRes
*
* DESCRIPTION:
*   The XFntGlyphRes structure describes a single glyph of a font resource.
*   The structure stores the glyph metrics and the bit-offset to the location
*   where the glyph pixel or curves data starts. Within a font, all glyphs
*   share a common pixel/curves memory area.
*
* ELEMENTS:
*   CharCode - Unicode codepoint of the glyph. If there is no associated code
*     point, CharCode is 0 (zero).
*   OriginX,
*   OriginY  - Offset in pixel to the top-left corner of the glyph, relative to
*     the printing position on the text base-line.
*   Width,
*   Height   - Size in pixel of the glyph (= size of the ink box).
*   Advance  - Advance in horizontal direction added to the printing position.
*   Data     - Bit offset to the compressed pixel data or curve vector data of
*     the glyph stored in a linear order in the font's pixel or curves memory
*     area.
*
*******************************************************************************/
typedef struct
{
  unsigned short    CharCode;
  signed short      OriginX;
  signed short      OriginY;
  signed short      Width;
  signed short      Height;
  signed short      Advance;
  unsigned int      Data;
} XFntGlyphRes;


/*******************************************************************************
* TYPE:
*   XFntDataRes
*   XBlobFntDataRes
*
* DESCRIPTION:
*   The structure XFntDataRes describes the attributes of a single font as it
*   will be stored in the code memory. The second structure XBlobFntDataRes has
*   the same function as XFntDataRes with the unique difference to be used in
*   BLOB files only. Concrete, the BLOB version avoids pointers and uses 32-bit
*   offset values for this purpose to not depend on the CPU architecture and
*   compiler alignment settings.
*
* ELEMENTS:
*   MagicNo       - Unique ID of the font type. It is used to distinguish
*     between a pre-rasterized (bitmap) or vector font.
*   Ascent        - Ascent of the font (means the area above the baseline).
*   Descent       - Descent of the font (means the area below the baseline).
*   Leading       - Leading of the font (additional distance between two 
*     rows).
*   Accent        - Additional area above the ascent.
*   NoOfColors    - Quality of the rasterized pixel information. The value is
*     valid for pre-rasterized fonts only. Supported values are 2, 4 or 16.
*   NoOfGlyphs    - Total number of glyphs within this font resource.
*   Glyphs        - Table containing the description of all glyphs. The glyphs
*     are sorted by their glyph ids.
*   Data          - Pointer to the memory area containing the compressed 
*     pixel data or curves data of all glyphs depending on the type of the
*     font.
*   KerningCodes  - List of sorted kerning pairs as 32-bit entries. The first
*     value in the array determines the total number of kerning pairs. Every
*     entry stores in the lower 16 bit the id of the first glyph and in the
*     upper 16 bit the id of the second glyph.
*   KerningValues - Values corresponding 1:1 to the entries from the array
*     KerningCodes.
*
*******************************************************************************/
typedef struct XFntDataRes
{
  unsigned int           MagicNo;
  int                    Ascent;
  int                    Descent;
  int                    Leading;
  int                    Accent;
  int                    NoOfColors;
  int                    NoOfGlyphs;
  const XFntGlyphRes*    Glyphs;
  const void*            Data;
  const unsigned int*    KerningCodes;
  const short*           KerningValues;
} XFntDataRes;

typedef struct XBlobFntDataRes
{
  unsigned int           MagicNo;
  int                    Ascent;
  int                    Descent;
  int                    Leading;
  int                    Accent;
  int                    NoOfColors;
  int                    NoOfGlyphs;
  unsigned int           Glyphs;
  unsigned int           Data;
  unsigned int           KerningCodes;
  unsigned int           KerningValues;
} XBlobFntDataRes;


/******************************************************************************
* TYPE:
*   XFntEntryRes
*   XBlobFntEntryRes
*
* DESCRIPTION:
*   The structure XFntEntryRes contains attributes of a single font included
*   in an Embedded Wizard font resource. This description is used at the
*   runtime to determine the appropriate font.
*
*   The second structure XBlobFntEntryRes has the same function as XFntEntryRes
*   with the unique difference to be used in BLOB files only. Concrete, the
*   BLOB version avoids pointers and uses 32-bit offset values for this purpose
*   to not depend on the CPU architecture and compiler alignment settings.
*
*   Due to the ability of Embedded Wizard to combine several, independent fonts
*   to a single 'virtual' font resource, XFntEntryRes will be managed in arrays
*   of entries - one entry for one font involved in the resource. Description
*   of the entire font resource is found in the structure XFntRes.
*
* ELEMENTS:
*   Font        - Reference to data structure containing the real font.
*   Width       - The desired width of the font in pixel. Corresponds to the
*     Height unless an aspect ration other than 1.0 has been specified.
*   Height      - The desired height of the font in pixel.
*   Kerning     - Determines whether kerning data should be used for this
*     font. In such case the value has to be != 0.
*   RowDistance - The desired distance between two consecutive text rows. If
*     the value is == 0, the distance is calculated on the base of the font
*     metrics.
*   PopularMode - If != 0, calculate the font size similarly to how other
*     application it does. If == 0, the mode compatible to older Embedded
*     Wizard version is used.
*   NoOfColors  - Desired quality of the font glyphs to raster. Only the 
*     values 2, 4 or 16 are valid.
*
******************************************************************************/
typedef struct
{ 
  const void*       Font;
  int               Width;
  int               Height;
  int               Kerning;
  int               RowDistance;
  int               PopularMode;
  int               NoOfColors;
} XFntEntryRes;

typedef struct
{ 
  unsigned int      Font;
  int               Width;
  int               Height;
  int               Kerning;
  int               RowDistance;
  int               PopularMode;
  int               NoOfColors;
} XBlobFntEntryRes;


/******************************************************************************
* TYPE:
*   XFntRangeRes
*
* DESCRIPTION:
*   The structure XFntRangeRes describes the range of glyphs associated to a
*   singular font. This information is used at the runtime in order to map
*   character codes to glyphs within several fonts.
*
*   In this manner several, independent fonts can be combined to a single
*   'virtual' font resource.
*
* ELEMENTS:
*   First  - Stores the glyph code, the range begins with. All glyphs in the
*     range First .. Last do belong to the range.
*   Last   - Stores the glyph code, the range ends with. All glyphs in the
*     range First .. Last do belong to the range.
*   LangId - Language variante of the Unicode codepoint range.
*   Offset - Determines the mapping offset between a glyph code of the range
*     and the corresponding glyph in the associated font.
*   FontNo - The id of the associated font. The fonts are stored in an array
*     of XFntEntryRes structures within the font resource. FontNo serves as
*     an index within this array.
*
******************************************************************************/
typedef struct
{ 
  unsigned short    First;
  unsigned short    Last;
  int               LangId;
  int               Offset;
  int               FontNo;
} XFntRangeRes;


/******************************************************************************
* TYPE:
*   XFntRes
*   XBlobFntRes
*
* DESCRIPTION:
*   The structure XFntRes describes a font resource as it is stored in the
*   code memory. The second structure XBlobFntRes has the same function as
*   XFntRes with the unique difference to be used in BLOB files only. Concrete,
*   the BLOB version avoids pointers and uses 32-bit offset values for this
*   purpose to not depend on the CPU architecture and compiler alignment
*   settings.
*
* ELEMENTS:
*   MagicNo     - Unique ID of this resource type. It exists for verification
*     purpose only.
*   LangId      - Selector for language specific glyph variants.
*   Fonts       - Refers to an array of XFntEntryRes structures. This array
*     stores descriptors of associated fonts. The total number of entries
*     within this array is stored in the field NoOfFonts. 
*   Ranges      - Refers to an array of XFntRangeRes structures. This array
*     determines the mapping between the glyph codes of the font resource and 
*     the glyphs of the associated fonts. The total number of entries within 
*     this array is stored in the field NoOfRanges. The content of this array
*     is sorted in ascending order by the glyph codes.
*   NoOfFonts   - The number of fonts associated to this font resource. This
*     is the number of entries within the Fonts array.
*   NoOfRanges  - The number of ranges of this font resource stored in the
*     array Ranges.
*   Name        - The name of the respective font resource within Embedded 
*     Wizard project. This information is used to display error messages if 
*     glyphs are missing.
*
******************************************************************************/
typedef struct XFntRes
{ 
  unsigned int        MagicNo;
  int                 LangId;
  const XFntEntryRes* Fonts;
  const XFntRangeRes* Ranges;
  int                 NoOfFonts;
  int                 NoOfRanges;
  const char*         Name;
} XFntRes;

typedef struct XBlobFntRes
{ 
  unsigned int        MagicNo;
  int                 LangId;
  unsigned int        Fonts;
  unsigned int        Ranges;
  int                 NoOfFonts;
  int                 NoOfRanges;
  unsigned int        Name;
} XBlobFntRes;


/*******************************************************************************
* MACRO:
*   EW_DECLARE_FONT_RES
*   EW_DEFINE_FONT_RES
*   EW_END_OF_FONT_RES
*   EW_FONT_ENTRY
*   EW_FONT_MAPPINGS
*   EW_FONT_MAPPING
*   EW_FONT_RANGES
*   EW_FONT_RANGE
*   EW_FONTS_TABLE
*   EW_FONT
*   EW_INCLUDE_BLOB_FONT_RES
*   EW_DEFINE_BITMAP_FONT
*   EW_DEFINE_VECTOR_FONT
*   EW_FONT_GLYPH
*   EW_FONT_PIXEL
*   EW_FONT_CURVES
*   EW_FONT_KERNING_CODES
*   EW_FONT_KERNING_VALUES
*   EW_END_OF_BITMAP_FONT
*   EW_END_OF_VECTOR_FONT
*
* DESCRIPTION:
*   Following macros are used to build up the structure of a font resource in
*   a better readable way. These macros are used by the Embedded Wizard font
*   resource converter.
*
*******************************************************************************/
#define EW_DECLARE_FONT_RES( aName )                                           \
  extern const XVariant aName;

#define EW_DEFINE_FONT_RES( aName )                                            \
  static const XFntEntryRes ___##aName[] =                                     \
  {

#define EW_FONT_ENTRY( aName, aWidth, aHeight, aKerning, aRowDistance,         \
  aPopularMode, aNoOfColors )                                                  \
    { &aName, aWidth, aHeight, aKerning, aRowDistance, aPopularMode,           \
      aNoOfColors },

#define EW_FONT_RANGES( aName )                                                \
    { 0, 0, 0, 0, 0, 0, 0 }                                                    \
  };                                                                           \
  static const XFntRangeRes ____##aName[] =                                    \
  {

#define EW_FONT_RANGE( aFirst, aLast, aLangId, aOffset, aFontNo )              \
    { aFirst, aLast, aLangId, aOffset, aFontNo },

#define EW_FONT_MAPPINGS( aName )                                              \
    { 0, 0, 0, 0, 0 }                                                          \
  };

#define EW_FONT_MAPPING( aName, aLangId, aSelectLangId )                       \
  static const XFntRes _##aName##aLangId =                                     \
  {                                                                            \
    EW_MAGIC_NO_FONT,                                                          \
    aSelectLangId,                                                             \
    ___##aName,                                                                \
    ____##aName,                                                               \
    ( sizeof( ___##aName  ) / sizeof( *___##aName  )) -1,                      \
    ( sizeof( ____##aName ) / sizeof( *____##aName )) -1,                      \
    #aName                                                                     \
  };

#define EW_FONTS_TABLE( aName )                                                \
  static const XResource _##aName[] =                                          \
  {

#define EW_FONT( aName, aLangId )                                              \
    { aLangId, &_##aName##aLangId }

#define EW_END_OF_FONT_RES( aName )                                            \
  };

#define EW_INCLUDE_BLOB_FONT_RES( aName, aUnitId, aMemberId )                  \
  static const XBlobLink _##aName[] =                                          \
  {                                                                            \
    { EW_BLOB_LANG_ID, aUnitId, aMemberId }                                    \
  };

#define EW_DEFINE_BITMAP_FONT( aName, aAscent, aDescent, aLeading,             \
  aNoOfColors )                                                                \
  enum { _colors_##aName  = aNoOfColors };                                     \
  enum { _ascent_##aName  = aAscent  };                                        \
  enum { _descent_##aName = aDescent };                                        \
  enum { _leading_##aName = aLeading };                                        \
                                                                               \
  EW_FONT_DATA_PRAGMA const XFntGlyphRes _g_##aName[] =                        \
  {

#define EW_DEFINE_VECTOR_FONT( aName, aAscent, aDescent, aLeading, aAccent )   \
  enum { _ascent_##aName  = aAscent  };                                        \
  enum { _descent_##aName = aDescent };                                        \
  enum { _leading_##aName = aLeading };                                        \
  enum { _accent_##aName  = aAccent  };                                        \
                                                                               \
  EW_FONT_DATA_PRAGMA const XFntGlyphRes _g_##aName[] =                        \
  {

#define EW_FONT_GLYPH( aCode, aOriginX, aOriginY, aWidth, aHeight, aAdvance,   \
  aData )                                                                      \
  {                                                                            \
    aCode,                                                                     \
    aOriginX,                                                                  \
    aOriginY,                                                                  \
    aWidth,                                                                    \
    aHeight,                                                                   \
    aAdvance,                                                                  \
    aData                                                                      \
  }

#define EW_FONT_PIXEL( aName, aSize )                                          \
    { 0, 0, 0, 0, 0, 0, aSize }                                                \
  };                                                                           \
  EW_FONT_PIXEL_PRAGMA const unsigned int _p_##aName[] =                       \
  {

#define EW_FONT_CURVES( aName, aSize )                                         \
    { 0, 0, 0, 0, 0, 0, aSize }                                                \
  };                                                                           \
  EW_FONT_PIXEL_PRAGMA const short _c_##aName[] =                              \
  {

#define EW_FONT_KERNING_CODES( aName )                                         \
  };                                                                           \
  EW_FONT_DATA_PRAGMA const unsigned int _kc_##aName[] =                       \
  {

#define EW_FONT_KERNING_VALUES( aName )                                        \
    0                                                                          \
  };                                                                           \
  EW_FONT_DATA_PRAGMA const unsigned short _kv_##aName[] =                     \
  {

#define EW_END_OF_BITMAP_FONT( aName )                                         \
    0                                                                          \
  };                                                                           \
  const XFntDataRes aName =                                                    \
  {                                                                            \
    EW_MAGIC_NO_BMP_FONT,                                                      \
    _ascent_##aName,                                                           \
    _descent_##aName,                                                          \
    _leading_##aName,                                                          \
    0,                                                                         \
    _colors_##aName,                                                           \
    sizeof( _g_##aName ) / sizeof( _g_##aName[0]),                             \
    _g_##aName,                                                                \
    _p_##aName,                                                                \
    _kc_##aName,                                                               \
    (const short*)_kv_##aName                                                  \
  };

#define EW_END_OF_VECTOR_FONT( aName )                                         \
    0                                                                          \
  };                                                                           \
  const XFntDataRes aName =                                                    \
  {                                                                            \
    EW_MAGIC_NO_VEC_FONT,                                                      \
    _ascent_##aName,                                                           \
    _descent_##aName,                                                          \
    _leading_##aName,                                                          \
    _accent_##aName,                                                           \
    0,                                                                         \
    sizeof( _g_##aName ) / sizeof( _g_##aName[0]),                             \
    _g_##aName,                                                                \
    _c_##aName,                                                                \
    _kc_##aName,                                                               \
    (const short*)_kv_##aName                                                  \
  };


#ifdef __cplusplus
  }
#endif

#endif /* EWEXTFNT_H */


/* pba, msy */
