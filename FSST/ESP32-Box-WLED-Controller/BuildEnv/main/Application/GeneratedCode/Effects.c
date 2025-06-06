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
#include "_CoreGroup.h"
#include "_CoreView.h"
#include "_EffectsEffectTimerClass.h"
#include "_EffectsFader.h"
#include "_EffectsFaderTask.h"
#include "_EffectsShowHideTransition.h"
#include "_EffectsTransition.h"
#include "_EffectsVisibilityFader.h"
#include "Core.h"
#include "Effects.h"

/* Strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned short _StringsDefault0[] =
{
  0xFFFF, 0xFFFF, 0xC557, 0x0054, 0x0072, 0x0079, 0x0069, 0x006E, 0x0067, 0x0020,
  0x0074, 0x006F, 0x0020, 0x0072, 0x0065, 0x006D, 0x006F, 0x0076, 0x0065, 0x0020,
  0x0061, 0x0020, 0x0066, 0x0061, 0x0064, 0x0065, 0x0072, 0x0020, 0x0066, 0x0072,
  0x006F, 0x006D, 0x0020, 0x0061, 0x0020, 0x0074, 0x0061, 0x0073, 0x006B, 0x002C,
  0x0020, 0x0077, 0x0068, 0x0069, 0x0063, 0x0068, 0x0020, 0x0069, 0x0073, 0x0020,
  0x0061, 0x0063, 0x0074, 0x0075, 0x0061, 0x006C, 0x006C, 0x0079, 0x0020, 0x0072,
  0x0075, 0x006E, 0x006E, 0x0069, 0x006E, 0x0067, 0x0000, 0xC557, 0x0054, 0x0068,
  0x0065, 0x0020, 0x0066, 0x0061, 0x0064, 0x0065, 0x0072, 0x0020, 0x0064, 0x006F,
  0x0065, 0x0073, 0x006E, 0x0027, 0x0074, 0x0020, 0x0062, 0x0065, 0x006C, 0x006F,
  0x006E, 0x0067, 0x0020, 0x0074, 0x006F, 0x0020, 0x0074, 0x0068, 0x0069, 0x0073,
  0x0020, 0x0074, 0x0061, 0x0073, 0x006B, 0x0000, 0xC557, 0x0054, 0x0072, 0x0079,
  0x0069, 0x006E, 0x0067, 0x0020, 0x0074, 0x006F, 0x0020, 0x0061, 0x0064, 0x0064,
  0x0020, 0x0061, 0x0020, 0x0066, 0x0061, 0x0064, 0x0065, 0x0072, 0x0020, 0x0074,
  0x006F, 0x0020, 0x0061, 0x0020, 0x0074, 0x0061, 0x0073, 0x006B, 0x002C, 0x0020,
  0x0077, 0x0068, 0x0069, 0x0063, 0x0068, 0x0020, 0x0069, 0x0073, 0x0020, 0x0061,
  0x0063, 0x0074, 0x0075, 0x0061, 0x006C, 0x006C, 0x0079, 0x0020, 0x0072, 0x0075,
  0x006E, 0x006E, 0x0069, 0x006E, 0x0067, 0x0000, 0xC557, 0x0054, 0x0068, 0x0065,
  0x0020, 0x0066, 0x0061, 0x0064, 0x0065, 0x0072, 0x0020, 0x0062, 0x0065, 0x006C,
  0x006F, 0x006E, 0x0067, 0x0073, 0x0020, 0x0061, 0x006C, 0x0072, 0x0065, 0x0061,
  0x0064, 0x0079, 0x0020, 0x0074, 0x006F, 0x0020, 0x0061, 0x0020, 0x0074, 0x0061,
  0x0073, 0x006B, 0x0000
};

/* Constant values used in this 'C' module only. */
static const XStringRes _Const0000 = { _StringsDefault0, 0x0003 };
static const XStringRes _Const0001 = { _StringsDefault0, 0x0044 };
static const XStringRes _Const0002 = { _StringsDefault0, 0x006B };
static const XStringRes _Const0003 = { _StringsDefault0, 0x00A7 };

/* Initializer for the class 'Effects::Fader' */
void EffectsFader__Init( EffectsFader _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( EffectsFader );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( EffectsFader );

  /* ... and initialize objects, variables, properties, etc. */
  _this->RemoveIfHidden = 1;
  _this->RestackTopmost = 1;
  _this->AssignFocus = 1;
  _this->UseCurrentState = 1;
  _this->Enabled = 1;
  _this->Visible = 1;
}

