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

#ifndef _ApplicationApplication_Landscape_H
#define _ApplicationApplication_Landscape_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if ( EW_RTE_VERSION >> 16 ) != 14
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if ( EW_GFX_VERSION >> 16 ) != 14
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_CoreKeyPressHandler.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"
#include "_EffectsRectEffect.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"

/* Forward declaration of the class Application::Application_Landscape */
#ifndef _ApplicationApplication_Landscape_
  EW_DECLARE_CLASS( ApplicationApplication_Landscape )
#define _ApplicationApplication_Landscape_
#endif

/* Forward declaration of the class Core::Group */
#ifndef _CoreGroup_
  EW_DECLARE_CLASS( CoreGroup )
#define _CoreGroup_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif


/* This is the root component of the entire GUI application. */
EW_DEFINE_FIELDS( ApplicationApplication_Landscape, CoreRoot )
  EW_OBJECT  ( SimpleTouchHandler, CoreSimpleTouchHandler )
  EW_OBJECT  ( Background,      ViewsRectangle )
  EW_OBJECT  ( BallRed,         ViewsImage )
  EW_OBJECT  ( BallYellow,      ViewsImage )
  EW_OBJECT  ( BallGreen,       ViewsImage )
  EW_OBJECT  ( Caption,         ViewsText )
  EW_OBJECT  ( TouchText,       ViewsText )
  EW_OBJECT  ( Footer,          ViewsText )
  EW_OBJECT  ( Footer1,         ViewsText )
  EW_OBJECT  ( Footer2,         ViewsText )
  EW_OBJECT  ( PosText,         ViewsText )
  EW_OBJECT  ( Cross,           ViewsImage )
  EW_OBJECT  ( RectEffectRed,   EffectsRectEffect )
  EW_OBJECT  ( RectEffectYellow, EffectsRectEffect )
  EW_OBJECT  ( RectEffectGreen, EffectsRectEffect )
  EW_OBJECT  ( ModeText,        ViewsText )
  EW_OBJECT  ( ScreenText,      ViewsText )
  EW_OBJECT  ( SizeText,        ViewsText )
  EW_OBJECT  ( KeyHandler,      CoreKeyPressHandler )
EW_END_OF_FIELDS( ApplicationApplication_Landscape )

/* Virtual Method Table (VMT) for the class : 'Application::Application_Landscape' */
EW_DEFINE_METHODS( ApplicationApplication_Landscape, CoreRoot )
  EW_METHOD( GetRoot,           CoreRoot )( CoreRoot _this )
  EW_METHOD( Draw,              void )( CoreRoot _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( GetClipping,       XRect )( CoreGroup _this )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, CoreView aStartView, 
    XSet aRetargetReason )
  EW_METHOD( AdjustDrawingArea, XRect )( CoreGroup _this, XRect aArea )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreRoot _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreRoot _this, CoreView value )
  EW_METHOD( DispatchEvent,     XObject )( CoreRoot _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreRoot _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateLayout,      void )( ApplicationApplication_Landscape _this, 
    XPoint aSize )
  EW_METHOD( InvalidateArea,    void )( CoreRoot _this, XRect aArea )
EW_END_OF_METHODS( ApplicationApplication_Landscape )

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationApplication_Landscape_UpdateLayout( ApplicationApplication_Landscape _this, 
  XPoint aSize );

/* This is a slot method connected with the touch handler. Each time the user touches 
   on the screen, this method is called. As a result, the position of the cross 
   image will be changed and the coordinates are shown as text. */
void ApplicationApplication_Landscape_OnTouch( ApplicationApplication_Landscape _this, 
  XObject sender );

/* 'C' function for method : 'Application::Application_Landscape.OnKeyPressed()' */
void ApplicationApplication_Landscape_OnKeyPressed( ApplicationApplication_Landscape _this, 
  XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationApplication_Landscape_H */

/* Embedded Wizard */
