#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_18_new,"flixel.group.FlxTypedGroup","new",0x9772c4d8,"flixel.group.FlxTypedGroup.new","flixel/group/FlxGroup.hx",18,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_133_destroy,"flixel.group.FlxTypedGroup","destroy",0x8044bd72,"flixel.group.FlxTypedGroup.destroy","flixel/group/FlxGroup.hx",133,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_160_update,"flixel.group.FlxTypedGroup","update",0x4e08ac91,"flixel.group.FlxTypedGroup.update","flixel/group/FlxGroup.hx",160,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_179_draw,"flixel.group.FlxTypedGroup","draw",0xe667208c,"flixel.group.FlxTypedGroup.draw","flixel/group/FlxGroup.hx",179,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_213_add,"flixel.group.FlxTypedGroup","add",0x9768e699,"flixel.group.FlxTypedGroup.add","flixel/group/FlxGroup.hx",213,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_268_insert,"flixel.group.FlxTypedGroup","insert",0x64e069c1,"flixel.group.FlxTypedGroup.insert","flixel/group/FlxGroup.hx",268,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_330_recycle,"flixel.group.FlxTypedGroup","recycle",0x934aa08b,"flixel.group.FlxTypedGroup.recycle","flixel/group/FlxGroup.hx",330,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_373_recycleCreateObject,"flixel.group.FlxTypedGroup","recycleCreateObject",0x87e5d006,"flixel.group.FlxTypedGroup.recycleCreateObject","flixel/group/FlxGroup.hx",373,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_392_remove,"flixel.group.FlxTypedGroup","remove",0xcb8bc2cc,"flixel.group.FlxTypedGroup.remove","flixel/group/FlxGroup.hx",392,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_424_replace,"flixel.group.FlxTypedGroup","replace",0x06e6d8ac,"flixel.group.FlxTypedGroup.replace","flixel/group/FlxGroup.hx",424,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_452_sort,"flixel.group.FlxTypedGroup","sort",0xf04f1be6,"flixel.group.FlxTypedGroup.sort","flixel/group/FlxGroup.hx",452,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_465_getFirstAvailable,"flixel.group.FlxTypedGroup","getFirstAvailable",0x3f88c127,"flixel.group.FlxTypedGroup.getFirstAvailable","flixel/group/FlxGroup.hx",465,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_493_getFirstNull,"flixel.group.FlxTypedGroup","getFirstNull",0xc17e73e9,"flixel.group.FlxTypedGroup.getFirstNull","flixel/group/FlxGroup.hx",493,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_513_getFirstExisting,"flixel.group.FlxTypedGroup","getFirstExisting",0x314444ed,"flixel.group.FlxTypedGroup.getFirstExisting","flixel/group/FlxGroup.hx",513,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_535_getFirstAlive,"flixel.group.FlxTypedGroup","getFirstAlive",0x0afc442b,"flixel.group.FlxTypedGroup.getFirstAlive","flixel/group/FlxGroup.hx",535,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_557_getFirstDead,"flixel.group.FlxTypedGroup","getFirstDead",0xbad62406,"flixel.group.FlxTypedGroup.getFirstDead","flixel/group/FlxGroup.hx",557,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_578_countLiving,"flixel.group.FlxTypedGroup","countLiving",0x0ee705d0,"flixel.group.FlxTypedGroup.countLiving","flixel/group/FlxGroup.hx",578,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_605_countDead,"flixel.group.FlxTypedGroup","countDead",0x0964718b,"flixel.group.FlxTypedGroup.countDead","flixel/group/FlxGroup.hx",605,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_635_getRandom,"flixel.group.FlxTypedGroup","getRandom",0xe8c349b1,"flixel.group.FlxTypedGroup.getRandom","flixel/group/FlxGroup.hx",635,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_649_clear,"flixel.group.FlxTypedGroup","clear",0x1c7a7405,"flixel.group.FlxTypedGroup.clear","flixel/group/FlxGroup.hx",649,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_669_kill,"flixel.group.FlxTypedGroup","kill",0xeb00d426,"flixel.group.FlxTypedGroup.kill","flixel/group/FlxGroup.hx",669,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_688_revive,"flixel.group.FlxTypedGroup","revive",0xd17a20dd,"flixel.group.FlxTypedGroup.revive","flixel/group/FlxGroup.hx",688,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_708_iterator,"flixel.group.FlxTypedGroup","iterator",0x7e9a2276,"flixel.group.FlxTypedGroup.iterator","flixel/group/FlxGroup.hx",708,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_718_forEach,"flixel.group.FlxTypedGroup","forEach",0x207cba22,"flixel.group.FlxTypedGroup.forEach","flixel/group/FlxGroup.hx",718,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_747_forEachAlive,"flixel.group.FlxTypedGroup","forEachAlive",0x4c021e4b,"flixel.group.FlxTypedGroup.forEachAlive","flixel/group/FlxGroup.hx",747,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_776_forEachDead,"flixel.group.FlxTypedGroup","forEachDead",0x5740ede6,"flixel.group.FlxTypedGroup.forEachDead","flixel/group/FlxGroup.hx",776,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_805_forEachExists,"flixel.group.FlxTypedGroup","forEachExists",0xb812919e,"flixel.group.FlxTypedGroup.forEachExists","flixel/group/FlxGroup.hx",805,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_835_forEachOfType,"flixel.group.FlxTypedGroup","forEachOfType",0x4c90cb33,"flixel.group.FlxTypedGroup.forEachOfType","flixel/group/FlxGroup.hx",835,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_860_set_maxSize,"flixel.group.FlxTypedGroup","set_maxSize",0x3b478d20,"flixel.group.FlxTypedGroup.set_maxSize","flixel/group/FlxGroup.hx",860,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_895_get_memberAdded,"flixel.group.FlxTypedGroup","get_memberAdded",0xd5201c15,"flixel.group.FlxTypedGroup.get_memberAdded","flixel/group/FlxGroup.hx",895,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_904_get_memberRemoved,"flixel.group.FlxTypedGroup","get_memberRemoved",0xd0fca635,"flixel.group.FlxTypedGroup.get_memberRemoved","flixel/group/FlxGroup.hx",904,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_26_overlaps,"flixel.group.FlxTypedGroup","overlaps",0x302aab94,"flixel.group.FlxTypedGroup.overlaps","flixel/group/FlxGroup.hx",26,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_50_resolveGroup,"flixel.group.FlxTypedGroup","resolveGroup",0x84c4b53b,"flixel.group.FlxTypedGroup.resolveGroup","flixel/group/FlxGroup.hx",50,0x1e89d58e)
namespace flixel{
namespace group{

void FlxTypedGroup_obj::__construct(::hx::Null< int >  __o_MaxSize){
            		int MaxSize = __o_MaxSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_18_new)
HXLINE( 108)		this->_marker = 0;
HXLINE(  81)		this->length = 0;
HXLINE( 115)		super::__construct();
HXLINE( 117)		this->members = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 118)		this->set_maxSize(::Std_obj::_hx_int(::Math_obj::abs(( (Float)(MaxSize) ))));
HXLINE( 119)		this->flixelType = 2;
            	}

