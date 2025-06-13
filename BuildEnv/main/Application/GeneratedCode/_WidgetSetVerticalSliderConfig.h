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

#ifndef _WidgetSetVerticalSliderConfig_H
#define _WidgetSetVerticalSliderConfig_H

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

#include "_WidgetSetWidgetConfig.h"

/* Forward declaration of the class Resources::Bitmap */
#ifndef _ResourcesBitmap_
  EW_DECLARE_CLASS( ResourcesBitmap )
#define _ResourcesBitmap_
#endif

/* Forward declaration of the class WidgetSet::VerticalSliderConfig */
#ifndef _WidgetSetVerticalSliderConfig_
  EW_DECLARE_CLASS( WidgetSetVerticalSliderConfig )
#define _WidgetSetVerticalSliderConfig_
#endif


/* This class implements the functionality permitting you to simply customize the 
   look and feel of a 'vertical slider' widget (WidgetSet::VerticalSlider). In the 
   practice, you will create an instance of this class, configure its properties 
   with bitmaps, colors and other relevant attributes according to your design expectations 
   and assign such prepared configuration object to the property 'Appearance' of 
   every affected vertical slider widget. Thereupon the widgets will use the configuration 
   information provided in the object.
   During its lifetime the slider remains always in one of the four states: 'disabled', 
   'default', 'focused' and 'active'. The state 'disabled' is true for every not 
   available slider (the property 'Enabled' of the slider is 'false'). Such sliders 
   will ignore all user inputs. The state 'default' determines a slider, which is 
   ready to be touched by the user or ready to become focused. As soon as the slider 
   becomes focused, it switches in the state 'focused'. In this state the user can 
   control the slider by pressing keys on the keyboard. Finally, the state 'active' 
   is true, if the user actually interacts with the slider (the slider's thumb is 
   pressed). With the configuration object you can specify the appearance of the 
   slider for every state individually. For this purpose you should know from which 
   views the slider is composed of:
   - 'FaceImage' is a bitmap frame view (Views::Frame) filling horizontally centered 
   the entire height in the background of the slider. In the configuration object 
   you can individually specify for every slider state the desired bitmap (@FaceBitmapActive, 
   @FaceBitmapDefault, @FaceBitmapDisabled, @FaceBitmapFocused), the frame number 
   within the bitmap (@FaceFrameActive, @FaceFrameDefault, @FaceFrameDisabled, @FaceFrameFocused) 
   and opacity or color to tint the bitmap (@FaceTintActive, @FaceTintDefault, @FaceTintDisabled, 
   @FaceTintFocused). The slider can automatically play animated bitmaps if the 
   specified frame number is -1.
   - 'TrackBelowRectangle' is a rectangle view (Views::Rectangle) filling per default 
   horizontally centered the background of the slider between its bottom edge and 
   the actual position of the thumb. The width and an additional horizontal displacement 
   of the track are determined by the properties @TrackBelowThicknessActive, @TrackBelowThicknessDefault, 
   @TrackBelowThicknessDisabled, @TrackBelowThicknessFocused and @TrackBelowOffsetActive, 
   @TrackBelowOffsetDefault, @TrackBelowOffsetDisabled, @TrackBelowOffsetFocused. 
   The area destined for the track can be limited by configuring the properties 
   @TrackBelowMarginBottom and @TrackBelowMarginTop. With the property @TrackBelowStatic 
   the track can be configured to not depend on the actual thumb position. Normally, 
   the track has rectangular shape with sharp corners. If desired the corners can 
   be rounded (@TrackBelowCornerRadiusActive, @TrackBelowCornerRadiusDefault, @TrackBelowCornerRadiusDisabled, 
   @TrackBelowCornerRadiusFocused) whereby the rounding at the thumb position can 
   be controlled by the property @TrackBelowFlattened. The track can be filled with 
   a solid color (@TrackBelowColorActive, @TrackBelowColorDefault, @TrackBelowColorDisabled, 
   @TrackBelowColorFocused).
   - 'TrackBelowBorder' is a border view (Views::Border) surrounding the above described 
   'TrackBelowRectangle' and lying in front of it. Its size, position and corner 
   radius correspond thus to the of the 'TrackBelowRectangle'. The thickness of 
   the border (@TrackBelowBorderWidthActive, @TrackBelowBorderWidthDefault, @TrackBelowBorderWidthDisabled, 
   @TrackBelowBorderWidthFocused) and its color (@TrackBelowBorderColorActive, @TrackBelowBorderColorDefault, 
   @TrackBelowBorderColorDisabled, @TrackBelowBorderColorFocused) can be specified.
   - 'TrackBelowImage' is a bitmap frame view (Views::Frame) filling per default 
   horizontally centered the background of the slider between its bottom edge and 
   the actual position of the thumb. The area destined for the track can be limited 
   by configuring the properties @TrackBelowMarginBottom and @TrackBelowMarginTop. 
   With the property @TrackBelowStatic the track can be configured to not depend 
   on the actual thumb position. An additional horizontal displacement of the track 
   is determined by the properties @TrackBelowOffsetActive, @TrackBelowOffsetDefault, 
   @TrackBelowOffsetDisabled, @TrackBelowOffsetFocused. In the configuration object 
   you can individually specify for every slider state the desired bitmap (@TrackBelowBitmapActive, 
   @TrackBelowBitmapDefault, @TrackBelowBitmapDisabled, @TrackBelowBitmapFocused), 
   the frame number within the bitmap (@TrackBelowFrameActive, @TrackBelowFrameDefault, 
   @TrackBelowFrameDisabled, @TrackBelowFrameFocused) and opacity or color to tint 
   the bitmap (@TrackBelowTintActive, @TrackBelowTintDefault, @TrackBelowTintDisabled, 
   @TrackBelowTintFocused). With the property @TrackBelowWithEdge you can configure 
   how the top edge of the track (the edge at the thumb position) should appear. 
   The slider can automatically play animated bitmaps if the specified frame number 
   is -1.
   - 'TrackAboveRectangle' is a rectangle view (Views::Rectangle) filling per default 
   horizontally centered the background of the slider between the actual position 
   of the thumb and the top edge of the slider widget. The width and an additional 
   horizontal displacement of the track are determined by the properties @TrackAboveThicknessActive, 
   @TrackAboveThicknessDefault, @TrackAboveThicknessDisabled, @TrackAboveThicknessFocused 
   and @TrackAboveOffsetActive, @TrackAboveOffsetDefault, @TrackAboveOffsetDisabled, 
   @TrackAboveOffsetFocused. The area destined for the track can be limited by configuring 
   the properties @TrackAboveMarginBottom and @TrackAboveMarginTop. With the property 
   @TrackAboveStatic the track can be configured to not depend on the actual thumb 
   position. Normally, the track has rectangular shape with sharp corners. If desired 
   the corners can be rounded (@TrackAboveCornerRadiusActive, @TrackAboveCornerRadiusDefault, 
   @TrackAboveCornerRadiusDisabled, @TrackAboveCornerRadiusFocused) whereby the 
   rounding at the thumb position can be controlled by the property @TrackAboveFlattened. 
   The track can be filled with a solid color (@TrackAboveColorActive, @TrackAboveColorDefault, 
   @TrackAboveColorDisabled, @TrackAboveColorFocused).
   - 'TrackAboveBorder' is a border view (Views::Border) surrounding the above described 
   'TrackAboveRectangle' and lying in front of it. Its size, position and corner 
   radius correspond thus to the of the 'TrackAboveRectangle'. The thickness of 
   the border (@TrackAboveBorderWidthActive, @TrackAboveBorderWidthDefault, @TrackAboveBorderWidthDisabled, 
   @TrackAboveBorderWidthFocused) and its color (@TrackAboveBorderColorActive, @TrackAboveBorderColorDefault, 
   @TrackAboveBorderColorDisabled, @TrackAboveBorderColorFocused) can be specified.
   - 'TrackAboveImage' is a bitmap frame view (Views::Frame) filling per default 
   horizontally centered the background of the slider between the actual position 
   of the thumb and the top edge of the slider widget. The area destined for the 
   track can be limited by configuring the properties @TrackAboveMarginBottom and 
   @TrackAboveMarginTop. With the property @TrackAboveStatic the track can be configured 
   to not depend on the actual thumb position. An additional horizontal displacement 
   of the track is determined by the properties @TrackAboveOffsetActive, @TrackAboveOffsetDefault, 
   @TrackAboveOffsetDisabled, @TrackAboveOffsetFocused. In the configuration object 
   you can individually specify for every slider state the desired bitmap (@TrackAboveBitmapActive, 
   @TrackAboveBitmapDefault, @TrackAboveBitmapDisabled, @TrackAboveBitmapFocused), 
   the frame number within the bitmap (@TrackAboveFrameActive, @TrackAboveFrameDefault, 
   @TrackAboveFrameDisabled, @TrackAboveFrameFocused) and opacity or color to tint 
   the bitmap (@TrackAboveTintActive, @TrackAboveTintDefault, @TrackAboveTintDisabled, 
   @TrackAboveTintFocused). With the property @TrackAboveWithEdge you can configure 
   how the bottom edge of the track (the edge at the thumb position) should appear. 
   The slider can automatically play animated bitmaps if the specified frame number 
   is -1.
   - 'ThumbRectangle' is a rectangle view (Views::Rectangle) displayed horizontally 
   centered at the thumb position according to current value of the slider. In the 
   configuration object you can individually specify for every slider state the 
   size of the view (@ThumbSizeActive, @ThumbSizeDefault, @ThumbSizeDisabled, @ThumbSizeFocused) 
   and an additional displacement (@ThumbOffsetActive, @ThumbOffsetDefault, @ThumbOffsetDisabled, 
   @ThumbOffsetFocused). Normally, the thumb area has rectangular shape with sharp 
   corners. If desired the corners can be rounded (@ThumbCornerRadiusActive, @ThumbCornerRadiusDefault, 
   @ThumbCornerRadiusDisabled, @ThumbCornerRadiusFocused). The thumb area can be 
   filled with a solid color (@ThumbColorActive, @ThumbColorDefault, @ThumbColorDisabled, 
   @ThumbColorFocused).
   - 'ThumbBorder' is a border view (Views::Border) surrounding the above described 
   'ThumbRectangle' and lying in front of it. Its size, position and corner radius 
   correspond thus to the of the 'ThumbRectangle'. The thickness of the border (@ThumbBorderWidthActive, 
   @ThumbBorderWidthDefault, @ThumbBorderWidthDisabled, @ThumbBorderWidthFocused) 
   and its color (@ThumbBorderColorActive, @ThumbBorderColorDefault, @ThumbBorderColorDisabled, 
   @ThumbBorderColorFocused) can be specified.
   - 'ThumbShadow' is a shadow view (Views::Shadow) lying always behind the above 
   described 'ThumbRectangle' view. Its size, position and corner radius correspond 
   thus to the of the 'ThumbRectangle'. However, an additional displacement for 
   the shadow can be specified (@ThumbShadowOffsetActive, @ThumbShadowOffsetDefault, 
   @ThumbShadowOffsetDisabled, @ThumbShadowOffsetFocused). The color of the shadow 
   (@ThumbShadowColorActive, @ThumbShadowColorDefault, @ThumbShadowColorDisabled, 
   @ThumbShadowColorFocused) as well as its blur radius (@ThumbShadowBlurRadiusActive, 
   @ThumbShadowBlurRadiusDefault, @ThumbShadowBlurRadiusDisabled, @ThumbShadowBlurRadiusFocused) 
   can be specified.
   - 'ThumbImage' is an image view (Views::Image) displayed horizontally centered 
   at the thumb position according to current value of the slider. In the configuration 
   object you can individually specify for every slider state the desired bitmap 
   (@ThumbBitmapActive, @ThumbBitmapDefault, @ThumbBitmapDisabled, @ThumbBitmapFocused), 
   the frame number within the bitmap (@ThumbFrameActive, @ThumbFrameDefault, @ThumbFrameDisabled, 
   @ThumbFrameFocused) and opacity or color to tint the bitmap (@ThumbTintActive, 
   @ThumbTintDefault, @ThumbTintDisabled, @ThumbTintFocused). If necessary, additional 
   margins above and below the thumb can be specified by using the properties @ThumbMarginTop 
   and @ThumbMarginBottom. An additional displacement (@ThumbOffsetActive, @ThumbOffsetDefault, 
   @ThumbOffsetDisabled, @ThumbOffsetFocused) can be configured. The slider can 
   automatically play animated bitmaps if the specified frame number is -1.
   - 'AccentRectangle' is a rectangle view (Views::Rectangle) displayed per default 
   horizontally centered at the thumb position according to current value of the 
   slider. In the configuration object you can individually specify for every slider 
   state the size of the view (@AccentSizeActive, @AccentSizeDefault, @AccentSizeDisabled, 
   @AccentSizeFocused) and an additional displacement (@AccentOffsetActive, @AccentOffsetDefault, 
   @AccentOffsetDisabled, @AccentOffsetFocused). Normally, the accent area has rectangular 
   shape with sharp corners. If desired the corners can be rounded (@AccentCornerRadiusActive, 
   @AccentCornerRadiusDefault, @AccentCornerRadiusDisabled, @AccentCornerRadiusFocused). 
   The accent area can be filled with a solid color (@AccentColorActive, @AccentColorDefault, 
   @AccentColorDisabled, @AccentColorFocused). Accent usually serves to highlight 
   the widget when the user interacts with it actively or when the widget is focused.
   - 'AccentBorder' is a border view (Views::Border) surrounding the above described 
   'AccentRectangle' and lying in front of it. Its size, position and corner radius 
   correspond thus to the of the 'AccentRectangle'. The thickness of the border 
   (@AccentBorderWidthActive, @AccentBorderWidthDefault, @AccentBorderWidthDisabled, 
   @AccentBorderWidthFocused) and its color (@AccentBorderColorActive, @AccentBorderColorDefault, 
   @AccentBorderColorDisabled, @AccentBorderColorFocused) can be specified. Accent 
   usually serves to highlight the widget when the user interacts with it actively 
   or when the widget is focused.
   - 'CoverImage' is a bitmap frame view (Views::Frame) filling horizontally centered 
   the entire height of the slider and covering so eventually the thumb and track. 
   In the configuration object you can individually specify for every slider state 
   the desired bitmap (@CoverBitmapActive, @CoverBitmapDefault, @CoverBitmapDisabled, 
   @CoverBitmapFocused), the frame number within the bitmap (@CoverFrameActive, 
   @CoverFrameDefault, @CoverFrameDisabled, @CoverFrameFocused) and opacity or color 
   to tint the bitmap (@CoverTintActive, @CoverTintDefault, @CoverTintDisabled, 
   @CoverTintFocused). The slider can automatically play animated bitmaps if the 
   specified frame number is -1.
   All above mentioned views are arranged one above the other whereby the resulting 
   stacking order can be configured by using the properties @FaceStackingPriority, 
   @TrackBelowStackingPriority, @TrackAboveStackingPriority, @ThumbStackingPriority, 
   @AccentStackingPriority and @CoverStackingPriority. The view with higher priority 
   will appear in front of other views with lower priority.
   Normally, when a state alternation occurs, the affected views are updated immediatelly 
   to reflect the new state. By using the property @StateTransitionDuration it is 
   possible to configure the slider to perform state alternations with animations 
   (e.g. the displacement of the thumb shadow can be animated). This affects all 
   attributes of the filled rectangle, border and shadow views belonging to the 
   thumb, lower track, upper track and accent. In case of the images displayed in 
   the face, lower track, upper track, thumb and cover, the animation has an effect 
   only on the colors and offsets used to configure the views. Consequently, during 
   animations these views can fade-out/in their colors and move only.
   If the slider is actually focused, it can also be controlled by pressing the 
   keyboard keys specified in the properties @KeyCodeDown and @KeyCodeUp causing 
   the slider's thumb to be moved down or up. To prevent the slider from being able 
   to be focused, initialize these properties with the value Core::KeyCode.NoKey. 
   With the properties @KeyRepeatDelay and @KeyRepeatPeriod you can configure whether 
   the thumb should be moved autonomously when the user holds the key pressed for 
   a while.
   To further enhance the widgets, a slot method can be assigned to the property 
   @OnUpdate. Within the slot method new decoration views can be added to the widgets 
   and updated according to the current state of the widget. 
   With the properties @WidgetMinSize and @WidgetMaxSize you can configure size 
   constraints for the widget itself. You can, for example, limit the slider to 
   not shrink below a specified height or width. */
