#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasGraphics
#include <openfl/display/_internal/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_69_closePath,"openfl.display._internal.CanvasGraphics","closePath",0x4bc7f60e,"openfl.display._internal.CanvasGraphics.closePath","openfl/display/_internal/CanvasGraphics.hx",69,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_100_createBitmapFill,"openfl.display._internal.CanvasGraphics","createBitmapFill",0x4b43bfbd,"openfl.display._internal.CanvasGraphics.createBitmapFill","openfl/display/_internal/CanvasGraphics.hx",100,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_107_createGradientPattern,"openfl.display._internal.CanvasGraphics","createGradientPattern",0x550b94b5,"openfl.display._internal.CanvasGraphics.createGradientPattern","openfl/display/_internal/CanvasGraphics.hx",107,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_166_createTempPatternCanvas,"openfl.display._internal.CanvasGraphics","createTempPatternCanvas",0x6ada6549,"openfl.display._internal.CanvasGraphics.createTempPatternCanvas","openfl/display/_internal/CanvasGraphics.hx",166,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_190_drawRoundRect,"openfl.display._internal.CanvasGraphics","drawRoundRect",0xaa7470ff,"openfl.display._internal.CanvasGraphics.drawRoundRect","openfl/display/_internal/CanvasGraphics.hx",190,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_224_endFill,"openfl.display._internal.CanvasGraphics","endFill",0xd6b0224f,"openfl.display._internal.CanvasGraphics.endFill","openfl/display/_internal/CanvasGraphics.hx",224,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_233_endStroke,"openfl.display._internal.CanvasGraphics","endStroke",0x88be9284,"openfl.display._internal.CanvasGraphics.endStroke","openfl/display/_internal/CanvasGraphics.hx",233,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_458_hitTest,"openfl.display._internal.CanvasGraphics","hitTest",0x934efa96,"openfl.display._internal.CanvasGraphics.hitTest","openfl/display/_internal/CanvasGraphics.hx",458,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_463_isCCW,"openfl.display._internal.CanvasGraphics","isCCW",0x9437381e,"openfl.display._internal.CanvasGraphics.isCCW","openfl/display/_internal/CanvasGraphics.hx",463,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_467_normalizeUVT,"openfl.display._internal.CanvasGraphics","normalizeUVT",0xa0796975,"openfl.display._internal.CanvasGraphics.normalizeUVT","openfl/display/_internal/CanvasGraphics.hx",467,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_508_playCommands,"openfl.display._internal.CanvasGraphics","playCommands",0xa3390eeb,"openfl.display._internal.CanvasGraphics.playCommands","openfl/display/_internal/CanvasGraphics.hx",508,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_1143_render,"openfl.display._internal.CanvasGraphics","render",0xc2394625,"openfl.display._internal.CanvasGraphics.render","openfl/display/_internal/CanvasGraphics.hx",1143,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_1468_renderMask,"openfl.display._internal.CanvasGraphics","renderMask",0x605729b1,"openfl.display._internal.CanvasGraphics.renderMask","openfl/display/_internal/CanvasGraphics.hx",1468,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_1572_setSmoothing,"openfl.display._internal.CanvasGraphics","setSmoothing",0x137bf581,"openfl.display._internal.CanvasGraphics.setSmoothing","openfl/display/_internal/CanvasGraphics.hx",1572,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_35_boot,"openfl.display._internal.CanvasGraphics","boot",0x19dfbd41,"openfl.display._internal.CanvasGraphics.boot","openfl/display/_internal/CanvasGraphics.hx",35,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_37_boot,"openfl.display._internal.CanvasGraphics","boot",0x19dfbd41,"openfl.display._internal.CanvasGraphics.boot","openfl/display/_internal/CanvasGraphics.hx",37,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_38_boot,"openfl.display._internal.CanvasGraphics","boot",0x19dfbd41,"openfl.display._internal.CanvasGraphics.boot","openfl/display/_internal/CanvasGraphics.hx",38,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_44_boot,"openfl.display._internal.CanvasGraphics","boot",0x19dfbd41,"openfl.display._internal.CanvasGraphics.boot","openfl/display/_internal/CanvasGraphics.hx",44,0x5a71bf7c)
HX_LOCAL_STACK_FRAME(_hx_pos_fd1c4d1c82edf2db_51_boot,"openfl.display._internal.CanvasGraphics","boot",0x19dfbd41,"openfl.display._internal.CanvasGraphics.boot","openfl/display/_internal/CanvasGraphics.hx",51,0x5a71bf7c)
namespace openfl{
namespace display{
namespace _internal{

void CanvasGraphics_obj::__construct() { }

Dynamic CanvasGraphics_obj::__CreateEmpty() { return new CanvasGraphics_obj; }

void *CanvasGraphics_obj::_hx_vtable = 0;

Dynamic CanvasGraphics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CanvasGraphics_obj > _hx_result = new CanvasGraphics_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CanvasGraphics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1d4500f1;
}

Float CanvasGraphics_obj::SIN45;

Float CanvasGraphics_obj::TAN22;

bool CanvasGraphics_obj::allowSmoothing;