Dynamic FlxTypedGroup_obj::__CreateEmpty() { return new FlxTypedGroup_obj; }

void *FlxTypedGroup_obj::_hx_vtable = 0;

Dynamic FlxTypedGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTypedGroup_obj > _hx_result = new FlxTypedGroup_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxTypedGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void FlxTypedGroup_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_133_destroy)
HXLINE( 134)		this->super::destroy();
HXLINE( 136)		::flixel::util::FlxDestroyUtil_obj::destroy(this->_memberAdded);
HXLINE( 137)		::flixel::util::FlxDestroyUtil_obj::destroy(this->_memberRemoved);
HXLINE( 139)		if (::hx::IsNotNull( this->members )) {
HXLINE( 141)			int i = 0;
HXLINE( 142)			 ::flixel::FlxBasic basic = null();
HXLINE( 144)			while((i < this->length)){
HXLINE( 146)				i = (i + 1);
HXDLIN( 146)				basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 148)				if (::hx::IsNotNull( basic )) {
HXLINE( 149)					basic->destroy();
            				}
            			}
HXLINE( 152)			this->members = null();
            		}
            	}


void FlxTypedGroup_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_160_update)
HXLINE( 161)		int i = 0;
HXLINE( 162)		 ::flixel::FlxBasic basic = null();
HXLINE( 164)		while((i < this->length)){
HXLINE( 166)			i = (i + 1);
HXDLIN( 166)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 168)			bool _hx_tmp;
HXDLIN( 168)			bool _hx_tmp1;
HXDLIN( 168)			if (::hx::IsNotNull( basic )) {
HXLINE( 168)				_hx_tmp1 = basic->exists;
            			}
            			else {
HXLINE( 168)				_hx_tmp1 = false;
            			}
HXDLIN( 168)			if (_hx_tmp1) {
HXLINE( 168)				_hx_tmp = basic->active;
            			}
            			else {
HXLINE( 168)				_hx_tmp = false;
            			}
HXDLIN( 168)			if (_hx_tmp) {
HXLINE( 170)				basic->update(elapsed);
            			}
            		}
            	}


void FlxTypedGroup_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_179_draw)
HXLINE( 180)		int i = 0;
HXLINE( 181)		 ::flixel::FlxBasic basic = null();
HXLINE( 183)		::Array< ::Dynamic> oldDefaultCameras = ::flixel::FlxCamera_obj::_defaultCameras;
HXLINE( 184)		if (::hx::IsNotNull( this->get_cameras() )) {
HXLINE( 186)			::flixel::FlxCamera_obj::_defaultCameras = this->get_cameras();
            		}
HXLINE( 189)		while((i < this->length)){
HXLINE( 191)			i = (i + 1);
HXDLIN( 191)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 193)			bool _hx_tmp;
HXDLIN( 193)			bool _hx_tmp1;
HXDLIN( 193)			if (::hx::IsNotNull( basic )) {
HXLINE( 193)				_hx_tmp1 = basic->exists;
            			}
            			else {
HXLINE( 193)				_hx_tmp1 = false;
            			}
HXDLIN( 193)			if (_hx_tmp1) {
HXLINE( 193)				_hx_tmp = basic->visible;
            			}
            			else {
HXLINE( 193)				_hx_tmp = false;
            			}
HXDLIN( 193)			if (_hx_tmp) {
HXLINE( 195)				basic->draw();
            			}
            		}
HXLINE( 199)		::flixel::FlxCamera_obj::_defaultCameras = oldDefaultCameras;
            	}


 ::Dynamic FlxTypedGroup_obj::add( ::Dynamic Object){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_213_add)
HXLINE( 214)		if (::hx::IsNull( Object )) {
HXLINE( 217)			return null();
            		}
HXLINE( 221)		if ((this->members->indexOf(Object,null()) >= 0)) {
HXLINE( 222)			return Object;
            		}