EW_DEFINE_FIELDS( WidgetSetVerticalSliderConfig, WidgetSetWidgetConfig )
  EW_PROPERTY( ThumbBitmapActive, ResourcesBitmap )
  EW_PROPERTY( ThumbBitmapFocused, ResourcesBitmap )
  EW_PROPERTY( ThumbBitmapDisabled, ResourcesBitmap )
  EW_PROPERTY( ThumbBitmapDefault, ResourcesBitmap )
  EW_PROPERTY( TrackAboveBitmapActive, ResourcesBitmap )
  EW_PROPERTY( TrackAboveBitmapFocused, ResourcesBitmap )
  EW_PROPERTY( TrackAboveBitmapDisabled, ResourcesBitmap )
  EW_PROPERTY( TrackAboveBitmapDefault, ResourcesBitmap )
  EW_PROPERTY( TrackBelowBitmapActive, ResourcesBitmap )
  EW_PROPERTY( TrackBelowBitmapFocused, ResourcesBitmap )
  EW_PROPERTY( TrackBelowBitmapDisabled, ResourcesBitmap )
  EW_PROPERTY( TrackBelowBitmapDefault, ResourcesBitmap )
  EW_PROPERTY( KeyRepeatPeriod, XInt32 )
  EW_PROPERTY( KeyRepeatDelay,  XInt32 )
  EW_PROPERTY( ThumbFrameActive, XInt32 )
  EW_PROPERTY( ThumbFrameFocused, XInt32 )
  EW_PROPERTY( ThumbFrameDisabled, XInt32 )
  EW_PROPERTY( ThumbFrameDefault, XInt32 )
  EW_PROPERTY( ThumbMarginTop,  XInt32 )
  EW_PROPERTY( ThumbMarginBottom, XInt32 )
  EW_PROPERTY( TrackAboveFrameActive, XInt32 )
  EW_PROPERTY( TrackAboveFrameFocused, XInt32 )
  EW_PROPERTY( TrackAboveFrameDisabled, XInt32 )
  EW_PROPERTY( TrackAboveFrameDefault, XInt32 )
  EW_PROPERTY( TrackBelowFrameActive, XInt32 )
  EW_PROPERTY( TrackBelowFrameFocused, XInt32 )
  EW_PROPERTY( TrackBelowFrameDisabled, XInt32 )
  EW_PROPERTY( TrackBelowFrameDefault, XInt32 )
  EW_PROPERTY( WidgetMinSize,   XPoint )
