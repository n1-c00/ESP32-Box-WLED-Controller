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
*   The header 'ewextsvg' declares the platform dependent representation of a
*   SVG resource. This includes data structures to store the attributes of the
*   resource and a set of macros to cover these structures.
*
*   This header file provides the interface between the platform independent
*   Graphics Engine and the platform specific representation of resources as
*   they will be generated by the Embedded Wizard resource converters of the
*   particular target system.
*
*******************************************************************************/

#ifndef EWEXTSVG_H
#define EWEXTSVG_H


#ifdef __cplusplus
  extern "C"
  {
#endif


/* The following is an identification number for SVG resources. */
#define EW_MAGIC_NO_SVG      0x73766764
#define EW_MAGIC_NO_SVG_BLOB 0x73766744


/* The macro EW_SVG_DATA_SECTION_NAME is used to determine the section where
   the linker should locate the memory areas containing SVG data. */
#if defined EW_SVG_DATA_SECTION_NAME && !defined EW_SVG_DATA_PRAGMA
  #if defined __ICCARM__
    #define EW_SVG_DATA_PRAGMA                                                 \
      _Pragma(EW_STRINGIZE(location=EW_STRINGIZE( EW_SVG_DATA_SECTION_NAME )))
  #elif defined __CC_ARM
    #define EW_SVG_DATA_PRAGMA                                                 \
      __attribute__((section ( EW_STRINGIZE( EW_SVG_DATA_SECTION_NAME ))))
  #elif defined __GNUC__
    #define EW_SVG_DATA_PRAGMA                                                 \
      __attribute__((section ( EW_STRINGIZE( EW_SVG_DATA_SECTION_NAME ))))
  #endif
#endif

#ifndef EW_SVG_DATA_PRAGMA
  #define EW_SVG_DATA_PRAGMA
#endif


/*******************************************************************************
* TYPE:
*   XSVGRes
*   XBlobSVGRes
*
* DESCRIPTION:
*   The structure XSVGRes describes the attributes of a single SVG resource
*   as it will be stored in the code memory. The second structure XBlobSVGRes
*   has the same function as XSVGRes with the unique difference to be used in
*   BLOB files only. Concrete, the BLOB version avoids pointers and uses 32-bit
*   offset values for this purpose to not depend on the CPU architecture and
*   compiler alignment settings.
*
* ELEMENTS:
*   MagicNo - Unique ID of this resource type. It exists for verification
*     purpose only.
*   Data    - Data containing all SVG elements and their attributes. See also
*     description of XSVGCommands data structure.
*   Name    - The name of the SVG resource. It is used for debugging only.
*
*******************************************************************************/
typedef struct XSVGRes
{
  unsigned int          MagicNo;
  const void*           Data;
  const char*           Name;
} XSVGRes;

typedef struct XBlobSVGRes
{
  unsigned int          MagicNo;
  unsigned int          Data;
  unsigned int          Name;
} XBlobSVGRes;


/*******************************************************************************
* MACRO:
*   EW_DECLARE_SVG_RES
*   EW_DEFINE_SVG_RES
*   EW_SVG_DATA
*   EW_SVGS_TABLE
*   EW_SVG
*   EW_END_OF_SVG_RES
*   EW_INCLUDE_BLOB_SVG_RES
*
* DESCRIPTION:
*   Following macros are used to build up the structure of an SVG resource in
*   a better readable way. The macros are used by the Embedded Wizard SVG
*   resource converter.
*
*******************************************************************************/
#define EW_DECLARE_SVG_RES( aName )                                            \
  extern const XVariant aName;

#define EW_DEFINE_SVG_RES( aName )                                             \
  enum                                                                         \
  {                                                                            \
    _d_##aName

#define EW_SVG_DATA( aName, aLangId )                                          \
  };                                                                           \
  extern const unsigned int __##aName##aLangId[];                              \
  static const XSVGRes       _##aName##aLangId =                               \
  {                                                                            \
    EW_MAGIC_NO_SVG,                                                           \
    __##aName##aLangId,                                                        \
    #aName                                                                     \
  };                                                                           \
                                                                               \
  EW_SVG_DATA_PRAGMA const unsigned int __##aName##aLangId[] =                 \
  {

#define EW_SVGS_TABLE( aName )                                                 \
  };                                                                           \
  static const XResource _##aName[] =                                          \
  {

#define EW_SVG( aName, aLangId )                                               \
    { aLangId, &_##aName##aLangId }

#define EW_END_OF_SVG_RES( aName )                                             \
  };

#define EW_INCLUDE_BLOB_SVG_RES( aName, aUnitId, aMemberId )                   \
  static const XBlobLink _##aName[] =                                          \
  {                                                                            \
    { EW_BLOB_LANG_ID, aUnitId, aMemberId }                                    \
  };


#ifdef __cplusplus
  }
#endif

#endif /* EWEXTSVG_H */


/* pba, msy */