HXLINE( 225)		int index = this->getFirstNull();
HXLINE( 226)		if ((index != -1)) {
HXLINE( 228)			this->members->set(index,Object);
HXLINE( 230)			if ((index >= this->length)) {
HXLINE( 232)				this->length = (index + 1);
            			}
HXLINE( 235)			if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 236)				this->_memberAdded->dispatch(Object);
            			}
HXLINE( 238)			return Object;
            		}
HXLINE( 242)		bool _hx_tmp;
HXDLIN( 242)		if ((this->maxSize > 0)) {
HXLINE( 242)			_hx_tmp = (this->length >= this->maxSize);
            		}
            		else {
HXLINE( 242)			_hx_tmp = false;
            		}
HXDLIN( 242)		if (_hx_tmp) {
HXLINE( 243)			return Object;
            		}
HXLINE( 246)		this->members->push(Object);
HXLINE( 247)		this->length++;
HXLINE( 249)		if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 250)			this->_memberAdded->dispatch(Object);
            		}
HXLINE( 252)		return Object;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,add,return )

 ::Dynamic FlxTypedGroup_obj::insert(int position, ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_268_insert)
HXLINE( 269)		if (::hx::IsNull( object )) {
HXLINE( 272)			return null();
            		}
HXLINE( 276)		if ((this->members->indexOf(object,null()) >= 0)) {
HXLINE( 277)			return object;
            		}
HXLINE( 280)		bool _hx_tmp;
HXDLIN( 280)		if ((position < this->length)) {
HXLINE( 280)			_hx_tmp = ::hx::IsNull( this->members->__get(position) );
            		}
            		else {
HXLINE( 280)			_hx_tmp = false;
            		}
HXDLIN( 280)		if (_hx_tmp) {
HXLINE( 282)			this->members->set(position,object);
HXLINE( 284)			if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 285)				this->_memberAdded->dispatch(object);
            			}
HXLINE( 287)			return object;
            		}
HXLINE( 291)		bool _hx_tmp1;
HXDLIN( 291)		if ((this->maxSize > 0)) {
HXLINE( 291)			_hx_tmp1 = (this->length >= this->maxSize);
            		}
            		else {
HXLINE( 291)			_hx_tmp1 = false;
            		}
HXDLIN( 291)		if (_hx_tmp1) {
HXLINE( 292)			return object;
            		}
HXLINE( 295)		this->members->insert(position,object);
HXLINE( 296)		this->length++;
HXLINE( 298)		if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 299)			this->_memberAdded->dispatch(object);
            		}
HXLINE( 301)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,insert,return )

 ::Dynamic FlxTypedGroup_obj::recycle(::hx::Class ObjectClass, ::Dynamic ObjectFactory,::hx::Null< bool >  __o_Force,::hx::Null< bool >  __o_Revive){
            		bool Force = __o_Force.Default(false);
            		bool Revive = __o_Revive.Default(true);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_330_recycle)
HXLINE( 331)		 ::flixel::FlxBasic basic = null();
HXLINE( 334)		if ((this->maxSize > 0)) {
HXLINE( 337)			if ((this->length < this->maxSize)) {
HXLINE( 339)				 ::Dynamic object = null();
HXDLIN( 339)				if (::hx::IsNotNull( ObjectFactory )) {
HXLINE( 339)					object = ObjectFactory();
HXDLIN( 339)					this->add(object);
            				}
            				else {
HXLINE( 339)					if (::hx::IsNotNull( ObjectClass )) {
HXLINE( 339)						object = ::Type_obj::createInstance(ObjectClass,::cpp::VirtualArray_obj::__new(0));
HXDLIN( 339)						this->add(object);
            					}
            				}
HXDLIN( 339)				return object;
            			}
            			else {
HXLINE( 344)				basic = ( ( ::flixel::FlxBasic)(this->members->__get(this->_marker++)) );
HXLINE( 346)				if ((this->_marker >= this->maxSize)) {
HXLINE( 347)					this->_marker = 0;
            				}
HXLINE( 349)				if (Revive) {
HXLINE( 350)					basic->revive();
            				}
HXLINE( 352)				return basic;
            			}
            		}
            		else {
HXLINE( 358)			basic = ( ( ::flixel::FlxBasic)(this->getFirstAvailable(ObjectClass,Force)) );
HXLINE( 360)			if (::hx::IsNotNull( basic )) {
HXLINE( 362)				if (Revive) {
HXLINE( 363)					basic->revive();
            				}
HXLINE( 364)				return basic;
            			}
HXLINE( 367)			 ::Dynamic object = null();
HXDLIN( 367)			if (::hx::IsNotNull( ObjectFactory )) {
HXLINE( 367)				object = ObjectFactory();
HXDLIN( 367)				this->add(object);
            			}
            			else {
HXLINE( 367)				if (::hx::IsNotNull( ObjectClass )) {
HXLINE( 367)					object = ::Type_obj::createInstance(ObjectClass,::cpp::VirtualArray_obj::__new(0));
HXDLIN( 367)					this->add(object);
            				}
            			}
HXDLIN( 367)			return object;
            		}
HXLINE( 334)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedGroup_obj,recycle,return )

 ::Dynamic FlxTypedGroup_obj::recycleCreateObject(::hx::Class ObjectClass, ::Dynamic ObjectFactory){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_373_recycleCreateObject)
HXLINE( 374)		 ::Dynamic object = null();
HXLINE( 376)		if (::hx::IsNotNull( ObjectFactory )) {
HXLINE( 377)			object = ObjectFactory();
HXDLIN( 377)			this->add(object);
            		}
            		else {
HXLINE( 378)			if (::hx::IsNotNull( ObjectClass )) {
HXLINE( 379)				object = ::Type_obj::createInstance(ObjectClass,::cpp::VirtualArray_obj::__new(0));
HXDLIN( 379)				this->add(object);
            			}
            		}
