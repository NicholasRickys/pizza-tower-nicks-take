#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif
#ifndef INCLUDED_Fall
#include <Fall.h>
#endif
#ifndef INCLUDED_Idle
#include <Idle.h>
#endif
#ifndef INCLUDED_Jump
#include <Jump.h>
#endif
#ifndef INCLUDED_Mach
#include <Mach.h>
#endif
#ifndef INCLUDED_Peppino
#include <Peppino.h>
#endif
#ifndef INCLUDED_Skid
#include <Skid.h>
#endif
#ifndef INCLUDED_States
#include <States.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_util_FlxFSM
#include <flixel/addons/util/FlxFSM.h>
#endif
#ifndef INCLUDED_flixel_addons_util_FlxFSMState
#include <flixel/addons/util/FlxFSMState.h>
#endif
#ifndef INCLUDED_flixel_addons_util_FlxFSMTransitionTable
#include <flixel/addons/util/FlxFSMTransitionTable.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_72_new,"Peppino","new",0x84581827,"Peppino.new","Peppino.hx",72,0x23086929)
HX_DEFINE_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_81_new,"Peppino","new",0x84581827,"Peppino.new","Peppino.hx",81,0x23086929)
HX_DEFINE_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_82_new,"Peppino","new",0x84581827,"Peppino.new","Peppino.hx",82,0x23086929)
HX_DEFINE_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_83_new,"Peppino","new",0x84581827,"Peppino.new","Peppino.hx",83,0x23086929)
HX_DEFINE_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_85_new,"Peppino","new",0x84581827,"Peppino.new","Peppino.hx",85,0x23086929)
HX_DEFINE_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_86_new,"Peppino","new",0x84581827,"Peppino.new","Peppino.hx",86,0x23086929)
HX_DEFINE_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_88_new,"Peppino","new",0x84581827,"Peppino.new","Peppino.hx",88,0x23086929)
HX_DEFINE_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_90_new,"Peppino","new",0x84581827,"Peppino.new","Peppino.hx",90,0x23086929)
HX_DEFINE_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_91_new,"Peppino","new",0x84581827,"Peppino.new","Peppino.hx",91,0x23086929)
HX_DEFINE_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_93_new,"Peppino","new",0x84581827,"Peppino.new","Peppino.hx",93,0x23086929)
HX_DEFINE_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_18_new,"Peppino","new",0x84581827,"Peppino.new","Peppino.hx",18,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_34_changeState,"Peppino","changeState",0xbf9d0548,"Peppino.changeState","Peppino.hx",34,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_99_update,"Peppino","update",0xcf3114a2,"Peppino.update","Peppino.hx",99,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_115_playAnim,"Peppino","playAnim",0x85a410fe,"Peppino.playAnim","Peppino.hx",115,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_143_walkMovement,"Peppino","walkMovement",0x851b56b1,"Peppino.walkMovement","Peppino.hx",143,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_161_getMovementType,"Peppino","getMovementType",0xb2f41386,"Peppino.getMovementType","Peppino.hx",161,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_169_getMachAnimation,"Peppino","getMachAnimation",0x9841c62e,"Peppino.getMachAnimation","Peppino.hx",169,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_173_getMachSpeed,"Peppino","getMachSpeed",0x475d11b1,"Peppino.getMachSpeed","Peppino.hx",173,0x23086929)
HX_LOCAL_STACK_FRAME(_hx_pos_6c98cdfecbfc073d_181_machMovement,"Peppino","machMovement",0xb82e9ca1,"Peppino.machMovement","Peppino.hx",181,0x23086929)

void Peppino_obj::__construct(Float x,Float y){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Peppino,_gthis) HXARGC(1)
            		void _hx_run(::String name){
            			HX_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_72_new)
HXLINE(  73)			::Array< ::String > names = name.split(HX_("//",20,29,00,00));
HXLINE(  74)			bool _hx_tmp;
HXDLIN(  74)			if (::hx::IsNotNull( names->__get(1) )) {
HXLINE(  74)				_hx_tmp = ::StringTools_obj::startsWith(names->__get(1),HX_("transition",95,8d,af,58));
            			}
            			else {
HXLINE(  74)				_hx_tmp = false;
            			}
