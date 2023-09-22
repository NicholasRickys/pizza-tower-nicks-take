#ifndef INCLUDED_flixel_animation_FlxAnimationController
#define INCLUDED_flixel_animation_FlxAnimationController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,animation,FlxAnimation)
HX_DECLARE_CLASS2(flixel,animation,FlxAnimationController)
HX_DECLARE_CLASS2(flixel,animation,FlxBaseAnimation)
HX_DECLARE_CLASS2(flixel,animation,FlxPrerotatedAnimation)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace flixel{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES FlxAnimationController_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxAnimationController_obj OBJ_;
		FlxAnimationController_obj();

	public:
		enum { _hx_ClassId = 0x33fb2b2e };

		void __construct( ::flixel::FlxSprite sprite);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.animation.FlxAnimationController")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.animation.FlxAnimationController"); }
		static ::hx::ObjectPtr< FlxAnimationController_obj > __new( ::flixel::FlxSprite sprite);
		static ::hx::ObjectPtr< FlxAnimationController_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite sprite);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxAnimationController_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxAnimationController",8e,2f,81,78); }

		int frameIndex;
		 ::Dynamic callback;
		Dynamic callback_dyn() { return callback;}
		 ::Dynamic finishCallback;
		Dynamic finishCallback_dyn() { return finishCallback;}
		 ::flixel::FlxSprite _sprite;
		 ::flixel::animation::FlxAnimation _curAnim;
		 ::haxe::ds::StringMap _animations;
		 ::flixel::animation::FlxPrerotatedAnimation _prerotated;
		void update(Float elapsed);
		::Dynamic update_dyn();

		 ::flixel::animation::FlxAnimationController copyFrom( ::flixel::animation::FlxAnimationController controller);
		::Dynamic copyFrom_dyn();

		void createPrerotated( ::flixel::animation::FlxAnimationController Controller);
		::Dynamic createPrerotated_dyn();

		void destroyAnimations();
		::Dynamic destroyAnimations_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		Float getFrameDuration(int index);
		::Dynamic getFrameDuration_dyn();

		void clearPrerotated();
		::Dynamic clearPrerotated_dyn();

		void clearAnimations();
		::Dynamic clearAnimations_dyn();

		void add(::String name,::Array< int > frames,::hx::Null< Float >  frameRate,::hx::Null< bool >  looped,::hx::Null< bool >  flipX,::hx::Null< bool >  flipY);
		::Dynamic add_dyn();

		void remove(::String Name);
		::Dynamic remove_dyn();

		void append(::String Name,::Array< int > Frames);
		::Dynamic append_dyn();

		void addByNames(::String Name,::Array< ::String > FrameNames,::hx::Null< int >  FrameRate,::hx::Null< bool >  Looped,::hx::Null< bool >  FlipX,::hx::Null< bool >  FlipY);
		::Dynamic addByNames_dyn();

		void appendByNames(::String Name,::Array< ::String > FrameNames);
		::Dynamic appendByNames_dyn();

		void addByStringIndices(::String Name,::String Prefix,::Array< ::String > Indices,::String Postfix,::hx::Null< int >  FrameRate,::hx::Null< bool >  Looped,::hx::Null< bool >  FlipX,::hx::Null< bool >  FlipY);
		::Dynamic addByStringIndices_dyn();

		void appendByStringIndices(::String Name,::String Prefix,::Array< ::String > Indices,::String Postfix);
		::Dynamic appendByStringIndices_dyn();

		void addByIndices(::String Name,::String Prefix,::Array< int > Indices,::String Postfix,::hx::Null< int >  FrameRate,::hx::Null< bool >  Looped,::hx::Null< bool >  FlipX,::hx::Null< bool >  FlipY);
		::Dynamic addByIndices_dyn();

		void appendByIndices(::String Name,::String Prefix,::Array< int > Indices,::String Postfix);
		::Dynamic appendByIndices_dyn();

		int findSpriteFrame(::String prefix,int index,::String postfix);
		::Dynamic findSpriteFrame_dyn();

		void addByPrefix(::String name,::String prefix,::hx::Null< int >  frameRate,::hx::Null< bool >  looped,::hx::Null< bool >  flipX,::hx::Null< bool >  flipY);
		::Dynamic addByPrefix_dyn();

		void appendByPrefix(::String name,::String prefix);
		::Dynamic appendByPrefix_dyn();

		void play(::String AnimName,::hx::Null< bool >  Force,::hx::Null< bool >  Reversed,::hx::Null< int >  Frame);
		::Dynamic play_dyn();

		void reset();
		::Dynamic reset_dyn();

		void finish();
		::Dynamic finish_dyn();

		void stop();
		::Dynamic stop_dyn();

		void pause();
		::Dynamic pause_dyn();

		void resume();
		::Dynamic resume_dyn();

		void reverse();
		::Dynamic reverse_dyn();

		 ::flixel::animation::FlxAnimation getByName(::String name);
		::Dynamic getByName_dyn();

		void randomFrame();
		::Dynamic randomFrame_dyn();

		void fireCallback();
		::Dynamic fireCallback_dyn();

		void fireFinishCallback(::String name);
		::Dynamic fireFinishCallback_dyn();

		void byNamesHelper(::Array< int > AddTo,::Array< ::String > FrameNames);
		::Dynamic byNamesHelper_dyn();

		void byStringIndicesHelper(::Array< int > AddTo,::String Prefix,::Array< ::String > Indices,::String Postfix);
		::Dynamic byStringIndicesHelper_dyn();

		void byIndicesHelper(::Array< int > AddTo,::String Prefix,::Array< int > Indices,::String Postfix);
		::Dynamic byIndicesHelper_dyn();

		void byPrefixHelper(::Array< int > AddTo,::Array< ::Dynamic> AnimFrames,::String Prefix);
		::Dynamic byPrefixHelper_dyn();

		void findByPrefix(::Array< ::Dynamic> AnimFrames,::String Prefix);
		::Dynamic findByPrefix_dyn();

		int set_frameIndex(int Frame);
		::Dynamic set_frameIndex_dyn();

		::String get_frameName();
		::Dynamic get_frameName_dyn();

		::String set_frameName(::String Value);
		::Dynamic set_frameName_dyn();

		::String get_name();
		::Dynamic get_name_dyn();

		::String set_name(::String AnimName);
		::Dynamic set_name_dyn();

		::Array< ::Dynamic> getAnimationList();
		::Dynamic getAnimationList_dyn();

		::Array< ::String > getNameList();
		::Dynamic getNameList_dyn();

		bool exists(::String name);
		::Dynamic exists_dyn();

		void rename(::String oldName,::String newName);
		::Dynamic rename_dyn();

		 ::flixel::animation::FlxAnimation get_curAnim();
		::Dynamic get_curAnim_dyn();

		 ::flixel::animation::FlxAnimation set_curAnim( ::flixel::animation::FlxAnimation anim);
		::Dynamic set_curAnim_dyn();

		bool get_paused();
		::Dynamic get_paused_dyn();

		bool set_paused(bool value);
		::Dynamic set_paused_dyn();

		bool get_finished();
		::Dynamic get_finished_dyn();

		bool set_finished(bool value);
		::Dynamic set_finished_dyn();

		int get_frames();
		::Dynamic get_frames_dyn();

		int get_numFrames();
		::Dynamic get_numFrames_dyn();

		int getFrameIndex( ::flixel::graphics::frames::FlxFrame frame);
		::Dynamic getFrameIndex_dyn();

};

} // end namespace flixel
} // end namespace animation

#endif /* INCLUDED_flixel_animation_FlxAnimationController */ 
