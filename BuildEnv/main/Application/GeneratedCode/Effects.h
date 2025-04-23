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

#ifndef Effects_H
#define Effects_H

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

#include "_EffectsEffect.h"
#include "_EffectsEffectTimerClass.h"
#include "_EffectsRectEffect.h"
#include "_EffectsTimingList.h"

/* The definition Effects::Timing determines the available timing functions for 
   animation effects. Except the 'Custom' item, all items of this definition represent 
   build-in timing functions. These can be simply selected in the effect property 
   Timing. */
typedef XEnum EffectsTiming;

#define EffectsTimingLinear                                 0
#define EffectsTimingPower_In                               1
#define EffectsTimingPower_Out                              2
#define EffectsTimingPower_InOut                            3
#define EffectsTimingExp_In                                 4
#define EffectsTimingExp_Out                                5
#define EffectsTimingExp_InOut                              6
#define EffectsTimingSine_In                                7
#define EffectsTimingSine_Out                               8
#define EffectsTimingSine_InOut                             9
#define EffectsTimingCircle_In                              10
#define EffectsTimingCircle_Out                             11
#define EffectsTimingCircle_InOut                           12
#define EffectsTimingBack_In                                13
#define EffectsTimingBack_Out                               14
#define EffectsTimingBack_InOut                             15
#define EffectsTimingElastic_In                             16
#define EffectsTimingElastic_Out                            17
#define EffectsTimingElastic_InOut                          18
#define EffectsTimingBounce_In                              19
#define EffectsTimingBounce_Out                             20
#define EffectsTimingBounce_InOut                           21
#define EffectsTimingEaseIn_FastOut                         22
#define EffectsTimingFastIn_EaseOut                         23
#define EffectsTimingEaseIn_EaseOut                         24
#define EffectsTimingFastIn_FastOut                         25
#define EffectsTimingCustom                                 26

/* The global autoobject Effects::EffectTimer triggers all actually active animation 
   effects. In this way all effects will run simultanously. Per default the timer 
   is configured with 15 ms period (~60 FPS). By overriding the Effects::EffectTimer 
   autoobject by a variant you can specify another resolution to drive the animations. */
EW_DECLARE_AUTOOBJECT( EffectsEffectTimer, EffectsEffectTimerClass )

#ifdef __cplusplus
  }
#endif

#endif /* Effects_H */

/* Embedded Wizard */
