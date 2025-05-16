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
#include "_CoreView.h"
#include "_ViewsRectangle.h"
#include "_WidgetSetHorizontalSlider.h"
#include "_WidgetSetHorizontalSliderConfig.h"
#include "_WidgetSetToggleButton.h"
#include "_WidgetSetToggleButtonConfig.h"
#include "Application.h"
#include "WidgetSet.h"

/* Strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned short _StringsDefault0[] =
{
  0xFFFF, 0xFFFF, 0xC557, 0x006F, 0x006E, 0x0000, 0xC557, 0x0074, 0x0072, 0x0075,
  0x0065, 0x0000, 0xC557, 0x0062, 0x006F, 0x006F, 0x006C, 0x0000, 0xC557, 0x0066,
  0x0061, 0x006C, 0x0073, 0x0065, 0x0000, 0xC557, 0x0062, 0x0072, 0x0069, 0x0000,
  0xC557, 0x0069, 0x006E, 0x0074, 0x0000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 320, 240 }};
static const XRect _Const0001 = {{ 108, 43 }, { 212, 102 }};
static const XRect _Const0002 = {{ 60, 135 }, { 260, 195 }};
static const XStringRes _Const0003 = { _StringsDefault0, 0x0003 };
static const XStringRes _Const0004 = { _StringsDefault0, 0x0007 };
static const XStringRes _Const0005 = { _StringsDefault0, 0x000D };
static const XStringRes _Const0006 = { _StringsDefault0, 0x0013 };
static const XStringRes _Const0007 = { _StringsDefault0, 0x001A };
static const XStringRes _Const0008 = { _StringsDefault0, 0x001F };

/* Initializer for the class 'Application::Application' */
void ApplicationApplication__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationApplication );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  WidgetSetToggleButton__Init( &_this->toggleLightButton, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->BrightnessSlider, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  CoreRectView__OnSetBounds( &_this->toggleLightButton, _Const0001 );
  WidgetSetToggleButton_OnSetLabelOn( &_this->toggleLightButton, 0 );
  WidgetSetToggleButton_OnSetLabelOff( &_this->toggleLightButton, 0 );
  WidgetSetToggleButton_OnSetLabel( &_this->toggleLightButton, 0 );
  CoreRectView__OnSetBounds( &_this->BrightnessSlider, _Const0002 );
  WidgetSetHorizontalSlider_OnSetMaxValue( &_this->BrightnessSlider, 255 );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->BrightnessSlider, 40 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->toggleLightButton ), 0 );
  CoreGroup_Add((CoreGroup)_this, ((CoreView)&_this->BrightnessSlider ), 0 );
  WidgetSetToggleButton_OnSetOutlet( &_this->toggleLightButton, EwNewRef( EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetbuttonValue, 
  ApplicationDeviceClass_OnSetbuttonValue ));
  _this->toggleLightButton.OnSwitchOn = EwNewSlot( _this, ApplicationApplication_LightOnSlot );
  _this->toggleLightButton.OnSwitchOff = EwNewSlot( _this, ApplicationApplication_LightOffSlot );
  WidgetSetToggleButton_OnSetAppearance( &_this->toggleLightButton, EwGetAutoObject( 
  &WidgetSetSwitch_Lime_Large, WidgetSetToggleButtonConfig ));
  _this->BrightnessSlider.OnEnd = EwNewSlot( _this, ApplicationApplication_BrightnessSlot );
  WidgetSetHorizontalSlider_OnSetOutlet( &_this->BrightnessSlider, EwNewRef( &_this->BrightnessSlider, 
  WidgetSetHorizontalSlider_OnGetCurrentValue, WidgetSetHorizontalSlider_OnSetCurrentValue ));
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->BrightnessSlider, EwGetAutoObject( 
  &WidgetSetHorizontalSlider_Lime_Large, WidgetSetHorizontalSliderConfig ));
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  WidgetSetToggleButton__ReInit( &_this->toggleLightButton );
  WidgetSetHorizontalSlider__ReInit( &_this->BrightnessSlider );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  WidgetSetToggleButton__Done( &_this->toggleLightButton );
  WidgetSetHorizontalSlider__Done( &_this->BrightnessSlider );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::Application.LightOnSlot()' */
void ApplicationApplication_LightOnSlot( ApplicationApplication _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  ApplicationDeviceClass_LedSetMethod( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), 
  EwLoadString( &_Const0003 ), EwLoadString( &_Const0004 ), EwLoadString( &_Const0005 ));
}

/* 'C' function for method : 'Application::Application.LightOffSlot()' */
void ApplicationApplication_LightOffSlot( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  ApplicationDeviceClass_LedSetMethod( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), 
  EwLoadString( &_Const0003 ), EwLoadString( &_Const0006 ), EwLoadString( &_Const0005 ));
}

/* 'C' function for method : 'Application::Application.BrightnessSlot()' */
void ApplicationApplication_BrightnessSlot( ApplicationApplication _this, XObject 
  sender )
{
  XString brightnessString;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  brightnessString = EwNewStringInt( WidgetSetHorizontalSlider_OnGetCurrentValue( 
  &_this->BrightnessSlider ), 0, 10 );
  ApplicationDeviceClass_LedSetMethod( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), 
  EwLoadString( &_Const0007 ), brightnessString, EwLoadString( &_Const0008 ));
}

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, Rectangle, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Application::Application" )
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
  {
    _this->brightnessValue = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetbrightnessValue, 
      ApplicationDeviceClass_OnSetbrightnessValue ), 0 );
  }
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
  {
    _this->buttonValue = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetbuttonValue, 
      ApplicationDeviceClass_OnSetbuttonValue ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.EWUpdateButton()' */
void ApplicationDeviceClass__EWUpdateButton( void* _this, XBool aNewValue )
{
  ApplicationDeviceClass_EWUpdateButton((ApplicationDeviceClass)_this, aNewValue );
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

/* Embedded Wizard */