HXDLIN(  74)			if (_hx_tmp) {
HXLINE(  76)				_gthis->animation->play((names->__get(0) + HX_("_",5f,00,00,00)),null(),null(),null());
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		bool _hx_run( ::Peppino _){
            			HX_GC_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_81_new)
HXLINE(  81)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  81)			return _this->keyManager->checkStatusUnsafe(32,_this->status);
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Peppino,_gthis) HXARGC(1)
            		bool _hx_run( ::Peppino _){
            			HX_GC_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_82_new)
HXLINE(  82)			return !(((_gthis->touching & 4096) > 0));
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::Peppino,_gthis) HXARGC(1)
            		bool _hx_run( ::Peppino _){
            			HX_GC_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_83_new)
HXLINE(  83)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  83)			if (_this->keyManager->checkStatusUnsafe(16,_this->status)) {
HXLINE(  83)				return ((_gthis->touching & 4096) > 0);
            			}
            			else {
HXLINE(  83)				return false;
            			}
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_4, ::Peppino,_gthis) HXARGC(1)
            		bool _hx_run( ::Peppino _){
            			HX_GC_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_85_new)
HXLINE(  85)			return ((_gthis->touching & 4096) > 0);
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::Peppino,_gthis) HXARGC(1)
            		bool _hx_run( ::Peppino _){
            			HX_GC_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_86_new)
HXLINE(  86)			if (!(((_gthis->touching & 4096) > 0))) {
HXLINE(  86)				return (_gthis->velocity->y >= 0);
            			}
            			else {
HXLINE(  86)				return false;
            			}
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_6, ::Peppino,_gthis) HXARGC(1)
            		bool _hx_run( ::Peppino _){
            			HX_GC_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_88_new)
HXLINE(  88)			return ((_gthis->touching & 4096) > 0);
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_7, ::Peppino,_gthis) HXARGC(1)
            		bool _hx_run( ::Peppino _){
            			HX_GC_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_90_new)
HXLINE(  90)			bool _hx_tmp;
HXDLIN(  90)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->released) );
HXDLIN(  90)			if (_this->keyManager->checkStatusUnsafe(16,_this->status)) {
HXLINE(  90)				_hx_tmp = ((_gthis->touching & 4096) > 0);
            			}
            			else {
HXLINE(  90)				_hx_tmp = false;
            			}
HXDLIN(  90)			if (_hx_tmp) {
HXLINE(  90)				return (_gthis->getMachSpeed() == 0);
            			}
            			else {
HXLINE(  90)				return false;
            			}
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_8, ::Peppino,_gthis) HXARGC(1)
            		bool _hx_run( ::Peppino _){
            			HX_GC_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_91_new)
HXLINE(  91)			bool _hx_tmp;
HXDLIN(  91)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->released) );
HXDLIN(  91)			if (_this->keyManager->checkStatusUnsafe(16,_this->status)) {
HXLINE(  91)				_hx_tmp = ((_gthis->touching & 4096) > 0);
            			}
            			else {
HXLINE(  91)				_hx_tmp = false;
            			}
HXDLIN(  91)			if (_hx_tmp) {
HXLINE(  91)				return (_gthis->getMachSpeed() == 1);
            			}
            			else {
HXLINE(  91)				return false;
            			}
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_9, ::Peppino,_gthis) HXARGC(1)
            		bool _hx_run( ::Peppino _){
            			HX_GC_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_93_new)
