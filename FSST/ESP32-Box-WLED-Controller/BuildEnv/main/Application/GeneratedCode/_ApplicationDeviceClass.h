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

#ifndef _ApplicationDeviceClass_H
#define _ApplicationDeviceClass_H

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

#include "_TemplatesDeviceClass.h"

/* Forward declaration of the class Application::DeviceClass */
#ifndef _ApplicationDeviceClass_
  EW_DECLARE_CLASS( ApplicationDeviceClass )
#define _ApplicationDeviceClass_
#endif


/* Deklaration of class : 'Application::DeviceClass' */
EW_DEFINE_FIELDS( ApplicationDeviceClass, TemplatesDeviceClass )
  EW_PROPERTY( brightnessValue, XInt32 )
  EW_PROPERTY( redValue,        XInt32 )
  EW_PROPERTY( greenValue,      XInt32 )
  EW_PROPERTY( blueValue,       XInt32 )
  EW_PROPERTY( buttonValue,     XBool )
EW_END_OF_FIELDS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_METHODS( ApplicationDeviceClass, TemplatesDeviceClass )
EW_END_OF_METHODS( ApplicationDeviceClass )

/* 'C' function for method : 'Application::DeviceClass.Done()' */
void ApplicationDeviceClass_Done( ApplicationDeviceClass _this );

/* 'C' function for method : 'Application::DeviceClass.Init()' */
void ApplicationDeviceClass_Init( ApplicationDeviceClass _this, XHandle aArg );

/* 'C' function for method : 'Application::DeviceClass.LedSetMethod()' */
void ApplicationDeviceClass_LedSetMethod( ApplicationDeviceClass _this, XString 
  key, XString setpoint, XString dataType );

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_EWUpdateSlider( ApplicationDeviceClass _this, XInt32 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.EWUpdateSlider()' */
void ApplicationDeviceClass__EWUpdateSlider( void* _this, XInt32 aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.EWUpdateSlider(). */
#define _ApplicationDeviceClass__EWUpdateSlider_

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_EWUpdateButton( ApplicationDeviceClass _this, XBool 
  aNewValue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.EWUpdateButton()' */
void ApplicationDeviceClass__EWUpdateButton( void* _this, XBool aNewValue );

/* The following define announces the presence of the method Application::DeviceClass.EWUpdateButton(). */
#define _ApplicationDeviceClass__EWUpdateButton_

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_EWUpdateColor( ApplicationDeviceClass _this, XInt32 
  aNewValueRed, XInt32 aNewValueGreen, XInt32 aNewValueBlue );

/* Wrapper function for the non virtual method : 'Application::DeviceClass.EWUpdateColor()' */
void ApplicationDeviceClass__EWUpdateColor( void* _this, XInt32 aNewValueRed, XInt32 
  aNewValueGreen, XInt32 aNewValueBlue );

/* The following define announces the presence of the method Application::DeviceClass.EWUpdateColor(). */
#define _ApplicationDeviceClass__EWUpdateColor_

/* Default onget method for the property 'brightnessValue' */
XInt32 ApplicationDeviceClass_OnGetbrightnessValue( ApplicationDeviceClass _this );

/* Default onset method for the property 'brightnessValue' */
void ApplicationDeviceClass_OnSetbrightnessValue( ApplicationDeviceClass _this, 
  XInt32 value );

/* Default onget method for the property 'buttonValue' */
XBool ApplicationDeviceClass_OnGetbuttonValue( ApplicationDeviceClass _this );

/* Default onset method for the property 'buttonValue' */
void ApplicationDeviceClass_OnSetbuttonValue( ApplicationDeviceClass _this, XBool 
  value );

/* Default onget method for the property 'redValue' */
XInt32 ApplicationDeviceClass_OnGetredValue( ApplicationDeviceClass _this );

/* Default onset method for the property 'redValue' */
void ApplicationDeviceClass_OnSetredValue( ApplicationDeviceClass _this, XInt32 
  value );

/* Default onget method for the property 'greenValue' */
XInt32 ApplicationDeviceClass_OnGetgreenValue( ApplicationDeviceClass _this );

/* Default onset method for the property 'greenValue' */
void ApplicationDeviceClass_OnSetgreenValue( ApplicationDeviceClass _this, XInt32 
  value );

/* Default onget method for the property 'blueValue' */
XInt32 ApplicationDeviceClass_OnGetblueValue( ApplicationDeviceClass _this );

/* Default onset method for the property 'blueValue' */
void ApplicationDeviceClass_OnSetblueValue( ApplicationDeviceClass _this, XInt32 
  value );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationDeviceClass_H */

/* Embedded Wizard */