 ::openfl::display::BitmapData CanvasGraphics_obj::bitmapFill;

 ::openfl::display::BitmapData CanvasGraphics_obj::bitmapStroke;

bool CanvasGraphics_obj::bitmapRepeat;

 ::openfl::geom::Rectangle CanvasGraphics_obj::bounds;

 ::openfl::display::_internal::DrawCommandBuffer CanvasGraphics_obj::fillCommands;

 ::openfl::display::Graphics CanvasGraphics_obj::graphics;

bool CanvasGraphics_obj::hasFill;

bool CanvasGraphics_obj::hasStroke;

bool CanvasGraphics_obj::hitTesting;

 ::openfl::geom::Matrix CanvasGraphics_obj::inversePendingMatrix;

 ::openfl::geom::Matrix CanvasGraphics_obj::pendingMatrix;

 ::openfl::display::_internal::DrawCommandBuffer CanvasGraphics_obj::strokeCommands;

 ::Dynamic CanvasGraphics_obj::windingRule;

Float CanvasGraphics_obj::worldAlpha;

void CanvasGraphics_obj::closePath(::hx::Null< bool >  __o_strokeBefore){
            		bool strokeBefore = __o_strokeBefore.Default(false);
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_69_closePath)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CanvasGraphics_obj,closePath,(void))

 ::Dynamic CanvasGraphics_obj::createBitmapFill( ::openfl::display::BitmapData bitmap,bool bitmapRepeat,bool smooth){
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_100_createBitmapFill)
HXDLIN( 100)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CanvasGraphics_obj,createBitmapFill,return )

void CanvasGraphics_obj::createGradientPattern( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio){
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_107_createGradientPattern)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(CanvasGraphics_obj,createGradientPattern,(void))

void CanvasGraphics_obj::createTempPatternCanvas( ::openfl::display::BitmapData bitmap,bool repeat,int width,int height){
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_166_createTempPatternCanvas)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CanvasGraphics_obj,createTempPatternCanvas,(void))

void CanvasGraphics_obj::drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth, ::Dynamic ellipseHeight){
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_190_drawRoundRect)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CanvasGraphics_obj,drawRoundRect,(void))

void CanvasGraphics_obj::endFill(){
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_224_endFill)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CanvasGraphics_obj,endFill,(void))

void CanvasGraphics_obj::endStroke(){
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_233_endStroke)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CanvasGraphics_obj,endStroke,(void))

bool CanvasGraphics_obj::hitTest( ::openfl::display::Graphics graphics,Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_458_hitTest)
HXDLIN( 458)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CanvasGraphics_obj,hitTest,return )