HXLINE(  93)			return (_gthis->movespeed <= 120);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_18_new)
HXLINE(  31)		this->hasTransitioned = true;
HXLINE(  29)		this->prevState = ::States_obj::STAND_dyn();
HXLINE(  28)		this->curState = ::States_obj::STAND_dyn();
HXLINE(  26)		this->machrunning = false;
HXLINE(  24)		this->maxMachVelo = ((Float)1400);
HXLINE(  22)		this->movespeed = ((Float)350);
HXLINE(  41)		 ::Peppino _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  42)		super::__construct(x,y,null());
HXLINE(  44)		this->set_frames(::AssetPaths_obj::gmlSprite(HX_("assets/images/peppino",8a,24,96,4c)));
HXLINE(  48)		this->animation->addByPrefix(HX_("idle_",cb,8a,7e,b7),HX_("spr_player_idle_",b7,0c,19,b7),24,null(),null(),null());
HXLINE(  49)		this->animation->addByPrefix(HX_("walk",09,5d,f2,4e),HX_("spr_player_move",a5,02,c2,fd),24,null(),null(),null());
HXLINE(  50)		this->animation->addByPrefix(HX_("jump",ee,c4,69,46),HX_("spr_player_jump",82,e4,ca,fb),24,false,null(),null());
HXLINE(  52)		this->animation->addByPrefix(HX_("mach_1",2b,f6,83,b0),HX_("spr_player_mach1_",db,fa,1a,58),24,false,null(),null());
HXLINE(  53)		this->animation->addByPrefix(HX_("mach_2",2c,f6,83,b0),HX_("spr_player_mach4",07,e9,b0,02),24,null(),null(),null());
HXLINE(  55)		this->animation->addByPrefix(HX_("mach_stop//transition_",c2,40,4a,5c),HX_("spr_player_machslidestart",5e,22,c9,1a),24,false,null(),null());
HXLINE(  56)		this->animation->addByPrefix(HX_("mach_stop_",17,8d,65,50),HX_("spr_player_machslide_",5b,00,58,d8),24,true,null(),null());
HXLINE(  58)		this->animation->addByPrefix(HX_("idle//transition-SKID ",89,d3,3c,0d),HX_("spr_player_machslideend",d7,fa,a1,9e),24,false,null(),null());
HXLINE(  59)		this->set_width(( (Float)(37) ));
HXLINE(  61)		this->set_height(( (Float)(60) ));
HXLINE(  63)		this->offset->set_y(( (Float)(35) ));
HXLINE(  67)		this->maxVelocity->set_x(( (Float)(250) ));
HXLINE(  68)		this->drag->set_x((this->maxVelocity->x * ( (Float)(4) )));
HXLINE(  69)		this->acceleration->set_y(( (Float)(900) ));
HXLINE(  71)		this->animation->finishCallback =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE(  80)		this->fsm =  ::flixel::addons::util::FlxFSM_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),null());
HXLINE(  81)		this->fsm->transitions->add(::hx::ClassOf< ::Idle >(),::hx::ClassOf< ::Jump >(), ::Dynamic(new _hx_Closure_1()));
HXLINE(  82)		this->fsm->transitions->add(::hx::ClassOf< ::Idle >(),::hx::ClassOf< ::Fall >(), ::Dynamic(new _hx_Closure_2(_gthis)));
HXLINE(  83)		this->fsm->transitions->add(::hx::ClassOf< ::Idle >(),::hx::ClassOf< ::Mach >(), ::Dynamic(new _hx_Closure_3(_gthis)));
HXLINE(  85)		this->fsm->transitions->add(::hx::ClassOf< ::Jump >(),::hx::ClassOf< ::Idle >(), ::Dynamic(new _hx_Closure_4(_gthis)));
HXLINE(  86)		this->fsm->transitions->add(::hx::ClassOf< ::Jump >(),::hx::ClassOf< ::Fall >(), ::Dynamic(new _hx_Closure_5(_gthis)));
HXLINE(  88)		this->fsm->transitions->add(::hx::ClassOf< ::Fall >(),::hx::ClassOf< ::Idle >(), ::Dynamic(new _hx_Closure_6(_gthis)));
HXLINE(  90)		this->fsm->transitions->add(::hx::ClassOf< ::Mach >(),::hx::ClassOf< ::Idle >(), ::Dynamic(new _hx_Closure_7(_gthis)));
HXLINE(  91)		this->fsm->transitions->add(::hx::ClassOf< ::Mach >(),::hx::ClassOf< ::Skid >(), ::Dynamic(new _hx_Closure_8(_gthis)));
HXLINE(  93)		this->fsm->transitions->add(::hx::ClassOf< ::Skid >(),::hx::ClassOf< ::Idle >(), ::Dynamic(new _hx_Closure_9(_gthis)));
HXLINE(  95)		this->fsm->transitions->start(::hx::ClassOf< ::Idle >());
            	}

Dynamic Peppino_obj::__CreateEmpty() { return new Peppino_obj; }

void *Peppino_obj::_hx_vtable = 0;