HXLINE( 381)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,recycleCreateObject,return )

 ::Dynamic FlxTypedGroup_obj::remove( ::Dynamic Object,::hx::Null< bool >  __o_Splice){
            		bool Splice = __o_Splice.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_392_remove)
HXLINE( 393)		if (::hx::IsNull( this->members )) {
HXLINE( 394)			return null();
            		}
HXLINE( 396)		int index = this->members->indexOf(Object,null());
HXLINE( 398)		if ((index < 0)) {
HXLINE( 399)			return null();
            		}
HXLINE( 401)		if (Splice) {
HXLINE( 403)			this->members->splice(index,1);
HXLINE( 404)			this->length--;
            		}
            		else {
HXLINE( 407)			this->members->set(index,null());
            		}
HXLINE( 409)		if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 410)			this->_memberRemoved->dispatch(Object);
            		}
HXLINE( 412)		return Object;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,remove,return )

 ::Dynamic FlxTypedGroup_obj::replace( ::Dynamic OldObject, ::Dynamic NewObject){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_424_replace)
HXLINE( 425)		int index = this->members->indexOf(OldObject,null());
HXLINE( 427)		if ((index < 0)) {
HXLINE( 428)			return null();
            		}
HXLINE( 430)		this->members->set(index,NewObject);
HXLINE( 432)		if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 433)			this->_memberRemoved->dispatch(OldObject);
            		}
HXLINE( 434)		if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 435)			this->_memberAdded->dispatch(NewObject);
            		}
HXLINE( 437)		return NewObject;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,replace,return )

void FlxTypedGroup_obj::sort( ::Dynamic Function,::hx::Null< int >  __o_Order){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,int,a1, ::Dynamic,_g) HXARGC(2)
            		int _hx_run( ::Dynamic a2, ::Dynamic a3){
            			HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_452_sort)
HXDLIN( 452)			return ( (int)(_g(a1,a2,a3)) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		int Order = __o_Order.Default(-1);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_452_sort)
HXDLIN( 452)		 ::Dynamic _g = Function;
HXDLIN( 452)		int a1 = Order;
HXDLIN( 452)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(a1,_g));
HXDLIN( 452)		this->members->sort(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,sort,(void))

 ::Dynamic FlxTypedGroup_obj::getFirstAvailable(::hx::Class ObjectClass,::hx::Null< bool >  __o_Force){
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_465_getFirstAvailable)
HXLINE( 466)		int i = 0;
HXLINE( 467)		 ::flixel::FlxBasic basic = null();
HXLINE( 469)		while((i < this->length)){
HXLINE( 471)			i = (i + 1);
HXDLIN( 471)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 473)			bool _hx_tmp;
HXDLIN( 473)			bool _hx_tmp1;
HXDLIN( 473)			if (::hx::IsNotNull( basic )) {
HXLINE( 473)				_hx_tmp1 = !(basic->exists);
            			}
            			else {
HXLINE( 473)				_hx_tmp1 = false;
            			}
HXDLIN( 473)			if (_hx_tmp1) {
HXLINE( 473)				if (::hx::IsNotNull( ObjectClass )) {
HXLINE( 473)					_hx_tmp = ::Std_obj::isOfType(basic,ObjectClass);
            				}
            				else {
HXLINE( 473)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 473)				_hx_tmp = false;
            			}
HXDLIN( 473)			if (_hx_tmp) {
HXLINE( 475)				bool _hx_tmp;
HXDLIN( 475)				if (Force) {
HXLINE( 475)					::String _hx_tmp1 = ::Type_obj::getClassName(::Type_obj::getClass(basic));
HXDLIN( 475)					_hx_tmp = (_hx_tmp1 != ::Type_obj::getClassName(ObjectClass));
            				}
            				else {
HXLINE( 475)					_hx_tmp = false;
            				}
HXDLIN( 475)				if (_hx_tmp) {
HXLINE( 477)					continue;
            				}
HXLINE( 479)				return this->members->__get((i - 1));
            			}
            		}
HXLINE( 483)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getFirstAvailable,return )

int FlxTypedGroup_obj::getFirstNull(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_493_getFirstNull)
HXLINE( 494)		int i = 0;
HXLINE( 496)		while((i < this->length)){
HXLINE( 498)			if (::hx::IsNull( this->members->__get(i) )) {
HXLINE( 499)				return i;
            			}
HXLINE( 500)			i = (i + 1);
            		}
HXLINE( 503)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstNull,return )

 ::Dynamic FlxTypedGroup_obj::getFirstExisting(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_513_getFirstExisting)
HXLINE( 514)		int i = 0;
HXLINE( 515)		 ::flixel::FlxBasic basic = null();
HXLINE( 517)		while((i < this->length)){
HXLINE( 519)			i = (i + 1);
HXDLIN( 519)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 521)			bool _hx_tmp;
HXDLIN( 521)			if (::hx::IsNotNull( basic )) {
HXLINE( 521)				_hx_tmp = basic->exists;
            			}
            			else {
HXLINE( 521)				_hx_tmp = false;
            			}
HXDLIN( 521)			if (_hx_tmp) {
HXLINE( 522)				return basic;
            			}
            		}
HXLINE( 525)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstExisting,return )

 ::Dynamic FlxTypedGroup_obj::getFirstAlive(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_535_getFirstAlive)