bool CanvasGraphics_obj::isCCW(Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_463_isCCW)
HXDLIN( 463)		return ((((x2 - x1) * (y3 - y1)) - ((y2 - y1) * (x3 - x1))) < 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(CanvasGraphics_obj,isCCW,return )

 ::Dynamic CanvasGraphics_obj::normalizeUVT( ::openfl::_Vector::FloatVector uvt,::hx::Null< bool >  __o_skipT){
            		bool skipT = __o_skipT.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_467_normalizeUVT)
HXLINE( 468)		Float max = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 469)		Float tmp = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 470)		int len = uvt->get_length();
HXLINE( 472)		{
HXLINE( 472)			int _g = 1;
HXDLIN( 472)			int _g1 = (len + 1);
HXDLIN( 472)			while((_g < _g1)){
HXLINE( 472)				_g = (_g + 1);
HXDLIN( 472)				int t = (_g - 1);
HXLINE( 474)				bool _hx_tmp;
HXDLIN( 474)				if (skipT) {
HXLINE( 474)					_hx_tmp = (::hx::Mod(t,3) == 0);
            				}
            				else {
HXLINE( 474)					_hx_tmp = false;
            				}
HXDLIN( 474)				if (_hx_tmp) {
HXLINE( 476)					continue;
            				}
HXLINE( 479)				tmp = uvt->get((t - 1));
HXLINE( 481)				if ((max < tmp)) {
HXLINE( 483)					max = tmp;
            				}
            			}
            		}
HXLINE( 487)		if (!(skipT)) {
HXLINE( 489)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("max",a4,0a,53,00),max)
            				->setFixed(1,HX_("uvt",f3,2e,59,00),uvt));
            		}
HXLINE( 492)		int length = null();
HXDLIN( 492)		bool fixed = null();
HXDLIN( 492)		::Array< Float > array = null();
HXDLIN( 492)		 ::openfl::_Vector::FloatVector result =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length,fixed,array,true);
HXLINE( 494)		{
HXLINE( 494)			int _g2 = 1;
HXDLIN( 494)			int _g3 = (len + 1);
HXDLIN( 494)			while((_g2 < _g3)){
HXLINE( 494)				_g2 = (_g2 + 1);
HXDLIN( 494)				int t = (_g2 - 1);
HXLINE( 496)				bool _hx_tmp;
HXDLIN( 496)				if (skipT) {
HXLINE( 496)					_hx_tmp = (::hx::Mod(t,3) == 0);
            				}
            				else {
HXLINE( 496)					_hx_tmp = false;
            				}
HXDLIN( 496)				if (_hx_tmp) {
HXLINE( 498)					continue;
            				}
HXLINE( 501)				result->push(uvt->get((t - 1)));
            			}
            		}
HXLINE( 504)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("max",a4,0a,53,00),max)
            			->setFixed(1,HX_("uvt",f3,2e,59,00),result));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,normalizeUVT,return )

void CanvasGraphics_obj::playCommands( ::openfl::display::_internal::DrawCommandBuffer commands,::hx::Null< bool >  __o_stroke){
            		bool stroke = __o_stroke.Default(false);
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_508_playCommands)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,playCommands,(void))

void CanvasGraphics_obj::render( ::openfl::display::Graphics graphics, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_1143_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,render,(void))

void CanvasGraphics_obj::renderMask( ::openfl::display::Graphics graphics, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_1468_renderMask)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasGraphics_obj,renderMask,(void))

void CanvasGraphics_obj::setSmoothing(bool smooth){
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_1572_setSmoothing)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CanvasGraphics_obj,setSmoothing,(void))


CanvasGraphics_obj::CanvasGraphics_obj()
{
}