Dynamic Peppino_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Peppino_obj > _hx_result = new Peppino_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Peppino_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x052ff111) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x052ff111;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Peppino_obj::changeState( ::States state){
            	HX_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_34_changeState)
HXLINE(  35)		this->hasTransitioned = false;
HXLINE(  36)		this->prevState = this->curState;
HXLINE(  37)		this->curState = state;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Peppino_obj,changeState,(void))

void Peppino_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_99_update)
HXLINE( 100)		this->fsm->update(elapsed);
HXLINE( 101)		this->super::update(elapsed);
HXLINE( 103)		bool _hx_tmp;
HXDLIN( 103)		if ((this->velocity->x < 0)) {
HXLINE( 103)			_hx_tmp = !(this->flipX);
            		}
            		else {
HXLINE( 103)			_hx_tmp = false;
            		}
HXDLIN( 103)		if (_hx_tmp) {
HXLINE( 104)			this->set_flipX(true);
            		}
            		else {
HXLINE( 105)			bool _hx_tmp;
HXDLIN( 105)			if ((this->velocity->x > 0)) {
HXLINE( 105)				_hx_tmp = this->flipX;
            			}
            			else {
HXLINE( 105)				_hx_tmp = false;
            			}
HXDLIN( 105)			if (_hx_tmp) {
HXLINE( 106)				this->set_flipX(false);
            			}
            		}
HXLINE( 108)		if (!(this->flipX)) {
HXLINE( 109)			this->offset->set_x(( (Float)(27) ));
            		}
            		else {
HXLINE( 111)			this->offset->set_x(( (Float)(35) ));
            		}
            	}


void Peppino_obj::playAnim(::String animationName, ::Dynamic __o_force){
            		 ::Dynamic force = __o_force;
            		if (::hx::IsNull(__o_force)) force = false;
            	HX_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_115_playAnim)
HXLINE( 116)		::String animToPlay = animationName;
HXLINE( 118)		if (::hx::IsNotNull( this->animation->_animations->get((animationName + HX_("_",5f,00,00,00))) )) {
HXLINE( 119)			animToPlay = (animationName + HX_("_",5f,00,00,00));
            		}
HXLINE( 121)		if (!(this->hasTransitioned)) {
HXLINE( 123)			if (::hx::IsNotNull( this->animation->_animations->get(((HX_("",00,00,00,00) + animationName) + HX_("//transition_",0a,80,68,21))) )) {
HXLINE( 125)				animToPlay = ((HX_("",00,00,00,00) + animationName) + HX_("//transition_",0a,80,68,21));
HXLINE( 126)				this->hasTransitioned = true;
            			}
HXLINE( 129)			::String state = ::Std_obj::string(this->prevState);
HXLINE( 130)			::haxe::Log_obj::trace((((HX_("",00,00,00,00) + animationName) + HX_("//transition-",d8,7f,68,21)) + state),::hx::SourceInfo(HX_("source/Peppino.hx",1d,31,6d,af),130,HX_("Peppino",b5,78,f9,27),HX_("playAnim",25,ea,84,30)));
HXLINE( 131)			if (::hx::IsNotNull( this->animation->_animations->get((((HX_("",00,00,00,00) + animationName) + HX_("//transition-",d8,7f,68,21)) + state)) )) {
HXLINE( 133)				animToPlay = (((HX_("",00,00,00,00) + animationName) + HX_("//transition-",d8,7f,68,21)) + state);
HXLINE( 134)				::haxe::Log_obj::trace(animToPlay,::hx::SourceInfo(HX_("source/Peppino.hx",1d,31,6d,af),134,HX_("Peppino",b5,78,f9,27),HX_("playAnim",25,ea,84,30)));
HXLINE( 135)				this->hasTransitioned = true;
            			}
            		}
HXLINE( 138)		this->animation->play(animToPlay,force,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Peppino_obj,playAnim,(void))

void Peppino_obj::walkMovement(){
            	HX_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_143_walkMovement)