/* Re-Initializer for the class 'Effects::Fader' */
void EffectsFader__ReInit( EffectsFader _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Effects::Fader' */
void EffectsFader__Done( EffectsFader _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* The method Complete() is intended to be called by the implementation of your 
   adapted fader as soon as the animation effects used inside the fader has finalized 
   their work. This is essential in order to ensure, that next faders waiting for 
   execution can start with their animations. */
void EffectsFader_Complete( EffectsFader _this )
{
  if ( _this->task != 0 )
    CoreTask__Complete( _this->task );
}

/* The method IsFinished() should return 'true' if the fader has finalized its fading 
   animation and 'false' if the animation is not started or it is still in progress. 
   This method should therefore be overridden in derived classes to evaluate the 
   state of animation effects used inside the fader. */
XBool EffectsFader_IsFinished( EffectsFader _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  return 1;
}

/* Wrapper function for the virtual method : 'Effects::Fader.IsFinished()' */
XBool EffectsFader__IsFinished( void* _this )
{
  return ((EffectsFader)_this)->_.VMT->IsFinished((EffectsFader)_this );
}

/* The method OnEnd() is invoked automatically just in the moment, when this fader 
   and all other faders belonging to the same fading task have signaled that they 
   are finished with their animations. The default implementation of this method 
   simply does nothing.
   Derived classes can override this method and implement there the code to complete 
   the animation (e.g. to remove the group from its owner after it has been faded-out, 
   etc.). The implementation of the overridden OnEnd() method has to use the variables 
   @Group and @Owner to determine on which group the fader has applied the animation. 
   Depending on the kind of the implemented animation, the OnEnd() method can also 
   evaluate the properties @UseCurrentState, @AssignFocus and @RestackTopmost. */
void EffectsFader_OnEnd( EffectsFader _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Wrapper function for the virtual method : 'Effects::Fader.OnEnd()' */
void EffectsFader__OnEnd( void* _this )
{
  ((EffectsFader)_this)->_.VMT->OnEnd((EffectsFader)_this );
}

/* The method OnStart() is invoked automatically just in the moment, when the fader 
   is triggered to begin its animation. The default implementation of this method 
   simply calls the @Complete() method indicating so, that the fader is done with 
   its work. Thereupon the next fader waiting for its execution can start.
   Derived classes should override this method and implement there the code to prepare 
   and start the desired fade-in/out animation effects. The implementation of the 
   overridden OnStart() method has to use the variables @Group and @Owner to determine 
   on which group the fader should apply the animation. Depending on the kind of 
   the implemented animation, the OnStart() method can also evaluate the properties 
   @UseCurrentState, @AssignFocus and @RestackTopmost.
   Please note, if there is a slot method associated to the property @OnInitialize, 
   this slot method is signaled shortly before the method OnStart() is executed 
   given the slot method a possibility to apply more individual initialization steps 
   on the fader just before the animation begins.
   When the animation reaches its end (e.g. when the animation effects used inside 
   the fader do terminate), your implementation of the fader should invoke the method 
   @Complete() otherwise the animation is considered as still being in progress 
   causing other pending faders to wait. */
void EffectsFader_OnStart( EffectsFader _this )
{
  EffectsFader_Complete( _this );
}

/* Wrapper function for the virtual method : 'Effects::Fader.OnStart()' */
void EffectsFader__OnStart( void* _this )
{
  ((EffectsFader)_this)->_.VMT->OnStart((EffectsFader)_this );
}

/* Variants derived from the class : 'Effects::Fader' */
EW_DEFINE_CLASS_VARIANTS( EffectsFader )
EW_END_OF_CLASS_VARIANTS( EffectsFader )

/* Virtual Method Table (VMT) for the class : 'Effects::Fader' */
EW_DEFINE_CLASS( EffectsFader, XObject, task, task, onCancel, RemoveIfHidden, RemoveIfHidden, 
                 RemoveIfHidden, "Effects::Fader" )
  EffectsFader_IsFinished,
  EffectsFader_OnEnd,
  EffectsFader_OnStart,
EW_END_OF_CLASS( EffectsFader )

/* Initializer for the class 'Effects::VisibilityFader' */
void EffectsVisibilityFader__Init( EffectsVisibilityFader _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  EffectsFader__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( EffectsVisibilityFader );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( EffectsVisibilityFader );

  /* ... and initialize objects, variables, properties, etc. */
}

/* Re-Initializer for the class 'Effects::VisibilityFader' */
void EffectsVisibilityFader__ReInit( EffectsVisibilityFader _this )
{
  /* At first re-initialize the super class ... */
  EffectsFader__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Effects::VisibilityFader' */
void EffectsVisibilityFader__Done( EffectsVisibilityFader _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( EffectsFader );

  /* Don't forget to deinitialize the super class ... */
  EffectsFader__Done( &_this->_.Super );
}

/* The method IsFinished() should return 'true' if the fader has finalized its fading 
   animation and 'false' if the animation is not started or it is still in progress. 
   This method should therefore be overridden in derived classes to evaluate the 
   state of animation effects used inside the fader. */
XBool EffectsVisibilityFader_IsFinished( EffectsVisibilityFader _this )
{
  return _this->finished;
}

/* The method OnEnd() is invoked automatically just in the moment, when this fader 
   and all other faders belonging to the same fading task have signaled that they 
   are finished with their animations. The default implementation of this method 
   simply does nothing.
   Derived classes can override this method and implement there the code to complete 
   the animation (e.g. to remove the group from its owner after it has been faded-out, 
   etc.). The implementation of the overridden OnEnd() method has to use the variables 
   @Group and @Owner to determine on which group the fader has applied the animation. 
   Depending on the kind of the implemented animation, the OnEnd() method can also 
   evaluate the properties @UseCurrentState, @AssignFocus and @RestackTopmost. */
void EffectsVisibilityFader_OnEnd( EffectsVisibilityFader _this )
{
  if ( !_this->Super1.Visible && ( _this->Super1.Group->Super2.Owner != 0 ))
    CoreGroup_OnSetVisible( _this->Super1.Group, 0 );

  if (( !_this->Super1.Visible && _this->Super1.RemoveIfHidden ) && ( _this->Super1.Group->Super2.Owner 
      != 0 ))
    CoreGroup_Remove( _this->Super1.Group->Super2.Owner, ((CoreView)_this->Super1.Group ));

  if ( !_this->Super1.Enabled )
    CoreGroup_OnSetEnabled( _this->Super1.Group, 0 );
}

/* The method OnStart() is invoked automatically just in the moment, when the fader 
   is triggered to begin its animation. The default implementation of this method 
   simply calls the @Complete() method indicating so, that the fader is done with 
   its work. Thereupon the next fader waiting for its execution can start.
   Derived classes should override this method and implement there the code to prepare 
   and start the desired fade-in/out animation effects. The implementation of the 
   overridden OnStart() method has to use the variables @Group and @Owner to determine 
   on which group the fader should apply the animation. Depending on the kind of 
   the implemented animation, the OnStart() method can also evaluate the properties 
   @UseCurrentState, @AssignFocus and @RestackTopmost.
   Please note, if there is a slot method associated to the property @OnInitialize, 
   this slot method is signaled shortly before the method OnStart() is executed 
   given the slot method a possibility to apply more individual initialization steps 
   on the fader just before the animation begins.
   When the animation reaches its end (e.g. when the animation effects used inside 
   the fader do terminate), your implementation of the fader should invoke the method 
   @Complete() otherwise the animation is considered as still being in progress 
   causing other pending faders to wait. */
void EffectsVisibilityFader_OnStart( EffectsVisibilityFader _this )
{
  if ( _this->Super1.Enabled )
    CoreGroup_OnSetEnabled( _this->Super1.Group, 1 );

  if (( _this->Super1.Visible || _this->Super1.AddToOwner ) && ( _this->Super1.Group->Super2.Owner 
      == 0 ))
  {
    CoreGroup_OnSetVisible( _this->Super1.Group, 0 );
    CoreGroup_Add( _this->Super1.Owner, ((CoreView)_this->Super1.Group ), 0 );
  }

  if ( _this->Super1.Visible && _this->Super1.RestackTopmost )
    CoreGroup_RestackTop( _this->Super1.Group->Super2.Owner, ((CoreView)_this->Super1.Group ));

  if ( _this->Super1.Visible && _this->Super1.AssignFocus )
    CoreGroup__OnSetFocus( _this->Super1.Group->Super2.Owner, ((CoreView)_this->Super1.Group ));

  if ( _this->Super1.Visible && !_this->Super1.UseCurrentState )
    CoreRectView__OnSetBounds( _this->Super1.Group, EwSetRectOrigin( _this->Super1.Group->Super1.Bounds, 
    _this->Position ));

  if ( _this->Super1.Visible )
  {
    CoreGroup__OnSetOpacity( _this->Super1.Group, 255 );
    CoreGroup_OnSetVisible( _this->Super1.Group, 1 );
  }

  if ( !_this->Super1.Visible && ( _this->Super1.Owner->Focus == (CoreView)_this->Super1.Group ))
    CoreGroup__OnSetFocus( _this->Super1.Owner, 0 );

  _this->finished = 1;
  EffectsFader_Complete((EffectsFader)_this );
}

/* Variants derived from the class : 'Effects::VisibilityFader' */
EW_DEFINE_CLASS_VARIANTS( EffectsVisibilityFader )
EW_END_OF_CLASS_VARIANTS( EffectsVisibilityFader )

/* Virtual Method Table (VMT) for the class : 'Effects::VisibilityFader' */
EW_DEFINE_CLASS( EffectsVisibilityFader, EffectsFader, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Effects::VisibilityFader" )
  EffectsVisibilityFader_IsFinished,
  EffectsVisibilityFader_OnEnd,
  EffectsVisibilityFader_OnStart,
EW_END_OF_CLASS( EffectsVisibilityFader )

/* Initializer for the class 'Effects::Transition' */
void EffectsTransition__Init( EffectsTransition _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( EffectsTransition );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( EffectsTransition );
}

/* Re-Initializer for the class 'Effects::Transition' */
void EffectsTransition__ReInit( EffectsTransition _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Effects::Transition' */
void EffectsTransition__Done( EffectsTransition _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* The method CreatePresentFader() creates an object of one of the classes descending 
   from Effects::Fader and configures it with parameters according to the desired 
   fade-in (present) transition. Finally the prepared fader object is returned to 
   the caller. Typically, the created fader is used to show (to present) a GUI component 
   when the user navigates to it. The method has to be overridden and implemented 
   in derived classes. The actual implementation does nothing and returns 'null'. */
EffectsFader EffectsTransition_CreatePresentFader( EffectsTransition _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  return 0;
}

/* Wrapper function for the virtual method : 'Effects::Transition.CreatePresentFader()' */
EffectsFader EffectsTransition__CreatePresentFader( void* _this )
{
  return ((EffectsTransition)_this)->_.VMT->CreatePresentFader((EffectsTransition)_this );
}

/* The method CreateDismissFader() creates an object of one of the classes descending 
   from Effects::Fader and configures it with parameters according to the desired 
   fade-out (dismiss) transition. Finally the prepared fader object is returned 
   to the caller. Typically, the created fader is used to hide (to dismiss) a GUI 
   component when the user leaves it while he/she navigates in the GUI system. The 
   method has to be overridden and implemented in derived classes. The actual implementation 
   does nothing and returns 'null'. */
EffectsFader EffectsTransition_CreateDismissFader( EffectsTransition _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  return 0;
}

/* Wrapper function for the virtual method : 'Effects::Transition.CreateDismissFader()' */
EffectsFader EffectsTransition__CreateDismissFader( void* _this )
{
  return ((EffectsTransition)_this)->_.VMT->CreateDismissFader((EffectsTransition)_this );
}

/* The method CreateRestoreFader() creates an object of one of the classes descending 
   from Effects::Fader and configures it with parameters according to the desired 
   fade-in (restore) transition. Finally the prepared fader object is returned to 
   the caller. Typically, the created fader is used to show (to restore the original 
   visible state) of a GUI component, which has been obscured (overlaid) by other 
   GUI components during the user navigates in the GUI system. The method has to 
   be overridden and implemented in derived classes. The actual implementation of 
   this method redirects the operation to the method @CreatePresentFader(). */
EffectsFader EffectsTransition_CreateRestoreFader( EffectsTransition _this )
{
  return EffectsTransition__CreatePresentFader( _this );
}

/* Wrapper function for the virtual method : 'Effects::Transition.CreateRestoreFader()' */
EffectsFader EffectsTransition__CreateRestoreFader( void* _this )
{
  return ((EffectsTransition)_this)->_.VMT->CreateRestoreFader((EffectsTransition)_this );
}

/* The method CreateOverlayFader() creates an object of one of the classes descending 
   from Effects::Fader and configures it with parameters according to the desired 
   fade-out (overlay) transition. Finally the prepared fader object is returned 
   to the caller. Typically, the created fader is used to temporarily hide (to overlay) 
   a GUI component when the user navigates a deeper level in the GUI system. The 
   method has to be overridden and implemented in derived classes. The actual implementation 
   of this method redirects the operation to the method @CreateDismissFader(). */
EffectsFader EffectsTransition_CreateOverlayFader( EffectsTransition _this )
{
  return EffectsTransition__CreateDismissFader( _this );
}

/* Wrapper function for the virtual method : 'Effects::Transition.CreateOverlayFader()' */
EffectsFader EffectsTransition__CreateOverlayFader( void* _this )
{
  return ((EffectsTransition)_this)->_.VMT->CreateOverlayFader((EffectsTransition)_this );
}

/* Variants derived from the class : 'Effects::Transition' */
EW_DEFINE_CLASS_VARIANTS( EffectsTransition )
EW_END_OF_CLASS_VARIANTS( EffectsTransition )

/* Virtual Method Table (VMT) for the class : 'Effects::Transition' */
EW_DEFINE_CLASS( EffectsTransition, XObject, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Effects::Transition" )
  EffectsTransition_CreatePresentFader,
  EffectsTransition_CreateDismissFader,
  EffectsTransition_CreateRestoreFader,
  EffectsTransition_CreateOverlayFader,
EW_END_OF_CLASS( EffectsTransition )

/* Initializer for the class 'Effects::ShowHideTransition' */
void EffectsShowHideTransition__Init( EffectsShowHideTransition _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  EffectsTransition__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( EffectsShowHideTransition );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( EffectsShowHideTransition );

  /* ... and initialize objects, variables, properties, etc. */
}

/* Re-Initializer for the class 'Effects::ShowHideTransition' */
void EffectsShowHideTransition__ReInit( EffectsShowHideTransition _this )
{
  /* At first re-initialize the super class ... */
  EffectsTransition__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Effects::ShowHideTransition' */
void EffectsShowHideTransition__Done( EffectsShowHideTransition _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( EffectsTransition );

  /* Don't forget to deinitialize the super class ... */
  EffectsTransition__Done( &_this->_.Super );
}

/* The method CreatePresentFader() creates an object of one of the classes descending 
   from Effects::Fader and configures it with parameters according to the desired 
   fade-in (present) transition. Finally the prepared fader object is returned to 
   the caller. Typically, the created fader is used to show (to present) a GUI component 
   when the user navigates to it. The method has to be overridden and implemented 
   in derived classes. The actual implementation does nothing and returns 'null'. */
EffectsFader EffectsShowHideTransition_CreatePresentFader( EffectsShowHideTransition _this )
{
  EffectsVisibilityFader fader = EwNewObject( EffectsVisibilityFader, 0 );

  fader->Super1.Visible = 1;
  fader->Super1.Enabled = 1;
  fader->Super1.AssignFocus = 0;
  fader->Super1.RestackTopmost = 1;
  fader->Super1.UseCurrentState = 0;
  fader->Super1.OnInitialize = EwNewSlot( _this, EffectsShowHideTransition_onInitializeIn );
  return ((EffectsFader)fader );
}

/* The method CreateDismissFader() creates an object of one of the classes descending 
   from Effects::Fader and configures it with parameters according to the desired 
   fade-out (dismiss) transition. Finally the prepared fader object is returned 
   to the caller. Typically, the created fader is used to hide (to dismiss) a GUI 
   component when the user leaves it while he/she navigates in the GUI system. The 
   method has to be overridden and implemented in derived classes. The actual implementation 
   does nothing and returns 'null'. */
EffectsFader EffectsShowHideTransition_CreateDismissFader( EffectsShowHideTransition _this )
{
  EffectsVisibilityFader fader;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  fader = EwNewObject( EffectsVisibilityFader, 0 );
  fader->Super1.Visible = 0;
  fader->Super1.Enabled = 0;
  fader->Super1.RemoveIfHidden = 1;
  return ((EffectsFader)fader );
}

/* The method CreateRestoreFader() creates an object of one of the classes descending 
   from Effects::Fader and configures it with parameters according to the desired 
   fade-in (restore) transition. Finally the prepared fader object is returned to 
   the caller. Typically, the created fader is used to show (to restore the original 
   visible state) of a GUI component, which has been obscured (overlaid) by other 
   GUI components during the user navigates in the GUI system. The method has to 
   be overridden and implemented in derived classes. The actual implementation of 
   this method redirects the operation to the method @CreatePresentFader(). */
EffectsFader EffectsShowHideTransition_CreateRestoreFader( EffectsShowHideTransition _this )
{
  EffectsFader fader = EffectsTransition_CreateRestoreFader((EffectsTransition)_this );

  fader->RestackTopmost = 0;
  fader->Enabled = 1;
  return fader;
}

/* The method CreateOverlayFader() creates an object of one of the classes descending 
   from Effects::Fader and configures it with parameters according to the desired 
   fade-out (overlay) transition. Finally the prepared fader object is returned 
   to the caller. Typically, the created fader is used to temporarily hide (to overlay) 
   a GUI component when the user navigates a deeper level in the GUI system. The 
   method has to be overridden and implemented in derived classes. The actual implementation 
   of this method redirects the operation to the method @CreateDismissFader(). */
EffectsFader EffectsShowHideTransition_CreateOverlayFader( EffectsShowHideTransition _this )
{
  EffectsVisibilityFader fader;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  fader = EwNewObject( EffectsVisibilityFader, 0 );
  fader->Super1.Visible = 0;
  fader->Super1.Enabled = 1;
  fader->Super1.AddToOwner = 1;
  fader->Super1.RemoveIfHidden = 0;
  return ((EffectsFader)fader );
}

/* 'C' function for method : 'Effects::ShowHideTransition.onInitializeIn()' */
void EffectsShowHideTransition_onInitializeIn( EffectsShowHideTransition _this, 
  XObject sender )
{
  EffectsVisibilityFader fader;
  XRect bounds;
  XPoint size;
  XPoint pos;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  fader = EwCastObject( sender, EffectsVisibilityFader );
  bounds = EwGetRectORect( fader->Super1.Owner->Super1.Bounds );
  size = EwGetRectSize( fader->Super1.Group->Super1.Bounds );
  pos = bounds.Point1;
  pos.X = (( bounds.Point1.X + ( EwGetRectW( bounds ) / 2 )) - ( size.X / 2 ));
  pos.Y = (( bounds.Point1.Y + ( EwGetRectH( bounds ) / 2 )) - ( size.Y / 2 ));
  fader->Position = pos;
}

/* Variants derived from the class : 'Effects::ShowHideTransition' */
EW_DEFINE_CLASS_VARIANTS( EffectsShowHideTransition )
EW_END_OF_CLASS_VARIANTS( EffectsShowHideTransition )

/* Virtual Method Table (VMT) for the class : 'Effects::ShowHideTransition' */
EW_DEFINE_CLASS( EffectsShowHideTransition, EffectsTransition, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "Effects::ShowHideTransition" )
  EffectsShowHideTransition_CreatePresentFader,
  EffectsShowHideTransition_CreateDismissFader,
  EffectsShowHideTransition_CreateRestoreFader,
  EffectsShowHideTransition_CreateOverlayFader,
EW_END_OF_CLASS( EffectsShowHideTransition )

/* Initializer for the class 'Effects::EffectTimerClass' */
void EffectsEffectTimerClass__Init( EffectsEffectTimerClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreTimer__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( EffectsEffectTimerClass );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( EffectsEffectTimerClass );
}

/* Re-Initializer for the class 'Effects::EffectTimerClass' */
void EffectsEffectTimerClass__ReInit( EffectsEffectTimerClass _this )
{
  /* At first re-initialize the super class ... */
  CoreTimer__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Effects::EffectTimerClass' */
void EffectsEffectTimerClass__Done( EffectsEffectTimerClass _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreTimer );

  /* Don't forget to deinitialize the super class ... */
  CoreTimer__Done( &_this->_.Super );
}

/* The method Trigger() will be invoked when the timer is expired (when the interval 
   defined in @Begin or @Period is elapsed). The method can be overridden and implemented 
   in derived classes. The default implementation of this method sends a signal 
   to the slot method stored in the @OnTrigger property. */
void EffectsEffectTimerClass_Trigger( EffectsEffectTimerClass _this )
{
  CoreTimer_Trigger((CoreTimer)_this );
  EwNotifyObjObservers((XObject)_this, 0 );
}

/* Variants derived from the class : 'Effects::EffectTimerClass' */
EW_DEFINE_CLASS_VARIANTS( EffectsEffectTimerClass )
EW_END_OF_CLASS_VARIANTS( EffectsEffectTimerClass )

/* Virtual Method Table (VMT) for the class : 'Effects::EffectTimerClass' */
EW_DEFINE_CLASS( EffectsEffectTimerClass, CoreTimer, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Effects::EffectTimerClass" )
  EffectsEffectTimerClass_Trigger,
EW_END_OF_CLASS( EffectsEffectTimerClass )

/* The global autoobject Effects::EffectTimer triggers all actually active animation 
   effects. In this way all effects will run simultanously. Per default the timer 
   is configured with 15 ms period (~60 FPS). By overriding the Effects::EffectTimer 
   autoobject by a variant you can specify another resolution to drive the animations. */
EW_DEFINE_AUTOOBJECT( EffectsEffectTimer, EffectsEffectTimerClass )

/* Initializer for the auto object 'Effects::EffectTimer' */
void EffectsEffectTimer__Init( EffectsEffectTimerClass _this )
{
  CoreTimer_OnSetPeriod((CoreTimer)_this, 15 );
  CoreTimer_OnSetEnabled((CoreTimer)_this, 1 );
}

/* Re-Initializer for the auto object 'Effects::EffectTimer' */
void EffectsEffectTimer__ReInit( EffectsEffectTimerClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Effects::EffectTimer' */
EW_DEFINE_AUTOOBJECT_VARIANTS( EffectsEffectTimer )
EW_END_OF_AUTOOBJECT_VARIANTS( EffectsEffectTimer )

/* Initializer for the class 'Effects::FaderTask' */
void EffectsFaderTask__Init( EffectsFaderTask _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreTask__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( EffectsFaderTask );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( EffectsFaderTask );
}

/* Re-Initializer for the class 'Effects::FaderTask' */
void EffectsFaderTask__ReInit( EffectsFaderTask _this )
{
  /* At first re-initialize the super class ... */
  CoreTask__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Effects::FaderTask' */
void EffectsFaderTask__Done( EffectsFaderTask _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreTask );

  /* Don't forget to deinitialize the super class ... */
  CoreTask__Done( &_this->_.Super );
}

/* The method OnComplete() is called when the task is done with its work. The default 
   implementation of this method does nothing. You can override this method in derived 
   task classes and implement what to do when the task is finished. For example, 
   you can release resources used temporarily during animations.
   To complete a task you should call explicitly the method @Complete(). The parameter 
   aQueue refers to the queue this task belonged to. It can be used e.g. to schedule 
   again a task to the same queue, etc. */
void EffectsFaderTask_OnComplete( EffectsFaderTask _this, CoreTaskQueue aQueue )
{
  EffectsFader fader;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aQueue );

  fader = _this->first;

  while ( fader != 0 )
  {
    EffectsFader__OnEnd( fader );
    fader->Group->Super2.viewState = fader->Group->Super2.viewState & ~CoreViewStateRunningFader;
    fader = fader->next;
  }

  fader = _this->first;

  while ( fader != 0 )
  {
    EwPostSignal( fader->onComplete, ((XObject)fader ));
    fader = fader->next;
  }
}

/* The method OnCancel() is called when the task is canceled after being started. 
   The default implementation of this method does nothing. You can override this 
   method in derived task classes and implement what to do when the task is prematurely 
   aborted. For example, you can stop running timers and effects started in the 
   preceding @OnStart() method.
   To cancel a task you should call explicitly the method @Cancel(). The parameter 
   aQueue refers to the queue this task belonged to. It can be used e.g. to schedule 
   again a task to the same queue, etc. */
void EffectsFaderTask_OnCancel( EffectsFaderTask _this, CoreTaskQueue aQueue )
{
  EffectsFader fader;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aQueue );

  fader = _this->first;

  while ( fader != 0 )
  {
    EwPostSignal( fader->onCancel, ((XObject)fader ));
    fader = fader->next;
  }

  _this->first = 0;
  _this->last = 0;
}

/* The method OnStart() is called at the begin of the execution of this task. The 
   default implementation of the method simply cancels the task causing the next 
   available task in the task queue to be started. You should override this method 
   in derived task classes to implement what the task should do.
   There are three typical application cases how to implement the OnStart() method:
   - In its simplest case the entire task algorithm is implemented in the OnStart() 
   method. In this case the method @Complete() should be called before leaving OnStart().
   - If the task does take long time for execution by using timers or effects, you 
   should put in OnStart() the code necessary to start the timers/effects. Don't 
   forget to call @Complete() when all timers/effects are done.
   - If the task is divided in many small execution steps, the OnStart() method 
   should call @Continue() to request the @OnContinue() method to be executed after 
   a short delay (usually after the next screen update). In @OnContinue() you can 
   perform the next step of the task. If necessary, @OnContinue() can also request 
   to be called again after a short delay. At the end of the task, after the last 
   step is terminated, don't forget to call @Complete().
   The parameter aQueue refers to the queue this task belongs to. It can be used 
   to schedule more task to execute later. */
void EffectsFaderTask_OnStart( EffectsFaderTask _this, CoreTaskQueue aQueue )
{
  EffectsFader fader;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aQueue );

  if ( _this->first == 0 )
    CoreTask__Complete( _this );

  fader = _this->first;

  while ( fader != 0 )
  {
    fader->Group->Super2.viewState = ( fader->Group->Super2.viewState | CoreViewStateRunningFader ) 
    & ~CoreViewStatePendingFader;
    fader->Group->pendingFader = 0;
    fader = fader->next;
  }

  fader = _this->first;

  while ( fader != 0 )
  {
    EwSignal( fader->OnInitialize, ((XObject)fader ));
    EffectsFader__OnStart( fader );
    fader = fader->next;
  }
}

/* The method Complete() informs the task queue about the completion of this task. 
   Thereupon the next available task in the queue can be executed. This method is 
   usually called in context of the @OnStart() or @OnContinue() method when the 
   task has finalized its work. Calling the method for a not current task has no 
   effect. */
void EffectsFaderTask_Complete( EffectsFaderTask _this )
{
  EffectsFader fader = _this->first;

  while (( fader != 0 ) && EffectsFader__IsFinished( fader ))
    fader = fader->next;

  if ( fader == 0 )
    CoreTask_Complete((CoreTask)_this );
}

/* 'C' function for method : 'Effects::FaderTask.RemoveFader()' */
void EffectsFaderTask_RemoveFader( EffectsFaderTask _this, EffectsFader aFader )
{
  if ( aFader == 0 )
    return;

  if ( CoreTask_IsCurrent((CoreTask)_this ))
  {
    EwThrow( EwLoadString( &_Const0000 ));
    return;
  }

  if ( aFader->task != _this )
  {
    EwThrow( EwLoadString( &_Const0001 ));
    return;
  }

  if ( aFader->next != 0 )
    aFader->next->prev = aFader->prev;
  else
    _this->last = aFader->prev;

  if ( aFader->prev != 0 )
    aFader->prev->next = aFader->next;
  else
    _this->first = aFader->next;

  aFader->task = 0;
  aFader->next = 0;
  aFader->prev = 0;

  if ( aFader->Group != 0 )
    aFader->Group->pendingFader = 0;

  EwPostSignal( aFader->onCancel, ((XObject)aFader ));

  if ( _this->first == 0 )
    CoreTask_Cancel((CoreTask)_this );
}

/* 'C' function for method : 'Effects::FaderTask.AddFader()' */
void EffectsFaderTask_AddFader( EffectsFaderTask _this, EffectsFader aFader )
{
  if ( aFader == 0 )
    return;

  if ( CoreTask_IsCurrent((CoreTask)_this ))
  {
    EwThrow( EwLoadString( &_Const0002 ));
    return;
  }

  if ( aFader->task != 0 )
  {
    EwThrow( EwLoadString( &_Const0003 ));
    return;
  }

  aFader->prev = _this->last;
  aFader->next = 0;

  if ( _this->last != 0 )
    _this->last->next = aFader;
  else
    _this->first = aFader;

  _this->last = aFader;
  aFader->task = _this;
}

/* Variants derived from the class : 'Effects::FaderTask' */
EW_DEFINE_CLASS_VARIANTS( EffectsFaderTask )
EW_END_OF_CLASS_VARIANTS( EffectsFaderTask )

/* Virtual Method Table (VMT) for the class : 'Effects::FaderTask' */
EW_DEFINE_CLASS( EffectsFaderTask, CoreTask, last, last, _.VMT, _.VMT, _.VMT, _.VMT, 
                 "Effects::FaderTask" )
  EffectsFaderTask_OnComplete,
  EffectsFaderTask_OnCancel,
  EffectsFaderTask_OnStart,
  EffectsFaderTask_Complete,
EW_END_OF_CLASS( EffectsFaderTask )

/* The global autoobject Effects::ShowHideCentered represents the most primitive 
   fade-in/out operation affecting the pure visibility of a given GUI component. 
   When using the transition for the fade-in operation, the GUI component is automatically 
   arranged to appear centered within the area of its owner component. This transition 
   is thus ideal wherever one GUI component should instantly appear or disappear 
   in context of another component without any animation effects.
   Please note, with this transition the fade-in operation is performed just at 
   the beginning of all other transitions running simultaneously, in other words, 
   the GUI component appears during the start phase of the transition. In turn, 
   to fade-out the component, the operation is executed during the end phase of 
   the transition. 
   This object exists for your convenience permitting you to simply refer the transition 
   wherever it is required in your implementation without having to take care of 
   the creation and configuration of the object. If you require the transition to 
   run with other configuration (e.g. to show the GUI component at the end instead 
   of the start phase), create a copy of this object and adapt its properties accordingly. */
EW_DEFINE_AUTOOBJECT( EffectsShowHideCentered, EffectsShowHideTransition )

/* Initializer for the auto object 'Effects::ShowHideCentered' */
void EffectsShowHideCentered__Init( EffectsShowHideTransition _this )
{
  EW_UNUSED_ARG( _this );
}

/* Re-Initializer for the auto object 'Effects::ShowHideCentered' */
void EffectsShowHideCentered__ReInit( EffectsShowHideTransition _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Effects::ShowHideCentered' */
EW_DEFINE_AUTOOBJECT_VARIANTS( EffectsShowHideCentered )
EW_END_OF_AUTOOBJECT_VARIANTS( EffectsShowHideCentered )

/* Embedded Wizard */