EW_END_OF_FIELDS( WidgetSetVerticalSliderConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::VerticalSliderConfig' */
EW_DEFINE_METHODS( WidgetSetVerticalSliderConfig, WidgetSetWidgetConfig )
EW_END_OF_METHODS( WidgetSetVerticalSliderConfig )

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetKeyRepeatPeriod()' */
void WidgetSetVerticalSliderConfig_OnSetKeyRepeatPeriod( WidgetSetVerticalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetKeyRepeatDelay()' */
void WidgetSetVerticalSliderConfig_OnSetKeyRepeatDelay( WidgetSetVerticalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbFrameActive()' */
void WidgetSetVerticalSliderConfig_OnSetThumbFrameActive( WidgetSetVerticalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbFrameFocused()' */
void WidgetSetVerticalSliderConfig_OnSetThumbFrameFocused( WidgetSetVerticalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbFrameDisabled()' */
void WidgetSetVerticalSliderConfig_OnSetThumbFrameDisabled( WidgetSetVerticalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbFrameDefault()' */
void WidgetSetVerticalSliderConfig_OnSetThumbFrameDefault( WidgetSetVerticalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbBitmapActive()' */
void WidgetSetVerticalSliderConfig_OnSetThumbBitmapActive( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbBitmapFocused()' */
void WidgetSetVerticalSliderConfig_OnSetThumbBitmapFocused( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbBitmapDisabled()' */
void WidgetSetVerticalSliderConfig_OnSetThumbBitmapDisabled( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbBitmapDefault()' */
void WidgetSetVerticalSliderConfig_OnSetThumbBitmapDefault( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbMarginTop()' */
void WidgetSetVerticalSliderConfig_OnSetThumbMarginTop( WidgetSetVerticalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetThumbMarginBottom()' */
void WidgetSetVerticalSliderConfig_OnSetThumbMarginBottom( WidgetSetVerticalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackAboveFrameActive()' */
void WidgetSetVerticalSliderConfig_OnSetTrackAboveFrameActive( WidgetSetVerticalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackAboveFrameFocused()' */
void WidgetSetVerticalSliderConfig_OnSetTrackAboveFrameFocused( WidgetSetVerticalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackAboveFrameDisabled()' */
void WidgetSetVerticalSliderConfig_OnSetTrackAboveFrameDisabled( WidgetSetVerticalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackAboveFrameDefault()' */
void WidgetSetVerticalSliderConfig_OnSetTrackAboveFrameDefault( WidgetSetVerticalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackAboveBitmapActive()' */
void WidgetSetVerticalSliderConfig_OnSetTrackAboveBitmapActive( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackAboveBitmapFocused()' */
void WidgetSetVerticalSliderConfig_OnSetTrackAboveBitmapFocused( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackAboveBitmapDisabled()' */
void WidgetSetVerticalSliderConfig_OnSetTrackAboveBitmapDisabled( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackAboveBitmapDefault()' */
void WidgetSetVerticalSliderConfig_OnSetTrackAboveBitmapDefault( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackBelowFrameActive()' */
void WidgetSetVerticalSliderConfig_OnSetTrackBelowFrameActive( WidgetSetVerticalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackBelowFrameFocused()' */
void WidgetSetVerticalSliderConfig_OnSetTrackBelowFrameFocused( WidgetSetVerticalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackBelowFrameDisabled()' */
void WidgetSetVerticalSliderConfig_OnSetTrackBelowFrameDisabled( WidgetSetVerticalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackBelowFrameDefault()' */
void WidgetSetVerticalSliderConfig_OnSetTrackBelowFrameDefault( WidgetSetVerticalSliderConfig _this, 
  XInt32 value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackBelowBitmapActive()' */
void WidgetSetVerticalSliderConfig_OnSetTrackBelowBitmapActive( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackBelowBitmapFocused()' */
void WidgetSetVerticalSliderConfig_OnSetTrackBelowBitmapFocused( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackBelowBitmapDisabled()' */
void WidgetSetVerticalSliderConfig_OnSetTrackBelowBitmapDisabled( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetTrackBelowBitmapDefault()' */
void WidgetSetVerticalSliderConfig_OnSetTrackBelowBitmapDefault( WidgetSetVerticalSliderConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::VerticalSliderConfig.OnSetWidgetMinSize()' */
void WidgetSetVerticalSliderConfig_OnSetWidgetMinSize( WidgetSetVerticalSliderConfig _this, 
  XPoint value );

#ifdef __cplusplus
  }
#endif

#endif /* _WidgetSetVerticalSliderConfig_H */

/* Embedded Wizard */