bool CanvasGraphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"isCCW") ) { outValue = isCCW_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { outValue = ( bounds ); return true; }
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { outValue = ( hasFill ); return true; }
		if (HX_FIELD_EQ(inName,"endFill") ) { outValue = endFill_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hitTest") ) { outValue = hitTest_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { outValue = ( graphics ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { outValue = ( hasStroke ); return true; }
		if (HX_FIELD_EQ(inName,"closePath") ) { outValue = closePath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"endStroke") ) { outValue = endStroke_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { outValue = ( bitmapFill ); return true; }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { outValue = ( hitTesting ); return true; }
		if (HX_FIELD_EQ(inName,"worldAlpha") ) { outValue = ( worldAlpha ); return true; }
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windingRule") ) { outValue = ( windingRule ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapStroke") ) { outValue = ( bitmapStroke ); return true; }
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { outValue = ( bitmapRepeat ); return true; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { outValue = ( fillCommands ); return true; }
		if (HX_FIELD_EQ(inName,"normalizeUVT") ) { outValue = normalizeUVT_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"playCommands") ) { outValue = playCommands_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setSmoothing") ) { outValue = setSmoothing_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { outValue = ( pendingMatrix ); return true; }
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { outValue = drawRoundRect_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { outValue = ( allowSmoothing ); return true; }
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { outValue = ( strokeCommands ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createBitmapFill") ) { outValue = createBitmapFill_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { outValue = ( inversePendingMatrix ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createGradientPattern") ) { outValue = createGradientPattern_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createTempPatternCanvas") ) { outValue = createTempPatternCanvas_dyn(); return true; }
	}
	return false;
}

bool CanvasGraphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasFill") ) { hasFill=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=ioValue.Cast<  ::openfl::display::Graphics >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasStroke") ) { hasStroke=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapFill") ) { bitmapFill=ioValue.Cast<  ::openfl::display::BitmapData >(); return true; }
		if (HX_FIELD_EQ(inName,"hitTesting") ) { hitTesting=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"worldAlpha") ) { worldAlpha=ioValue.Cast< Float >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windingRule") ) { windingRule=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitmapStroke") ) { bitmapStroke=ioValue.Cast<  ::openfl::display::BitmapData >(); return true; }
		if (HX_FIELD_EQ(inName,"bitmapRepeat") ) { bitmapRepeat=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"fillCommands") ) { fillCommands=ioValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingMatrix") ) { pendingMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { allowSmoothing=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"strokeCommands") ) { strokeCommands=ioValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inversePendingMatrix") ) { inversePendingMatrix=ioValue.Cast<  ::openfl::geom::Matrix >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CanvasGraphics_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CanvasGraphics_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &CanvasGraphics_obj::SIN45,HX_("SIN45",79,16,be,fa)},
	{::hx::fsFloat,(void *) &CanvasGraphics_obj::TAN22,HX_("TAN22",41,f4,da,88)},
	{::hx::fsBool,(void *) &CanvasGraphics_obj::allowSmoothing,HX_("allowSmoothing",ab,b7,66,68)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(void *) &CanvasGraphics_obj::bitmapFill,HX_("bitmapFill",12,2e,19,35)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(void *) &CanvasGraphics_obj::bitmapStroke,HX_("bitmapStroke",07,55,54,1c)},
	{::hx::fsBool,(void *) &CanvasGraphics_obj::bitmapRepeat,HX_("bitmapRepeat",aa,38,9c,11)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(void *) &CanvasGraphics_obj::bounds,HX_("bounds",75,86,1d,66)},
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(void *) &CanvasGraphics_obj::fillCommands,HX_("fillCommands",6b,f6,c9,c2)},
	{::hx::fsObject /*  ::openfl::display::Graphics */ ,(void *) &CanvasGraphics_obj::graphics,HX_("graphics",cb,f8,67,12)},
	{::hx::fsBool,(void *) &CanvasGraphics_obj::hasFill,HX_("hasFill",fd,ee,ff,12)},
	{::hx::fsBool,(void *) &CanvasGraphics_obj::hasStroke,HX_("hasStroke",b2,66,1d,52)},
	{::hx::fsBool,(void *) &CanvasGraphics_obj::hitTesting,HX_("hitTesting",bd,65,48,19)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &CanvasGraphics_obj::inversePendingMatrix,HX_("inversePendingMatrix",28,14,8c,bb)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(void *) &CanvasGraphics_obj::pendingMatrix,HX_("pendingMatrix",f8,9d,96,b5)},
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(void *) &CanvasGraphics_obj::strokeCommands,HX_("strokeCommands",a0,98,2a,67)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CanvasGraphics_obj::windingRule,HX_("windingRule",36,83,c0,4f)},
	{::hx::fsFloat,(void *) &CanvasGraphics_obj::worldAlpha,HX_("worldAlpha",ac,57,43,8d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CanvasGraphics_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::allowSmoothing,"allowSmoothing");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::bitmapFill,"bitmapFill");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::bitmapStroke,"bitmapStroke");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::fillCommands,"fillCommands");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::graphics,"graphics");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::hasFill,"hasFill");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::hasStroke,"hasStroke");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::hitTesting,"hitTesting");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::strokeCommands,"strokeCommands");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::windingRule,"windingRule");
	HX_MARK_MEMBER_NAME(CanvasGraphics_obj::worldAlpha,"worldAlpha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CanvasGraphics_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::allowSmoothing,"allowSmoothing");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::bitmapFill,"bitmapFill");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::bitmapStroke,"bitmapStroke");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::bitmapRepeat,"bitmapRepeat");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::fillCommands,"fillCommands");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::graphics,"graphics");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::hasFill,"hasFill");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::hasStroke,"hasStroke");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::hitTesting,"hitTesting");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::inversePendingMatrix,"inversePendingMatrix");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::pendingMatrix,"pendingMatrix");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::strokeCommands,"strokeCommands");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::windingRule,"windingRule");
	HX_VISIT_MEMBER_NAME(CanvasGraphics_obj::worldAlpha,"worldAlpha");
};