HXLINE( 536)		int i = 0;
HXLINE( 537)		 ::flixel::FlxBasic basic = null();
HXLINE( 539)		while((i < this->length)){
HXLINE( 541)			i = (i + 1);
HXDLIN( 541)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 543)			bool _hx_tmp;
HXDLIN( 543)			bool _hx_tmp1;
HXDLIN( 543)			if (::hx::IsNotNull( basic )) {
HXLINE( 543)				_hx_tmp1 = basic->exists;
            			}
            			else {
HXLINE( 543)				_hx_tmp1 = false;
            			}
HXDLIN( 543)			if (_hx_tmp1) {
HXLINE( 543)				_hx_tmp = basic->alive;
            			}
            			else {
HXLINE( 543)				_hx_tmp = false;
            			}
HXDLIN( 543)			if (_hx_tmp) {
HXLINE( 544)				return basic;
            			}
            		}
HXLINE( 547)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstAlive,return )

 ::Dynamic FlxTypedGroup_obj::getFirstDead(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_557_getFirstDead)
HXLINE( 558)		int i = 0;
HXLINE( 559)		 ::flixel::FlxBasic basic = null();
HXLINE( 561)		while((i < this->length)){
HXLINE( 563)			i = (i + 1);
HXDLIN( 563)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 565)			bool _hx_tmp;
HXDLIN( 565)			if (::hx::IsNotNull( basic )) {
HXLINE( 565)				_hx_tmp = !(basic->alive);
            			}
            			else {
HXLINE( 565)				_hx_tmp = false;
            			}
HXDLIN( 565)			if (_hx_tmp) {
HXLINE( 566)				return basic;
            			}
            		}
HXLINE( 569)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstDead,return )

int FlxTypedGroup_obj::countLiving(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_578_countLiving)
HXLINE( 579)		int i = 0;
HXLINE( 580)		int count = -1;
HXLINE( 581)		 ::flixel::FlxBasic basic = null();
HXLINE( 583)		while((i < this->length)){
HXLINE( 585)			i = (i + 1);
HXDLIN( 585)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 587)			if (::hx::IsNotNull( basic )) {
HXLINE( 589)				if ((count < 0)) {
HXLINE( 590)					count = 0;
            				}
HXLINE( 591)				bool _hx_tmp;
HXDLIN( 591)				if (basic->exists) {
HXLINE( 591)					_hx_tmp = basic->alive;
            				}
            				else {
HXLINE( 591)					_hx_tmp = false;
            				}
HXDLIN( 591)				if (_hx_tmp) {
HXLINE( 592)					count = (count + 1);
            				}
            			}
            		}
HXLINE( 596)		return count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countLiving,return )

int FlxTypedGroup_obj::countDead(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_605_countDead)
HXLINE( 606)		int i = 0;
HXLINE( 607)		int count = -1;
HXLINE( 608)		 ::flixel::FlxBasic basic = null();
HXLINE( 610)		while((i < this->length)){
HXLINE( 612)			i = (i + 1);
HXDLIN( 612)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 614)			if (::hx::IsNotNull( basic )) {
HXLINE( 616)				if ((count < 0)) {
HXLINE( 617)					count = 0;
            				}
HXLINE( 618)				if (!(basic->alive)) {
HXLINE( 619)					count = (count + 1);
            				}
            			}
            		}
HXLINE( 623)		return count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countDead,return )

 ::Dynamic FlxTypedGroup_obj::getRandom(::hx::Null< int >  __o_StartIndex,::hx::Null< int >  __o_Length){
            		int StartIndex = __o_StartIndex.Default(0);
            		int Length = __o_Length.Default(0);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_635_getRandom)
HXLINE( 636)		if ((StartIndex < 0)) {
HXLINE( 637)			StartIndex = 0;
            		}
HXLINE( 638)		if ((Length <= 0)) {
HXLINE( 639)			Length = this->length;
            		}
HXLINE( 641)		return ::flixel::FlxG_obj::random->getObject_flixel_group_FlxTypedGroup_T(this->members,null(),StartIndex,Length);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getRandom,return )

void FlxTypedGroup_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_649_clear)
HXLINE( 650)		this->length = 0;
HXLINE( 652)		if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 654)			int _g = 0;
HXDLIN( 654)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 654)			while((_g < _g1->get_length())){
HXLINE( 654)				 ::Dynamic member = _g1->__get(_g);
HXDLIN( 654)				_g = (_g + 1);
HXLINE( 656)				if (::hx::IsNotNull( member )) {
HXLINE( 657)					this->_memberRemoved->dispatch(member);
            				}
            			}
            		}
HXLINE( 661)		::flixel::util::FlxArrayUtil_obj::clearArray(this->members,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,clear,(void))

void FlxTypedGroup_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_669_kill)
HXLINE( 670)		int i = 0;
HXLINE( 671)		 ::flixel::FlxBasic basic = null();
HXLINE( 673)		while((i < this->length)){
HXLINE( 675)			i = (i + 1);
HXDLIN( 675)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 677)			bool _hx_tmp;
HXDLIN( 677)			if (::hx::IsNotNull( basic )) {
HXLINE( 677)				_hx_tmp = basic->exists;
            			}
            			else {
HXLINE( 677)				_hx_tmp = false;
            			}
HXDLIN( 677)			if (_hx_tmp) {
HXLINE( 678)				basic->kill();
            			}
            		}
HXLINE( 681)		this->super::kill();
            	}


void FlxTypedGroup_obj::revive(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_688_revive)
HXLINE( 689)		int i = 0;
HXLINE( 690)		 ::flixel::FlxBasic basic = null();
HXLINE( 692)		while((i < this->length)){
HXLINE( 694)			i = (i + 1);
HXDLIN( 694)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 696)			bool _hx_tmp;
HXDLIN( 696)			if (::hx::IsNotNull( basic )) {
HXLINE( 696)				_hx_tmp = !(basic->exists);
            			}
            			else {
HXLINE( 696)				_hx_tmp = false;
            			}
