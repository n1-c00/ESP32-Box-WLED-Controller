/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 14.02
* Profile  : ESP32
* Platform : Espressif.ESP32.RGB565
*
*******************************************************************************/

#include "_EwFont_Arial_HC32_C16.h"

/* Font resource for large font - used for the caption text items. */
EW_DEFINE_FONT_RES( ApplicationFontLarge )
  EW_FONT_ENTRY( EwFont_Arial_HC32_C16, 32, 32, 1, 0, 0, 16 )

  EW_FONT_RANGES( ApplicationFontLarge )

  EW_FONT_MAPPINGS( ApplicationFontLarge )
    EW_FONT_MAPPING( ApplicationFontLarge, Default, 0 )

  EW_FONTS_TABLE( ApplicationFontLarge )
    EW_FONT( ApplicationFontLarge, Default )
EW_END_OF_FONT_RES( ApplicationFontLarge )

/* Embedded Wizard */
