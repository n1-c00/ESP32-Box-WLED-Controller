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
#include "_ApplicationApplication.h"
#include "_ApplicationDeviceClass.h"
#include "_ApplicationcolorSelection.h"
#include "_ApplicationhomeScreen.h"
#include "_CoreGroup.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreView.h"
#include "_ViewsRectangle.h"
#include "_WidgetSetHorizontalSlider.h"
#include "_WidgetSetHorizontalSliderConfig.h"
#include "_WidgetSetToggleButton.h"
#include "_WidgetSetToggleButtonConfig.h"
#include "_WidgetSetVerticalSlider.h"
#include "_WidgetSetVerticalSliderConfig.h"
#include "Application.h"
#include "WidgetSet.h"

/* Strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned short _StringsDefault0[] =
{
  0xFFFF, 0xFFFF, 0xC557, 0x006F, 0x006E, 0x0000, 0xC557, 0x0074, 0x0072, 0x0075,
  0x0065, 0x0000, 0xC557, 0x0062, 0x006F, 0x006F, 0x006C, 0x0000, 0xC557, 0x0066,
  0x0061, 0x006C, 0x0073, 0x0065, 0x0000, 0xC557, 0x0062, 0x0072, 0x0069, 0x0000,
  0xC557, 0x0069, 0x006E, 0x0074, 0x0000, 0xC557, 0x0030, 0x003B, 0x0000, 0xC557,
  0x003B, 0x0000, 0xC557, 0x0063, 0x006F, 0x006C, 0x0000, 0xC557, 0x0072, 0x0067,
  0x0062, 0x0000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 320, 240 }};
static const XPoint _Const0001 = { 320, 240 };
static const XRect _Const0002 = {{ 108, 43 }, { 212, 102 }};
static const XRect _Const0003 = {{ 60, 135 }, { 260, 195 }};
static const XStringRes _Const0004 = { _StringsDefault0, 0x0003 };
static const XStringRes _Const0005 = { _StringsDefault0, 0x0007 };
static const XStringRes _Const0006 = { _StringsDefault0, 0x000D };
static const XStringRes _Const0007 = { _StringsDefault0, 0x0013 };
static const XStringRes _Const0008 = { _StringsDefault0, 0x001A };
static const XStringRes _Const0009 = { _StringsDefault0, 0x001F };
static const XRect _Const000A = {{ 40, 20 }, { 100, 220 }};
static const XRect _Const000B = {{ 131, 20 }, { 190, 220 }};
static const XRect _Const000C = {{ 220, 20 }, { 285, 220 }};
static const XStringRes _Const000D = { _StringsDefault0, 0x0024 };
static const XStringRes _Const000E = { _StringsDefault0, 0x0028 };
static const XStringRes _Const000F = { _StringsDefault0, 0x002B };
static const XStringRes _Const0010 = { _StringsDefault0, 0x0030 };

/* Initializer for the class 'Application::Application' */
void ApplicationApplication__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationApplication );

  /* ... then construct all embedded objects */
  ApplicationcolorSelection__Init( &_this->colorSelection, &_this->_.XObject, 0 );
  ApplicationhomeScreen__Init( &_this->homeScreen, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->colorSelection, _Const0000 );
  CoreRectView__OnSetBounds( &_this->homeScreen, _Const0000 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const0000 );
  _this->SlideTouchHandler.MaxOffset = _Const0001;
  _this->SlideTouchHandler.SlideVert = 0;
  CoreSlideTouchHandler_OnSetRubberBandEffectElasticity( &_this->SlideTouchHandler, 
  5.0f );
  CoreSlideTouchHandler_OnSetResetSpace( &_this->SlideTouchHandler, -1 );
  CoreSlideTouchHandler_OnSetResetDelay( &_this->SlideTouchHandler, 200 );
  CoreSlideTouchHandler_OnSetFriction( &_this->SlideTouchHandler, 1.0f );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->colorSelection ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->homeScreen ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  _this->SlideTouchHandler.OnEnd = EwNewSlot( _this, ApplicationApplication_Slot );

  /* Call the user defined constructor */
  ApplicationApplication_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationcolorSelection__ReInit( &_this->colorSelection );
  ApplicationhomeScreen__ReInit( &_this->homeScreen );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Finalize all embedded objects */
  ApplicationcolorSelection__Done( &_this->colorSelection );
  ApplicationhomeScreen__Done( &_this->homeScreen );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationApplication_Init( ApplicationApplication _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreGroup_PresentDialog((CoreGroup)_this, ((CoreGroup)&_this->homeScreen ), 0, 
  0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::Application.Slot()' */
void ApplicationApplication_Slot( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->currentView = (XBool)!_this->currentView;

  if ( _this->currentView )
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)&_this->colorSelection ), 
    0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
  else
    CoreGroup_SwitchToDialog((CoreGroup)_this, ((CoreGroup)&_this->homeScreen ), 
    0, 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, colorSelection, currentView, 
                 currentView, currentView, currentView, currentView, "Application::Application" )
  CoreRectView_initLayoutContext,
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
  CoreRoot_OnSetOpacity,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
EW_END_OF_CLASS( ApplicationApplication )

/* User defined inline code: 'Application::Inline' */
/*

  TO DO:

  Include external header files or add type and function declarations needed
  in the implementation of Application::DeviceClass. For example:

    #include "DeviceDriver.h"

    #include "your_middleware_api.h"

    void Your_Middleware_Some_Function( int aSomeArg );

*/

/* Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Init( ApplicationDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesDeviceClass__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationDeviceClass );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationDeviceClass );

  /* Call the user defined constructor */
  ApplicationDeviceClass_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__ReInit( ApplicationDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  TemplatesDeviceClass__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Done( ApplicationDeviceClass _this )
{
  /* Call the user defined destructor of the class */
  ApplicationDeviceClass_Done( _this );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesDeviceClass );

  /* Don't forget to deinitialize the super class ... */
  TemplatesDeviceClass__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::DeviceClass.Done()' */
void ApplicationDeviceClass_Done( ApplicationDeviceClass _this )
{
  XObject thisObject = ((XObject)_this );

  {
    /*
       TO DO:

       Depending on your application case you call functions of the underlying
       middleware (or access the device directly) in order to perform the necessary
       de-initialization steps. For example, you invoke some 'C' function:

         YourDevice_DeInitialize();

       IMPORTANT:
       ----------

       The variable 'thisObject' represents the actually de-initialized instance of the
       Application::DeviceClass. If you have stored this object at the initialization
       time (in the 'Init' method) in some global C variable or registered it by the
       middleware, it is important to perform now the opposite operation. Set the
       global variable to NULL or de-register 'thisObject' object from the middleware.

    */
  }
}

/* 'C' function for method : 'Application::DeviceClass.Init()' */
void ApplicationDeviceClass_Init( ApplicationDeviceClass _this, XHandle aArg )
{
  XObject thisObject;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  thisObject = ((XObject)_this );
  {
    /*
       TO DO:

       Depending on your application case you call functions of the underlying
       middleware (or access the device directly) in order to perform the necessary
       initialization steps. For example, you invoke some 'C' function:

         YourDevice_Initialize();

       The variable 'thisObject' represents the actually initialized instance of the
       Application::DeviceClass. You can store this variable e.g. in the middleware
       and use it whenever the middleware needs to notify the GUI application about
       some state alternation or events. In this manner, the middleware will be able
       to invoke methods of the interface device object.

       For example, you can store 'thisObject' in some global C variable:

         // Declaration of the global C variable
         XObject theDeviceObject;

         // Store the instance in the global variable
         theDeviceObject = thisObject;

       Later use the global variable e.g. to provide the GUI application with events:

         ApplicationDeviceClass__TriggerSomeEvent( theDeviceObject );

       IMPORTANT:
       ----------

       If you store 'thisObject' for later use, don't forget to implement the opposite
       operation in the method 'Done'. Concrete, 'Done' should set the global variable
       again to the value NULL.

    */
  }
}

/* 'C' function for method : 'Application::DeviceClass.LedSetMethod()' */
void ApplicationDeviceClass_LedSetMethod( ApplicationDeviceClass _this, XString 
  key, XString setpoint, XString dataType )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( dataType );
  EW_UNUSED_ARG( setpoint );
  EW_UNUSED_ARG( key );

  {
    extern void LedSet(XString key, XString setpoint, XString dataType);
    LedSet(key, setpoint, dataType);
  }
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_EWUpdateSlider( ApplicationDeviceClass _this, XInt32 
  aNewValue )
{
  if ( aNewValue != _this->brightnessValue )
    _this->brightnessValue = aNewValue;
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.EWUpdateSlider()' */
void ApplicationDeviceClass__EWUpdateSlider( void* _this, XInt32 aNewValue )
{
  ApplicationDeviceClass_EWUpdateSlider((ApplicationDeviceClass)_this, aNewValue );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_EWUpdateButton( ApplicationDeviceClass _this, XBool 
  aNewValue )
{
  if ( aNewValue != _this->buttonValue )
    _this->buttonValue = aNewValue;
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.EWUpdateButton()' */
void ApplicationDeviceClass__EWUpdateButton( void* _this, XBool aNewValue )
{
  ApplicationDeviceClass_EWUpdateButton((ApplicationDeviceClass)_this, aNewValue );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_EWUpdateColor( ApplicationDeviceClass _this, XInt32 
  aNewValueRed, XInt32 aNewValueGreen, XInt32 aNewValueBlue )
{
  if ( aNewValueRed != _this->redValue )
    _this->redValue = aNewValueRed;

  if ( aNewValueGreen != _this->greenValue )
    _this->greenValue = aNewValueGreen;

  if ( aNewValueBlue != _this->blueValue )
    _this->blueValue = aNewValueBlue;
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.EWUpdateColor()' */
void ApplicationDeviceClass__EWUpdateColor( void* _this, XInt32 aNewValueRed, XInt32 
  aNewValueGreen, XInt32 aNewValueBlue )
{
  ApplicationDeviceClass_EWUpdateColor((ApplicationDeviceClass)_this, aNewValueRed
  , aNewValueGreen, aNewValueBlue );
}

/* Default onget method for the property 'brightnessValue' */
XInt32 ApplicationDeviceClass_OnGetbrightnessValue( ApplicationDeviceClass _this )
{
  return _this->brightnessValue;
}

/* Default onset method for the property 'brightnessValue' */
void ApplicationDeviceClass_OnSetbrightnessValue( ApplicationDeviceClass _this, 
  XInt32 value )
{
  _this->brightnessValue = value;
}

/* Default onget method for the property 'buttonValue' */
XBool ApplicationDeviceClass_OnGetbuttonValue( ApplicationDeviceClass _this )
{
  return _this->buttonValue;
}

/* Default onset method for the property 'buttonValue' */
void ApplicationDeviceClass_OnSetbuttonValue( ApplicationDeviceClass _this, XBool 
  value )
{
  _this->buttonValue = value;
}

/* Default onget method for the property 'redValue' */
XInt32 ApplicationDeviceClass_OnGetredValue( ApplicationDeviceClass _this )
{
  return _this->redValue;
}

/* Default onset method for the property 'redValue' */
void ApplicationDeviceClass_OnSetredValue( ApplicationDeviceClass _this, XInt32 
  value )
{
  _this->redValue = value;
}

/* Default onget method for the property 'greenValue' */
XInt32 ApplicationDeviceClass_OnGetgreenValue( ApplicationDeviceClass _this )
{
  return _this->greenValue;
}

/* Default onset method for the property 'greenValue' */
void ApplicationDeviceClass_OnSetgreenValue( ApplicationDeviceClass _this, XInt32 
  value )
{
  _this->greenValue = value;
}

/* Default onget method for the property 'blueValue' */
XInt32 ApplicationDeviceClass_OnGetblueValue( ApplicationDeviceClass _this )
{
  return _this->blueValue;
}

/* Default onset method for the property 'blueValue' */
void ApplicationDeviceClass_OnSetblueValue( ApplicationDeviceClass _this, XInt32 
  value )
{
  _this->blueValue = value;
}

/* Variants derived from the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( ApplicationDeviceClass )
EW_END_OF_CLASS_VARIANTS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS( ApplicationDeviceClass, TemplatesDeviceClass, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "Application::DeviceClass" )
EW_END_OF_CLASS( ApplicationDeviceClass )

/* User defined auto object: 'Application::Device' */
EW_DEFINE_AUTOOBJECT( ApplicationDevice, ApplicationDeviceClass )

/* Initializer for the auto object 'Application::Device' */
void ApplicationDevice__Init( ApplicationDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Re-Initializer for the auto object 'Application::Device' */
void ApplicationDevice__ReInit( ApplicationDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::Device' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationDevice )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationDevice )

/* Initializer for the class 'Application::homeScreen' */
void ApplicationhomeScreen__Init( ApplicationhomeScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationhomeScreen );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  WidgetSetToggleButton__Init( &_this->toggleLightButton, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->BrightnessSlider, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationhomeScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  CoreRectView__OnSetBounds( &_this->toggleLightButton, _Const0002 );
  WidgetSetToggleButton_OnSetLabelOn( &_this->toggleLightButton, 0 );
  WidgetSetToggleButton_OnSetLabelOff( &_this->toggleLightButton, 0 );
  WidgetSetToggleButton_OnSetLabel( &_this->toggleLightButton, 0 );
  CoreRectView__OnSetBounds( &_this->BrightnessSlider, _Const0003 );
  WidgetSetHorizontalSlider_OnSetMaxValue( &_this->BrightnessSlider, 255 );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->BrightnessSlider, 40 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->toggleLightButton ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->BrightnessSlider ), 0 );
  WidgetSetToggleButton_OnSetOutlet( &_this->toggleLightButton, EwNewRef( EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetbuttonValue, 
  ApplicationDeviceClass_OnSetbuttonValue ));
  _this->toggleLightButton.OnSwitchOn = EwNewSlot( _this, ApplicationhomeScreen_LightOnSlot );
  _this->toggleLightButton.OnSwitchOff = EwNewSlot( _this, ApplicationhomeScreen_LightOffSlot );
  WidgetSetToggleButton_OnSetAppearance( &_this->toggleLightButton, EwGetAutoObject( 
  &WidgetSetSwitch_Lime_Large, WidgetSetToggleButtonConfig ));
  _this->BrightnessSlider.OnEnd = EwNewSlot( _this, ApplicationhomeScreen_BrightnessSlot );
  WidgetSetHorizontalSlider_OnSetOutlet( &_this->BrightnessSlider, EwNewRef( EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetbrightnessValue, 
  ApplicationDeviceClass_OnSetbrightnessValue ));
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->BrightnessSlider, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Lime_Large, WidgetSetHorizontalSliderConfig ));
}

/* Re-Initializer for the class 'Application::homeScreen' */
void ApplicationhomeScreen__ReInit( ApplicationhomeScreen _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  WidgetSetToggleButton__ReInit( &_this->toggleLightButton );
  WidgetSetHorizontalSlider__ReInit( &_this->BrightnessSlider );
}

/* Finalizer method for the class 'Application::homeScreen' */
void ApplicationhomeScreen__Done( ApplicationhomeScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  WidgetSetToggleButton__Done( &_this->toggleLightButton );
  WidgetSetHorizontalSlider__Done( &_this->BrightnessSlider );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::homeScreen.LightOnSlot()' */
void ApplicationhomeScreen_LightOnSlot( ApplicationhomeScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  ApplicationDeviceClass_LedSetMethod( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), 
  EwLoadString( &_Const0004 ), EwLoadString( &_Const0005 ), EwLoadString( &_Const0006 ));
}

/* 'C' function for method : 'Application::homeScreen.LightOffSlot()' */
void ApplicationhomeScreen_LightOffSlot( ApplicationhomeScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  ApplicationDeviceClass_LedSetMethod( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), 
  EwLoadString( &_Const0004 ), EwLoadString( &_Const0007 ), EwLoadString( &_Const0006 ));
}

/* 'C' function for method : 'Application::homeScreen.BrightnessSlot()' */
void ApplicationhomeScreen_BrightnessSlot( ApplicationhomeScreen _this, XObject 
  sender )
{
  XString brightnessString;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  brightnessString = EwNewStringInt( WidgetSetHorizontalSlider_OnGetCurrentValue( 
  &_this->BrightnessSlider ), 0, 10 );
  ApplicationDeviceClass_LedSetMethod( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), 
  EwLoadString( &_Const0008 ), brightnessString, EwLoadString( &_Const0009 ));
}

/* Variants derived from the class : 'Application::homeScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationhomeScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationhomeScreen )

/* Virtual Method Table (VMT) for the class : 'Application::homeScreen' */
EW_DEFINE_CLASS( ApplicationhomeScreen, CoreGroup, Rectangle, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Application::homeScreen" )
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
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationhomeScreen )

/* Initializer for the class 'Application::colorSelection' */
void ApplicationcolorSelection__Init( ApplicationcolorSelection _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationcolorSelection );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  WidgetSetVerticalSlider__Init( &_this->RedSlider, &_this->_.XObject, 0 );
  WidgetSetVerticalSlider__Init( &_this->GreenSlider, &_this->_.XObject, 0 );
  WidgetSetVerticalSlider__Init( &_this->BlueSlider, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationcolorSelection );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  CoreRectView__OnSetBounds( &_this->RedSlider, _Const000A );
  WidgetSetVerticalSlider_OnSetMaxValue( &_this->RedSlider, 254 );
  CoreRectView__OnSetBounds( &_this->GreenSlider, _Const000B );
  WidgetSetVerticalSlider_OnSetMaxValue( &_this->GreenSlider, 254 );
  CoreRectView__OnSetBounds( &_this->BlueSlider, _Const000C );
  WidgetSetVerticalSlider_OnSetMaxValue( &_this->BlueSlider, 254 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->RedSlider ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->GreenSlider ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->BlueSlider ), 0 );
  _this->RedSlider.OnEnd = EwNewSlot( _this, ApplicationcolorSelection_ColorSlot );
  WidgetSetVerticalSlider_OnSetOutlet( &_this->RedSlider, EwNewRef( EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetredValue, 
  ApplicationDeviceClass_OnSetredValue ));
  WidgetSetVerticalSlider_OnSetAppearance( &_this->RedSlider, EwGetAutoObject( &WidgetSetVerticalSlider_Lime_Large, 
  WidgetSetVerticalSliderConfig ));
  _this->GreenSlider.OnEnd = EwNewSlot( _this, ApplicationcolorSelection_ColorSlot );
  WidgetSetVerticalSlider_OnSetOutlet( &_this->GreenSlider, EwNewRef( EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetgreenValue, 
  ApplicationDeviceClass_OnSetgreenValue ));
  WidgetSetVerticalSlider_OnSetAppearance( &_this->GreenSlider, EwGetAutoObject( 
  &WidgetSetVerticalSlider_Lime_Large, WidgetSetVerticalSliderConfig ));
  _this->BlueSlider.OnEnd = EwNewSlot( _this, ApplicationcolorSelection_ColorSlot );
  WidgetSetVerticalSlider_OnSetOutlet( &_this->BlueSlider, EwNewRef( EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetblueValue, 
  ApplicationDeviceClass_OnSetblueValue ));
  WidgetSetVerticalSlider_OnSetAppearance( &_this->BlueSlider, EwGetAutoObject( 
  &WidgetSetVerticalSlider_Lime_Large, WidgetSetVerticalSliderConfig ));
}

/* Re-Initializer for the class 'Application::colorSelection' */
void ApplicationcolorSelection__ReInit( ApplicationcolorSelection _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  WidgetSetVerticalSlider__ReInit( &_this->RedSlider );
  WidgetSetVerticalSlider__ReInit( &_this->GreenSlider );
  WidgetSetVerticalSlider__ReInit( &_this->BlueSlider );
}

/* Finalizer method for the class 'Application::colorSelection' */
void ApplicationcolorSelection__Done( ApplicationcolorSelection _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  WidgetSetVerticalSlider__Done( &_this->RedSlider );
  WidgetSetVerticalSlider__Done( &_this->GreenSlider );
  WidgetSetVerticalSlider__Done( &_this->BlueSlider );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::colorSelection.ColorSlot()' */
void ApplicationcolorSelection_ColorSlot( ApplicationcolorSelection _this, XObject 
  sender )
{
  XString redString;
  XString greenString;
  XString blueString;
  XString colorString;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  redString = EwNewStringInt( WidgetSetVerticalSlider_OnGetCurrentValue( &_this->RedSlider ), 
  0, 10 );
  greenString = EwNewStringInt( WidgetSetVerticalSlider_OnGetCurrentValue( &_this->GreenSlider ), 
  0, 10 );
  blueString = EwNewStringInt( WidgetSetVerticalSlider_OnGetCurrentValue( &_this->BlueSlider ), 
  0, 10 );
  colorString = EwConcatString( EwConcatString( EwConcatString( EwConcatString( 
  EwConcatString( EwConcatString( EwLoadString( &_Const000D ), redString ), EwLoadString( 
  &_Const000E )), greenString ), EwLoadString( &_Const000E )), blueString ), EwLoadString( 
  &_Const000E ));
  ApplicationDeviceClass_LedSetMethod( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), 
  EwLoadString( &_Const000F ), colorString, EwLoadString( &_Const0010 ));
}

/* Variants derived from the class : 'Application::colorSelection' */
EW_DEFINE_CLASS_VARIANTS( ApplicationcolorSelection )
EW_END_OF_CLASS_VARIANTS( ApplicationcolorSelection )

/* Virtual Method Table (VMT) for the class : 'Application::colorSelection' */
EW_DEFINE_CLASS( ApplicationcolorSelection, CoreGroup, Rectangle, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "Application::colorSelection" )
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
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
EW_END_OF_CLASS( ApplicationcolorSelection )

/* Embedded Wizard */
