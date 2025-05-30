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
* Profile  : Profile
* Platform : Espressif.ESP32.RGB565
*
*******************************************************************************/

#include "ewlocale.h"
#include "_CoreKeyPressHandler.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsText.h"
#include "_WidgetSetHorizontalSlider.h"
#include "_WidgetSetHorizontalSliderConfig.h"
#include "_WidgetSetToggleButton.h"
#include "_WidgetSetToggleButtonConfig.h"
#include "_WidgetSetWidgetConfig.h"
#include "Core.h"
#include "Graphics.h"
#include "Resources.h"
#include "Views.h"
#include "WidgetSet.h"

/* Constant values used in this 'C' module only. */
static const XPoint _Const0000 = { 68, 59 };
static const XColor _Const0001 = { 0x6C, 0x6E, 0x70, 0xFF };
static const XColor _Const0002 = { 0xA8, 0xAB, 0xAB, 0xFF };
static const XColor _Const0003 = { 0xA8, 0xAB, 0xAB, 0xAA };
static const XPoint _Const0004 = { 104, 59 };
static const XColor _Const0005 = { 0x00, 0x00, 0x00, 0xFF };
static const XColor _Const0006 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const0007 = {{ 0, 0 }, { 200, 50 }};
static const XPoint _Const0008 = { 0, 50 };
static const XPoint _Const0009 = { 200, 50 };
static const XPoint _Const000A = { 200, 0 };
static const XPoint _Const000B = { 0, 0 };
static const XRect _Const000C = {{ 0, 0 }, { 0, 0 }};
static const XRect _Const000D = {{ -8, -8 }, { 9, 9 }};
static const XRect _Const000E = {{ 0, 0 }, { 150, 50 }};
static const XPoint _Const000F = { 150, 50 };
static const XPoint _Const0010 = { 150, 0 };

/* Include a file containing the bitmap resource : 'WidgetSet::HorizontalSliderTrackLarge' */
#include "_WidgetSetHorizontalSliderTrackLarge.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::HorizontalSliderTrackLarge' */
EW_RES_WITHOUT_VARIANTS( WidgetSetHorizontalSliderTrackLarge )

/* Include a file containing the bitmap resource : 'WidgetSet::SwitchLarge' */
#include "_WidgetSetSwitchLarge.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::SwitchLarge' */
EW_RES_WITHOUT_VARIANTS( WidgetSetSwitchLarge )

/* Include a file containing the bitmap resource : 'WidgetSet::ThumbKnobLarge' */
#include "_WidgetSetThumbKnobLarge.h"

/* Table with links to derived variants of the bitmap resource : 'WidgetSet::ThumbKnobLarge' */
EW_RES_WITHOUT_VARIANTS( WidgetSetThumbKnobLarge )

/* This autoobject provides the default customization for the 'horizontal slider' 
   widget (WidgetSet::HorizontalSlider) in its large size variant. */
EW_DEFINE_AUTOOBJECT( WidgetSetHorizontalSlider_Lime_Large, WidgetSetHorizontalSliderConfig )

