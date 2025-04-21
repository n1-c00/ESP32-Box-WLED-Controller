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
* Profile  : ESP32_0
* Platform : Espressif.ESP32.RGB565
*
*******************************************************************************/

#include "ewlocale.h"
#include "_ApplicationApplication_Landscape.h"
#include "_CoreKeyPressHandler.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreView.h"
#include "_EffectsRectEffect.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "Application.h"
#include "Core.h"
#include "Effects.h"
#include "Views.h"

/* Strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned short _StringsDefault0[] =
{
  0xFFFF, 0xFFFF, 0xC557, 0x0053, 0x0063, 0x0072, 0x0065, 0x0065, 0x006E, 0x0020,
  0x004F, 0x0072, 0x0069, 0x0065, 0x006E, 0x0074, 0x0061, 0x0074, 0x0069, 0x006F,
  0x006E, 0x0020, 0x0053, 0x0061, 0x006D, 0x0070, 0x006C, 0x0065, 0x0000, 0xC557,
  0x0054, 0x006F, 0x0075, 0x0063, 0x0068, 0x0020, 0x0050, 0x006F, 0x0073, 0x0069,
  0x0074, 0x0069, 0x006F, 0x006E, 0x0000, 0xC557, 0x0077, 0x0077, 0x0077, 0x002E,
  0x0065, 0x006D, 0x0062, 0x0065, 0x0064, 0x0064, 0x0065, 0x0064, 0x002D, 0x0077,
  0x0069, 0x007A, 0x0061, 0x0072, 0x0064, 0x002E, 0x0064, 0x0065, 0x0000, 0xC557,
  0x0045, 0x006D, 0x0062, 0x0065, 0x0064, 0x0064, 0x0065, 0x0064, 0x0020, 0x0057,
  0x0069, 0x007A, 0x0061, 0x0072, 0x0064, 0x0000, 0xC557, 0x0058, 0x003A, 0x0020,
  0x002D, 0x002D, 0x0020, 0x0059, 0x003A, 0x0020, 0x002D, 0x002D, 0x0000, 0xC557,
  0x004C, 0x0061, 0x006E, 0x0064, 0x0073, 0x0063, 0x0061, 0x0070, 0x0065, 0x0000,
  0xC557, 0x0053, 0x0063, 0x0072, 0x0065, 0x0065, 0x006E, 0x0020, 0x0053, 0x0069,
  0x007A, 0x0065, 0x0000, 0xC557, 0x0078, 0x0000, 0xC557, 0x0058, 0x003A, 0x0020,
  0x0000, 0xC557, 0x0020, 0x0059, 0x003A, 0x0020, 0x0000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 320, 240 }};
static const XPoint _Const0001 = { 0, 0 };
static const XPoint _Const0002 = { 320, 0 };
static const XPoint _Const0003 = { 320, 240 };
static const XPoint _Const0004 = { 0, 240 };
static const XColor _Const0005 = { 0x00, 0x00, 0x00, 0xFF };
static const XColor _Const0006 = { 0x00, 0x00, 0xFF, 0xFF };
static const XRect _Const0007 = {{ 10, 50 }, { 40, 80 }};
static const XColor _Const0008 = { 0xFF, 0x48, 0x3F, 0xFF };
static const XRect _Const0009 = {{ 50, 110 }, { 80, 140 }};
static const XColor _Const000A = { 0xFF, 0xFB, 0x08, 0xFF };
static const XRect _Const000B = {{ 270, 80 }, { 300, 110 }};
static const XColor _Const000C = { 0x1D, 0xDA, 0x30, 0xFF };
static const XRect _Const000D = {{ 0, 0 }, { 320, 40 }};
static const XStringRes _Const000E = { _StringsDefault0, 0x0003 };
static const XRect _Const000F = {{ 70, 140 }, { 250, 170 }};
static const XStringRes _Const0010 = { _StringsDefault0, 0x001E };
static const XRect _Const0011 = {{ 0, 210 }, { 320, 240 }};
static const XStringRes _Const0012 = { _StringsDefault0, 0x002E };
static const XColor _Const0013 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const0014 = {{ 0, 0 }, { 30, 240 }};
static const XStringRes _Const0015 = { _StringsDefault0, 0x0046 };
static const XRect _Const0016 = {{ 290, 0 }, { 320, 240 }};
static const XRect _Const0017 = {{ 70, 160 }, { 250, 200 }};
static const XStringRes _Const0018 = { _StringsDefault0, 0x0057 };
static const XRect _Const0019 = {{ 230, 130 }, { 295, 195 }};
static const XRect _Const001A = {{ 70, 30 }, { 250, 70 }};
static const XStringRes _Const001B = { _StringsDefault0, 0x0064 };
static const XRect _Const001C = {{ 70, 70 }, { 250, 100 }};
static const XStringRes _Const001D = { _StringsDefault0, 0x006F };
static const XRect _Const001E = {{ 70, 90 }, { 250, 130 }};
static const XStringRes _Const001F = { _StringsDefault0, 0x007C };
static const XStringRes _Const0020 = { _StringsDefault0, 0x007F };
static const XStringRes _Const0021 = { _StringsDefault0, 0x0084 };
static const XPoint _Const0022 = { 1, 0 };
static const XPoint _Const0023 = { 0, 1 };

/* Initializer for the class 'Application::Application_Landscape' */
void ApplicationApplication_Landscape__Init( ApplicationApplication_Landscape _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationApplication_Landscape );

  /* ... then construct all embedded objects */
  CoreSimpleTouchHandler__Init( &_this->SimpleTouchHandler, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Background, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->BallRed, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->BallYellow, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->BallGreen, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Caption, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->TouchText, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Footer, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Footer1, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Footer2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->PosText, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Cross, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->RectEffectRed, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->RectEffectYellow, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->RectEffectGreen, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->ModeText, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->ScreenText, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->SizeText, &_this->_.XObject, 0 );
  CoreKeyPressHandler__Init( &_this->KeyHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationApplication_Landscape );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->SimpleTouchHandler, _Const0001 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->SimpleTouchHandler, _Const0002 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->SimpleTouchHandler, _Const0003 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->SimpleTouchHandler, _Const0004 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0000 );
  ViewsRectangle_OnSetColorBL( &_this->Background, _Const0005 );
  ViewsRectangle_OnSetColorBR( &_this->Background, _Const0005 );
  ViewsRectangle_OnSetColorTR( &_this->Background, _Const0006 );
  ViewsRectangle_OnSetColorTL( &_this->Background, _Const0006 );
  CoreRectView__OnSetBounds( &_this->BallRed, _Const0007 );
  ViewsImage_OnSetColor( &_this->BallRed, _Const0008 );
  CoreRectView__OnSetBounds( &_this->BallYellow, _Const0009 );
  ViewsImage_OnSetColor( &_this->BallYellow, _Const000A );
  CoreRectView__OnSetBounds( &_this->BallGreen, _Const000B );
  ViewsImage_OnSetColor( &_this->BallGreen, _Const000C );
  CoreRectView__OnSetBounds( &_this->Caption, _Const000D );
  ViewsText_OnSetAlignment( &_this->Caption, ViewsTextAlignmentAlignHorzCenter | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Caption, EwLoadString( &_Const000E ));
  CoreRectView__OnSetBounds( &_this->TouchText, _Const000F );
  ViewsText_OnSetAlignment( &_this->TouchText, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->TouchText, EwLoadString( &_Const0010 ));
  CoreRectView__OnSetBounds( &_this->Footer, _Const0011 );
  ViewsText_OnSetWrapText( &_this->Footer, 1 );
  ViewsText_OnSetAlignment( &_this->Footer, ViewsTextAlignmentAlignHorzCenter | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Footer, EwLoadString( &_Const0012 ));
  ViewsText_OnSetColor( &_this->Footer, _Const0013 );
  CoreRectView__OnSetBounds( &_this->Footer1, _Const0014 );
  ViewsText_OnSetOrientation( &_this->Footer1, ViewsOrientationRotated_270 );
  ViewsText_OnSetAlignment( &_this->Footer1, ViewsTextAlignmentAlignHorzCenter | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Footer1, EwLoadString( &_Const0015 ));
  ViewsText_OnSetColor( &_this->Footer1, _Const0013 );
  CoreRectView__OnSetBounds( &_this->Footer2, _Const0016 );
  ViewsText_OnSetOrientation( &_this->Footer2, ViewsOrientationRotated_90 );
  ViewsText_OnSetAlignment( &_this->Footer2, ViewsTextAlignmentAlignHorzCenter | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->Footer2, EwLoadString( &_Const0015 ));
  ViewsText_OnSetColor( &_this->Footer2, _Const0013 );
  CoreRectView__OnSetBounds( &_this->PosText, _Const0017 );
  ViewsText_OnSetAlignment( &_this->PosText, ViewsTextAlignmentAlignHorzCenter | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->PosText, EwLoadString( &_Const0018 ));
  CoreRectView__OnSetBounds( &_this->Cross, _Const0019 );
  _this->RectEffectRed.Super1.Symmetric = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->RectEffectRed, EffectsTimingEaseIn_FastOut );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RectEffectRed, 1200 );
  _this->RectEffectYellow.Super1.Symmetric = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->RectEffectYellow, EffectsTimingEaseIn_FastOut );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RectEffectYellow, 1200 );
  EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->RectEffectYellow, 200 );
  _this->RectEffectGreen.Super1.Symmetric = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->RectEffectGreen, EffectsTimingEaseIn_FastOut );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RectEffectGreen, 1200 );
  EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->RectEffectGreen, 500 );
  CoreRectView__OnSetBounds( &_this->ModeText, _Const001A );
  ViewsText_OnSetAlignment( &_this->ModeText, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ModeText, EwLoadString( &_Const001B ));
  CoreRectView__OnSetBounds( &_this->ScreenText, _Const001C );
  ViewsText_OnSetAlignment( &_this->ScreenText, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->ScreenText, EwLoadString( &_Const001D ));
  CoreRectView__OnSetBounds( &_this->SizeText, _Const001E );
  ViewsText_OnSetAlignment( &_this->SizeText, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SimpleTouchHandler ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Background ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->BallRed ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->BallYellow ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->BallGreen ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Caption ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->TouchText ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Footer ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Footer1 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Footer2 ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->PosText ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Cross ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ModeText ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->ScreenText ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SizeText ), 0 );
  _this->SimpleTouchHandler.OnDrag = EwNewSlot( _this, ApplicationApplication_Landscape_OnTouch );
  _this->SimpleTouchHandler.OnPress = EwNewSlot( _this, ApplicationApplication_Landscape_OnTouch );
  ViewsImage_OnSetBitmap( &_this->BallRed, EwLoadResource( &ApplicationBall, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->BallYellow, EwLoadResource( &ApplicationBall, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->BallGreen, EwLoadResource( &ApplicationBall, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Caption, EwLoadResource( &ApplicationFontLarge, ResourcesFont ));
  ViewsText_OnSetFont( &_this->TouchText, EwLoadResource( &ApplicationFontSmall, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Footer, EwLoadResource( &ApplicationFontSmall, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Footer1, EwLoadResource( &ApplicationFontSmall, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Footer2, EwLoadResource( &ApplicationFontSmall, ResourcesFont ));
  ViewsText_OnSetFont( &_this->PosText, EwLoadResource( &ApplicationFontLarge, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Cross, EwLoadResource( &ApplicationCross, ResourcesBitmap ));
  _this->RectEffectRed.Outlet = EwNewRef( &_this->BallRed, CoreRectView_OnGetBounds, 
  CoreRectView__OnSetBounds );
  _this->RectEffectYellow.Outlet = EwNewRef( &_this->BallYellow, CoreRectView_OnGetBounds, 
  CoreRectView__OnSetBounds );
  _this->RectEffectGreen.Outlet = EwNewRef( &_this->BallGreen, CoreRectView_OnGetBounds, 
  CoreRectView__OnSetBounds );
  ViewsText_OnSetFont( &_this->ModeText, EwLoadResource( &ApplicationFontLarge, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->ScreenText, EwLoadResource( &ApplicationFontSmall, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->SizeText, EwLoadResource( &ApplicationFontLarge, 
  ResourcesFont ));
  _this->KeyHandler.OnPress = EwNewSlot( _this, ApplicationApplication_Landscape_OnKeyPressed );
  _this->KeyHandler.OnHold = EwNewSlot( _this, ApplicationApplication_Landscape_OnKeyPressed );
}

/* Re-Initializer for the class 'Application::Application_Landscape' */
void ApplicationApplication_Landscape__ReInit( ApplicationApplication_Landscape _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreSimpleTouchHandler__ReInit( &_this->SimpleTouchHandler );
  ViewsRectangle__ReInit( &_this->Background );
  ViewsImage__ReInit( &_this->BallRed );
  ViewsImage__ReInit( &_this->BallYellow );
  ViewsImage__ReInit( &_this->BallGreen );
  ViewsText__ReInit( &_this->Caption );
  ViewsText__ReInit( &_this->TouchText );
  ViewsText__ReInit( &_this->Footer );
  ViewsText__ReInit( &_this->Footer1 );
  ViewsText__ReInit( &_this->Footer2 );
  ViewsText__ReInit( &_this->PosText );
  ViewsImage__ReInit( &_this->Cross );
  EffectsRectEffect__ReInit( &_this->RectEffectRed );
  EffectsRectEffect__ReInit( &_this->RectEffectYellow );
  EffectsRectEffect__ReInit( &_this->RectEffectGreen );
  ViewsText__ReInit( &_this->ModeText );
  ViewsText__ReInit( &_this->ScreenText );
  ViewsText__ReInit( &_this->SizeText );
  CoreKeyPressHandler__ReInit( &_this->KeyHandler );
}

/* Finalizer method for the class 'Application::Application_Landscape' */
void ApplicationApplication_Landscape__Done( ApplicationApplication_Landscape _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Finalize all embedded objects */
  CoreSimpleTouchHandler__Done( &_this->SimpleTouchHandler );
  ViewsRectangle__Done( &_this->Background );
  ViewsImage__Done( &_this->BallRed );
  ViewsImage__Done( &_this->BallYellow );
  ViewsImage__Done( &_this->BallGreen );
  ViewsText__Done( &_this->Caption );
  ViewsText__Done( &_this->TouchText );
  ViewsText__Done( &_this->Footer );
  ViewsText__Done( &_this->Footer1 );
  ViewsText__Done( &_this->Footer2 );
  ViewsText__Done( &_this->PosText );
  ViewsImage__Done( &_this->Cross );
  EffectsRectEffect__Done( &_this->RectEffectRed );
  EffectsRectEffect__Done( &_this->RectEffectYellow );
  EffectsRectEffect__Done( &_this->RectEffectGreen );
  ViewsText__Done( &_this->ModeText );
  ViewsText__Done( &_this->ScreenText );
  ViewsText__Done( &_this->SizeText );
  CoreKeyPressHandler__Done( &_this->KeyHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_.Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationApplication_Landscape_UpdateLayout( ApplicationApplication_Landscape _this, 
  XPoint aSize )
{
  _this->RectEffectRed.Value1 = _this->BallRed.Super1.Bounds;
  _this->RectEffectRed.Value2 = EwNewRect( _this->BallRed.Super1.Bounds.Point1.X, 
  aSize.Y - EwGetRectH( _this->BallRed.Super1.Bounds ), _this->BallRed.Super1.Bounds.Point2.X, 
  aSize.Y );
  _this->RectEffectYellow.Value1 = _this->BallYellow.Super1.Bounds;
  _this->RectEffectYellow.Value2 = EwNewRect( _this->BallYellow.Super1.Bounds.Point1.X, 
  aSize.Y - EwGetRectH( _this->BallYellow.Super1.Bounds ), _this->BallYellow.Super1.Bounds.Point2.X, 
  aSize.Y );
  _this->RectEffectGreen.Value1 = _this->BallGreen.Super1.Bounds;
  _this->RectEffectGreen.Value2 = EwNewRect( _this->BallGreen.Super1.Bounds.Point1.X, 
  aSize.Y - EwGetRectH( _this->BallGreen.Super1.Bounds ), _this->BallGreen.Super1.Bounds.Point2.X, 
  aSize.Y );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->RectEffectRed, 1 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->RectEffectYellow, 1 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->RectEffectGreen, 1 );
  ViewsText_OnSetString( &_this->SizeText, EwConcatString( EwConcatString( EwNewStringInt( 
  EwGetRectW( _this->Super3.Bounds ), 0, 10 ), EwLoadString( &_Const001F )), EwNewStringInt( 
  EwGetRectH( _this->Super3.Bounds ), 0, 10 )));
}

/* This is a slot method connected with the touch handler. Each time the user touches 
   on the screen, this method is called. As a result, the position of the cross 
   image will be changed and the coordinates are shown as text. */
void ApplicationApplication_Landscape_OnTouch( ApplicationApplication_Landscape _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreRectView__OnSetBounds( &_this->Cross, EwSetRectOrigin( _this->Cross.Super1.Bounds, 
  EwMovePointNeg( _this->SimpleTouchHandler.CurrentPos, EwNewPoint( EwGetRectW( 
  _this->Cross.Super1.Bounds ) / 2, EwGetRectH( _this->Cross.Super1.Bounds ) / 2 ))));
  ViewsText_OnSetString( &_this->PosText, EwConcatString( EwConcatString( EwConcatString( 
  EwLoadString( &_Const0020 ), EwNewStringInt( _this->SimpleTouchHandler.CurrentPos.X, 
  0, 10 )), EwLoadString( &_Const0021 )), EwNewStringInt( _this->SimpleTouchHandler.CurrentPos.Y, 
  0, 10 )));
}

/* 'C' function for method : 'Application::Application_Landscape.OnKeyPressed()' */
void ApplicationApplication_Landscape_OnKeyPressed( ApplicationApplication_Landscape _this, 
  XObject sender )
{
  XPoint pos;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  pos = EwGetRectCenter( _this->Cross.Super1.Bounds );

  switch ( _this->KeyHandler.Code )
  {
    case CoreKeyCodeLeft :
    case CoreKeyCodeKey4 :
      pos = EwMovePointNeg( pos, _Const0022 );
    break;

    case CoreKeyCodeRight :
    case CoreKeyCodeKey6 :
      pos = EwMovePointPos( pos, _Const0022 );
    break;

    case CoreKeyCodeUp :
    case CoreKeyCodeKey8 :
      pos = EwMovePointNeg( pos, _Const0023 );
    break;

    case CoreKeyCodeDown :
    case CoreKeyCodeKey2 :
      pos = EwMovePointPos( pos, _Const0023 );
    break;

    default :; 
  }

  if ( pos.X < 0 )
    pos.X = 0;

  if ( pos.X >= EwGetRectW( _this->Super3.Bounds ))
    pos.X = ( EwGetRectW( _this->Super3.Bounds ) - 1 );

  if ( pos.Y < 0 )
    pos.Y = 0;

  if ( pos.Y >= EwGetRectH( _this->Super3.Bounds ))
    pos.Y = ( EwGetRectH( _this->Super3.Bounds ) - 1 );

  CoreRectView__OnSetBounds( &_this->Cross, EwSetRectOrigin( _this->Cross.Super1.Bounds, 
  EwMovePointNeg( pos, EwNewPoint( EwGetRectW( _this->Cross.Super1.Bounds ) / 2, 
  EwGetRectH( _this->Cross.Super1.Bounds ) / 2 ))));
  ViewsText_OnSetString( &_this->PosText, EwConcatString( EwConcatString( EwConcatString( 
  EwLoadString( &_Const0020 ), EwNewStringInt( pos.X, 0, 10 )), EwLoadString( &_Const0021 )), 
  EwNewStringInt( pos.Y, 0, 10 )));
}

/* Variants derived from the class : 'Application::Application_Landscape' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication_Landscape )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication_Landscape )

/* Virtual Method Table (VMT) for the class : 'Application::Application_Landscape' */
EW_DEFINE_CLASS( ApplicationApplication_Landscape, CoreRoot, SimpleTouchHandler, 
                 _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, "Application::Application_Landscape" )
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  ApplicationApplication_Landscape_UpdateLayout,
  CoreRoot_InvalidateArea,
EW_END_OF_CLASS( ApplicationApplication_Landscape )

/* Include a file containing the bitmap resource : 'Application::Cross' */
#include "_ApplicationCross.h"

/* Table with links to derived variants of the bitmap resource : 'Application::Cross' */
EW_RES_WITHOUT_VARIANTS( ApplicationCross )

/* Include a file containing the bitmap resource : 'Application::Ball' */
#include "_ApplicationBall.h"

/* Table with links to derived variants of the bitmap resource : 'Application::Ball' */
EW_RES_WITHOUT_VARIANTS( ApplicationBall )

/* Include a file containing the font resource : 'Application::FontLarge' */
#include "_ApplicationFontLarge.h"

/* Table with links to derived variants of the font resource : 'Application::FontLarge' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontLarge )

/* Include a file containing the font resource : 'Application::FontSmall' */
#include "_ApplicationFontSmall.h"

/* Table with links to derived variants of the font resource : 'Application::FontSmall' */
EW_RES_WITHOUT_VARIANTS( ApplicationFontSmall )

/* Embedded Wizard */