HXDLIN( 696)			if (_hx_tmp) {
HXLINE( 697)				basic->revive();
            			}
            		}
HXLINE( 700)		this->super::revive();
            	}


 ::flixel::group::FlxTypedGroupIterator FlxTypedGroup_obj::iterator( ::Dynamic filter){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_708_iterator)
HXDLIN( 708)		return  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->members,filter);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,iterator,return )

void FlxTypedGroup_obj::forEach( ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_718_forEach)
HXLINE( 719)		int i = 0;
HXLINE( 720)		 ::flixel::FlxBasic basic = null();
HXLINE( 722)		while((i < this->length)){
HXLINE( 724)			i = (i + 1);
HXDLIN( 724)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 726)			if (::hx::IsNotNull( basic )) {
HXLINE( 728)				if (Recurse) {
HXLINE( 730)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(basic);
HXLINE( 731)					if (::hx::IsNotNull( group )) {
HXLINE( 732)						group->forEach(Function,Recurse);
            					}
            				}
HXLINE( 735)				Function(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEach,(void))

void FlxTypedGroup_obj::forEachAlive( ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_747_forEachAlive)
HXLINE( 748)		int i = 0;
HXLINE( 749)		 ::flixel::FlxBasic basic = null();
HXLINE( 751)		while((i < this->length)){
HXLINE( 753)			i = (i + 1);
HXDLIN( 753)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 755)			bool _hx_tmp;
HXDLIN( 755)			bool _hx_tmp1;
HXDLIN( 755)			if (::hx::IsNotNull( basic )) {
HXLINE( 755)				_hx_tmp1 = basic->exists;
            			}
            			else {
HXLINE( 755)				_hx_tmp1 = false;
            			}
HXDLIN( 755)			if (_hx_tmp1) {
HXLINE( 755)				_hx_tmp = basic->alive;
            			}
            			else {
HXLINE( 755)				_hx_tmp = false;
            			}
HXDLIN( 755)			if (_hx_tmp) {
HXLINE( 757)				if (Recurse) {
HXLINE( 759)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(basic);
HXLINE( 760)					if (::hx::IsNotNull( group )) {
HXLINE( 761)						group->forEachAlive(Function,Recurse);
            					}
            				}
HXLINE( 764)				Function(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachAlive,(void))

void FlxTypedGroup_obj::forEachDead( ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_776_forEachDead)
HXLINE( 777)		int i = 0;
HXLINE( 778)		 ::flixel::FlxBasic basic = null();
HXLINE( 780)		while((i < this->length)){
HXLINE( 782)			i = (i + 1);
HXDLIN( 782)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 784)			bool _hx_tmp;
HXDLIN( 784)			if (::hx::IsNotNull( basic )) {
HXLINE( 784)				_hx_tmp = !(basic->alive);
            			}
            			else {
HXLINE( 784)				_hx_tmp = false;
            			}
HXDLIN( 784)			if (_hx_tmp) {
HXLINE( 786)				if (Recurse) {
HXLINE( 788)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(basic);
HXLINE( 789)					if (::hx::IsNotNull( group )) {
HXLINE( 790)						group->forEachDead(Function,Recurse);
            					}
            				}
HXLINE( 793)				Function(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachDead,(void))

void FlxTypedGroup_obj::forEachExists( ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_805_forEachExists)
HXLINE( 806)		int i = 0;
HXLINE( 807)		 ::flixel::FlxBasic basic = null();
HXLINE( 809)		while((i < this->length)){
HXLINE( 811)			i = (i + 1);
HXDLIN( 811)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 813)			bool _hx_tmp;
HXDLIN( 813)			if (::hx::IsNotNull( basic )) {
HXLINE( 813)				_hx_tmp = basic->exists;
            			}
            			else {
HXLINE( 813)				_hx_tmp = false;
            			}
HXDLIN( 813)			if (_hx_tmp) {
HXLINE( 815)				if (Recurse) {
HXLINE( 817)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(basic);
HXLINE( 818)					if (::hx::IsNotNull( group )) {
HXLINE( 819)						group->forEachExists(Function,Recurse);
            					}
            				}
HXLINE( 822)				Function(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachExists,(void))

void FlxTypedGroup_obj::forEachOfType(::hx::Class ObjectClass, ::Dynamic Function,::hx::Null< bool >  __o_Recurse){
            		bool Recurse = __o_Recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_835_forEachOfType)
HXLINE( 836)		int i = 0;
HXLINE( 837)		 ::flixel::FlxBasic basic = null();
HXLINE( 839)		while((i < this->length)){
HXLINE( 841)			i = (i + 1);
HXDLIN( 841)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 843)			if (::hx::IsNotNull( basic )) {
HXLINE( 845)				if (Recurse) {
HXLINE( 847)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(basic);
HXLINE( 848)					if (::hx::IsNotNull( group )) {
HXLINE( 849)						group->forEachOfType(ObjectClass,Function,Recurse);
            					}
            				}
HXLINE( 852)				if (::Std_obj::isOfType(basic,ObjectClass)) {
HXLINE( 853)					Function(basic);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,forEachOfType,(void))

int FlxTypedGroup_obj::set_maxSize(int Size){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_860_set_maxSize)
HXLINE( 861)		this->maxSize = ::Std_obj::_hx_int(::Math_obj::abs(( (Float)(Size) )));
HXLINE( 863)		if ((this->_marker >= this->maxSize)) {
HXLINE( 864)			this->_marker = 0;
            		}
HXLINE( 866)		bool _hx_tmp;
HXDLIN( 866)		bool _hx_tmp1;
HXDLIN( 866)		if ((this->maxSize != 0)) {
HXLINE( 866)			_hx_tmp1 = ::hx::IsNull( this->members );
            		}
            		else {
HXLINE( 866)			_hx_tmp1 = true;
            		}
HXDLIN( 866)		if (!(_hx_tmp1)) {
HXLINE( 866)			_hx_tmp = (this->maxSize >= this->length);
            		}
            		else {
HXLINE( 866)			_hx_tmp = true;
            		}
HXDLIN( 866)		if (_hx_tmp) {
HXLINE( 867)			return this->maxSize;
            		}
HXLINE( 870)		int i = this->maxSize;
HXLINE( 871)		int l = this->length;
HXLINE( 872)		 ::flixel::FlxBasic basic = null();
HXLINE( 874)		while((i < l)){
HXLINE( 876)			i = (i + 1);
HXDLIN( 876)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 878)			if (::hx::IsNotNull( basic )) {
HXLINE( 880)				if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 881)					this->_memberRemoved->dispatch(basic);
            				}
HXLINE( 883)				basic->destroy();
            			}
            		}
HXLINE( 887)		::flixel::util::FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T(this->members,this->maxSize);
HXLINE( 888)		this->length = this->members->get_length();
HXLINE( 890)		return this->maxSize;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,set_maxSize,return )

 ::flixel::util::_FlxSignal::FlxSignal1 FlxTypedGroup_obj::get_memberAdded(){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_895_get_memberAdded)
HXLINE( 896)		if (::hx::IsNull( this->_memberAdded )) {
HXLINE( 897)			this->_memberAdded =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
            		}
HXLINE( 899)		return this->_memberAdded;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,get_memberAdded,return )

 ::flixel::util::_FlxSignal::FlxSignal1 FlxTypedGroup_obj::get_memberRemoved(){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_904_get_memberRemoved)
