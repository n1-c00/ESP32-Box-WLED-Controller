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

#ifndef _WidgetSetVerticalSlider_H
#define _WidgetSetVerticalSlider_H

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

#include "_CoreGroup.h"
#include "_CoreKeyPressHandler.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreTimer.h"

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::TaskQueue */
#ifndef _CoreTaskQueue_
  EW_DECLARE_CLASS( CoreTaskQueue )
#define _CoreTaskQueue_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Effects::Fader */
#ifndef _EffectsFader_
  EW_DECLARE_CLASS( EffectsFader )
#define _EffectsFader_
#endif

/* Forward declaration of the class Views::Frame */
#ifndef _ViewsFrame_
  EW_DECLARE_CLASS( ViewsFrame )
#define _ViewsFrame_
#endif

/* Forward declaration of the class Views::Image */
#ifndef _ViewsImage_
  EW_DECLARE_CLASS( ViewsImage )
#define _ViewsImage_
#endif

/* Forward declaration of the class WidgetSet::VerticalSlider */
#ifndef _WidgetSetVerticalSlider_
  EW_DECLARE_CLASS( WidgetSetVerticalSlider )
#define _WidgetSetVerticalSlider_
#endif

/* Forward declaration of the class WidgetSet::VerticalSliderConfig */
#ifndef _WidgetSetVerticalSliderConfig_
  EW_DECLARE_CLASS( WidgetSetVerticalSliderConfig )
#define _WidgetSetVerticalSliderConfig_
#endif


/* This class implements a 'vertical slider' widget. When the user touches the slider's 
   thumb and drags it vertically, the slider's current value represented by the 
   int32 property @CurrentValue is changed and signal is sent to the slot method 
   stored in the property @OnChange. The valid range for @CurrentValue is determined 
   by the properties @MinValue and @MaxValue. By connecting further slot methods 
   to the properties @OnStart and @OnEnd you can react to other events triggered 
   while the user starts and ends the interaction with the slider.
   Alternatively the property @Outlet can refer to any other 'int32' property the 
   slider widget should remain synchronized with. When the user drags the slider's 
   thumb, the affected property is automatically updated to reflect the slider's 
   current value. On the other hand, when the referred property is modified by another 
   one, the slider is automatically notified to remain in sync with the property.
   This approach follows the Model-View-Controller (MVC) programming paradigm. Here 
   the slider represents the 'View' and 'Controller' and the property referred via 
   'Outlet' can be seen as a part of the 'Model'.
   During its lifetime the slider remains always in one of the four states: 'disabled', 
   'default', 'focused' and 'active'. The state 'disabled' is true for every not 
   available slider (the property @Enabled of the slider is 'false'). Such sliders 
   will ignore all user inputs. The state 'default' determines a slider, which is 
   ready to be touched by the user or ready to become focused. As soon as the slider 
   becomes focused, it switches in the state 'focused'. In this state the user can 
   control the slider by pressing keys on the keyboard. Finally, the state 'active' 
   is true, if the user actually interacts with the slider (the slider's thumb is 
   pressed).
   The exact look and feel of the slider is determined by the 'Vertical Slider Configuration' 
   object assigned to the property @Appearance. The configuration object provides 
   bitmaps, colors and other configuration parameters needed to construct and display 
   the slider. Usually, you will manage in your project your own configuration objects 
   and customize the sliders according to your design expectations.
   In particular application cases you can instruct the slider to automatically 
   resign and retarget the actual touch interaction to another touch handler (e.g. 
   another widget) after the user has performed a horizontal wipe gesture (@ResignAfterHorizontalWipe). 
   Using this property several widgets can cooperate during an active user interaction 
   even if these handler overlap each other.
   If the slider is actually focused, it can also be controlled by pressing the 
   keyboard keys Core::KeyCode.Down and Core::KeyCode.Up causing the slider's thumb 
   to be moved down or up. In the configuration object you can specify another key 
   codes, if desired. To prevent the slider from being able to be focused, specify 
   in the configuration object the Core::KeyCode.NoKey as codes to control the slider. 
   With the property @StepSize you can specify a raster in which the slider changes 
   the value when user interacts with it.
   If there is no thumb bitmap provided for the slider, the entire slider area is 
   touchable permitting the user so to interact with and control the slider.
   The slider widget provides an additional set of methods useful to query the widget's 
   state (@GetCurrentState(), @GetTransitionStartState(), @GetTransitionEndState(), 
   @GetTransitionProgress()), the actual position of the thumb and its possible 
   movement range (@GetThumbMaxPosition(), @GetThumbMinPosition(), @GetThumbPosition()). 
   These methods can be invoked from a slot method assigned to the property @OnUpdate. 
   In this manner you can automatically arrange and updated additional decoration 
   according to the actual state of the slider widget. For example, you can arrange 
   a Views::Text view to follow the thumb and to display the actual value of the 
   slider (@CurrentValue).
   For more details regarding the customization of the slider see the description 
   of WidgetSet::VerticalSliderConfig class. */
EW_DEFINE_FIELDS( WidgetSetVerticalSlider, CoreGroup )
  EW_OBJECT  ( RepetitionTimer, CoreTimer )
  EW_OBJECT  ( KeyHandlerDown,  CoreKeyPressHandler )
  EW_OBJECT  ( KeyHandlerUp,    CoreKeyPressHandler )
  EW_OBJECT  ( TouchHandler,    CoreSimpleTouchHandler )
  EW_VARIABLE( imageView,       ViewsImage )
  EW_VARIABLE( frameView3,      ViewsFrame )
  EW_VARIABLE( frameView2,      ViewsFrame )
  EW_PROPERTY( Appearance,      WidgetSetVerticalSliderConfig )
  EW_PROPERTY( OnEnd,           XSlot )
  EW_PROPERTY( Outlet,          XRef )
  EW_VARIABLE( touchStartValue, XInt32 )
  EW_PROPERTY( MaxValue,        XInt32 )
  EW_PROPERTY( CurrentValue,    XInt32 )
  EW_VARIABLE( prevState,       XChar )
  EW_VARIABLE( touchActive,     XBool )
EW_END_OF_FIELDS( WidgetSetVerticalSlider )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::VerticalSlider' */
EW_DEFINE_METHODS( WidgetSetVerticalSlider, CoreGroup )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( CoreGroup _this, GraphicsCanvas aCanvas, 
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
  EW_METHOD( ChangeViewState,   void )( CoreGroup _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( WidgetSetVerticalSlider _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( OnSetOpacity,      void )( CoreGroup _this, XInt32 value )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateViewState,   void )( WidgetSetVerticalSlider _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
EW_END_OF_METHODS( WidgetSetVerticalSlider )

/* 'C' function for method : 'WidgetSet::VerticalSlider.OnSetBounds()' */
void WidgetSetVerticalSlider_OnSetBounds( WidgetSetVerticalSlider _this, XRect value );

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
void WidgetSetVerticalSlider_UpdateViewState( WidgetSetVerticalSlider _this, XSet 
  aState );

/* 'C' function for method : 'WidgetSet::VerticalSlider.onConfigChanged()' */
void WidgetSetVerticalSlider_onConfigChanged( WidgetSetVerticalSlider _this, XObject 
  sender );

/* 'C' function for method : 'WidgetSet::VerticalSlider.onOutlet()' */
void WidgetSetVerticalSlider_onOutlet( WidgetSetVerticalSlider _this, XObject sender );

/* 'C' function for method : 'WidgetSet::VerticalSlider.onRepetitionTimer()' */
void WidgetSetVerticalSlider_onRepetitionTimer( WidgetSetVerticalSlider _this, XObject 
  sender );

/* 'C' function for method : 'WidgetSet::VerticalSlider.onReleaseKey()' */
void WidgetSetVerticalSlider_onReleaseKey( WidgetSetVerticalSlider _this, XObject 
  sender );

/* 'C' function for method : 'WidgetSet::VerticalSlider.onPressKey()' */
void WidgetSetVerticalSlider_onPressKey( WidgetSetVerticalSlider _this, XObject 
  sender );

/* 'C' function for method : 'WidgetSet::VerticalSlider.onDragTouch()' */
void WidgetSetVerticalSlider_onDragTouch( WidgetSetVerticalSlider _this, XObject 
  sender );

/* 'C' function for method : 'WidgetSet::VerticalSlider.onReleaseTouch()' */
void WidgetSetVerticalSlider_onReleaseTouch( WidgetSetVerticalSlider _this, XObject 
  sender );

/* 'C' function for method : 'WidgetSet::VerticalSlider.onPressTouch()' */
void WidgetSetVerticalSlider_onPressTouch( WidgetSetVerticalSlider _this, XObject 
  sender );

/* 'C' function for method : 'WidgetSet::VerticalSlider.OnSetOutlet()' */
void WidgetSetVerticalSlider_OnSetOutlet( WidgetSetVerticalSlider _this, XRef value );

/* 'C' function for method : 'WidgetSet::VerticalSlider.OnSetMaxValue()' */
void WidgetSetVerticalSlider_OnSetMaxValue( WidgetSetVerticalSlider _this, XInt32 
  value );

/* 'C' function for method : 'WidgetSet::VerticalSlider.OnGetCurrentValue()' */
XInt32 WidgetSetVerticalSlider_OnGetCurrentValue( WidgetSetVerticalSlider _this );

/* 'C' function for method : 'WidgetSet::VerticalSlider.OnSetCurrentValue()' */
void WidgetSetVerticalSlider_OnSetCurrentValue( WidgetSetVerticalSlider _this, XInt32 
  value );

/* 'C' function for method : 'WidgetSet::VerticalSlider.OnSetAppearance()' */
void WidgetSetVerticalSlider_OnSetAppearance( WidgetSetVerticalSlider _this, WidgetSetVerticalSliderConfig 
  value );

#ifdef __cplusplus
  }
#endif

#endif /* _WidgetSetVerticalSlider_H */

/* Embedded Wizard */