HXLINE( 144)		int speed = 825;
HXLINE( 145)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 145)		if (_this->keyManager->checkStatusUnsafe(65,_this->status)) {
HXLINE( 146)			this->acceleration->set_x(( (Float)(-(speed)) ));
            		}
            		else {
HXLINE( 147)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 147)			if (_this->keyManager->checkStatusUnsafe(68,_this->status)) {
HXLINE( 148)				this->acceleration->set_x(( (Float)(speed) ));
            			}
            			else {
HXLINE( 151)				this->velocity->set_x(( (Float)(0) ));
HXLINE( 152)				this->acceleration->set_x(( (Float)(0) ));
            			}
            		}
HXLINE( 155)		bool _hx_tmp;
HXDLIN( 155)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justReleased) );
HXDLIN( 155)		if (!(_this1->keyManager->checkStatusUnsafe(65,_this1->status))) {
HXLINE( 155)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justReleased) );
HXDLIN( 155)			_hx_tmp = _this->keyManager->checkStatusUnsafe(68,_this->status);
            		}
            		else {
HXLINE( 155)			_hx_tmp = true;
            		}
HXDLIN( 155)		if (_hx_tmp) {
HXLINE( 156)			this->velocity->set_x(( (Float)(0) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Peppino_obj,walkMovement,(void))

 ::Dynamic Peppino_obj::getMovementType(){
            	HX_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_161_getMovementType)
HXDLIN( 161)		if (this->machrunning) {
HXLINE( 162)			return this->machMovement_dyn();
            		}
            		else {
HXLINE( 164)			return this->walkMovement_dyn();
            		}
HXLINE( 161)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Peppino_obj,getMovementType,return )

::String Peppino_obj::getMachAnimation(){
            	HX_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_169_getMachAnimation)
HXDLIN( 169)		return HX_("mach_1",2b,f6,83,b0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Peppino_obj,getMachAnimation,return )

int Peppino_obj::getMachSpeed(){
            	HX_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_173_getMachSpeed)
HXLINE( 174)		if ((this->movespeed > 850)) {
HXLINE( 175)			return 1;
            		}
HXLINE( 177)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Peppino_obj,getMachSpeed,return )

void Peppino_obj::machMovement(){
            	HX_STACKFRAME(&_hx_pos_6c98cdfecbfc073d_181_machMovement)
HXLINE( 182)		if ((this->movespeed < this->maxMachVelo)) {
HXLINE( 183)			 ::Peppino _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)			_hx_tmp->movespeed = (_hx_tmp->movespeed + 25);
            		}
HXLINE( 185)		int turn;
HXDLIN( 185)		if (this->flipX) {
HXLINE( 185)			turn = -1;
            		}
            		else {
HXLINE( 185)			turn = 1;
            		}
HXLINE( 187)		this->velocity->set_x((this->movespeed * ( (Float)(turn) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Peppino_obj,machMovement,(void))


::hx::ObjectPtr< Peppino_obj > Peppino_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< Peppino_obj > __this = new Peppino_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< Peppino_obj > Peppino_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	Peppino_obj *__this = (Peppino_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Peppino_obj), true, "Peppino"));
	*(void **)__this = Peppino_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

Peppino_obj::Peppino_obj()
{
}