HXLINE( 905)		if (::hx::IsNull( this->_memberRemoved )) {
HXLINE( 906)			this->_memberRemoved =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
            		}
HXLINE( 908)		return this->_memberRemoved;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,get_memberRemoved,return )

bool FlxTypedGroup_obj::overlaps( ::Dynamic Callback, ::flixel::group::FlxTypedGroup Group,Float X,Float Y,bool InScreenSpace, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_26_overlaps)
HXLINE(  27)		bool result = false;
HXLINE(  28)		if (::hx::IsNotNull( Group )) {
HXLINE(  30)			int i = 0;
HXLINE(  31)			int l = Group->length;
HXLINE(  32)			 ::flixel::FlxBasic basic;
HXLINE(  34)			while((i < l)){
HXLINE(  36)				i = (i + 1);
HXDLIN(  36)				basic = Dynamic( Group->members->__get((i - 1))).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  38)				bool _hx_tmp;
HXDLIN(  38)				if (::hx::IsNotNull( basic )) {
HXLINE(  38)					_hx_tmp = ( (bool)(Callback(basic,X,Y,InScreenSpace,Camera)) );
            				}
            				else {
HXLINE(  38)					_hx_tmp = false;
            				}
HXDLIN(  38)				if (_hx_tmp) {
HXLINE(  40)					result = true;
HXLINE(  41)					goto _hx_goto_51;
            				}
            			}
            			_hx_goto_51:;
            		}
HXLINE(  45)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxTypedGroup_obj,overlaps,return )

 ::flixel::group::FlxTypedGroup FlxTypedGroup_obj::resolveGroup( ::flixel::FlxBasic ObjectOrGroup){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_50_resolveGroup)
HXLINE(  51)		 ::flixel::group::FlxTypedGroup group = null();
HXLINE(  52)		if (::hx::IsNotNull( ObjectOrGroup )) {
HXLINE(  54)			if ((ObjectOrGroup->flixelType == 2)) {
HXLINE(  56)				group = ( ( ::flixel::group::FlxTypedGroup)(ObjectOrGroup) );
            			}
            			else {
HXLINE(  58)				if ((ObjectOrGroup->flixelType == 4)) {
HXLINE(  60)					 ::flixel::group::FlxTypedSpriteGroup spriteGroup = ( ( ::flixel::group::FlxTypedSpriteGroup)(ObjectOrGroup) );
HXLINE(  61)					group = spriteGroup->group;
            				}
            			}
            		}
HXLINE(  64)		return group;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,resolveGroup,return )


::hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__new(::hx::Null< int >  __o_MaxSize) {
	::hx::ObjectPtr< FlxTypedGroup_obj > __this = new FlxTypedGroup_obj();
	__this->__construct(__o_MaxSize);
	return __this;
}

::hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_MaxSize) {
	FlxTypedGroup_obj *__this = (FlxTypedGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTypedGroup_obj), true, "flixel.group.FlxTypedGroup"));
	*(void **)__this = FlxTypedGroup_obj::_hx_vtable;
	__this->__construct(__o_MaxSize);
	return __this;
}

FlxTypedGroup_obj::FlxTypedGroup_obj()
{
}

void FlxTypedGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedGroup);
	HX_MARK_MEMBER_NAME(members,"members");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(_memberAdded,"_memberAdded");
	HX_MARK_MEMBER_NAME(_memberRemoved,"_memberRemoved");
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(members,"members");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(_memberAdded,"_memberAdded");
	HX_VISIT_MEMBER_NAME(_memberRemoved,"_memberRemoved");
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTypedGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"sort") ) { return ::hx::Val( sort_dyn() ); }
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"insert") ) { return ::hx::Val( insert_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"revive") ) { return ::hx::Val( revive_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { return ::hx::Val( members ); }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return ::hx::Val( maxSize ); }
		if (HX_FIELD_EQ(inName,"_marker") ) { return ::hx::Val( _marker ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return ::hx::Val( recycle_dyn() ); }
		if (HX_FIELD_EQ(inName,"replace") ) { return ::hx::Val( replace_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"countDead") ) { return ::hx::Val( countDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return ::hx::Val( getRandom_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"memberAdded") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_memberAdded() ); }
		if (HX_FIELD_EQ(inName,"countLiving") ) { return ::hx::Val( countLiving_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachDead") ) { return ::hx::Val( forEachDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return ::hx::Val( set_maxSize_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_memberAdded") ) { return ::hx::Val( _memberAdded ); }
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return ::hx::Val( getFirstNull_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return ::hx::Val( getFirstDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachAlive") ) { return ::hx::Val( forEachAlive_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"memberRemoved") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_memberRemoved() ); }
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return ::hx::Val( getFirstAlive_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachExists") ) { return ::hx::Val( forEachExists_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachOfType") ) { return ::hx::Val( forEachOfType_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_memberRemoved") ) { return ::hx::Val( _memberRemoved ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_memberAdded") ) { return ::hx::Val( get_memberAdded_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFirstExisting") ) { return ::hx::Val( getFirstExisting_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return ::hx::Val( getFirstAvailable_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_memberRemoved") ) { return ::hx::Val( get_memberRemoved_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"recycleCreateObject") ) { return ::hx::Val( recycleCreateObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTypedGroup_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"overlaps") ) { outValue = overlaps_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveGroup") ) { outValue = resolveGroup_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxTypedGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxSize(inValue.Cast< int >()) );maxSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_memberAdded") ) { _memberAdded=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_memberRemoved") ) { _memberRemoved=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("members",d9,2c,70,1a));
	outFields->push(HX_("maxSize",85,f9,83,cc));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("memberAdded",06,9c,46,1e));
	outFields->push(HX_("memberRemoved",66,c4,b7,90));
	outFields->push(HX_("_memberAdded",07,4a,50,84));
	outFields->push(HX_("_memberRemoved",a7,b4,09,cf));
	outFields->push(HX_("_marker",59,87,e7,28));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTypedGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxTypedGroup_obj,members),HX_("members",d9,2c,70,1a)},
	{::hx::fsInt,(int)offsetof(FlxTypedGroup_obj,maxSize),HX_("maxSize",85,f9,83,cc)},
	{::hx::fsInt,(int)offsetof(FlxTypedGroup_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(FlxTypedGroup_obj,_memberAdded),HX_("_memberAdded",07,4a,50,84)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(FlxTypedGroup_obj,_memberRemoved),HX_("_memberRemoved",a7,b4,09,cf)},
	{::hx::fsInt,(int)offsetof(FlxTypedGroup_obj,_marker),HX_("_marker",59,87,e7,28)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTypedGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTypedGroup_obj_sMemberFields[] = {
	HX_("members",d9,2c,70,1a),
	HX_("maxSize",85,f9,83,cc),
	HX_("length",e6,94,07,9f),
	HX_("_memberAdded",07,4a,50,84),
	HX_("_memberRemoved",a7,b4,09,cf),
	HX_("_marker",59,87,e7,28),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("draw",04,2c,70,42),
	HX_("add",21,f2,49,00),
	HX_("insert",39,43,dd,9d),
	HX_("recycle",13,10,8c,37),
	HX_("recycleCreateObject",8e,6b,54,8e),
	HX_("remove",44,9c,88,04),
	HX_("replace",34,48,28,ab),
	HX_("sort",5e,27,58,4c),
	HX_("getFirstAvailable",af,ea,b3,05),
	HX_("getFirstNull",61,b7,33,0f),
	HX_("getFirstExisting",65,a4,6c,ee),
	HX_("getFirstAlive",b3,09,e2,bb),
	HX_("getFirstDead",7e,67,8b,08),
	HX_("countLiving",58,d9,8a,30),
	HX_("countDead",13,d3,86,54),
	HX_("getRandom",39,ab,e5,33),
	HX_("clear",8d,71,5b,48),
	HX_("kill",9e,df,09,47),
	HX_("revive",55,fa,76,0a),
	HX_("iterator",ee,49,9a,93),
	HX_("forEach",aa,29,be,c4),
	HX_("forEachAlive",c3,61,b7,99),
	HX_("forEachDead",6e,c1,e4,78),
	HX_("forEachExists",26,57,f8,68),
	HX_("forEachOfType",bb,90,76,fd),
	HX_("set_maxSize",a8,60,eb,5c),
	HX_("get_memberAdded",9d,53,28,df),
	HX_("get_memberRemoved",bd,cf,27,97),
	::String(null()) };

::hx::Class FlxTypedGroup_obj::__mClass;

static ::String FlxTypedGroup_obj_sStaticFields[] = {
	HX_("overlaps",0c,d3,2a,45),
	HX_("resolveGroup",b3,f8,79,d2),
	::String(null())
};

void FlxTypedGroup_obj::__register()
{
	FlxTypedGroup_obj _hx_dummy;
	FlxTypedGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.group.FlxTypedGroup",e6,b8,51,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTypedGroup_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxTypedGroup_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTypedGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTypedGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTypedGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTypedGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace group