/* Initializer for the auto object 'WidgetSet::HorizontalSlider_Lime_Large' */
void WidgetSetHorizontalSlider_Lime_Large__Init( WidgetSetHorizontalSliderConfig _this )
{
  WidgetSetHorizontalSliderConfig_OnSetKeyRepeatPeriod( _this, 100 );
  WidgetSetHorizontalSliderConfig_OnSetKeyRepeatDelay( _this, 500 );
  WidgetSetHorizontalSliderConfig_OnSetThumbMarginRight( _this, -3 );
  WidgetSetHorizontalSliderConfig_OnSetThumbMarginLeft( _this, -3 );
  WidgetSetHorizontalSliderConfig_OnSetThumbFrameActive( _this, 3 );
  WidgetSetHorizontalSliderConfig_OnSetThumbFrameFocused( _this, 2 );
  WidgetSetHorizontalSliderConfig_OnSetThumbFrameDisabled( _this, 0 );
  WidgetSetHorizontalSliderConfig_OnSetThumbFrameDefault( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetThumbBitmapActive( _this, EwLoadResource( 
  &WidgetSetThumbKnobLarge, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetThumbBitmapFocused( _this, EwLoadResource( 
  &WidgetSetThumbKnobLarge, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDisabled( _this, EwLoadResource( 
  &WidgetSetThumbKnobLarge, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDefault( _this, EwLoadResource( 
  &WidgetSetThumbKnobLarge, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameActive( _this, 0 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameFocused( _this, 0 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameDisabled( _this, 0 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameDefault( _this, 0 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapActive( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackLarge, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapFocused( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackLarge, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapDisabled( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackLarge, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapDefault( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackLarge, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameActive( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameFocused( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameDisabled( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameDefault( _this, 1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapActive( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackLarge, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapFocused( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackLarge, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapDisabled( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackLarge, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapDefault( _this, EwLoadResource( 
  &WidgetSetHorizontalSliderTrackLarge, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetWidgetMinSize( _this, _Const0000 );
}

/* Re-Initializer for the auto object 'WidgetSet::HorizontalSlider_Lime_Large' */
void WidgetSetHorizontalSlider_Lime_Large__ReInit( WidgetSetHorizontalSliderConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::HorizontalSlider_Lime_Large' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetHorizontalSlider_Lime_Large )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetHorizontalSlider_Lime_Large )

/* This autoobject provides one of the default customizations for the 'toggle' widget 
   (WidgetSet::ToggleButton) in its large size variant. With this customization 
   the toggle button appears as a 'switch'. */
EW_DEFINE_AUTOOBJECT( WidgetSetSwitch_Lime_Large, WidgetSetToggleButtonConfig )

/* Initializer for the auto object 'WidgetSet::Switch_Lime_Large' */
void WidgetSetSwitch_Lime_Large__Init( WidgetSetToggleButtonConfig _this )
{
  WidgetSetToggleButtonConfig_OnSetLabelOnColorActive( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorFocused( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorDisabled( _this, _Const0002 );
  WidgetSetToggleButtonConfig_OnSetLabelOnColorDefault( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorActive( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorFocused( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorDisabled( _this, _Const0002 );
  WidgetSetToggleButtonConfig_OnSetLabelOffColorDefault( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetLabelMarginRight( _this, 110 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintActive( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintFocused( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintDisabled( _this, _Const0003 );
  WidgetSetToggleButtonConfig_OnSetIconOnTintDefault( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintActive( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintFocused( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintDisabled( _this, _Const0003 );
  WidgetSetToggleButtonConfig_OnSetIconOffTintDefault( _this, _Const0001 );
  WidgetSetToggleButtonConfig_OnSetIconMarginRight( _this, 110 );
  WidgetSetToggleButtonConfig_OnSetLabelAlignment( _this, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  WidgetSetToggleButtonConfig_OnSetLabelOnFont( _this, EwLoadResource( &ResourcesFontLarge, 
  ResourcesFont ));
  WidgetSetToggleButtonConfig_OnSetLabelOffFont( _this, EwLoadResource( &ResourcesFontLarge, 
  ResourcesFont ));
  WidgetSetToggleButtonConfig_OnSetIconAlignment( _this, ViewsImageAlignmentAlignHorzLeft 
  | ViewsImageAlignmentAlignVertCenter );
  WidgetSetToggleButtonConfig_OnSetFaceLayout( _this, CoreLayoutAlignToRight );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameActive( _this, 7 );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameFocused( _this, 5 );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameDisabled( _this, 1 );
  WidgetSetToggleButtonConfig_OnSetFaceOnFrameDefault( _this, 3 );
  WidgetSetToggleButtonConfig_OnSetFaceOnBitmapActive( _this, EwLoadResource( &WidgetSetSwitchLarge, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOnBitmapFocused( _this, EwLoadResource( &WidgetSetSwitchLarge, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOnBitmapDisabled( _this, EwLoadResource( 
  &WidgetSetSwitchLarge, ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOnBitmapDefault( _this, EwLoadResource( &WidgetSetSwitchLarge, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameActive( _this, 6 );
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameFocused( _this, 4 );
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameDisabled( _this, 0 );
  WidgetSetToggleButtonConfig_OnSetFaceOffFrameDefault( _this, 2 );
  WidgetSetToggleButtonConfig_OnSetFaceOffBitmapActive( _this, EwLoadResource( &WidgetSetSwitchLarge, 
  ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffBitmapFocused( _this, EwLoadResource( 
  &WidgetSetSwitchLarge, ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffBitmapDisabled( _this, EwLoadResource( 
  &WidgetSetSwitchLarge, ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetFaceOffBitmapDefault( _this, EwLoadResource( 
  &WidgetSetSwitchLarge, ResourcesBitmap ));
  WidgetSetToggleButtonConfig_OnSetWidgetMinSize( _this, _Const0004 );
}

/* Re-Initializer for the auto object 'WidgetSet::Switch_Lime_Large' */
void WidgetSetSwitch_Lime_Large__ReInit( WidgetSetToggleButtonConfig _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'WidgetSet::Switch_Lime_Large' */
EW_DEFINE_AUTOOBJECT_VARIANTS( WidgetSetSwitch_Lime_Large )
EW_END_OF_AUTOOBJECT_VARIANTS( WidgetSetSwitch_Lime_Large )

/* Initializer for the class 'WidgetSet::HorizontalSliderConfig' */
void WidgetSetHorizontalSliderConfig__Init( WidgetSetHorizontalSliderConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetHorizontalSliderConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetHorizontalSliderConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->ThumbFrameActive = -1;
  _this->ThumbFrameFocused = -1;
  _this->ThumbFrameDisabled = -1;
  _this->ThumbFrameDefault = -1;
  _this->TrackRightFrameActive = -1;
  _this->TrackRightFrameFocused = -1;
  _this->TrackRightFrameDisabled = -1;
  _this->TrackRightFrameDefault = -1;
  _this->TrackLeftFrameActive = -1;
  _this->TrackLeftFrameFocused = -1;
  _this->TrackLeftFrameDisabled = -1;
  _this->TrackLeftFrameDefault = -1;
}

/* Re-Initializer for the class 'WidgetSet::HorizontalSliderConfig' */
void WidgetSetHorizontalSliderConfig__ReInit( WidgetSetHorizontalSliderConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::HorizontalSliderConfig' */
void WidgetSetHorizontalSliderConfig__Done( WidgetSetHorizontalSliderConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetKeyRepeatPeriod()' */
void WidgetSetHorizontalSliderConfig_OnSetKeyRepeatPeriod( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->KeyRepeatPeriod == value )
    return;

  _this->KeyRepeatPeriod = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetKeyRepeatDelay()' */
void WidgetSetHorizontalSliderConfig_OnSetKeyRepeatDelay( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->KeyRepeatDelay == value )
    return;

  _this->KeyRepeatDelay = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbFrameActive()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbFrameActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbFrameActive == value )
    return;

  _this->ThumbFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbFrameFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbFrameFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbFrameFocused == value )
    return;

  _this->ThumbFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbFrameDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbFrameDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbFrameDisabled == value )
    return;

  _this->ThumbFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbFrameDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbFrameDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbFrameDefault == value )
    return;

  _this->ThumbFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapActive()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapActive( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbBitmapActive == value )
    return;

  _this->ThumbBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapFocused( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbBitmapFocused == value )
    return;

  _this->ThumbBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDisabled( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbBitmapDisabled == value )
    return;

  _this->ThumbBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbBitmapDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDefault( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->ThumbBitmapDefault == value )
    return;

  _this->ThumbBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbMarginRight()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbMarginRight( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbMarginRight == value )
    return;

  _this->ThumbMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetThumbMarginLeft()' */
void WidgetSetHorizontalSliderConfig_OnSetThumbMarginLeft( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->ThumbMarginLeft == value )
    return;

  _this->ThumbMarginLeft = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFrameActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackRightFrameActive == value )
    return;

  _this->TrackRightFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFrameFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackRightFrameFocused == value )
    return;

  _this->TrackRightFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFrameDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackRightFrameDisabled == value )
    return;

  _this->TrackRightFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightFrameDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightFrameDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackRightFrameDefault == value )
    return;

  _this->TrackRightFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBitmapActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapActive( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackRightBitmapActive == value )
    return;

  _this->TrackRightBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBitmapFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapFocused( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackRightBitmapFocused == value )
    return;

  _this->TrackRightBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBitmapDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapDisabled( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackRightBitmapDisabled == value )
    return;

  _this->TrackRightBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackRightBitmapDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackRightBitmapDefault( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackRightBitmapDefault == value )
    return;

  _this->TrackRightBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFrameActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameActive( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackLeftFrameActive == value )
    return;

  _this->TrackLeftFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFrameFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameFocused( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackLeftFrameFocused == value )
    return;

  _this->TrackLeftFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFrameDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameDisabled( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackLeftFrameDisabled == value )
    return;

  _this->TrackLeftFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftFrameDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftFrameDefault( WidgetSetHorizontalSliderConfig _this, 
  XInt32 value )
{
  if ( _this->TrackLeftFrameDefault == value )
    return;

  _this->TrackLeftFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBitmapActive()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapActive( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackLeftBitmapActive == value )
    return;

  _this->TrackLeftBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBitmapFocused()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapFocused( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackLeftBitmapFocused == value )
    return;

  _this->TrackLeftBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBitmapDisabled()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapDisabled( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackLeftBitmapDisabled == value )
    return;

  _this->TrackLeftBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetTrackLeftBitmapDefault()' */
void WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapDefault( WidgetSetHorizontalSliderConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->TrackLeftBitmapDefault == value )
    return;

  _this->TrackLeftBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSliderConfig.OnSetWidgetMinSize()' */
void WidgetSetHorizontalSliderConfig_OnSetWidgetMinSize( WidgetSetHorizontalSliderConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalSliderConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalSliderConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalSliderConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalSliderConfig' */
EW_DEFINE_CLASS( WidgetSetHorizontalSliderConfig, WidgetSetWidgetConfig, ThumbBitmapActive, 
                 ThumbBitmapActive, KeyRepeatPeriod, KeyRepeatPeriod, KeyRepeatPeriod, 
                 KeyRepeatPeriod, "WidgetSet::HorizontalSliderConfig" )
EW_END_OF_CLASS( WidgetSetHorizontalSliderConfig )

/* Initializer for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__Init( WidgetSetToggleButtonConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  WidgetSetWidgetConfig__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetToggleButtonConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetToggleButtonConfig );

  /* ... and initialize objects, variables, properties, etc. */
  _this->LabelOnColorActive = _Const0005;
  _this->LabelOnColorFocused = _Const0005;
  _this->LabelOnColorDisabled = _Const0005;
  _this->LabelOnColorDefault = _Const0005;
  _this->LabelOffColorActive = _Const0005;
  _this->LabelOffColorFocused = _Const0005;
  _this->LabelOffColorDisabled = _Const0005;
  _this->LabelOffColorDefault = _Const0005;
  _this->IconOnTintActive = _Const0006;
  _this->IconOnTintFocused = _Const0006;
  _this->IconOnTintDisabled = _Const0006;
  _this->IconOnTintDefault = _Const0006;
  _this->IconOffTintActive = _Const0006;
  _this->IconOffTintFocused = _Const0006;
  _this->IconOffTintDisabled = _Const0006;
  _this->IconOffTintDefault = _Const0006;
  _this->LabelAlignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->IconAlignment = ViewsImageAlignmentAlignHorzCenter | ViewsImageAlignmentAlignVertCenter;
  _this->FaceLayout = CoreLayoutAlignToBottom | CoreLayoutAlignToLeft | CoreLayoutAlignToRight 
  | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert;
  _this->FaceOnFrameActive = -1;
  _this->FaceOnFrameFocused = -1;
  _this->FaceOnFrameDisabled = -1;
  _this->FaceOnFrameDefault = -1;
  _this->FaceOffFrameActive = -1;
  _this->FaceOffFrameFocused = -1;
  _this->FaceOffFrameDisabled = -1;
  _this->FaceOffFrameDefault = -1;
}

/* Re-Initializer for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__ReInit( WidgetSetToggleButtonConfig _this )
{
  /* At first re-initialize the super class ... */
  WidgetSetWidgetConfig__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::ToggleButtonConfig' */
void WidgetSetToggleButtonConfig__Done( WidgetSetToggleButtonConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( WidgetSetWidgetConfig );

  /* Don't forget to deinitialize the super class ... */
  WidgetSetWidgetConfig__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorActive()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorActive, value ))
    return;

  _this->LabelOnColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorFocused, value ))
    return;

  _this->LabelOnColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorDisabled, value ))
    return;

  _this->LabelOnColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOnColorDefault, value ))
    return;

  _this->LabelOnColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorActive()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorActive, value ))
    return;

  _this->LabelOffColorActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorFocused()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorFocused, value ))
    return;

  _this->LabelOffColorFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorDisabled()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorDisabled, value ))
    return;

  _this->LabelOffColorDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffColorDefault()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffColorDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->LabelOffColorDefault, value ))
    return;

  _this->LabelOffColorDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelMarginRight()' */
void WidgetSetToggleButtonConfig_OnSetLabelMarginRight( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->LabelMarginRight == value )
    return;

  _this->LabelMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintActive()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintActive, value ))
    return;

  _this->IconOnTintActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintFocused()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintFocused, value ))
    return;

  _this->IconOnTintFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintDisabled()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintDisabled, value ))
    return;

  _this->IconOnTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOnTintDefault()' */
void WidgetSetToggleButtonConfig_OnSetIconOnTintDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOnTintDefault, value ))
    return;

  _this->IconOnTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintActive()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintActive( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintActive, value ))
    return;

  _this->IconOffTintActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintFocused()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintFocused( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintFocused, value ))
    return;

  _this->IconOffTintFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintDisabled()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintDisabled( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintDisabled, value ))
    return;

  _this->IconOffTintDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconOffTintDefault()' */
void WidgetSetToggleButtonConfig_OnSetIconOffTintDefault( WidgetSetToggleButtonConfig _this, 
  XColor value )
{
  if ( !EwCompColor( _this->IconOffTintDefault, value ))
    return;

  _this->IconOffTintDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconMarginRight()' */
void WidgetSetToggleButtonConfig_OnSetIconMarginRight( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->IconMarginRight == value )
    return;

  _this->IconMarginRight = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelAlignment()' */
void WidgetSetToggleButtonConfig_OnSetLabelAlignment( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->LabelAlignment == value )
    return;

  _this->LabelAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOnFont()' */
void WidgetSetToggleButtonConfig_OnSetLabelOnFont( WidgetSetToggleButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelOnFont == value )
    return;

  _this->LabelOnFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetLabelOffFont()' */
void WidgetSetToggleButtonConfig_OnSetLabelOffFont( WidgetSetToggleButtonConfig _this, 
  ResourcesFont value )
{
  if ( _this->LabelOffFont == value )
    return;

  _this->LabelOffFont = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetIconAlignment()' */
void WidgetSetToggleButtonConfig_OnSetIconAlignment( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->IconAlignment == value )
    return;

  _this->IconAlignment = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceLayout()' */
void WidgetSetToggleButtonConfig_OnSetFaceLayout( WidgetSetToggleButtonConfig _this, 
  XSet value )
{
  if ( _this->FaceLayout == value )
    return;

  _this->FaceLayout = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameActive == value )
    return;

  _this->FaceOnFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameFocused == value )
    return;

  _this->FaceOnFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameDisabled == value )
    return;

  _this->FaceOnFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnFrameDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnFrameDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOnFrameDefault == value )
    return;

  _this->FaceOnFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnBitmapActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnBitmapActive( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnBitmapActive == value )
    return;

  _this->FaceOnBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnBitmapFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnBitmapFocused( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnBitmapFocused == value )
    return;

  _this->FaceOnBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnBitmapDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnBitmapDisabled( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnBitmapDisabled == value )
    return;

  _this->FaceOnBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOnBitmapDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOnBitmapDefault( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOnBitmapDefault == value )
    return;

  _this->FaceOnBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameActive( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameActive == value )
    return;

  _this->FaceOffFrameActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameFocused( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameFocused == value )
    return;

  _this->FaceOffFrameFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameDisabled( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameDisabled == value )
    return;

  _this->FaceOffFrameDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffFrameDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffFrameDefault( WidgetSetToggleButtonConfig _this, 
  XInt32 value )
{
  if ( _this->FaceOffFrameDefault == value )
    return;

  _this->FaceOffFrameDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffBitmapActive()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffBitmapActive( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffBitmapActive == value )
    return;

  _this->FaceOffBitmapActive = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffBitmapFocused()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffBitmapFocused( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffBitmapFocused == value )
    return;

  _this->FaceOffBitmapFocused = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffBitmapDisabled()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffBitmapDisabled( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffBitmapDisabled == value )
    return;

  _this->FaceOffBitmapDisabled = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetFaceOffBitmapDefault()' */
void WidgetSetToggleButtonConfig_OnSetFaceOffBitmapDefault( WidgetSetToggleButtonConfig _this, 
  ResourcesBitmap value )
{
  if ( _this->FaceOffBitmapDefault == value )
    return;

  _this->FaceOffBitmapDefault = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButtonConfig.OnSetWidgetMinSize()' */
void WidgetSetToggleButtonConfig_OnSetWidgetMinSize( WidgetSetToggleButtonConfig _this, 
  XPoint value )
{
  if ( value.X < 0 )
    value.X = 0;

  if ( value.Y < 0 )
    value.Y = 0;

  if ( !EwCompPoint( _this->WidgetMinSize, value ))
    return;

  _this->WidgetMinSize = value;
  EwPostSignal( EwNewSlot( _this, WidgetSetWidgetConfig_onInvalidate ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::ToggleButtonConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetToggleButtonConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetToggleButtonConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ToggleButtonConfig' */
EW_DEFINE_CLASS( WidgetSetToggleButtonConfig, WidgetSetWidgetConfig, LabelOnFont, 
                 LabelOnFont, LabelOnColorActive, LabelOnColorActive, LabelOnColorActive, 
                 LabelOnColorActive, "WidgetSet::ToggleButtonConfig" )
EW_END_OF_CLASS( WidgetSetToggleButtonConfig )

/* Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Init( WidgetSetWidgetConfig _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetWidgetConfig );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetWidgetConfig );
}

/* Re-Initializer for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__ReInit( WidgetSetWidgetConfig _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'WidgetSet::WidgetConfig' */
void WidgetSetWidgetConfig__Done( WidgetSetWidgetConfig _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::WidgetConfig.onInvalidate()' */
void WidgetSetWidgetConfig_onInvalidate( WidgetSetWidgetConfig _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwNotifyObjObservers((XObject)_this, 0 );
}

/* Variants derived from the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetWidgetConfig )
EW_END_OF_CLASS_VARIANTS( WidgetSetWidgetConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::WidgetConfig' */
EW_DEFINE_CLASS( WidgetSetWidgetConfig, XObject, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "WidgetSet::WidgetConfig" )
EW_END_OF_CLASS( WidgetSetWidgetConfig )

/* Initializer for the class 'WidgetSet::HorizontalSlider' */
void WidgetSetHorizontalSlider__Init( WidgetSetHorizontalSlider _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetHorizontalSlider );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->RepetitionTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandlerLeft, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandlerRight, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetHorizontalSlider );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0007 );
  CoreTimer_OnSetPeriod( &_this->RepetitionTimer, 0 );
  CoreTimer_OnSetBegin( &_this->RepetitionTimer, 50 );
  _this->KeyHandlerLeft.Filter = CoreKeyCodeLeft;
  _this->KeyHandlerRight.Filter = CoreKeyCodeRight;
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, _Const0008 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, _Const0009 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, _Const000A );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, _Const000B );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  _this->MaxValue = 100;
  _this->CurrentValue = 50;
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->RepetitionTimer.OnTrigger = EwNewSlot( _this, WidgetSetHorizontalSlider_onRepetitionTimer );
  _this->KeyHandlerLeft.OnRelease = EwNewSlot( _this, WidgetSetHorizontalSlider_onReleaseKey );
  _this->KeyHandlerLeft.OnPress = EwNewSlot( _this, WidgetSetHorizontalSlider_onPressKey );
  _this->KeyHandlerRight.OnRelease = EwNewSlot( _this, WidgetSetHorizontalSlider_onReleaseKey );
  _this->KeyHandlerRight.OnPress = EwNewSlot( _this, WidgetSetHorizontalSlider_onPressKey );
  _this->TouchHandler.OnDrag = EwNewSlot( _this, WidgetSetHorizontalSlider_onDragTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetHorizontalSlider_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetHorizontalSlider_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::HorizontalSlider' */
void WidgetSetHorizontalSlider__ReInit( WidgetSetHorizontalSlider _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->RepetitionTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandlerLeft );
  CoreKeyPressHandler__ReInit( &_this->KeyHandlerRight );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::HorizontalSlider' */
void WidgetSetHorizontalSlider__Done( WidgetSetHorizontalSlider _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->RepetitionTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandlerLeft );
  CoreKeyPressHandler__Done( &_this->KeyHandlerRight );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetBounds()' */
void WidgetSetHorizontalSlider_OnSetBounds( WidgetSetHorizontalSlider _this, XRect 
  value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void WidgetSetHorizontalSlider_UpdateViewState( WidgetSetHorizontalSlider _this, 
  XSet aState )
{
  XBool needsFrame2;
  XBool needsFrame3;
  XBool needsImage;
  XRect area;
  XChar isState;
  XInt32 marginLeft;
  XInt32 marginRight;
  XInt32 minPos;
  XInt32 maxPos;
  XInt32 newThumbPos;
  XRect r;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFrame2 = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->TrackLeftBitmapDefault 
  != 0 ) || ( _this->Appearance->TrackLeftBitmapDisabled != 0 )) || ( _this->Appearance->TrackLeftBitmapFocused 
  != 0 )) || ( _this->Appearance->TrackLeftBitmapActive != 0 )));
  needsFrame3 = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->TrackRightBitmapDefault 
  != 0 ) || ( _this->Appearance->TrackRightBitmapDisabled != 0 )) || ( _this->Appearance->TrackRightBitmapFocused 
  != 0 )) || ( _this->Appearance->TrackRightBitmapActive != 0 )));
  needsImage = (XBool)(( _this->Appearance != 0 ) && (((( _this->Appearance->ThumbBitmapDefault 
  != 0 ) || ( _this->Appearance->ThumbBitmapDisabled != 0 )) || ( _this->Appearance->ThumbBitmapFocused 
  != 0 )) || ( _this->Appearance->ThumbBitmapActive != 0 )));
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsFrame2 && !( _this->frameView2 != 0 ))
  {
    _this->frameView2 = EwNewObject( ViewsFrame, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->frameView2 ), 0 );
  }
  else
    if ( !needsFrame2 && ( _this->frameView2 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->frameView2 ));
      _this->frameView2 = 0;
    }

  if ( needsFrame3 && !( _this->frameView3 != 0 ))
  {
    _this->frameView3 = EwNewObject( ViewsFrame, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->frameView3 ), 0 );
  }
  else
    if ( !needsFrame3 && ( _this->frameView3 != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->frameView3 ));
      _this->frameView3 = 0;
    }

  if ( needsImage && !( _this->imageView != 0 ))
  {
    _this->imageView = EwNewObject( ViewsImage, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->imageView ), 0 );
  }
  else
    if ( !needsImage && ( _this->imageView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->imageView ));
      _this->imageView = 0;
    }

  if ( !(( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
    isState = 'D';
  else
    if (( _this->touchActive || _this->KeyHandlerRight.Down ) || _this->KeyHandlerLeft.Down )
      isState = 'A';
    else
      if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
        isState = 'F';
      else
        isState = 'E';

  _this->prevState = isState;

  if ( _this->frameView2 != 0 )
    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      break;

      default :; 
    }

  if ( _this->frameView3 != 0 )
    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      break;

      default :; 
    }

  if ( _this->imageView != 0 )
    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      break;

      default :; 
    }

  if ( _this->frameView2 != 0 )
  {
    ResourcesBitmap bitmap;
    XInt32 frameNo;

    switch ( isState )
    {
      case 'D' :
      {
        bitmap = _this->Appearance->TrackLeftBitmapDisabled;
        frameNo = _this->Appearance->TrackLeftFrameDisabled;
      }
      break;

      case 'A' :
      {
        bitmap = _this->Appearance->TrackLeftBitmapActive;
        frameNo = _this->Appearance->TrackLeftFrameActive;
      }
      break;

      case 'F' :
      {
        bitmap = _this->Appearance->TrackLeftBitmapFocused;
        frameNo = _this->Appearance->TrackLeftFrameFocused;
      }
      break;

      default : 
      {
        bitmap = _this->Appearance->TrackLeftBitmapDefault;
        frameNo = _this->Appearance->TrackLeftFrameDefault;
      }
    }

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      break;

      default :; 
    }

    ViewsFrame_OnSetAnimated( _this->frameView2, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView2, _Const0006 );

    if ( frameNo < 0 )
      frameNo = 0;

    ViewsFrame_OnSetFrameNumber( _this->frameView2, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView2, bitmap );
    ViewsFrame_OnSetEdges( _this->frameView2, GraphicsEdgesBottom | GraphicsEdgesInterior 
    | GraphicsEdgesLeft | GraphicsEdgesTop );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView2, 54 );
  }

  if ( _this->frameView3 != 0 )
  {
    ResourcesBitmap bitmap;
    XInt32 frameNo;

    switch ( isState )
    {
      case 'D' :
      {
        bitmap = _this->Appearance->TrackRightBitmapDisabled;
        frameNo = _this->Appearance->TrackRightFrameDisabled;
      }
      break;

      case 'A' :
      {
        bitmap = _this->Appearance->TrackRightBitmapActive;
        frameNo = _this->Appearance->TrackRightFrameActive;
      }
      break;

      case 'F' :
      {
        bitmap = _this->Appearance->TrackRightBitmapFocused;
        frameNo = _this->Appearance->TrackRightFrameFocused;
      }
      break;

      default : 
      {
        bitmap = _this->Appearance->TrackRightBitmapDefault;
        frameNo = _this->Appearance->TrackRightFrameDefault;
      }
    }

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      break;

      default :; 
    }

    ViewsFrame_OnSetAnimated( _this->frameView3, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView3, _Const0006 );

    if ( frameNo < 0 )
      frameNo = 0;

    ViewsFrame_OnSetFrameNumber( _this->frameView3, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView3, bitmap );
    ViewsFrame_OnSetEdges( _this->frameView3, GraphicsEdgesBottom | GraphicsEdgesInterior 
    | GraphicsEdgesRight | GraphicsEdgesTop );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView3, 35 );
  }

  if ( _this->imageView != 0 )
  {
    ResourcesBitmap bitmap;
    XInt32 frameNo;

    switch ( isState )
    {
      case 'D' :
      {
        bitmap = _this->Appearance->ThumbBitmapDisabled;
        frameNo = _this->Appearance->ThumbFrameDisabled;
      }
      break;

      case 'A' :
      {
        bitmap = _this->Appearance->ThumbBitmapActive;
        frameNo = _this->Appearance->ThumbFrameActive;
      }
      break;

      case 'F' :
      {
        bitmap = _this->Appearance->ThumbBitmapFocused;
        frameNo = _this->Appearance->ThumbFrameFocused;
      }
      break;

      default : 
      {
        bitmap = _this->Appearance->ThumbBitmapDefault;
        frameNo = _this->Appearance->ThumbFrameDefault;
      }
    }

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      break;

      default :; 
    }

    ViewsImage_OnSetAnimated( _this->imageView, (XBool)( frameNo < 0 ));
    ViewsImage_OnSetColor( _this->imageView, _Const0006 );

    if ( frameNo < 0 )
      frameNo = 0;

    ViewsImage_OnSetFrameNumber( _this->imageView, frameNo );
    ViewsImage_OnSetBitmap( _this->imageView, bitmap );
    CoreView_OnSetStackingPriority((CoreView)_this->imageView, 74 );
  }

  marginLeft = (( _this->Appearance != 0 )? _this->Appearance->ThumbMarginLeft : 
  0 );
  marginRight = (( _this->Appearance != 0 )? _this->Appearance->ThumbMarginRight 
  : 0 );

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
  {
    XInt32 width = _this->imageView->Bitmap->FrameSize.X;
    marginLeft += ( width / 2 );
    marginRight += ( width - ( width / 2 ));
  }

  minPos = marginLeft;
  maxPos = EwGetRectW( area ) - marginRight;
  newThumbPos = marginLeft;

  if ( _this->MaxValue != 0 )
    newThumbPos = (XInt32)(((XFloat)WidgetSetHorizontalSlider_OnGetCurrentValue( 
    _this ) * (XFloat)( maxPos - minPos )) / (XFloat)_this->MaxValue ) + minPos;

  if ( newThumbPos < marginLeft )
    newThumbPos = marginLeft;

  if ( newThumbPos > ( EwGetRectW( area ) - marginRight ))
    newThumbPos = EwGetRectW( area ) - marginRight;

  if (( _this->frameView2 != 0 ) && ( _this->frameView2->Bitmap != 0 ))
  {
    XPoint s = _this->frameView2->Bitmap->FrameSize;
    XInt32 x2 = EwGetRectW( area );
    XInt32 x = newThumbPos;

    if ( x > x2 )
      x = x2;

    CoreRectView__OnSetBounds( _this->frameView2, EwNewRect( 0, ( EwGetRectH( area ) 
    / 2 ) - ( s.Y / 2 ), x, (( EwGetRectH( area ) / 2 ) - ( s.Y / 2 )) + s.Y ));
    ViewsFrame_OnSetNoEdgesLimit( _this->frameView2, EwSetPointX( _this->frameView2->NoEdgesLimit, 
    x2 - ( s.X / 3 )));
    ViewsFrame_OnSetVisible( _this->frameView2, 1 );
  }

  if (( _this->frameView3 != 0 ) && ( _this->frameView3->Bitmap != 0 ))
  {
    XPoint s = _this->frameView3->Bitmap->FrameSize;
    XInt32 x2 = EwGetRectW( area );
    XInt32 x = newThumbPos;

    if ( x < 0 )
      x = 0;

    CoreRectView__OnSetBounds( _this->frameView3, EwNewRect( x, ( EwGetRectH( area ) 
    / 2 ) - ( s.Y / 2 ), x2, (( EwGetRectH( area ) / 2 ) - ( s.Y / 2 )) + s.Y ));
    ViewsFrame_OnSetNoEdgesLimit( _this->frameView3, EwSetPointX( _this->frameView3->NoEdgesLimit, 
    x2 - ( s.X / 3 )));
    ViewsFrame_OnSetVisible( _this->frameView3, 1 );
  }

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
  {
    XRect thumbArea = EwNewRect2Point( _Const000B, _this->imageView->Bitmap->FrameSize );
    CoreRectView__OnSetBounds( _this->imageView, EwMoveRectPos( EwMoveRectNeg( thumbArea, 
    EwGetRectCenter( thumbArea )), EwNewPoint( newThumbPos, EwGetRectH( area ) / 
    2 )));
  }

  r = _Const000C;

  if ( _this->imageView != 0 )
    r = EwUnionRect( r, _this->imageView->Super1.Bounds );

  CoreGroup_ExtendClipping((CoreGroup)_this, EwGetInt32Max( 2, -r.Point1.X, 0 ), 
  EwGetInt32Max( 2, r.Point2.X - area.Point2.X, 0 ), EwGetInt32Max( 2, -r.Point1.Y, 
  0 ), EwGetInt32Max( 2, r.Point2.Y - area.Point2.Y, 0 ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onConfigChanged()' */
void WidgetSetHorizontalSlider_onConfigChanged( WidgetSetHorizontalSlider _this, 
  XObject sender )
{
  XEnum oldKeyCodeRight;
  XEnum oldKeyCodeLeft;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCodeRight = _this->KeyHandlerRight.Filter;
  oldKeyCodeLeft = _this->KeyHandlerLeft.Filter;
  _this->KeyHandlerRight.Filter = CoreKeyCodeRight;
  _this->KeyHandlerLeft.Filter = CoreKeyCodeLeft;

  if (((( oldKeyCodeRight == CoreKeyCodeNoKey ) || ( oldKeyCodeLeft == CoreKeyCodeNoKey )) 
      && ( _this->KeyHandlerRight.Filter != CoreKeyCodeNoKey )) && ( _this->KeyHandlerLeft.Filter 
      != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if ((( oldKeyCodeRight != CoreKeyCodeNoKey ) && ( oldKeyCodeLeft != CoreKeyCodeNoKey )) 
      && (( _this->KeyHandlerRight.Filter == CoreKeyCodeNoKey ) || ( _this->KeyHandlerLeft.Filter 
      == CoreKeyCodeNoKey )))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
  {
    CoreTimer_OnSetBegin( &_this->RepetitionTimer, _this->Appearance->KeyRepeatDelay );
    CoreTimer_OnSetPeriod( &_this->RepetitionTimer, _this->Appearance->KeyRepeatPeriod );
  }
  else
  {
    CoreTimer_OnSetBegin( &_this->RepetitionTimer, 0 );
    CoreTimer_OnSetPeriod( &_this->RepetitionTimer, 0 );
  }

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onOutlet()' */
void WidgetSetHorizontalSlider_onOutlet( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Outlet.Object != 0 )
    WidgetSetHorizontalSlider_OnSetCurrentValue( _this, EwOnGetInt32( _this->Outlet ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onRepetitionTimer()' */
void WidgetSetHorizontalSlider_onRepetitionTimer( WidgetSetHorizontalSlider _this, 
  XObject sender )
{
  XInt32 oldValue;
  XInt32 newValue;
  XInt32 delta;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;
  delta = 1;

  if (( _this->KeyHandlerLeft.Down && ( _this->MaxValue > 0 )) || ( _this->KeyHandlerRight.Down 
      && ( _this->MaxValue < 0 )))
    delta = -1;

  if ( oldValue < 0 )
  {
    newValue = -newValue;
    delta = -delta;
  }

  if ( delta > 0 )
    newValue = ( newValue + delta ) - (( newValue + delta ) % delta );

  if ( delta < 0 )
  {
    if (( newValue % -delta ) != 0 )
      newValue = ( newValue - delta ) - ( newValue % -delta );

    newValue = newValue + delta;
  }

  if ( oldValue < 0 )
    newValue = -newValue;

  WidgetSetHorizontalSlider_OnSetCurrentValue( _this, newValue );

  if ( oldValue == WidgetSetHorizontalSlider_OnGetCurrentValue( _this ))
    return;

  if ( _this->Outlet.Object != 0 )
  {
    EwOnSetInt32( _this->Outlet, WidgetSetHorizontalSlider_OnGetCurrentValue( _this ));
    EwNotifyRefObservers( _this->Outlet, 0 );
  }
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onReleaseKey()' */
void WidgetSetHorizontalSlider_onReleaseKey( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreTimer_OnSetEnabled( &_this->RepetitionTimer, 0 );
  EwPostSignal( _this->OnEnd, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onPressKey()' */
void WidgetSetHorizontalSlider_onPressKey( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  XInt32 oldValue;
  XInt32 newValue;
  XInt32 delta;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreTimer_OnSetEnabled( &_this->RepetitionTimer, 1 );
  oldValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;
  delta = 1;

  if ((( sender == ((XObject)&_this->KeyHandlerLeft )) && ( _this->MaxValue > 0 )) 
      || (( sender == ((XObject)&_this->KeyHandlerRight )) && ( _this->MaxValue 
      < 0 )))
    delta = -1;

  if ( oldValue < 0 )
  {
    newValue = -newValue;
    delta = -delta;
  }

  if ( delta > 0 )
    newValue = ( newValue + delta ) - (( newValue + delta ) % delta );

  if ( delta < 0 )
  {
    if (( newValue % -delta ) != 0 )
      newValue = ( newValue - delta ) - ( newValue % -delta );

    newValue = newValue + delta;
  }

  if ( oldValue < 0 )
    newValue = -newValue;

  WidgetSetHorizontalSlider_OnSetCurrentValue( _this, newValue );

  if ( oldValue == WidgetSetHorizontalSlider_OnGetCurrentValue( _this ))
    return;

  if ( _this->Outlet.Object != 0 )
  {
    EwOnSetInt32( _this->Outlet, WidgetSetHorizontalSlider_OnGetCurrentValue( _this ));
    EwNotifyRefObservers( _this->Outlet, 0 );
  }
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onDragTouch()' */
void WidgetSetHorizontalSlider_onDragTouch( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  XInt32 marginLeft;
  XInt32 marginRight;
  XPoint delta;
  XInt32 minPos;
  XInt32 maxPos;
  XInt32 oldValue;
  XInt32 newValue;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->touchActive )
    return;

  marginLeft = 0;
  marginRight = 0;

  if ( _this->Appearance != 0 )
  {
    marginLeft = _this->Appearance->ThumbMarginLeft;
    marginRight = _this->Appearance->ThumbMarginRight;
  }

  delta = EwMovePointNeg( _this->TouchHandler.CurrentPos, _this->TouchHandler.HittingPos );
  minPos = marginLeft;
  maxPos = EwGetRectW( _this->Super2.Bounds ) - marginRight;
  oldValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
  newValue = oldValue;

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
    maxPos = maxPos - EwGetRectW( _this->imageView->Super1.Bounds );

  if ( maxPos > minPos )
    newValue = (XInt32)(((XFloat)delta.X * (XFloat)_this->MaxValue ) / (XFloat)( 
    maxPos - minPos )) + _this->touchStartValue;

  WidgetSetHorizontalSlider_OnSetCurrentValue( _this, newValue );

  if ( oldValue == WidgetSetHorizontalSlider_OnGetCurrentValue( _this ))
    return;

  if ( _this->Outlet.Object != 0 )
  {
    EwOnSetInt32( _this->Outlet, WidgetSetHorizontalSlider_OnGetCurrentValue( _this ));
    EwNotifyRefObservers( _this->Outlet, 0 );
  }
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onReleaseTouch()' */
void WidgetSetHorizontalSlider_onReleaseTouch( WidgetSetHorizontalSlider _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->touchActive )
    return;

  _this->touchActive = 0;
  _this->KeyHandlerRight.Enabled = 1;
  _this->KeyHandlerLeft.Enabled = 1;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  EwPostSignal( _this->OnEnd, ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.onPressTouch()' */
void WidgetSetHorizontalSlider_onPressTouch( WidgetSetHorizontalSlider _this, XObject 
  sender )
{
  XRect touchArea;
  XBool hasThumb;
  XBool insideThumb;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  touchArea = EwMoveRectPos( _Const000D, _this->TouchHandler.CurrentPos );
  hasThumb = 0;
  insideThumb = 0;

  if (( _this->imageView != 0 ) && ( _this->imageView->Bitmap != 0 ))
  {
    hasThumb = 1;
    insideThumb = (XBool)!EwIsRectEmpty( EwIntersectRect( _this->imageView->Super1.Bounds, 
    touchArea ));
  }

  if ( hasThumb && !insideThumb )
  {
    CoreRoot root = CoreView__GetRoot( _this );
    CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
    CoreRoot_RetargetCursor( root, ((CoreView)root ), 0, ((CoreView)_this ));
    CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
    return;
  }

  _this->touchActive = 1;
  _this->KeyHandlerRight.Enabled = 0;
  _this->KeyHandlerLeft.Enabled = 0;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  _this->touchStartValue = WidgetSetHorizontalSlider_OnGetCurrentValue( _this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetOutlet()' */
void WidgetSetHorizontalSlider_OnSetOutlet( WidgetSetHorizontalSlider _this, XRef 
  value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  if ( _this->Outlet.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, WidgetSetHorizontalSlider_onOutlet ), 
      _this->Outlet, 0 );

  _this->Outlet = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, WidgetSetHorizontalSlider_onOutlet ), 
      value, 0 );

  if ( value.Object != 0 )
    EwSignal( EwNewSlot( _this, WidgetSetHorizontalSlider_onOutlet ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetMaxValue()' */
void WidgetSetHorizontalSlider_OnSetMaxValue( WidgetSetHorizontalSlider _this, XInt32 
  value )
{
  if ( _this->MaxValue == value )
    return;

  _this->MaxValue = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnGetCurrentValue()' */
XInt32 WidgetSetHorizontalSlider_OnGetCurrentValue( WidgetSetHorizontalSlider _this )
{
  XInt32 value = _this->CurrentValue;

  if ( 0 > _this->MaxValue )
  {
    if ( value < _this->MaxValue )
      value = _this->MaxValue;

    if ( value > 0 )
      value = 0;
  }
  else
  {
    if ( value < 0 )
      value = 0;

    if ( value > _this->MaxValue )
      value = _this->MaxValue;
  }

  return value;
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetCurrentValue()' */
void WidgetSetHorizontalSlider_OnSetCurrentValue( WidgetSetHorizontalSlider _this, 
  XInt32 value )
{
  if ( _this->CurrentValue == value )
    return;

  _this->CurrentValue = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::HorizontalSlider.OnSetAppearance()' */
void WidgetSetHorizontalSlider_OnSetAppearance( WidgetSetHorizontalSlider _this, 
  WidgetSetHorizontalSliderConfig value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetHorizontalSlider_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetHorizontalSlider_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetHorizontalSlider_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::HorizontalSlider' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetHorizontalSlider )
EW_END_OF_CLASS_VARIANTS( WidgetSetHorizontalSlider )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::HorizontalSlider' */
EW_DEFINE_CLASS( WidgetSetHorizontalSlider, CoreGroup, RepetitionTimer, imageView, 
                 OnEnd, Outlet, touchStartValue, touchStartValue, "WidgetSet::HorizontalSlider" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetHorizontalSlider_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetHorizontalSlider_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( WidgetSetHorizontalSlider )

/* Initializer for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__Init( WidgetSetToggleButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( WidgetSetToggleButton );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->FlashTimer, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( WidgetSetToggleButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const000E );
  CoreTimer_OnSetPeriod( &_this->FlashTimer, 0 );
  CoreTimer_OnSetBegin( &_this->FlashTimer, 50 );
  _this->KeyHandler.Filter = CoreKeyCodeEnter;
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, _Const0008 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, _Const000F );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, _Const0010 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, _Const000B );
  CoreSimpleTouchHandler_OnSetRetargetOffset( &_this->TouchHandler, 16 );
  CoreSimpleTouchHandler_OnSetMaxStrikeCount( &_this->TouchHandler, 100 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchHandler ), 0 );
  _this->FlashTimer.OnTrigger = EwNewSlot( _this, WidgetSetToggleButton_onFlashTimer );
  _this->KeyHandler.OnRelease = EwNewSlot( _this, WidgetSetToggleButton_onReleaseKey );
  _this->KeyHandler.OnPress = EwNewSlot( _this, WidgetSetToggleButton_onPressKey );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, WidgetSetToggleButton_onLeaveTouch );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, WidgetSetToggleButton_onEnterTouch );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, WidgetSetToggleButton_onReleaseTouch );
  _this->TouchHandler.OnPress = EwNewSlot( _this, WidgetSetToggleButton_onPressTouch );
}

/* Re-Initializer for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__ReInit( WidgetSetToggleButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->FlashTimer );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
}

/* Finalizer method for the class 'WidgetSet::ToggleButton' */
void WidgetSetToggleButton__Done( WidgetSetToggleButton _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->FlashTimer );
  CoreKeyPressHandler__Done( &_this->KeyHandler );
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetBounds()' */
void WidgetSetToggleButton_OnSetBounds( WidgetSetToggleButton _this, XRect value )
{
  if ( _this->Appearance != 0 )
  {
    XPoint cs = EwGetRectSize( value );
    XPoint ns = cs;
    XPoint delta;

    if ( ns.X < _this->Appearance->WidgetMinSize.X )
      ns.X = _this->Appearance->WidgetMinSize.X;

    if ( ns.Y < _this->Appearance->WidgetMinSize.Y )
      ns.Y = _this->Appearance->WidgetMinSize.Y;

    delta = EwMovePointNeg( ns, cs );

    if ( delta.X != 0 )
    {
      XBool alignToLeft = (( _this->Super3.Layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( _this->Super3.Layout & CoreLayoutAlignToRight ) == 
        CoreLayoutAlignToRight );

      if ( alignToLeft && !alignToRight )
        value.Point2.X = ( value.Point2.X + delta.X );
      else
        if ( !alignToLeft && alignToRight )
          value.Point1.X = ( value.Point1.X - delta.X );
        else
        {
          value.Point1.X = ( value.Point1.X - ( delta.X / 2 ));
          value.Point2.X = ( value.Point1.X + ns.X );
        }
    }

    if ( delta.Y != 0 )
    {
      XBool alignToTop = (( _this->Super3.Layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( _this->Super3.Layout & CoreLayoutAlignToBottom ) 
        == CoreLayoutAlignToBottom );

      if ( alignToTop && !alignToBottom )
        value.Point2.Y = ( value.Point2.Y + delta.Y );
      else
        if ( !alignToTop && alignToBottom )
          value.Point1.Y = ( value.Point1.Y - delta.Y );
        else
        {
          value.Point1.Y = ( value.Point1.Y - ( delta.Y / 2 ));
          value.Point2.Y = ( value.Point1.Y + ns.Y );
        }
    }
  }

  CoreGroup_OnSetBounds((CoreGroup)_this, value );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void WidgetSetToggleButton_UpdateViewState( WidgetSetToggleButton _this, XSet aState )
{
  XBool needsFrame;
  XBool needsText;
  XRect area;
  XChar isState;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  needsFrame = (XBool)(( _this->Appearance != 0 ) && (((((((( _this->Appearance->FaceOffBitmapDefault 
  != 0 ) || ( _this->Appearance->FaceOffBitmapDisabled != 0 )) || ( _this->Appearance->FaceOffBitmapFocused 
  != 0 )) || ( _this->Appearance->FaceOffBitmapActive != 0 )) || ( _this->Appearance->FaceOnBitmapDefault 
  != 0 )) || ( _this->Appearance->FaceOnBitmapDisabled != 0 )) || ( _this->Appearance->FaceOnBitmapFocused 
  != 0 )) || ( _this->Appearance->FaceOnBitmapActive != 0 )));
  needsText = (XBool)(( _this->Appearance != 0 ) && (( !EwIsStringEmpty( _this->LabelOff ) 
  && ( _this->Appearance->LabelOffFont != 0 )) || ( !EwIsStringEmpty( _this->LabelOn ) 
  && ( _this->Appearance->LabelOnFont != 0 ))));
  area = EwGetRectORect( _this->Super2.Bounds );

  if ( needsFrame && !( _this->frameView != 0 ))
  {
    _this->frameView = EwNewObject( ViewsFrame, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->frameView ), 0 );
  }
  else
    if ( !needsFrame && ( _this->frameView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->frameView ));
      _this->frameView = 0;
    }

  if ( needsText && !( _this->textView != 0 ))
  {
    _this->textView = EwNewObject( ViewsText, 0 );
    CoreGroup_Add((CoreGroup)_this, ((CoreView)_this->textView ), 0 );
    ViewsText_OnSetEnableBidiText( _this->textView, 1 );
  }
  else
    if ( !needsText && ( _this->textView != 0 ))
    {
      CoreGroup_Remove((CoreGroup)_this, ((CoreView)_this->textView ));
      _this->textView = 0;
    }

  if ( !(( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
    isState = 'D';
  else
    if ((( _this->TouchHandler.Down && _this->TouchHandler.Inside ) || _this->KeyHandler.Down ) 
        || _this->FlashTimer.Enabled )
      isState = 'A';
    else
      if ((( aState & CoreViewStateFocused ) == CoreViewStateFocused ))
        isState = 'F';
      else
        isState = 'E';

  if ( !_this->Checked )
    isState = EwGetCharLower( isState );

  _this->prevState = isState;

  if (( _this->frameView != 0 ) || ( _this->textView != 0 ))
    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      case 'E' :
      case 'd' :
      case 'a' :
      case 'f' :
      break;

      default :; 
    }

  if ( _this->frameView != 0 )
  {
    ResourcesBitmap bitmap;
    XInt32 frameNo;
    XSet layout = _this->Appearance->FaceLayout;
    XRect r = EwNewRect( area.Point1.X, area.Point1.Y, area.Point2.X, area.Point2.Y );

    switch ( isState )
    {
      case 'D' :
      {
        bitmap = _this->Appearance->FaceOnBitmapDisabled;
        frameNo = _this->Appearance->FaceOnFrameDisabled;
      }
      break;

      case 'A' :
      {
        bitmap = _this->Appearance->FaceOnBitmapActive;
        frameNo = _this->Appearance->FaceOnFrameActive;
      }
      break;

      case 'F' :
      {
        bitmap = _this->Appearance->FaceOnBitmapFocused;
        frameNo = _this->Appearance->FaceOnFrameFocused;
      }
      break;

      case 'E' :
      {
        bitmap = _this->Appearance->FaceOnBitmapDefault;
        frameNo = _this->Appearance->FaceOnFrameDefault;
      }
      break;

      case 'd' :
      {
        bitmap = _this->Appearance->FaceOffBitmapDisabled;
        frameNo = _this->Appearance->FaceOffFrameDisabled;
      }
      break;

      case 'a' :
      {
        bitmap = _this->Appearance->FaceOffBitmapActive;
        frameNo = _this->Appearance->FaceOffFrameActive;
      }
      break;

      case 'f' :
      {
        bitmap = _this->Appearance->FaceOffBitmapFocused;
        frameNo = _this->Appearance->FaceOffFrameFocused;
      }
      break;

      default : 
      {
        bitmap = _this->Appearance->FaceOffBitmapDefault;
        frameNo = _this->Appearance->FaceOffFrameDefault;
      }
    }

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      case 'E' :
      case 'd' :
      case 'a' :
      case 'f' :
      break;

      default :; 
    }

    ViewsFrame_OnSetAnimated( _this->frameView, (XBool)( frameNo < 0 ));
    ViewsFrame_OnSetColor( _this->frameView, _Const0006 );

    if ( frameNo < 0 )
      frameNo = 0;

    if (( bitmap != 0 ) && !(( layout & CoreLayoutResizeHorz ) == CoreLayoutResizeHorz ))
    {
      XBool alignToLeft = (( layout & CoreLayoutAlignToLeft ) == CoreLayoutAlignToLeft );
      XBool alignToRight = (( layout & CoreLayoutAlignToRight ) == CoreLayoutAlignToRight );
      XInt32 w = bitmap->FrameSize.X;

      if ( alignToLeft && !alignToRight )
        r.Point2.X = ( r.Point1.X + w );
      else
        if ( !alignToLeft && alignToRight )
          r.Point1.X = ( r.Point2.X - w );
        else
        {
          r.Point1.X = ( r.Point1.X + (( EwGetRectW( r ) / 2 ) - ( w / 2 )));
          r.Point2.X = ( r.Point1.X + w );
        }
    }

    if (( bitmap != 0 ) && !(( layout & CoreLayoutResizeVert ) == CoreLayoutResizeVert ))
    {
      XBool alignToTop = (( layout & CoreLayoutAlignToTop ) == CoreLayoutAlignToTop );
      XBool alignToBottom = (( layout & CoreLayoutAlignToBottom ) == CoreLayoutAlignToBottom );
      XInt32 h = bitmap->FrameSize.Y;

      if ( alignToTop && !alignToBottom )
        r.Point2.Y = ( r.Point1.Y + h );
      else
        if ( !alignToTop && alignToBottom )
          r.Point1.Y = ( r.Point2.Y - h );
        else
        {
          r.Point1.Y = ( r.Point1.Y + (( EwGetRectH( r ) / 2 ) - ( h / 2 )));
          r.Point2.Y = ( r.Point1.Y + h );
        }
    }

    ViewsFrame_OnSetFrameNumber( _this->frameView, frameNo );
    ViewsFrame_OnSetBitmap( _this->frameView, bitmap );
    CoreRectView__OnSetBounds( _this->frameView, r );
    CoreView_OnSetStackingPriority((CoreView)_this->frameView, 16 );
  }

  if ( _this->textView != 0 )
  {
    XColor clr;
    ResourcesFont font;
    XString label;

    switch ( isState )
    {
      case 'D' :
      case 'A' :
      case 'F' :
      case 'E' :
      {
        font = _this->Appearance->LabelOnFont;
        label = _this->LabelOn;
      }
      break;

      case 'd' :
      case 'a' :
      case 'f' :
      {
        font = _this->Appearance->LabelOffFont;
        label = _this->LabelOff;
      }
      break;

      default : 
      {
        font = _this->Appearance->LabelOffFont;
        label = _this->LabelOff;
      }
    }

    switch ( isState )
    {
      case 'D' :
        clr = _this->Appearance->LabelOnColorDisabled;
      break;

      case 'A' :
        clr = _this->Appearance->LabelOnColorActive;
      break;

      case 'F' :
        clr = _this->Appearance->LabelOnColorFocused;
      break;

      case 'E' :
        clr = _this->Appearance->LabelOnColorDefault;
      break;

      case 'd' :
        clr = _this->Appearance->LabelOffColorDisabled;
      break;

      case 'a' :
        clr = _this->Appearance->LabelOffColorActive;
      break;

      case 'f' :
        clr = _this->Appearance->LabelOffColorFocused;
      break;

      default : 
        clr = _this->Appearance->LabelOffColorDefault;
    }

    CoreRectView__OnSetBounds( _this->textView, EwNewRect( area.Point1.X, area.Point1.Y, 
    area.Point2.X - _this->Appearance->LabelMarginRight, area.Point2.Y ));
    ViewsText_OnSetAlignment( _this->textView, _this->Appearance->LabelAlignment );
    ViewsText_OnSetFont( _this->textView, font );
    ViewsText_OnSetString( _this->textView, label );
    ViewsText_OnSetColor( _this->textView, clr );
    ViewsText_OnSetWrapText( _this->textView, 1 );
    ViewsText_OnSetEllipsis( _this->textView, 1 );
    CoreView_OnSetStackingPriority((CoreView)_this->textView, 92 );
  }

  CoreGroup_ExtendClipping((CoreGroup)_this, 0, 0, 0, 0 );

  {
    XRect touchArea = area;
    CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandler, touchArea.Point1 );
    CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandler, touchArea.Point2 );
    CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandler, EwNewPoint( touchArea.Point2.X, 
    touchArea.Point1.Y ));
    CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandler, EwNewPoint( touchArea.Point1.X, 
    touchArea.Point2.Y ));
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onConfigChanged()' */
void WidgetSetToggleButton_onConfigChanged( WidgetSetToggleButton _this, XObject 
  sender )
{
  XEnum oldKeyCode;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldKeyCode = _this->KeyHandler.Filter;
  _this->KeyHandler.Filter = CoreKeyCodeEnter;

  if (( oldKeyCode == CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter != CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, CoreViewStateFocusable, 0 );

  if (( oldKeyCode != CoreKeyCodeNoKey ) && ( _this->KeyHandler.Filter == CoreKeyCodeNoKey ))
    CoreView__ChangeViewState( _this, 0, CoreViewStateFocusable );

  if ( _this->Appearance != 0 )
    CoreRectView__OnSetBounds( _this, _this->Super2.Bounds );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onOutlet()' */
void WidgetSetToggleButton_onOutlet( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Outlet.Object != 0 )
    WidgetSetToggleButton_OnSetChecked( _this, EwOnGetBool( _this->Outlet ));
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onFlashTimer()' */
void WidgetSetToggleButton_onFlashTimer( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
  WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

  if ( _this->Checked )
    EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
  else
    EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));

  if ( _this->Outlet.Object != 0 )
  {
    EwOnSetBool( _this->Outlet, _this->Checked );
    EwNotifyRefObservers( _this->Outlet, 0 );
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onReleaseKey()' */
void WidgetSetToggleButton_onReleaseKey( WidgetSetToggleButton _this, XObject sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = 50;

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 1 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ((XInt32)( _this->KeyHandler.Time - _this->onPressKeyTime ) >= pressFeedbackDuration )
  {
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

    if ( _this->Checked )
      EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
    else
      EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));

    if ( _this->Outlet.Object != 0 )
    {
      EwOnSetBool( _this->Outlet, _this->Checked );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - (XInt32)( 
    _this->KeyHandler.Time - _this->onPressKeyTime ));
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onPressKey()' */
void WidgetSetToggleButton_onPressKey( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreSimpleTouchHandler_OnSetEnabled( &_this->TouchHandler, 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if ( _this->FlashTimer.Enabled )
  {
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

    if ( _this->Checked )
      EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
    else
      EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));

    if ( _this->Outlet.Object != 0 )
    {
      EwOnSetBool( _this->Outlet, _this->Checked );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }

  _this->onPressKeyTime = _this->KeyHandler.Time;
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onLeaveTouch()' */
void WidgetSetToggleButton_onLeaveTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onEnterTouch()' */
void WidgetSetToggleButton_onEnterTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onReleaseTouch()' */
void WidgetSetToggleButton_onReleaseTouch( WidgetSetToggleButton _this, XObject 
  sender )
{
  XInt32 pressFeedbackDuration;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pressFeedbackDuration = 0;

  if ( _this->Appearance != 0 )
    pressFeedbackDuration = 50;

  _this->KeyHandler.Enabled = 1;

  if ( !_this->TouchHandler.Inside )
    return;

  if ( _this->TouchHandler.AutoDeflected )
    return;

  if ( _this->TouchHandler.HoldPeriod >= pressFeedbackDuration )
  {
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

    if ( _this->Checked )
      EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
    else
      EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));

    if ( _this->Outlet.Object != 0 )
    {
      EwOnSetBool( _this->Outlet, _this->Checked );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }
  else
  {
    CoreTimer_OnSetBegin( &_this->FlashTimer, pressFeedbackDuration - _this->TouchHandler.HoldPeriod );
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 1 );
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.onPressTouch()' */
void WidgetSetToggleButton_onPressTouch( WidgetSetToggleButton _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->KeyHandler.Enabled = 0;

  if ( _this->FlashTimer.Enabled )
  {
    CoreTimer_OnSetEnabled( &_this->FlashTimer, 0 );
    WidgetSetToggleButton_OnSetChecked( _this, (XBool)!_this->Checked );

    if ( _this->Checked )
      EwPostSignal( _this->OnSwitchOn, ((XObject)_this ));
    else
      EwPostSignal( _this->OnSwitchOff, ((XObject)_this ));

    if ( _this->Outlet.Object != 0 )
    {
      EwOnSetBool( _this->Outlet, _this->Checked );
      EwNotifyRefObservers( _this->Outlet, 0 );
    }
  }
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetOutlet()' */
void WidgetSetToggleButton_OnSetOutlet( WidgetSetToggleButton _this, XRef value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  if ( _this->Outlet.Object != 0 )
    EwDetachRefObserver( EwNewSlot( _this, WidgetSetToggleButton_onOutlet ), _this->Outlet, 
      0 );

  _this->Outlet = value;

  if ( value.Object != 0 )
    EwAttachRefObserver( EwNewSlot( _this, WidgetSetToggleButton_onOutlet ), value, 
      0 );

  if ( value.Object != 0 )
    EwSignal( EwNewSlot( _this, WidgetSetToggleButton_onOutlet ), ((XObject)_this ));
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetChecked()' */
void WidgetSetToggleButton_OnSetChecked( WidgetSetToggleButton _this, XBool value )
{
  if ( _this->Checked == value )
    return;

  _this->Checked = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetLabelOn()' */
void WidgetSetToggleButton_OnSetLabelOn( WidgetSetToggleButton _this, XString value )
{
  if ( !EwCompString( _this->LabelOn, value ))
    return;

  _this->LabelOn = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetLabelOff()' */
void WidgetSetToggleButton_OnSetLabelOff( WidgetSetToggleButton _this, XString value )
{
  if ( !EwCompString( _this->LabelOff, value ))
    return;

  _this->LabelOff = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetLabel()' */
void WidgetSetToggleButton_OnSetLabel( WidgetSetToggleButton _this, XString value )
{
  if ( !EwCompString( value, _this->LabelOff ) && !EwCompString( value, _this->LabelOn ))
    return;

  _this->LabelOff = EwShareString( value );
  _this->LabelOn = EwShareString( value );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'WidgetSet::ToggleButton.OnSetAppearance()' */
void WidgetSetToggleButton_OnSetAppearance( WidgetSetToggleButton _this, WidgetSetToggleButtonConfig 
  value )
{
  if ( _this->Appearance == value )
    return;

  if ( _this->Appearance != 0 )
    EwDetachObjObserver( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), 
      (XObject)_this->Appearance, 0 );

  _this->Appearance = value;

  if ( value != 0 )
    EwAttachObjObserver( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), 
      (XObject)value, 0 );

  EwPostSignal( EwNewSlot( _this, WidgetSetToggleButton_onConfigChanged ), ((XObject)_this ));
}

/* Variants derived from the class : 'WidgetSet::ToggleButton' */
EW_DEFINE_CLASS_VARIANTS( WidgetSetToggleButton )
EW_END_OF_CLASS_VARIANTS( WidgetSetToggleButton )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::ToggleButton' */
EW_DEFINE_CLASS( WidgetSetToggleButton, CoreGroup, FlashTimer, textView, OnSwitchOn, 
                 Outlet, LabelOn, onPressKeyTime, "WidgetSet::ToggleButton" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  WidgetSetToggleButton_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  WidgetSetToggleButton_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( WidgetSetToggleButton )

/* Embedded Wizard */