void Peppino_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Peppino);
	HX_MARK_MEMBER_NAME(fsm,"fsm");
	HX_MARK_MEMBER_NAME(movespeed,"movespeed");
	HX_MARK_MEMBER_NAME(maxMachVelo,"maxMachVelo");
	HX_MARK_MEMBER_NAME(machrunning,"machrunning");
	HX_MARK_MEMBER_NAME(curState,"curState");
	HX_MARK_MEMBER_NAME(prevState,"prevState");
	HX_MARK_MEMBER_NAME(hasTransitioned,"hasTransitioned");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Peppino_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fsm,"fsm");
	HX_VISIT_MEMBER_NAME(movespeed,"movespeed");
	HX_VISIT_MEMBER_NAME(maxMachVelo,"maxMachVelo");
	HX_VISIT_MEMBER_NAME(machrunning,"machrunning");
	HX_VISIT_MEMBER_NAME(curState,"curState");
	HX_VISIT_MEMBER_NAME(prevState,"prevState");
	HX_VISIT_MEMBER_NAME(hasTransitioned,"hasTransitioned");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Peppino_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fsm") ) { return ::hx::Val( fsm ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curState") ) { return ::hx::Val( curState ); }
		if (HX_FIELD_EQ(inName,"playAnim") ) { return ::hx::Val( playAnim_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"movespeed") ) { return ::hx::Val( movespeed ); }
		if (HX_FIELD_EQ(inName,"prevState") ) { return ::hx::Val( prevState ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxMachVelo") ) { return ::hx::Val( maxMachVelo ); }
		if (HX_FIELD_EQ(inName,"machrunning") ) { return ::hx::Val( machrunning ); }
		if (HX_FIELD_EQ(inName,"changeState") ) { return ::hx::Val( changeState_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"walkMovement") ) { return ::hx::Val( walkMovement_dyn() ); }
		if (HX_FIELD_EQ(inName,"getMachSpeed") ) { return ::hx::Val( getMachSpeed_dyn() ); }
		if (HX_FIELD_EQ(inName,"machMovement") ) { return ::hx::Val( machMovement_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasTransitioned") ) { return ::hx::Val( hasTransitioned ); }
		if (HX_FIELD_EQ(inName,"getMovementType") ) { return ::hx::Val( getMovementType_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getMachAnimation") ) { return ::hx::Val( getMachAnimation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Peppino_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fsm") ) { fsm=inValue.Cast<  ::flixel::addons::util::FlxFSM >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curState") ) { curState=inValue.Cast<  ::States >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"movespeed") ) { movespeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prevState") ) { prevState=inValue.Cast<  ::States >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxMachVelo") ) { maxMachVelo=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"machrunning") ) { machrunning=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasTransitioned") ) { hasTransitioned=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Peppino_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fsm",80,ca,4d,00));
	outFields->push(HX_("movespeed",d6,f6,02,ac));
	outFields->push(HX_("maxMachVelo",cf,09,09,42));
	outFields->push(HX_("machrunning",26,7c,2e,76));
	outFields->push(HX_("curState",71,70,b9,cb));
	outFields->push(HX_("prevState",1e,16,62,6f));
	outFields->push(HX_("hasTransitioned",ae,5f,4e,f5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Peppino_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::addons::util::FlxFSM */ ,(int)offsetof(Peppino_obj,fsm),HX_("fsm",80,ca,4d,00)},
	{::hx::fsFloat,(int)offsetof(Peppino_obj,movespeed),HX_("movespeed",d6,f6,02,ac)},
	{::hx::fsFloat,(int)offsetof(Peppino_obj,maxMachVelo),HX_("maxMachVelo",cf,09,09,42)},
	{::hx::fsBool,(int)offsetof(Peppino_obj,machrunning),HX_("machrunning",26,7c,2e,76)},
	{::hx::fsObject /*  ::States */ ,(int)offsetof(Peppino_obj,curState),HX_("curState",71,70,b9,cb)},
	{::hx::fsObject /*  ::States */ ,(int)offsetof(Peppino_obj,prevState),HX_("prevState",1e,16,62,6f)},
	{::hx::fsBool,(int)offsetof(Peppino_obj,hasTransitioned),HX_("hasTransitioned",ae,5f,4e,f5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Peppino_obj_sStaticStorageInfo = 0;
#endif

static ::String Peppino_obj_sMemberFields[] = {
	HX_("fsm",80,ca,4d,00),
	HX_("movespeed",d6,f6,02,ac),
	HX_("maxMachVelo",cf,09,09,42),
	HX_("machrunning",26,7c,2e,76),
	HX_("curState",71,70,b9,cb),
	HX_("prevState",1e,16,62,6f),
	HX_("hasTransitioned",ae,5f,4e,f5),
	HX_("changeState",81,1e,d1,a9),
	HX_("update",09,86,05,87),
	HX_("playAnim",25,ea,84,30),
	HX_("walkMovement",58,4f,7d,88),
	HX_("getMovementType",3f,bd,7f,9d),
	HX_("getMachAnimation",55,9e,ea,e7),
	HX_("getMachSpeed",58,0a,bf,4a),
	HX_("machMovement",48,95,90,bb),
	::String(null()) };

::hx::Class Peppino_obj::__mClass;

void Peppino_obj::__register()
{
	Peppino_obj _hx_dummy;
	Peppino_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Peppino",b5,78,f9,27);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Peppino_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Peppino_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Peppino_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Peppino_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