#endif

::hx::Class CanvasGraphics_obj::__mClass;

static ::String CanvasGraphics_obj_sStaticFields[] = {
	HX_("SIN45",79,16,be,fa),
	HX_("TAN22",41,f4,da,88),
	HX_("allowSmoothing",ab,b7,66,68),
	HX_("bitmapFill",12,2e,19,35),
	HX_("bitmapStroke",07,55,54,1c),
	HX_("bitmapRepeat",aa,38,9c,11),
	HX_("bounds",75,86,1d,66),
	HX_("fillCommands",6b,f6,c9,c2),
	HX_("graphics",cb,f8,67,12),
	HX_("hasFill",fd,ee,ff,12),
	HX_("hasStroke",b2,66,1d,52),
	HX_("hitTesting",bd,65,48,19),
	HX_("inversePendingMatrix",28,14,8c,bb),
	HX_("pendingMatrix",f8,9d,96,b5),
	HX_("strokeCommands",a0,98,2a,67),
	HX_("windingRule",36,83,c0,4f),
	HX_("worldAlpha",ac,57,43,8d),
	HX_("closePath",7d,65,20,14),
	HX_("createBitmapFill",2e,ac,46,6a),
	HX_("createGradientPattern",a4,ee,44,f6),
	HX_("createTempPatternCanvas",f8,58,91,d0),
	HX_("drawRoundRect",ee,c3,aa,e2),
	HX_("endFill",fe,87,e0,25),
	HX_("endStroke",f3,01,17,51),
	HX_("hitTest",45,60,7f,e2),
	HX_("isCCW",0d,84,49,c1),
	HX_("normalizeUVT",66,09,2f,47),
	HX_("playCommands",dc,ae,ee,49),
	HX_("render",56,6b,29,05),
	HX_("renderMask",62,3b,60,e5),
	HX_("setSmoothing",72,95,31,ba),
	::String(null())
};

void CanvasGraphics_obj::__register()
{
	CanvasGraphics_obj _hx_dummy;
	CanvasGraphics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CanvasGraphics",bf,c1,78,cf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasGraphics_obj::__GetStatic;
	__mClass->mSetStaticField = &CanvasGraphics_obj::__SetStatic;
	__mClass->mMarkFunc = CanvasGraphics_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CanvasGraphics_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CanvasGraphics_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CanvasGraphics_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasGraphics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasGraphics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CanvasGraphics_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_35_boot)
HXDLIN(  35)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20)))))
            			->setFixed(1,HX_("statics",05,3c,65,36), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("createGradientPattern",a4,ee,44,f6), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(1,HX_("windingRule",36,83,c0,4f), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))
            				->setFixed(2,HX_("createBitmapFill",2e,ac,46,6a), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_37_boot)
HXDLIN(  37)		SIN45 = ((Float)0.70710678118654752440084436210485);
            	}
{
            	HX_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_38_boot)
HXDLIN(  38)		TAN22 = ((Float)0.4142135623730950488016887242097);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_44_boot)
HXDLIN(  44)		fillCommands =  ::openfl::display::_internal::DrawCommandBuffer_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_fd1c4d1c82edf2db_51_boot)
HXDLIN(  51)		strokeCommands =  ::openfl::display::_internal::DrawCommandBuffer_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal