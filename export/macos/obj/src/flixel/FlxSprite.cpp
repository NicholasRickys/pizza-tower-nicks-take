#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_math__FlxPoint_FlxPoint_Impl_
#include <flixel/math/_FlxPoint/FlxPoint_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#include <flixel/util/FlxColorTransformUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxBasePoint
#include <flixel/util/FlxPool_flixel_math_FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cfd221447aa7194b_129_new,"flixel.FlxSprite","new",0x4dfa64d7,"flixel.FlxSprite.new","flixel/FlxSprite.hx",129,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_388_initVars,"flixel.FlxSprite","initVars",0x31793705,"flixel.FlxSprite.initVars","flixel/FlxSprite.hx",388,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_417_destroy,"flixel.FlxSprite","destroy",0x0fb5c8f1,"flixel.FlxSprite.destroy","flixel/FlxSprite.hx",417,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_448_clone,"flixel.FlxSprite","clone",0x3c30f394,"flixel.FlxSprite.clone","flixel/FlxSprite.hx",448,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_459_loadGraphicFromSprite,"flixel.FlxSprite","loadGraphicFromSprite",0xd0637b08,"flixel.FlxSprite.loadGraphicFromSprite","flixel/FlxSprite.hx",459,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_496_loadGraphic,"flixel.FlxSprite","loadGraphic",0x47377c99,"flixel.FlxSprite.loadGraphic","flixel/FlxSprite.hx",496,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_543_loadRotatedGraphic,"flixel.FlxSprite","loadRotatedGraphic",0xceb71e2e,"flixel.FlxSprite.loadRotatedGraphic","flixel/FlxSprite.hx",543,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_604_loadRotatedFrame,"flixel.FlxSprite","loadRotatedFrame",0xe0d52e33,"flixel.FlxSprite.loadRotatedFrame","flixel/FlxSprite.hx",604,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_639_makeGraphic,"flixel.FlxSprite","makeGraphic",0xbaa3e5d1,"flixel.FlxSprite.makeGraphic","flixel/FlxSprite.hx",639,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_648_graphicLoaded,"flixel.FlxSprite","graphicLoaded",0xacabf404,"flixel.FlxSprite.graphicLoaded","flixel/FlxSprite.hx",648,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_654_resetSize,"flixel.FlxSprite","resetSize",0x5d8771e7,"flixel.FlxSprite.resetSize","flixel/FlxSprite.hx",654,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_665_resetFrameSize,"flixel.FlxSprite","resetFrameSize",0xb7baa4a8,"flixel.FlxSprite.resetFrameSize","flixel/FlxSprite.hx",665,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_679_resetSizeFromFrame,"flixel.FlxSprite","resetSizeFromFrame",0xf893db7c,"flixel.FlxSprite.resetSizeFromFrame","flixel/FlxSprite.hx",679,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_692_resetFrame,"flixel.FlxSprite","resetFrame",0x02a6a847,"flixel.FlxSprite.resetFrame","flixel/FlxSprite.hx",692,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_703_setGraphicSize,"flixel.FlxSprite","setGraphicSize",0x516eb7f0,"flixel.FlxSprite.setGraphicSize","flixel/FlxSprite.hx",703,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_722_updateHitbox,"flixel.FlxSprite","updateHitbox",0x9470392a,"flixel.FlxSprite.updateHitbox","flixel/FlxSprite.hx",722,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_734_resetHelpers,"flixel.FlxSprite","resetHelpers",0x6fc22ddf,"flixel.FlxSprite.resetHelpers","flixel/FlxSprite.hx",734,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_756_update,"flixel.FlxSprite","update",0xe75bd5f2,"flixel.FlxSprite.update","flixel/FlxSprite.hx",756,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_766_updateAnimation,"flixel.FlxSprite","updateAnimation",0x7e6eaab2,"flixel.FlxSprite.updateAnimation","flixel/FlxSprite.hx",766,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_772_checkEmptyFrame,"flixel.FlxSprite","checkEmptyFrame",0xe3dea03f,"flixel.FlxSprite.checkEmptyFrame","flixel/FlxSprite.hx",772,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_780_draw,"flixel.FlxSprite","draw",0xe68b7fad,"flixel.FlxSprite.draw","flixel/FlxSprite.hx",780,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_812_drawSimple,"flixel.FlxSprite","drawSimple",0x0dc977bf,"flixel.FlxSprite.drawSimple","flixel/FlxSprite.hx",812,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_823_drawComplex,"flixel.FlxSprite","drawComplex",0xcf4c0e03,"flixel.FlxSprite.drawComplex","flixel/FlxSprite.hx",823,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_858_stamp,"flixel.FlxSprite","stamp",0x77d9503a,"flixel.FlxSprite.stamp","flixel/FlxSprite.hx",858,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_905_drawFrame,"flixel.FlxSprite","drawFrame",0x99d67540,"flixel.FlxSprite.drawFrame","flixel/FlxSprite.hx",905,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_926_centerOffsets,"flixel.FlxSprite","centerOffsets",0x583e0f62,"flixel.FlxSprite.centerOffsets","flixel/FlxSprite.hx",926,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_942_centerOrigin,"flixel.FlxSprite","centerOrigin",0x4cbae644,"flixel.FlxSprite.centerOrigin","flixel/FlxSprite.hx",942,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_955_replaceColor,"flixel.FlxSprite","replaceColor",0x7b700138,"flixel.FlxSprite.replaceColor","flixel/FlxSprite.hx",955,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_977_setColorTransform,"flixel.FlxSprite","setColorTransform",0xa09a3582,"flixel.FlxSprite.setColorTransform","flixel/FlxSprite.hx",977,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_989_updateColorTransform,"flixel.FlxSprite","updateColorTransform",0x79f9051b,"flixel.FlxSprite.updateColorTransform","flixel/FlxSprite.hx",989,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1013_pixelsOverlapPoint,"flixel.FlxSprite","pixelsOverlapPoint",0x4c878b7f,"flixel.FlxSprite.pixelsOverlapPoint","flixel/FlxSprite.hx",1013,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1033_getPixelAt,"flixel.FlxSprite","getPixelAt",0xeaefab8c,"flixel.FlxSprite.getPixelAt","flixel/FlxSprite.hx",1033,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1056_getPixelAtScreen,"flixel.FlxSprite","getPixelAtScreen",0x58308c18,"flixel.FlxSprite.getPixelAtScreen","flixel/FlxSprite.hx",1056,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1079_transformWorldToPixels,"flixel.FlxSprite","transformWorldToPixels",0x1a2b2c57,"flixel.FlxSprite.transformWorldToPixels","flixel/FlxSprite.hx",1079,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1097_transformWorldToPixelsSimple,"flixel.FlxSprite","transformWorldToPixelsSimple",0x4bb2ffe9,"flixel.FlxSprite.transformWorldToPixelsSimple","flixel/FlxSprite.hx",1097,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1123_transformScreenToPixels,"flixel.FlxSprite","transformScreenToPixels",0x8dfcfb17,"flixel.FlxSprite.transformScreenToPixels","flixel/FlxSprite.hx",1123,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1146_calcFrame,"flixel.FlxSprite","calcFrame",0xc4d45b0f,"flixel.FlxSprite.calcFrame","flixel/FlxSprite.hx",1146,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1159_updateFramePixels,"flixel.FlxSprite","updateFramePixels",0x2cd43e68,"flixel.FlxSprite.updateFramePixels","flixel/FlxSprite.hx",1159,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1208_getGraphicMidpoint,"flixel.FlxSprite","getGraphicMidpoint",0xc420be03,"flixel.FlxSprite.getGraphicMidpoint","flixel/FlxSprite.hx",1208,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1222_isOnScreen,"flixel.FlxSprite","isOnScreen",0xb5403c5e,"flixel.FlxSprite.isOnScreen","flixel/FlxSprite.hx",1222,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1234_isSimpleRender,"flixel.FlxSprite","isSimpleRender",0x6aa0d51b,"flixel.FlxSprite.isSimpleRender","flixel/FlxSprite.hx",1234,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1250_isSimpleRenderBlit,"flixel.FlxSprite","isSimpleRenderBlit",0x4bf362f0,"flixel.FlxSprite.isSimpleRenderBlit","flixel/FlxSprite.hx",1250,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1266_getRotatedBounds,"flixel.FlxSprite","getRotatedBounds",0x9196bfb1,"flixel.FlxSprite.getRotatedBounds","flixel/FlxSprite.hx",1266,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1283_getScreenBounds,"flixel.FlxSprite","getScreenBounds",0x49d4cfae,"flixel.FlxSprite.getScreenBounds","flixel/FlxSprite.hx",1283,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1314_setFacingFlip,"flixel.FlxSprite","setFacingFlip",0x6816c060,"flixel.FlxSprite.setFacingFlip","flixel/FlxSprite.hx",1314,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1326_setFrames,"flixel.FlxSprite","setFrames",0xd774ec9f,"flixel.FlxSprite.setFrames","flixel/FlxSprite.hx",1326,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1363_get_pixels,"flixel.FlxSprite","get_pixels",0x90b8575f,"flixel.FlxSprite.get_pixels","flixel/FlxSprite.hx",1363,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1368_set_pixels,"flixel.FlxSprite","set_pixels",0x9435f5d3,"flixel.FlxSprite.set_pixels","flixel/FlxSprite.hx",1368,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1387_set_frame,"flixel.FlxSprite","set_frame",0xf8c58847,"flixel.FlxSprite.set_frame","flixel/FlxSprite.hx",1387,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1423_set_facing,"flixel.FlxSprite","set_facing",0xeb9145c0,"flixel.FlxSprite.set_facing","flixel/FlxSprite.hx",1423,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1436_set_alpha,"flixel.FlxSprite","set_alpha",0x13d8b778,"flixel.FlxSprite.set_alpha","flixel/FlxSprite.hx",1436,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1448_set_color,"flixel.FlxSprite","set_color",0x3c9e817d,"flixel.FlxSprite.set_color","flixel/FlxSprite.hx",1448,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1460_set_angle,"flixel.FlxSprite","set_angle",0x152453ed,"flixel.FlxSprite.set_angle","flixel/FlxSprite.hx",1460,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1474_updateTrig,"flixel.FlxSprite","updateTrig",0x193f7fee,"flixel.FlxSprite.updateTrig","flixel/FlxSprite.hx",1474,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1486_set_blend,"flixel.FlxSprite","set_blend",0xa736f86b,"flixel.FlxSprite.set_blend","flixel/FlxSprite.hx",1486,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1495_set_graphic,"flixel.FlxSprite","set_graphic",0x07012542,"flixel.FlxSprite.set_graphic","flixel/FlxSprite.hx",1495,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1513_set_clipRect,"flixel.FlxSprite","set_clipRect",0x60020c3a,"flixel.FlxSprite.set_clipRect","flixel/FlxSprite.hx",1513,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1534_set_frames,"flixel.FlxSprite","set_frames",0xb411b64c,"flixel.FlxSprite.set_frames","flixel/FlxSprite.hx",1534,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1563_set_flipX,"flixel.FlxSprite","set_flipX",0xf4d45525,"flixel.FlxSprite.set_flipX","flixel/FlxSprite.hx",1563,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1574_set_flipY,"flixel.FlxSprite","set_flipY",0xf4d45526,"flixel.FlxSprite.set_flipY","flixel/FlxSprite.hx",1574,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1586_set_antialiasing,"flixel.FlxSprite","set_antialiasing",0xf8f29e1a,"flixel.FlxSprite.set_antialiasing","flixel/FlxSprite.hx",1586,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1592_set_useFramePixels,"flixel.FlxSprite","set_useFramePixels",0x72e62ad9,"flixel.FlxSprite.set_useFramePixels","flixel/FlxSprite.hx",1592,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1616_checkFlipX,"flixel.FlxSprite","checkFlipX",0x26093f8c,"flixel.FlxSprite.checkFlipX","flixel/FlxSprite.hx",1616,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_1627_checkFlipY,"flixel.FlxSprite","checkFlipY",0x26093f8d,"flixel.FlxSprite.checkFlipY","flixel/FlxSprite.hx",1627,0x0384bffa)
HX_LOCAL_STACK_FRAME(_hx_pos_cfd221447aa7194b_136_boot,"flixel.FlxSprite","boot",0xe536d7db,"flixel.FlxSprite.boot","flixel/FlxSprite.hx",136,0x0384bffa)
namespace flixel{

void FlxSprite_obj::__construct( ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic){
            		 ::Dynamic X = __o_X;
            		if (::hx::IsNull(__o_X)) X = 0;
            		 ::Dynamic Y = __o_Y;
            		if (::hx::IsNull(__o_Y)) Y = 0;
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_129_new)
HXLINE( 366)		this->_facingFlip =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 360)		this->_angleChanged = true;
HXLINE( 358)		this->_cosAngle = ((Float)1);
HXLINE( 355)		this->_sinAngle = ((Float)0);
HXLINE( 306)		this->_facingVerticalMult = 1;
HXLINE( 304)		this->_facingHorizontalMult = 1;
HXLINE( 271)		this->useColorTransform = false;
HXLINE( 264)		this->color = 16777215;
HXLINE( 231)		this->flipY = false;
HXLINE( 226)		this->flipX = false;
HXLINE( 221)		this->facing = 16;
HXLINE( 214)		this->alpha = ((Float)1.0);
HXLINE( 208)		this->bakedRotationAngle = ((Float)0);
HXLINE( 194)		this->numFrames = 0;
HXLINE( 188)		this->frameHeight = 0;
HXLINE( 183)		this->frameWidth = 0;
HXLINE( 167)		this->dirty = true;
HXLINE( 161)		this->antialiasing = ::flixel::FlxSprite_obj::defaultAntialiasing;
HXLINE( 156)		this->useFramePixels = true;
HXLINE( 379)		super::__construct(X,Y,null(),null());
HXLINE( 381)		this->set_useFramePixels(::flixel::FlxG_obj::renderBlit);
HXLINE( 382)		if (::hx::IsNotNull( SimpleGraphic )) {
HXLINE( 383)			this->loadGraphic(SimpleGraphic,null(),null(),null(),null(),null());
            		}
            	}

Dynamic FlxSprite_obj::__CreateEmpty() { return new FlxSprite_obj; }

void *FlxSprite_obj::_hx_vtable = 0;

Dynamic FlxSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSprite_obj > _hx_result = new FlxSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655;
	}
}

void FlxSprite_obj::initVars(){
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_388_initVars)
HXLINE( 389)		this->super::initVars();
HXLINE( 391)		this->animation =  ::flixel::animation::FlxAnimationController_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 393)		this->_flashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 394)		this->_flashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 395)		this->_flashRect2 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 396)		this->_flashPointZero =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 397)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 397)		point->_inPool = false;
HXDLIN( 397)		this->offset = point;
HXLINE( 398)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 398)		point1->_inPool = false;
HXDLIN( 398)		this->origin = point1;
HXLINE( 399)		 ::flixel::math::FlxBasePoint point2 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(1,1);
HXDLIN( 399)		point2->_inPool = false;
HXDLIN( 399)		this->scale = point2;
HXLINE( 400)		 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 400)		point3->_inPool = false;
HXDLIN( 400)		this->_halfSize = point3;
HXLINE( 401)		this->_matrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 402)		this->colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 403)		 ::flixel::math::FlxBasePoint this1 =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ));
HXDLIN( 403)		this->_scaledOrigin = this1;
            	}


void FlxSprite_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_417_destroy)
HXLINE( 418)		this->super::destroy();
HXLINE( 420)		this->animation = ( ( ::flixel::animation::FlxAnimationController)(::flixel::util::FlxDestroyUtil_obj::destroy(this->animation)) );
HXLINE( 422)		this->offset = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->offset)) );
HXLINE( 423)		this->origin = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->origin)) );
HXLINE( 424)		this->scale = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->scale)) );
HXLINE( 425)		this->_halfSize = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_halfSize)) );
HXLINE( 426)		this->_scaledOrigin = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_scaledOrigin)) );
HXLINE( 428)		this->framePixels = ::flixel::util::FlxDestroyUtil_obj::dispose(this->framePixels);
HXLINE( 430)		this->_flashPoint = null();
HXLINE( 431)		this->_flashRect = null();
HXLINE( 432)		this->_flashRect2 = null();
HXLINE( 433)		this->_flashPointZero = null();
HXLINE( 434)		this->_matrix = null();
HXLINE( 435)		this->colorTransform = null();
HXLINE( 436)		this->set_blend(null());
HXLINE( 438)		this->set_frames(null());
HXLINE( 439)		this->set_graphic(null());
HXLINE( 440)		this->_frame = ( ( ::flixel::graphics::frames::FlxFrame)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_frame)) );
HXLINE( 441)		this->_frameGraphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_frameGraphic)) );
HXLINE( 443)		this->shader = null();
            	}


 ::flixel::FlxSprite FlxSprite_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_448_clone)
HXDLIN( 448)		return  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->loadGraphicFromSprite(::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,clone,return )

 ::flixel::FlxSprite FlxSprite_obj::loadGraphicFromSprite( ::flixel::FlxSprite Sprite){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_459_loadGraphicFromSprite)
HXLINE( 460)		this->set_frames(Sprite->frames);
HXLINE( 461)		this->bakedRotationAngle = Sprite->bakedRotationAngle;
HXLINE( 462)		if ((this->bakedRotationAngle > 0)) {
HXLINE( 464)			this->set_width(Sprite->get_width());
HXLINE( 465)			this->set_height(Sprite->get_height());
HXLINE( 466)			this->centerOffsets(null());
            		}
HXLINE( 468)		this->set_antialiasing(Sprite->antialiasing);
HXLINE( 469)		this->animation->copyFrom(Sprite->animation);
HXLINE( 470)		this->graphicLoaded();
HXLINE( 471)		this->set_clipRect(Sprite->clipRect);
HXLINE( 472)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,loadGraphicFromSprite,return )

 ::flixel::FlxSprite FlxSprite_obj::loadGraphic( ::Dynamic graphic,::hx::Null< bool >  __o_animated,::hx::Null< int >  __o_frameWidth,::hx::Null< int >  __o_frameHeight,::hx::Null< bool >  __o_unique,::String key){
            		bool animated = __o_animated.Default(false);
            		int frameWidth = __o_frameWidth.Default(0);
            		int frameHeight = __o_frameHeight.Default(0);
            		bool unique = __o_unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_496_loadGraphic)
HXLINE( 497)		 ::flixel::graphics::FlxGraphic graph = ::flixel::FlxG_obj::bitmap->add(graphic,unique,key);
HXLINE( 498)		if (::hx::IsNull( graph )) {
HXLINE( 499)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 501)		if ((frameWidth == 0)) {
HXLINE( 503)			if (animated) {
HXLINE( 503)				frameWidth = graph->height;
            			}
            			else {
HXLINE( 503)				frameWidth = graph->width;
            			}
HXLINE( 504)			if ((frameWidth > graph->width)) {
HXLINE( 504)				frameWidth = graph->width;
            			}
            		}
            		else {
HXLINE( 506)			bool _hx_tmp = (frameWidth > graph->width);
            		}
HXLINE( 509)		if ((frameHeight == 0)) {
HXLINE( 511)			if (animated) {
HXLINE( 511)				frameHeight = frameWidth;
            			}
            			else {
HXLINE( 511)				frameHeight = graph->height;
            			}
HXLINE( 512)			if ((frameHeight > graph->height)) {
HXLINE( 512)				frameHeight = graph->height;
            			}
            		}
            		else {
HXLINE( 514)			bool _hx_tmp = (frameHeight > graph->height);
            		}
HXLINE( 517)		if (animated) {
HXLINE( 518)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(frameWidth,frameHeight);
HXDLIN( 518)			point->_inPool = false;
HXDLIN( 518)			this->set_frames(::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(graph,point,null(),null()));
            		}
            		else {
HXLINE( 520)			this->set_frames(graph->get_imageFrame());
            		}
HXLINE( 522)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadGraphic,return )

 ::flixel::FlxSprite FlxSprite_obj::loadRotatedGraphic( ::Dynamic Graphic,::hx::Null< int >  __o_Rotations,::hx::Null< int >  __o_Frame,::hx::Null< bool >  __o_AntiAliasing,::hx::Null< bool >  __o_AutoBuffer,::String Key){
            		int Rotations = __o_Rotations.Default(16);
            		int Frame = __o_Frame.Default(-1);
            		bool AntiAliasing = __o_AntiAliasing.Default(false);
            		bool AutoBuffer = __o_AutoBuffer.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_543_loadRotatedGraphic)
HXLINE( 544)		 ::flixel::graphics::FlxGraphic brushGraphic = ::flixel::FlxG_obj::bitmap->add(Graphic,false,Key);
HXLINE( 545)		if (::hx::IsNull( brushGraphic )) {
HXLINE( 546)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 548)		 ::openfl::display::BitmapData brush = brushGraphic->bitmap;
HXLINE( 549)		::String key = brushGraphic->key;
HXLINE( 551)		if ((Frame >= 0)) {
HXLINE( 554)			int brushSize = brush->height;
HXLINE( 555)			int framesNum = ::Std_obj::_hx_int((( (Float)(brush->width) ) / ( (Float)(brushSize) )));
HXLINE( 556)			bool Frame1;
HXDLIN( 556)			if ((framesNum <= Frame)) {
HXLINE( 556)				Frame1 = (framesNum == 0);
            			}
            			else {
HXLINE( 556)				Frame1 = true;
            			}
HXDLIN( 556)			if (!(Frame1)) {
HXLINE( 556)				Frame = ::hx::Mod(Frame,framesNum);
            			}
HXLINE( 557)			key = (key + (HX_(":",3a,00,00,00) + Frame));
HXLINE( 559)			 ::openfl::display::BitmapData full = brush;
HXLINE( 560)			brush =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,brushSize,brushSize,true,0);
HXLINE( 561)			this->_flashRect->setTo(( (Float)((Frame * brushSize)) ),( (Float)(0) ),( (Float)(brushSize) ),( (Float)(brushSize) ));
HXLINE( 562)			brush->copyPixels(full,this->_flashRect,this->_flashPointZero,null(),null(),null());
            		}
HXLINE( 565)		key = (key + (((HX_(":",3a,00,00,00) + Rotations) + HX_(":",3a,00,00,00)) + ::Std_obj::string(AutoBuffer)));
HXLINE( 568)		 ::flixel::graphics::FlxGraphic tempGraph = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 569)		if (::hx::IsNull( tempGraph )) {
HXLINE( 571)			 ::openfl::display::BitmapData bitmap = ::flixel::util::FlxBitmapDataUtil_obj::generateRotations(brush,Rotations,AntiAliasing,AutoBuffer);
HXLINE( 572)			tempGraph = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(bitmap,false,key,null());
            		}
HXLINE( 575)		int max;
HXDLIN( 575)		if ((brush->height > brush->width)) {
HXLINE( 575)			max = brush->height;
            		}
            		else {
HXLINE( 575)			max = brush->width;
            		}
HXLINE( 576)		if (AutoBuffer) {
HXLINE( 576)			max = ::Std_obj::_hx_int((( (Float)(max) ) * ((Float)1.5)));
            		}
HXLINE( 578)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(max,max);
HXDLIN( 578)		point->_inPool = false;
HXDLIN( 578)		this->set_frames(::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(tempGraph,point,null(),null()));
HXLINE( 580)		if (AutoBuffer) {
HXLINE( 582)			this->set_width(( (Float)(brush->width) ));
HXLINE( 583)			this->set_height(( (Float)(brush->height) ));
HXLINE( 584)			this->centerOffsets(null());
            		}
HXLINE( 587)		this->bakedRotationAngle = (( (Float)(360) ) / ( (Float)(Rotations) ));
HXLINE( 588)		this->animation->createPrerotated(null());
HXLINE( 589)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxSprite_obj,loadRotatedGraphic,return )

 ::flixel::FlxSprite FlxSprite_obj::loadRotatedFrame( ::flixel::graphics::frames::FlxFrame Frame,::hx::Null< int >  __o_Rotations,::hx::Null< bool >  __o_AntiAliasing,::hx::Null< bool >  __o_AutoBuffer){
            		int Rotations = __o_Rotations.Default(16);
            		bool AntiAliasing = __o_AntiAliasing.Default(false);
            		bool AutoBuffer = __o_AutoBuffer.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_604_loadRotatedFrame)
HXLINE( 605)		::String key = Frame->parent->key;
HXLINE( 606)		if (::hx::IsNotNull( Frame->name )) {
HXLINE( 607)			key = (key + (HX_(":",3a,00,00,00) + Frame->name));
            		}
            		else {
HXLINE( 609)			 ::flixel::math::FlxRect _this = Frame->frame;
HXDLIN( 609)			 ::Dynamic value = _this->x;
HXDLIN( 609)			 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 609)			_this1->label = HX_("x",78,00,00,00);
HXDLIN( 609)			_this1->value = value;
HXDLIN( 609)			 ::Dynamic value1 = _this->y;
HXDLIN( 609)			 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 609)			_this2->label = HX_("y",79,00,00,00);
HXDLIN( 609)			_this2->value = value1;
HXDLIN( 609)			 ::Dynamic value2 = _this->width;
HXDLIN( 609)			 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 609)			_this3->label = HX_("w",77,00,00,00);
HXDLIN( 609)			_this3->value = value2;
HXDLIN( 609)			 ::Dynamic value3 = _this->height;
HXDLIN( 609)			 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 609)			_this4->label = HX_("h",68,00,00,00);
HXDLIN( 609)			_this4->value = value3;
HXDLIN( 609)			key = (key + (HX_(":",3a,00,00,00) + ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(4)->init(0,_this1)->init(1,_this2)->init(2,_this3)->init(3,_this4))));
            		}
HXLINE( 611)		 ::flixel::graphics::FlxGraphic graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 612)		if (::hx::IsNull( graphic )) {
HXLINE( 613)			graphic = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(Frame->paint(null(),null(),null(),null()),false,key,null());
            		}
HXLINE( 615)		return this->loadRotatedGraphic(graphic,Rotations,-1,AntiAliasing,AutoBuffer,null());
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxSprite_obj,loadRotatedFrame,return )

 ::flixel::FlxSprite FlxSprite_obj::makeGraphic(int Width,int Height,::hx::Null< int >  __o_Color,::hx::Null< bool >  __o_Unique,::String Key){
            		int Color = __o_Color.Default(-1);
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_639_makeGraphic)
HXLINE( 640)		 ::flixel::graphics::FlxGraphic graph = ::flixel::FlxG_obj::bitmap->create(Width,Height,Color,Unique,Key);
HXLINE( 641)		this->set_frames(graph->get_imageFrame());
HXLINE( 642)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxSprite_obj,makeGraphic,return )

void FlxSprite_obj::graphicLoaded(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_648_graphicLoaded)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,graphicLoaded,(void))

void FlxSprite_obj::resetSize(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_654_resetSize)
HXLINE( 655)		this->_flashRect->x = ( (Float)(0) );
HXLINE( 656)		this->_flashRect->y = ( (Float)(0) );
HXLINE( 657)		this->_flashRect->width = ( (Float)(this->frameWidth) );
HXLINE( 658)		this->_flashRect->height = ( (Float)(this->frameHeight) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSize,(void))

void FlxSprite_obj::resetFrameSize(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_665_resetFrameSize)
HXLINE( 666)		if (::hx::IsNotNull( this->frame )) {
HXLINE( 668)			this->frameWidth = ::Std_obj::_hx_int(this->frame->sourceSize->x);
HXLINE( 669)			this->frameHeight = ::Std_obj::_hx_int(this->frame->sourceSize->y);
            		}
HXLINE( 671)		{
HXLINE( 671)			 ::flixel::math::FlxBasePoint this1 = this->_halfSize;
HXDLIN( 671)			Float y = (((Float)0.5) * ( (Float)(this->frameHeight) ));
HXDLIN( 671)			this1->set_x((((Float)0.5) * ( (Float)(this->frameWidth) )));
HXDLIN( 671)			this1->set_y(y);
            		}
HXLINE( 672)		{
HXLINE( 672)			this->_flashRect->x = ( (Float)(0) );
HXDLIN( 672)			this->_flashRect->y = ( (Float)(0) );
HXDLIN( 672)			this->_flashRect->width = ( (Float)(this->frameWidth) );
HXDLIN( 672)			this->_flashRect->height = ( (Float)(this->frameHeight) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrameSize,(void))

void FlxSprite_obj::resetSizeFromFrame(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_679_resetSizeFromFrame)
HXLINE( 680)		this->set_width(( (Float)(this->frameWidth) ));
HXLINE( 681)		this->set_height(( (Float)(this->frameHeight) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetSizeFromFrame,(void))

void FlxSprite_obj::resetFrame(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_692_resetFrame)
HXDLIN( 692)		this->set_frame(this->frame);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetFrame,(void))

void FlxSprite_obj::setGraphicSize(::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height){
            		int Width = __o_Width.Default(0);
            		int Height = __o_Height.Default(0);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_703_setGraphicSize)
HXLINE( 704)		bool _hx_tmp;
HXDLIN( 704)		if ((Width <= 0)) {
HXLINE( 704)			_hx_tmp = (Height <= 0);
            		}
            		else {
HXLINE( 704)			_hx_tmp = false;
            		}
HXDLIN( 704)		if (_hx_tmp) {
HXLINE( 705)			return;
            		}
HXLINE( 707)		Float newScaleX = (( (Float)(Width) ) / ( (Float)(this->frameWidth) ));
HXLINE( 708)		Float newScaleY = (( (Float)(Height) ) / ( (Float)(this->frameHeight) ));
HXLINE( 709)		{
HXLINE( 709)			 ::flixel::math::FlxBasePoint this1 = this->scale;
HXDLIN( 709)			this1->set_x(newScaleX);
HXDLIN( 709)			this1->set_y(newScaleY);
            		}
HXLINE( 711)		if ((Width <= 0)) {
HXLINE( 712)			this->scale->set_x(newScaleY);
            		}
            		else {
HXLINE( 713)			if ((Height <= 0)) {
HXLINE( 714)				this->scale->set_y(newScaleX);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,setGraphicSize,(void))

void FlxSprite_obj::updateHitbox(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_722_updateHitbox)
HXLINE( 723)		this->set_width((::Math_obj::abs(this->scale->x) * ( (Float)(this->frameWidth) )));
HXLINE( 724)		this->set_height((::Math_obj::abs(this->scale->y) * ( (Float)(this->frameHeight) )));
HXLINE( 725)		{
HXLINE( 725)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 725)			Float x = this->get_width();
HXDLIN( 725)			Float x1 = (((Float)-0.5) * (x - ( (Float)(this->frameWidth) )));
HXDLIN( 725)			Float y = this->get_height();
HXDLIN( 725)			Float y1 = (((Float)-0.5) * (y - ( (Float)(this->frameHeight) )));
HXDLIN( 725)			this1->set_x(x1);
HXDLIN( 725)			this1->set_y(y1);
            		}
HXLINE( 726)		{
HXLINE( 726)			 ::flixel::math::FlxBasePoint this2 = this->origin;
HXDLIN( 726)			Float y2 = (( (Float)(this->frameHeight) ) * ((Float)0.5));
HXDLIN( 726)			this2->set_x((( (Float)(this->frameWidth) ) * ((Float)0.5)));
HXDLIN( 726)			this2->set_y(y2);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateHitbox,(void))

void FlxSprite_obj::resetHelpers(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_734_resetHelpers)
HXLINE( 735)		{
HXLINE( 735)			if (::hx::IsNotNull( this->frame )) {
HXLINE( 735)				this->frameWidth = ::Std_obj::_hx_int(this->frame->sourceSize->x);
HXDLIN( 735)				this->frameHeight = ::Std_obj::_hx_int(this->frame->sourceSize->y);
            			}
HXDLIN( 735)			{
HXLINE( 735)				 ::flixel::math::FlxBasePoint this1 = this->_halfSize;
HXDLIN( 735)				Float y = (((Float)0.5) * ( (Float)(this->frameHeight) ));
HXDLIN( 735)				this1->set_x((((Float)0.5) * ( (Float)(this->frameWidth) )));
HXDLIN( 735)				this1->set_y(y);
            			}
HXDLIN( 735)			{
HXLINE( 735)				this->_flashRect->x = ( (Float)(0) );
HXDLIN( 735)				this->_flashRect->y = ( (Float)(0) );
HXDLIN( 735)				this->_flashRect->width = ( (Float)(this->frameWidth) );
HXDLIN( 735)				this->_flashRect->height = ( (Float)(this->frameHeight) );
            			}
            		}
HXLINE( 736)		{
HXLINE( 736)			this->set_width(( (Float)(this->frameWidth) ));
HXDLIN( 736)			this->set_height(( (Float)(this->frameHeight) ));
            		}
HXLINE( 737)		this->_flashRect2->x = ( (Float)(0) );
HXLINE( 738)		this->_flashRect2->y = ( (Float)(0) );
HXLINE( 740)		if (::hx::IsNotNull( this->graphic )) {
HXLINE( 742)			this->_flashRect2->width = ( (Float)(this->graphic->width) );
HXLINE( 743)			this->_flashRect2->height = ( (Float)(this->graphic->height) );
            		}
HXLINE( 746)		{
HXLINE( 746)			 ::flixel::math::FlxBasePoint this2 = this->origin;
HXDLIN( 746)			Float y1 = (( (Float)(this->frameHeight) ) * ((Float)0.5));
HXDLIN( 746)			this2->set_x((( (Float)(this->frameWidth) ) * ((Float)0.5)));
HXDLIN( 746)			this2->set_y(y1);
            		}
HXLINE( 748)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 750)			this->dirty = true;
HXLINE( 751)			this->updateFramePixels();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,resetHelpers,(void))

void FlxSprite_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_756_update)
HXLINE( 757)		this->super::update(elapsed);
HXLINE( 758)		this->updateAnimation(elapsed);
            	}


void FlxSprite_obj::updateAnimation(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_766_updateAnimation)
HXDLIN( 766)		this->animation->update(elapsed);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,updateAnimation,(void))

void FlxSprite_obj::checkEmptyFrame(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_772_checkEmptyFrame)
HXDLIN( 772)		if (::hx::IsNull( this->_frame )) {
HXLINE( 773)			this->loadGraphic(HX_("flixel/images/logo/default.png",1c,39,3e,0e),null(),null(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,checkEmptyFrame,(void))

void FlxSprite_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_780_draw)
HXLINE( 781)		this->checkEmptyFrame();
HXLINE( 783)		bool _hx_tmp;
HXDLIN( 783)		if ((this->alpha != 0)) {
HXLINE( 783)			_hx_tmp = (this->_frame->type == 2);
            		}
            		else {
HXLINE( 783)			_hx_tmp = true;
            		}
HXDLIN( 783)		if (_hx_tmp) {
HXLINE( 784)			return;
            		}
HXLINE( 786)		if (this->dirty) {
HXLINE( 787)			this->calcFrame(this->useFramePixels);
            		}
HXLINE( 789)		{
HXLINE( 789)			int _g = 0;
HXDLIN( 789)			::Array< ::Dynamic> _g1 = this->get_cameras();
HXDLIN( 789)			while((_g < _g1->length)){
HXLINE( 789)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 789)				_g = (_g + 1);
HXLINE( 791)				bool _hx_tmp;
HXDLIN( 791)				bool _hx_tmp1;
HXDLIN( 791)				if (camera->visible) {
HXLINE( 791)					_hx_tmp1 = !(camera->exists);
            				}
            				else {
HXLINE( 791)					_hx_tmp1 = true;
            				}
HXDLIN( 791)				if (!(_hx_tmp1)) {
HXLINE( 791)					_hx_tmp = !(this->isOnScreen(camera));
            				}
            				else {
HXLINE( 791)					_hx_tmp = true;
            				}
HXDLIN( 791)				if (_hx_tmp) {
HXLINE( 792)					continue;
            				}
HXLINE( 794)				if (this->isSimpleRender(camera)) {
HXLINE( 795)					this->drawSimple(camera);
            				}
            				else {
HXLINE( 797)					this->drawComplex(camera);
            				}
            			}
            		}
            	}


void FlxSprite_obj::drawSimple( ::flixel::FlxCamera camera){
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_812_drawSimple)
HXLINE( 813)		{
HXLINE( 813)			 ::flixel::math::FlxBasePoint this1 = this->getScreenPosition(this->_point,camera);
HXDLIN( 813)			 ::flixel::math::FlxBasePoint point = this->offset;
HXDLIN( 813)			{
HXLINE( 813)				Float y = point->y;
HXDLIN( 813)				this1->set_x((this1->x - point->x));
HXDLIN( 813)				this1->set_y((this1->y - y));
            			}
HXDLIN( 813)			if (point->_weak) {
HXLINE( 813)				point->put();
            			}
            		}
HXLINE( 814)		if (this->isPixelPerfectRender(camera)) {
HXLINE( 815)			 ::flixel::math::FlxBasePoint this1 = this->_point;
HXDLIN( 815)			this1->set_x(( (Float)(::Math_obj::floor(this1->x)) ));
HXDLIN( 815)			this1->set_y(( (Float)(::Math_obj::floor(this1->y)) ));
            		}
HXLINE( 817)		{
HXLINE( 817)			 ::flixel::math::FlxBasePoint this2 = this->_point;
HXDLIN( 817)			 ::openfl::geom::Point p = this->_flashPoint;
HXDLIN( 817)			if (::hx::IsNull( p )) {
HXLINE( 817)				p =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            			}
HXDLIN( 817)			p->x = this2->x;
HXDLIN( 817)			p->y = this2->y;
            		}
HXLINE( 818)		camera->copyPixels(this->_frame,this->framePixels,this->_flashRect,this->_flashPoint,this->colorTransform,this->blend,this->antialiasing,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawSimple,(void))

void FlxSprite_obj::drawComplex( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_823_drawComplex)
HXLINE( 824)		bool doFlipX = (this->flipX != this->_frame->flipX);
HXDLIN( 824)		bool _hx_tmp;
HXDLIN( 824)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 824)			_hx_tmp = (doFlipX != this->animation->_curAnim->flipX);
            		}
            		else {
HXLINE( 824)			_hx_tmp = doFlipX;
            		}
HXDLIN( 824)		bool doFlipY = (this->flipY != this->_frame->flipY);
HXDLIN( 824)		bool _hx_tmp1;
HXDLIN( 824)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 824)			_hx_tmp1 = (doFlipY != this->animation->_curAnim->flipY);
            		}
            		else {
HXLINE( 824)			_hx_tmp1 = doFlipY;
            		}
HXDLIN( 824)		this->_frame->prepareMatrix(this->_matrix,0,_hx_tmp,_hx_tmp1);
HXLINE( 825)		this->_matrix->translate(-(this->origin->x),-(this->origin->y));
HXLINE( 826)		this->_matrix->scale(this->scale->x,this->scale->y);
HXLINE( 828)		if ((this->bakedRotationAngle <= 0)) {
HXLINE( 830)			if (this->_angleChanged) {
HXLINE( 830)				Float radians = (this->angle * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN( 830)				this->_sinAngle = ::Math_obj::sin(radians);
HXDLIN( 830)				this->_cosAngle = ::Math_obj::cos(radians);
HXDLIN( 830)				this->_angleChanged = false;
            			}
HXLINE( 832)			if ((this->angle != 0)) {
HXLINE( 833)				 ::flixel::math::FlxMatrix _this = this->_matrix;
HXDLIN( 833)				Float cos = this->_cosAngle;
HXDLIN( 833)				Float sin = this->_sinAngle;
HXDLIN( 833)				Float a1 = ((_this->a * cos) - (_this->b * sin));
HXDLIN( 833)				_this->b = ((_this->a * sin) + (_this->b * cos));
HXDLIN( 833)				_this->a = a1;
HXDLIN( 833)				Float c1 = ((_this->c * cos) - (_this->d * sin));
HXDLIN( 833)				_this->d = ((_this->c * sin) + (_this->d * cos));
HXDLIN( 833)				_this->c = c1;
HXDLIN( 833)				Float tx1 = ((_this->tx * cos) - (_this->ty * sin));
HXDLIN( 833)				_this->ty = ((_this->tx * sin) + (_this->ty * cos));
HXDLIN( 833)				_this->tx = tx1;
            			}
            		}
HXLINE( 836)		{
HXLINE( 836)			 ::flixel::math::FlxBasePoint this1 = this->getScreenPosition(this->_point,camera);
HXDLIN( 836)			 ::flixel::math::FlxBasePoint point = this->offset;
HXDLIN( 836)			{
HXLINE( 836)				Float y = point->y;
HXDLIN( 836)				this1->set_x((this1->x - point->x));
HXDLIN( 836)				this1->set_y((this1->y - y));
            			}
HXDLIN( 836)			if (point->_weak) {
HXLINE( 836)				point->put();
            			}
            		}
HXLINE( 837)		{
HXLINE( 837)			 ::flixel::math::FlxBasePoint this2 = this->_point;
HXDLIN( 837)			Float y1 = this->origin->y;
HXDLIN( 837)			this2->set_x((this2->x + this->origin->x));
HXDLIN( 837)			this2->set_y((this2->y + y1));
            		}
HXLINE( 838)		this->_matrix->translate(this->_point->x,this->_point->y);
HXLINE( 840)		if (this->isPixelPerfectRender(camera)) {
HXLINE( 842)			this->_matrix->tx = ( (Float)(::Math_obj::floor(this->_matrix->tx)) );
HXLINE( 843)			this->_matrix->ty = ( (Float)(::Math_obj::floor(this->_matrix->ty)) );
            		}
HXLINE( 846)		camera->drawPixels(this->_frame,this->framePixels,this->_matrix,this->colorTransform,this->blend,this->antialiasing,this->shader);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawComplex,(void))

void FlxSprite_obj::stamp( ::flixel::FlxSprite Brush,::hx::Null< int >  __o_X,::hx::Null< int >  __o_Y){
            		int X = __o_X.Default(0);
            		int Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_858_stamp)
HXLINE( 859)		Brush->drawFrame(null());
HXLINE( 861)		bool _hx_tmp;
HXDLIN( 861)		if (::hx::IsNotNull( this->graphic )) {
HXLINE( 861)			_hx_tmp = ::hx::IsNull( Brush->graphic );
            		}
            		else {
HXLINE( 861)			_hx_tmp = true;
            		}
HXDLIN( 861)		if (_hx_tmp) {
HXLINE( 862)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Cannot stamp to or from a FlxSprite with no graphics.",72,0b,d4,aa)));
            		}
HXLINE( 864)		 ::openfl::display::BitmapData bitmapData = Brush->framePixels;
HXLINE( 866)		if (this->isSimpleRenderBlit(null())) {
HXLINE( 868)			this->_flashPoint->x = (X + this->frame->frame->x);
HXLINE( 869)			this->_flashPoint->y = (Y + this->frame->frame->y);
HXLINE( 870)			this->_flashRect2->width = ( (Float)(bitmapData->width) );
HXLINE( 871)			this->_flashRect2->height = ( (Float)(bitmapData->height) );
HXLINE( 872)			this->graphic->bitmap->copyPixels(bitmapData,this->_flashRect2,this->_flashPoint,null(),null(),true);
HXLINE( 873)			this->_flashRect2->width = ( (Float)(this->graphic->bitmap->width) );
HXLINE( 874)			this->_flashRect2->height = ( (Float)(this->graphic->bitmap->height) );
            		}
            		else {
HXLINE( 878)			this->_matrix->identity();
HXLINE( 879)			this->_matrix->translate(-(Brush->origin->x),-(Brush->origin->y));
HXLINE( 880)			this->_matrix->scale(Brush->scale->x,Brush->scale->y);
HXLINE( 881)			if ((Brush->angle != 0)) {
HXLINE( 883)				this->_matrix->rotate((Brush->angle * (::Math_obj::PI / ( (Float)(180) ))));
            			}
HXLINE( 885)			this->_matrix->translate(((X + this->frame->frame->x) + Brush->origin->x),((Y + this->frame->frame->y) + Brush->origin->y));
HXLINE( 886)			 ::Dynamic brushBlend = Brush->blend;
HXLINE( 887)			this->graphic->bitmap->draw(bitmapData,this->_matrix,null(),brushBlend,null(),Brush->antialiasing);
            		}
HXLINE( 890)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 892)			this->dirty = true;
HXLINE( 893)			this->calcFrame(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,stamp,(void))

void FlxSprite_obj::drawFrame(::hx::Null< bool >  __o_Force){
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_905_drawFrame)
HXDLIN( 905)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 907)			bool _hx_tmp;
HXDLIN( 907)			if (!(Force)) {
HXLINE( 907)				_hx_tmp = this->dirty;
            			}
            			else {
HXLINE( 907)				_hx_tmp = true;
            			}
HXDLIN( 907)			if (_hx_tmp) {
HXLINE( 909)				this->dirty = true;
HXLINE( 910)				this->calcFrame(null());
            			}
            		}
            		else {
HXLINE( 915)			this->dirty = true;
HXLINE( 916)			this->calcFrame(true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,drawFrame,(void))

void FlxSprite_obj::centerOffsets(::hx::Null< bool >  __o_AdjustPosition){
            		bool AdjustPosition = __o_AdjustPosition.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_926_centerOffsets)
HXLINE( 927)		{
HXLINE( 927)			 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 927)			int x = this->frameWidth;
HXDLIN( 927)			this1->set_x(((( (Float)(x) ) - this->get_width()) * ((Float)0.5)));
            		}
HXLINE( 928)		{
HXLINE( 928)			 ::flixel::math::FlxBasePoint this2 = this->offset;
HXDLIN( 928)			int y = this->frameHeight;
HXDLIN( 928)			this2->set_y(((( (Float)(y) ) - this->get_height()) * ((Float)0.5)));
            		}
HXLINE( 929)		if (AdjustPosition) {
HXLINE( 931)			this->set_x((this->x + this->offset->x));
HXLINE( 932)			this->set_y((this->y + this->offset->y));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,centerOffsets,(void))

void FlxSprite_obj::centerOrigin(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_942_centerOrigin)
HXDLIN( 942)		 ::flixel::math::FlxBasePoint this1 = this->origin;
HXDLIN( 942)		Float y = (( (Float)(this->frameHeight) ) * ((Float)0.5));
HXDLIN( 942)		this1->set_x((( (Float)(this->frameWidth) ) * ((Float)0.5)));
HXDLIN( 942)		this1->set_y(y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,centerOrigin,(void))

::Array< ::Dynamic> FlxSprite_obj::replaceColor(int Color,int NewColor,::hx::Null< bool >  __o_FetchPositions){
            		bool FetchPositions = __o_FetchPositions.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_955_replaceColor)
HXLINE( 956)		::Array< ::Dynamic> positions = ::flixel::util::FlxBitmapDataUtil_obj::replaceColor(this->graphic->bitmap,Color,NewColor,FetchPositions,null());
HXLINE( 957)		if (::hx::IsNotNull( positions )) {
HXLINE( 958)			this->dirty = true;
            		}
HXLINE( 959)		return positions;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,replaceColor,return )

void FlxSprite_obj::setColorTransform(::hx::Null< Float >  __o_redMultiplier,::hx::Null< Float >  __o_greenMultiplier,::hx::Null< Float >  __o_blueMultiplier,::hx::Null< Float >  __o_alphaMultiplier,::hx::Null< int >  __o_redOffset,::hx::Null< int >  __o_greenOffset,::hx::Null< int >  __o_blueOffset,::hx::Null< int >  __o_alphaOffset){
            		Float redMultiplier = __o_redMultiplier.Default(((Float)1.0));
            		Float greenMultiplier = __o_greenMultiplier.Default(((Float)1.0));
            		Float blueMultiplier = __o_blueMultiplier.Default(((Float)1.0));
            		Float alphaMultiplier = __o_alphaMultiplier.Default(((Float)1.0));
            		int redOffset = __o_redOffset.Default(0);
            		int greenOffset = __o_greenOffset.Default(0);
            		int blueOffset = __o_blueOffset.Default(0);
            		int alphaOffset = __o_alphaOffset.Default(0);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_977_setColorTransform)
HXLINE( 978)		Float Alpha = ( (Float)(1) );
HXDLIN( 978)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 978)		{
HXLINE( 978)			int Value = ::Math_obj::round((redMultiplier * ( (Float)(255) )));
HXDLIN( 978)			color = (color & -16711681);
HXDLIN( 978)			int color1;
HXDLIN( 978)			if ((Value > 255)) {
HXLINE( 978)				color1 = 255;
            			}
            			else {
HXLINE( 978)				if ((Value < 0)) {
HXLINE( 978)					color1 = 0;
            				}
            				else {
HXLINE( 978)					color1 = Value;
            				}
            			}
HXDLIN( 978)			color = (color | (color1 << 16));
            		}
HXDLIN( 978)		{
HXLINE( 978)			int Value1 = ::Math_obj::round((greenMultiplier * ( (Float)(255) )));
HXDLIN( 978)			color = (color & -65281);
HXDLIN( 978)			int color2;
HXDLIN( 978)			if ((Value1 > 255)) {
HXLINE( 978)				color2 = 255;
            			}
            			else {
HXLINE( 978)				if ((Value1 < 0)) {
HXLINE( 978)					color2 = 0;
            				}
            				else {
HXLINE( 978)					color2 = Value1;
            				}
            			}
HXDLIN( 978)			color = (color | (color2 << 8));
            		}
HXDLIN( 978)		{
HXLINE( 978)			int Value2 = ::Math_obj::round((blueMultiplier * ( (Float)(255) )));
HXDLIN( 978)			color = (color & -256);
HXDLIN( 978)			int color3;
HXDLIN( 978)			if ((Value2 > 255)) {
HXLINE( 978)				color3 = 255;
            			}
            			else {
HXLINE( 978)				if ((Value2 < 0)) {
HXLINE( 978)					color3 = 0;
            				}
            				else {
HXLINE( 978)					color3 = Value2;
            				}
            			}
HXDLIN( 978)			color = (color | color3);
            		}
HXDLIN( 978)		{
HXLINE( 978)			int Value3 = ::Math_obj::round((Alpha * ( (Float)(255) )));
HXDLIN( 978)			color = (color & 16777215);
HXDLIN( 978)			int color4;
HXDLIN( 978)			if ((Value3 > 255)) {
HXLINE( 978)				color4 = 255;
            			}
            			else {
HXLINE( 978)				if ((Value3 < 0)) {
HXLINE( 978)					color4 = 0;
            				}
            				else {
HXLINE( 978)					color4 = Value3;
            				}
            			}
HXDLIN( 978)			color = (color | (color4 << 24));
            		}
HXDLIN( 978)		this->set_color((color & 16777215));
HXLINE( 979)		this->set_alpha(alphaMultiplier);
HXLINE( 981)		::flixel::util::FlxColorTransformUtil_obj::setMultipliers(this->colorTransform,redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
HXLINE( 982)		::flixel::util::FlxColorTransformUtil_obj::setOffsets(this->colorTransform,redOffset,greenOffset,blueOffset,alphaOffset);
HXLINE( 984)		bool _hx_tmp;
HXDLIN( 984)		bool _hx_tmp1;
HXDLIN( 984)		if ((this->alpha == 1)) {
HXLINE( 984)			_hx_tmp1 = (this->color != 16777215);
            		}
            		else {
HXLINE( 984)			_hx_tmp1 = true;
            		}
HXDLIN( 984)		if (!(_hx_tmp1)) {
HXLINE( 984)			_hx_tmp = ::flixel::util::FlxColorTransformUtil_obj::hasRGBOffsets(this->colorTransform);
            		}
            		else {
HXLINE( 984)			_hx_tmp = true;
            		}
HXDLIN( 984)		this->useColorTransform = _hx_tmp;
HXLINE( 985)		this->dirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxSprite_obj,setColorTransform,(void))

void FlxSprite_obj::updateColorTransform(){
            	HX_GC_STACKFRAME(&_hx_pos_cfd221447aa7194b_989_updateColorTransform)
HXLINE( 990)		if (::hx::IsNull( this->colorTransform )) {
HXLINE( 991)			this->colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 993)		bool _hx_tmp;
HXDLIN( 993)		if ((this->alpha == 1)) {
HXLINE( 993)			_hx_tmp = (this->color != 16777215);
            		}
            		else {
HXLINE( 993)			_hx_tmp = true;
            		}
HXDLIN( 993)		this->useColorTransform = _hx_tmp;
HXLINE( 994)		if (this->useColorTransform) {
HXLINE( 995)			::flixel::util::FlxColorTransformUtil_obj::setMultipliers(this->colorTransform,(( (Float)(((this->color >> 16) & 255)) ) / ( (Float)(255) )),(( (Float)(((this->color >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this->color & 255)) ) / ( (Float)(255) )),this->alpha);
            		}
            		else {
HXLINE( 997)			::flixel::util::FlxColorTransformUtil_obj::setMultipliers(this->colorTransform,( (Float)(1) ),( (Float)(1) ),( (Float)(1) ),( (Float)(1) ));
            		}
HXLINE( 999)		this->dirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateColorTransform,(void))

bool FlxSprite_obj::pixelsOverlapPoint( ::flixel::math::FlxBasePoint worldPoint,::hx::Null< int >  __o_mask, ::flixel::FlxCamera camera){
            		int mask = __o_mask.Default(255);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1013_pixelsOverlapPoint)
HXLINE(1014)		 ::Dynamic pixelColor = this->getPixelAt(worldPoint,null());
HXLINE(1016)		if (::hx::IsNotNull( pixelColor )) {
HXLINE(1017)			return ((( (Float)(((( (int)(pixelColor) ) >> 24) & 255)) ) * this->alpha) >= mask);
            		}
HXLINE(1020)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,pixelsOverlapPoint,return )

 ::Dynamic FlxSprite_obj::getPixelAt( ::flixel::math::FlxBasePoint worldPoint, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1033_getPixelAt)
HXLINE(1034)		this->transformWorldToPixels(worldPoint,camera,this->_point);
HXLINE(1037)		bool _hx_tmp;
HXDLIN(1037)		bool _hx_tmp1;
HXDLIN(1037)		bool _hx_tmp2;
HXDLIN(1037)		if ((this->_point->x >= 0)) {
HXLINE(1037)			_hx_tmp2 = (this->_point->x <= this->frameWidth);
            		}
            		else {
HXLINE(1037)			_hx_tmp2 = false;
            		}
HXDLIN(1037)		if (_hx_tmp2) {
HXLINE(1037)			_hx_tmp1 = (this->_point->y >= 0);
            		}
            		else {
HXLINE(1037)			_hx_tmp1 = false;
            		}
HXDLIN(1037)		if (_hx_tmp1) {
HXLINE(1037)			_hx_tmp = (this->_point->y <= this->frameHeight);
            		}
            		else {
HXLINE(1037)			_hx_tmp = false;
            		}
HXDLIN(1037)		if (_hx_tmp) {
HXLINE(1039)			 ::openfl::display::BitmapData frameData = this->updateFramePixels();
HXLINE(1040)			int _hx_tmp = ::Std_obj::_hx_int(this->_point->x);
HXDLIN(1040)			return frameData->getPixel32(_hx_tmp,::Std_obj::_hx_int(this->_point->y));
            		}
HXLINE(1043)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,getPixelAt,return )

 ::Dynamic FlxSprite_obj::getPixelAtScreen( ::flixel::math::FlxBasePoint screenPoint, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1056_getPixelAtScreen)
HXLINE(1057)		this->transformScreenToPixels(screenPoint,camera,this->_point);
HXLINE(1060)		bool _hx_tmp;
HXDLIN(1060)		bool _hx_tmp1;
HXDLIN(1060)		bool _hx_tmp2;
HXDLIN(1060)		if ((this->_point->x >= 0)) {
HXLINE(1060)			_hx_tmp2 = (this->_point->x <= this->frameWidth);
            		}
            		else {
HXLINE(1060)			_hx_tmp2 = false;
            		}
HXDLIN(1060)		if (_hx_tmp2) {
HXLINE(1060)			_hx_tmp1 = (this->_point->y >= 0);
            		}
            		else {
HXLINE(1060)			_hx_tmp1 = false;
            		}
HXDLIN(1060)		if (_hx_tmp1) {
HXLINE(1060)			_hx_tmp = (this->_point->y <= this->frameHeight);
            		}
            		else {
HXLINE(1060)			_hx_tmp = false;
            		}
HXDLIN(1060)		if (_hx_tmp) {
HXLINE(1062)			 ::openfl::display::BitmapData frameData = this->updateFramePixels();
HXLINE(1063)			int _hx_tmp = ::Std_obj::_hx_int(this->_point->x);
HXDLIN(1063)			return frameData->getPixel32(_hx_tmp,::Std_obj::_hx_int(this->_point->y));
            		}
HXLINE(1066)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,getPixelAtScreen,return )

 ::flixel::math::FlxBasePoint FlxSprite_obj::transformWorldToPixels( ::flixel::math::FlxBasePoint worldPoint, ::flixel::FlxCamera camera, ::flixel::math::FlxBasePoint result){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1079_transformWorldToPixels)
HXLINE(1080)		if (::hx::IsNull( camera )) {
HXLINE(1081)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(1083)		Float x = (worldPoint->x - camera->scroll->x);
HXDLIN(1083)		Float y = (worldPoint->y - camera->scroll->y);
HXDLIN(1083)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(x,y);
HXDLIN(1083)		point->_inPool = false;
HXDLIN(1083)		 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN(1083)		point1->_weak = true;
HXDLIN(1083)		 ::flixel::math::FlxBasePoint screenPoint = point1;
HXLINE(1084)		if (worldPoint->_weak) {
HXLINE(1084)			worldPoint->put();
            		}
HXLINE(1085)		return this->transformScreenToPixels(screenPoint,camera,result);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,transformWorldToPixels,return )

 ::flixel::math::FlxBasePoint FlxSprite_obj::transformWorldToPixelsSimple( ::flixel::math::FlxBasePoint worldPoint, ::flixel::math::FlxBasePoint result){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1097_transformWorldToPixelsSimple)
HXLINE(1098)		result = this->getPosition(result);
HXLINE(1100)		{
HXLINE(1100)			Float y = worldPoint->y;
HXDLIN(1100)			result->set_x((result->x - worldPoint->x));
HXDLIN(1100)			result->set_y((result->y - y));
            		}
HXLINE(1101)		{
HXLINE(1101)			result->set_x((result->x * ( (Float)(-1) )));
HXDLIN(1101)			result->set_y((result->y * ( (Float)(-1) )));
            		}
HXLINE(1102)		{
HXLINE(1102)			 ::flixel::math::FlxBasePoint point = this->offset;
HXDLIN(1102)			{
HXLINE(1102)				Float y1 = point->y;
HXDLIN(1102)				result->set_x((result->x + point->x));
HXDLIN(1102)				result->set_y((result->y + y1));
            			}
HXDLIN(1102)			if (point->_weak) {
HXLINE(1102)				point->put();
            			}
            		}
HXLINE(1103)		{
HXLINE(1103)			 ::flixel::math::FlxBasePoint point1 = this->origin;
HXDLIN(1103)			{
HXLINE(1103)				Float y2 = point1->y;
HXDLIN(1103)				result->set_x((result->x - point1->x));
HXDLIN(1103)				result->set_y((result->y - y2));
            			}
HXDLIN(1103)			if (point1->_weak) {
HXLINE(1103)				point1->put();
            			}
            		}
HXLINE(1104)		{
HXLINE(1104)			Float x = (( (Float)(1) ) / this->scale->x);
HXDLIN(1104)			 ::Dynamic y3 = (( (Float)(1) ) / this->scale->y);
HXDLIN(1104)			if (::hx::IsNull( y3 )) {
HXLINE(1104)				y3 = x;
            			}
HXDLIN(1104)			result->set_x((result->x * x));
HXDLIN(1104)			result->set_y((result->y * ( (Float)(y3) )));
            		}
HXLINE(1105)		{
HXLINE(1105)			Float degs = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::get_radians(result);
HXDLIN(1105)			Float degs1 = ((degs * (( (Float)(180) ) / ::Math_obj::PI)) - this->angle);
HXDLIN(1105)			{
HXLINE(1105)				Float rads = (degs1 * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN(1105)				Float len = ::Math_obj::sqrt(((result->x * result->x) + (result->y * result->y)));
HXDLIN(1105)				result->set_x((len * ::Math_obj::cos(rads)));
HXDLIN(1105)				result->set_y((len * ::Math_obj::sin(rads)));
            			}
            		}
HXLINE(1106)		{
HXLINE(1106)			 ::flixel::math::FlxBasePoint point2 = this->origin;
HXDLIN(1106)			{
HXLINE(1106)				Float y4 = point2->y;
HXDLIN(1106)				result->set_x((result->x + point2->x));
HXDLIN(1106)				result->set_y((result->y + y4));
            			}
HXDLIN(1106)			if (point2->_weak) {
HXLINE(1106)				point2->put();
            			}
            		}
HXLINE(1108)		if (worldPoint->_weak) {
HXLINE(1108)			worldPoint->put();
            		}
HXLINE(1110)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,transformWorldToPixelsSimple,return )

 ::flixel::math::FlxBasePoint FlxSprite_obj::transformScreenToPixels( ::flixel::math::FlxBasePoint screenPoint, ::flixel::FlxCamera camera, ::flixel::math::FlxBasePoint result){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1123_transformScreenToPixels)
HXLINE(1124)		result = this->getScreenPosition(result,camera);
HXLINE(1126)		{
HXLINE(1126)			Float y = screenPoint->y;
HXDLIN(1126)			result->set_x((result->x - screenPoint->x));
HXDLIN(1126)			result->set_y((result->y - y));
            		}
HXLINE(1127)		{
HXLINE(1127)			result->set_x((result->x * ( (Float)(-1) )));
HXDLIN(1127)			result->set_y((result->y * ( (Float)(-1) )));
            		}
HXLINE(1128)		{
HXLINE(1128)			 ::flixel::math::FlxBasePoint point = this->offset;
HXDLIN(1128)			{
HXLINE(1128)				Float y1 = point->y;
HXDLIN(1128)				result->set_x((result->x + point->x));
HXDLIN(1128)				result->set_y((result->y + y1));
            			}
HXDLIN(1128)			if (point->_weak) {
HXLINE(1128)				point->put();
            			}
            		}
HXLINE(1129)		{
HXLINE(1129)			 ::flixel::math::FlxBasePoint point1 = this->origin;
HXDLIN(1129)			{
HXLINE(1129)				Float y2 = point1->y;
HXDLIN(1129)				result->set_x((result->x - point1->x));
HXDLIN(1129)				result->set_y((result->y - y2));
            			}
HXDLIN(1129)			if (point1->_weak) {
HXLINE(1129)				point1->put();
            			}
            		}
HXLINE(1130)		{
HXLINE(1130)			Float x = (( (Float)(1) ) / this->scale->x);
HXDLIN(1130)			 ::Dynamic y3 = (( (Float)(1) ) / this->scale->y);
HXDLIN(1130)			if (::hx::IsNull( y3 )) {
HXLINE(1130)				y3 = x;
            			}
HXDLIN(1130)			result->set_x((result->x * x));
HXDLIN(1130)			result->set_y((result->y * ( (Float)(y3) )));
            		}
HXLINE(1131)		{
HXLINE(1131)			Float degs = ::flixel::math::_FlxPoint::FlxPoint_Impl__obj::get_radians(result);
HXDLIN(1131)			Float degs1 = ((degs * (( (Float)(180) ) / ::Math_obj::PI)) - this->angle);
HXDLIN(1131)			{
HXLINE(1131)				Float rads = (degs1 * (::Math_obj::PI / ( (Float)(180) )));
HXDLIN(1131)				Float len = ::Math_obj::sqrt(((result->x * result->x) + (result->y * result->y)));
HXDLIN(1131)				result->set_x((len * ::Math_obj::cos(rads)));
HXDLIN(1131)				result->set_y((len * ::Math_obj::sin(rads)));
            			}
            		}
HXLINE(1132)		{
HXLINE(1132)			 ::flixel::math::FlxBasePoint point2 = this->origin;
HXDLIN(1132)			{
HXLINE(1132)				Float y4 = point2->y;
HXDLIN(1132)				result->set_x((result->x + point2->x));
HXDLIN(1132)				result->set_y((result->y + y4));
            			}
HXDLIN(1132)			if (point2->_weak) {
HXLINE(1132)				point2->put();
            			}
            		}
HXLINE(1134)		if (screenPoint->_weak) {
HXLINE(1134)			screenPoint->put();
            		}
HXLINE(1136)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,transformScreenToPixels,return )

void FlxSprite_obj::calcFrame(::hx::Null< bool >  __o_force){
            		bool force = __o_force.Default(false);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1146_calcFrame)
HXLINE(1147)		this->checkEmptyFrame();
HXLINE(1149)		bool _hx_tmp;
HXDLIN(1149)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1149)			_hx_tmp = !(force);
            		}
            		else {
HXLINE(1149)			_hx_tmp = false;
            		}
HXDLIN(1149)		if (_hx_tmp) {
HXLINE(1150)			return;
            		}
HXLINE(1152)		this->updateFramePixels();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,calcFrame,(void))

 ::openfl::display::BitmapData FlxSprite_obj::updateFramePixels(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1159_updateFramePixels)
HXLINE(1160)		bool _hx_tmp;
HXDLIN(1160)		if (::hx::IsNotNull( this->_frame )) {
HXLINE(1160)			_hx_tmp = !(this->dirty);
            		}
            		else {
HXLINE(1160)			_hx_tmp = true;
            		}
HXDLIN(1160)		if (_hx_tmp) {
HXLINE(1161)			return this->framePixels;
            		}
HXLINE(1165)		bool _hx_tmp1;
HXDLIN(1165)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1165)			_hx_tmp1 = ::hx::IsNotNull( this->_frameGraphic );
            		}
            		else {
HXLINE(1165)			_hx_tmp1 = false;
            		}
HXDLIN(1165)		if (_hx_tmp1) {
HXLINE(1167)			this->dirty = false;
HXLINE(1168)			return this->framePixels;
            		}
HXLINE(1171)		bool doFlipX = (this->flipX != this->_frame->flipX);
HXDLIN(1171)		bool doFlipX1;
HXDLIN(1171)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(1171)			doFlipX1 = (doFlipX != this->animation->_curAnim->flipX);
            		}
            		else {
HXLINE(1171)			doFlipX1 = doFlipX;
            		}
HXLINE(1172)		bool doFlipY = (this->flipY != this->_frame->flipY);
HXDLIN(1172)		bool doFlipY1;
HXDLIN(1172)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(1172)			doFlipY1 = (doFlipY != this->animation->_curAnim->flipY);
            		}
            		else {
HXLINE(1172)			doFlipY1 = doFlipY;
            		}
HXLINE(1174)		bool _hx_tmp2;
HXDLIN(1174)		bool _hx_tmp3;
HXDLIN(1174)		if (!(doFlipX1)) {
HXLINE(1174)			_hx_tmp3 = !(doFlipY1);
            		}
            		else {
HXLINE(1174)			_hx_tmp3 = false;
            		}
HXDLIN(1174)		if (_hx_tmp3) {
HXLINE(1174)			_hx_tmp2 = (this->_frame->type == 0);
            		}
            		else {
HXLINE(1174)			_hx_tmp2 = false;
            		}
HXDLIN(1174)		if (_hx_tmp2) {
HXLINE(1176)			this->framePixels = this->_frame->paint(this->framePixels,this->_flashPointZero,false,true);
            		}
            		else {
HXLINE(1180)			this->framePixels = this->_frame->paintRotatedAndFlipped(this->framePixels,this->_flashPointZero,0,doFlipX1,doFlipY1,false,true);
            		}
HXLINE(1183)		if (this->useColorTransform) {
HXLINE(1185)			this->framePixels->colorTransform(this->_flashRect,this->colorTransform);
            		}
HXLINE(1188)		bool _hx_tmp4;
HXDLIN(1188)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1188)			_hx_tmp4 = this->useFramePixels;
            		}
            		else {
HXLINE(1188)			_hx_tmp4 = false;
            		}
HXDLIN(1188)		if (_hx_tmp4) {
HXLINE(1191)			this->_frameGraphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_frameGraphic)) );
HXLINE(1192)			this->_frameGraphic = ::flixel::graphics::FlxGraphic_obj::fromBitmapData(this->framePixels,false,null(),false);
HXLINE(1193)			this->_frame = this->_frameGraphic->get_imageFrame()->get_frame()->copyTo(this->_frame);
            		}
HXLINE(1196)		this->dirty = false;
HXLINE(1197)		return this->framePixels;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateFramePixels,return )

 ::flixel::math::FlxBasePoint FlxSprite_obj::getGraphicMidpoint( ::flixel::math::FlxBasePoint point){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1208_getGraphicMidpoint)
HXLINE(1209)		if (::hx::IsNull( point )) {
HXLINE(1210)			 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(1210)			point1->_inPool = false;
HXDLIN(1210)			point = point1;
            		}
HXLINE(1211)		Float y = (this->y + (( (Float)(this->frameHeight) ) * ((Float)0.5)));
HXDLIN(1211)		point->set_x((this->x + (( (Float)(this->frameWidth) ) * ((Float)0.5))));
HXDLIN(1211)		point->set_y(y);
HXDLIN(1211)		return point;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,getGraphicMidpoint,return )

bool FlxSprite_obj::isOnScreen( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1222_isOnScreen)
HXLINE(1223)		if (::hx::IsNull( camera )) {
HXLINE(1224)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(1226)		 ::flixel::math::FlxRect rect = this->getScreenBounds(this->_rect,camera);
HXDLIN(1226)		bool contained;
HXDLIN(1226)		bool contained1;
HXDLIN(1226)		bool contained2;
HXDLIN(1226)		if (((rect->x + rect->width) > camera->viewMarginX)) {
HXLINE(1226)			contained2 = (rect->x < (( (Float)(camera->width) ) - camera->viewMarginX));
            		}
            		else {
HXLINE(1226)			contained2 = false;
            		}
HXDLIN(1226)		if (contained2) {
HXLINE(1226)			contained1 = ((rect->y + rect->height) > camera->viewMarginY);
            		}
            		else {
HXLINE(1226)			contained1 = false;
            		}
HXDLIN(1226)		if (contained1) {
HXLINE(1226)			contained = (rect->y < (( (Float)(camera->height) ) - camera->viewMarginY));
            		}
            		else {
HXLINE(1226)			contained = false;
            		}
HXDLIN(1226)		if (rect->_weak) {
HXLINE(1226)			if (!(rect->_inPool)) {
HXLINE(1226)				rect->_inPool = true;
HXDLIN(1226)				rect->_weak = false;
HXDLIN(1226)				::flixel::math::FlxRect_obj::_pool->putUnsafe(rect);
            			}
            		}
HXDLIN(1226)		return contained;
            	}


bool FlxSprite_obj::isSimpleRender( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1234_isSimpleRender)
HXLINE(1235)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1236)			return false;
            		}
HXLINE(1238)		return this->isSimpleRenderBlit(camera);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,isSimpleRender,return )

bool FlxSprite_obj::isSimpleRenderBlit( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1250_isSimpleRenderBlit)
HXLINE(1251)		bool result;
HXDLIN(1251)		bool result1;
HXDLIN(1251)		bool result2;
HXDLIN(1251)		bool result3;
HXDLIN(1251)		if ((this->angle != 0)) {
HXLINE(1251)			result3 = (this->bakedRotationAngle > 0);
            		}
            		else {
HXLINE(1251)			result3 = true;
            		}
HXDLIN(1251)		if (result3) {
HXLINE(1251)			result2 = (this->scale->x == 1);
            		}
            		else {
HXLINE(1251)			result2 = false;
            		}
HXDLIN(1251)		if (result2) {
HXLINE(1251)			result1 = (this->scale->y == 1);
            		}
            		else {
HXLINE(1251)			result1 = false;
            		}
HXDLIN(1251)		if (result1) {
HXLINE(1251)			result = ::hx::IsNull( this->blend );
            		}
            		else {
HXLINE(1251)			result = false;
            		}
HXLINE(1252)		if (result) {
HXLINE(1252)			if (::hx::IsNotNull( camera )) {
HXLINE(1252)				result = this->isPixelPerfectRender(camera);
            			}
            			else {
HXLINE(1252)				result = ( (bool)(this->pixelPerfectRender) );
            			}
            		}
            		else {
HXLINE(1252)			result = false;
            		}
HXLINE(1253)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,isSimpleRenderBlit,return )

 ::flixel::math::FlxRect FlxSprite_obj::getRotatedBounds( ::flixel::math::FlxRect newRect){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1266_getRotatedBounds)
HXLINE(1267)		if (::hx::IsNull( newRect )) {
HXLINE(1268)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(1268)			_this->x = ( (Float)(0) );
HXDLIN(1268)			_this->y = ( (Float)(0) );
HXDLIN(1268)			_this->width = ( (Float)(0) );
HXDLIN(1268)			_this->height = ( (Float)(0) );
HXDLIN(1268)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(1268)			rect->_inPool = false;
HXDLIN(1268)			newRect = rect;
            		}
HXLINE(1270)		{
HXLINE(1270)			Float X = this->x;
HXDLIN(1270)			Float Y = this->y;
HXDLIN(1270)			Float Width = this->get_width();
HXDLIN(1270)			Float Height = this->get_height();
HXDLIN(1270)			newRect->x = X;
HXDLIN(1270)			newRect->y = Y;
HXDLIN(1270)			newRect->width = Width;
HXDLIN(1270)			newRect->height = Height;
            		}
HXLINE(1271)		return newRect->getRotatedBounds(this->angle,this->origin,newRect);
            	}


 ::flixel::math::FlxRect FlxSprite_obj::getScreenBounds( ::flixel::math::FlxRect newRect, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1283_getScreenBounds)
HXLINE(1284)		if (::hx::IsNull( newRect )) {
HXLINE(1285)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(1285)			_this->x = ( (Float)(0) );
HXDLIN(1285)			_this->y = ( (Float)(0) );
HXDLIN(1285)			_this->width = ( (Float)(0) );
HXDLIN(1285)			_this->height = ( (Float)(0) );
HXDLIN(1285)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(1285)			rect->_inPool = false;
HXDLIN(1285)			newRect = rect;
            		}
HXLINE(1287)		if (::hx::IsNull( camera )) {
HXLINE(1288)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE(1290)		{
HXLINE(1290)			newRect->x = this->x;
HXDLIN(1290)			newRect->y = this->y;
            		}
HXLINE(1291)		if (this->pixelPerfectPosition) {
HXLINE(1292)			newRect->x = ( (Float)(::Math_obj::floor(newRect->x)) );
HXDLIN(1292)			newRect->y = ( (Float)(::Math_obj::floor(newRect->y)) );
HXDLIN(1292)			newRect->width = ( (Float)(::Math_obj::floor(newRect->width)) );
HXDLIN(1292)			newRect->height = ( (Float)(::Math_obj::floor(newRect->height)) );
            		}
HXLINE(1293)		{
HXLINE(1293)			 ::flixel::math::FlxBasePoint this1 = this->_scaledOrigin;
HXDLIN(1293)			Float y = (this->origin->y * this->scale->y);
HXDLIN(1293)			this1->set_x((this->origin->x * this->scale->x));
HXDLIN(1293)			this1->set_y(y);
            		}
HXLINE(1294)		 ::flixel::math::FlxRect newRect1 = newRect;
HXDLIN(1294)		Float newRect2 = newRect1->x;
HXDLIN(1294)		Float _hx_tmp = (( (Float)(-(::Std_obj::_hx_int((camera->scroll->x * this->scrollFactor->x)))) ) - this->offset->x);
HXDLIN(1294)		newRect1->x = (newRect2 + ((_hx_tmp + this->origin->x) - this->_scaledOrigin->x));
HXLINE(1295)		 ::flixel::math::FlxRect newRect3 = newRect;
HXDLIN(1295)		Float newRect4 = newRect3->y;
HXDLIN(1295)		Float _hx_tmp1 = (( (Float)(-(::Std_obj::_hx_int((camera->scroll->y * this->scrollFactor->y)))) ) - this->offset->y);
HXDLIN(1295)		newRect3->y = (newRect4 + ((_hx_tmp1 + this->origin->y) - this->_scaledOrigin->y));
HXLINE(1296)		if (this->isPixelPerfectRender(camera)) {
HXLINE(1297)			newRect->x = ( (Float)(::Math_obj::floor(newRect->x)) );
HXDLIN(1297)			newRect->y = ( (Float)(::Math_obj::floor(newRect->y)) );
HXDLIN(1297)			newRect->width = ( (Float)(::Math_obj::floor(newRect->width)) );
HXDLIN(1297)			newRect->height = ( (Float)(::Math_obj::floor(newRect->height)) );
            		}
HXLINE(1298)		{
HXLINE(1298)			Float Height = (( (Float)(this->frameHeight) ) * ::Math_obj::abs(this->scale->y));
HXDLIN(1298)			newRect->width = (( (Float)(this->frameWidth) ) * ::Math_obj::abs(this->scale->x));
HXDLIN(1298)			newRect->height = Height;
            		}
HXLINE(1299)		return newRect->getRotatedBounds(this->angle,this->_scaledOrigin,newRect);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,getScreenBounds,return )

void FlxSprite_obj::setFacingFlip(int Direction,bool FlipX,bool FlipY){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1314_setFacingFlip)
HXDLIN(1314)		this->_facingFlip->set(Direction, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),FlipX)
            			->setFixed(1,HX_("y",79,00,00,00),FlipY)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSprite_obj,setFacingFlip,(void))

 ::flixel::FlxSprite FlxSprite_obj::setFrames( ::flixel::graphics::frames::FlxFramesCollection Frames,::hx::Null< bool >  __o_saveAnimations){
            		bool saveAnimations = __o_saveAnimations.Default(true);
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1326_setFrames)
HXLINE(1327)		if (saveAnimations) {
HXLINE(1329)			 ::haxe::ds::StringMap animations = this->animation->_animations;
HXLINE(1330)			bool reverse = false;
HXLINE(1331)			int index = 0;
HXLINE(1332)			int frameIndex = this->animation->frameIndex;
HXLINE(1333)			::String currName = null();
HXLINE(1335)			if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(1337)				reverse = this->animation->_curAnim->reversed;
HXLINE(1338)				index = this->animation->_curAnim->curFrame;
HXLINE(1339)				currName = this->animation->_curAnim->name;
            			}
HXLINE(1342)			this->animation->_animations = null();
HXLINE(1343)			this->set_frames(Frames);
HXLINE(1344)			this->set_frame(this->frames->frames->__get(frameIndex).StaticCast<  ::flixel::graphics::frames::FlxFrame >());
HXLINE(1345)			this->animation->_animations = animations;
HXLINE(1347)			if (::hx::IsNotNull( currName )) {
HXLINE(1349)				this->animation->play(currName,false,reverse,index);
            			}
            		}
            		else {
HXLINE(1354)			this->set_frames(Frames);
            		}
HXLINE(1357)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxSprite_obj,setFrames,return )

 ::openfl::display::BitmapData FlxSprite_obj::get_pixels(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1363_get_pixels)
HXDLIN(1363)		if (::hx::IsNull( this->graphic )) {
HXDLIN(1363)			return null();
            		}
            		else {
HXDLIN(1363)			return this->graphic->bitmap;
            		}
HXDLIN(1363)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,get_pixels,return )

 ::openfl::display::BitmapData FlxSprite_obj::set_pixels( ::openfl::display::BitmapData Pixels){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1368_set_pixels)
HXLINE(1369)		::String key = ::flixel::FlxG_obj::bitmap->findKeyForBitmap(Pixels);
HXLINE(1371)		if (::hx::IsNull( key )) {
HXLINE(1373)			key = ::flixel::FlxG_obj::bitmap->getUniqueKey(null());
HXLINE(1374)			this->set_graphic(::flixel::FlxG_obj::bitmap->add(Pixels,false,key));
            		}
            		else {
HXLINE(1378)			this->set_graphic(( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) ));
            		}
HXLINE(1381)		this->set_frames(this->graphic->get_imageFrame());
HXLINE(1382)		return Pixels;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_pixels,return )

 ::flixel::graphics::frames::FlxFrame FlxSprite_obj::set_frame( ::flixel::graphics::frames::FlxFrame Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1387_set_frame)
HXLINE(1388)		this->frame = Value;
HXLINE(1389)		if (::hx::IsNotNull( this->frame )) {
HXLINE(1391)			{
HXLINE(1391)				if (::hx::IsNotNull( this->frame )) {
HXLINE(1391)					this->frameWidth = ::Std_obj::_hx_int(this->frame->sourceSize->x);
HXDLIN(1391)					this->frameHeight = ::Std_obj::_hx_int(this->frame->sourceSize->y);
            				}
HXDLIN(1391)				{
HXLINE(1391)					 ::flixel::math::FlxBasePoint this1 = this->_halfSize;
HXDLIN(1391)					Float y = (((Float)0.5) * ( (Float)(this->frameHeight) ));
HXDLIN(1391)					this1->set_x((((Float)0.5) * ( (Float)(this->frameWidth) )));
HXDLIN(1391)					this1->set_y(y);
            				}
HXDLIN(1391)				{
HXLINE(1391)					this->_flashRect->x = ( (Float)(0) );
HXDLIN(1391)					this->_flashRect->y = ( (Float)(0) );
HXDLIN(1391)					this->_flashRect->width = ( (Float)(this->frameWidth) );
HXDLIN(1391)					this->_flashRect->height = ( (Float)(this->frameHeight) );
            				}
            			}
HXLINE(1392)			this->dirty = true;
            		}
            		else {
HXLINE(1394)			bool _hx_tmp;
HXDLIN(1394)			bool _hx_tmp1;
HXDLIN(1394)			if (::hx::IsNotNull( this->frames )) {
HXLINE(1394)				_hx_tmp1 = ::hx::IsNotNull( this->frames->frames );
            			}
            			else {
HXLINE(1394)				_hx_tmp1 = false;
            			}
HXDLIN(1394)			if (_hx_tmp1) {
HXLINE(1394)				_hx_tmp = (this->numFrames > 0);
            			}
            			else {
HXLINE(1394)				_hx_tmp = false;
            			}
HXDLIN(1394)			if (_hx_tmp) {
HXLINE(1396)				this->frame = this->frames->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXLINE(1397)				this->dirty = true;
            			}
            			else {
HXLINE(1401)				return null();
            			}
            		}
HXLINE(1404)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1406)			this->_frameGraphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::util::FlxDestroyUtil_obj::destroy(this->_frameGraphic)) );
            		}
HXLINE(1409)		if (::hx::IsNotNull( this->clipRect )) {
HXLINE(1411)			this->_frame = this->frame->clipTo(this->clipRect,this->_frame);
            		}
            		else {
HXLINE(1415)			this->_frame = this->frame->copyTo(this->_frame);
            		}
HXLINE(1418)		return this->frame;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frame,return )

int FlxSprite_obj::set_facing(int Direction){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1423_set_facing)
HXLINE(1424)		 ::Dynamic flip = this->_facingFlip->get(Direction);
HXLINE(1425)		if (::hx::IsNotNull( flip )) {
HXLINE(1427)			this->set_flipX(( (bool)(flip->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ));
HXLINE(1428)			this->set_flipY(( (bool)(flip->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ));
            		}
HXLINE(1431)		return (this->facing = Direction);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_facing,return )

Float FlxSprite_obj::set_alpha(Float Alpha){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1436_set_alpha)
HXLINE(1437)		if ((this->alpha == Alpha)) {
HXLINE(1439)			return Alpha;
            		}
HXLINE(1441)		Float lowerBound;
HXDLIN(1441)		if ((Alpha < 0)) {
HXLINE(1441)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE(1441)			lowerBound = Alpha;
            		}
HXDLIN(1441)		Float _hx_tmp;
HXDLIN(1441)		if ((lowerBound > 1)) {
HXLINE(1441)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXLINE(1441)			_hx_tmp = lowerBound;
            		}
HXDLIN(1441)		this->alpha = _hx_tmp;
HXLINE(1442)		this->updateColorTransform();
HXLINE(1443)		return this->alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_alpha,return )

int FlxSprite_obj::set_color(int Color){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1448_set_color)
HXLINE(1449)		if ((this->color == Color)) {
HXLINE(1451)			return Color;
            		}
HXLINE(1453)		this->color = Color;
HXLINE(1454)		this->updateColorTransform();
HXLINE(1455)		return this->color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_color,return )

Float FlxSprite_obj::set_angle(Float Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1460_set_angle)
HXLINE(1461)		bool newAngle = (this->angle != Value);
HXLINE(1462)		Float ret = this->super::set_angle(Value);
HXLINE(1463)		if (newAngle) {
HXLINE(1465)			this->_angleChanged = true;
HXLINE(1466)			this->animation->update(( (Float)(0) ));
            		}
HXLINE(1468)		return ret;
            	}


void FlxSprite_obj::updateTrig(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1474_updateTrig)
HXDLIN(1474)		if (this->_angleChanged) {
HXLINE(1476)			Float radians = (this->angle * (::Math_obj::PI / ( (Float)(180) )));
HXLINE(1477)			this->_sinAngle = ::Math_obj::sin(radians);
HXLINE(1478)			this->_cosAngle = ::Math_obj::cos(radians);
HXLINE(1479)			this->_angleChanged = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,updateTrig,(void))

 ::Dynamic FlxSprite_obj::set_blend( ::Dynamic Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1486_set_blend)
HXDLIN(1486)		return (this->blend = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_blend,return )

 ::flixel::graphics::FlxGraphic FlxSprite_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1495_set_graphic)
HXLINE(1496)		 ::flixel::graphics::FlxGraphic oldGraphic = this->graphic;
HXLINE(1498)		bool _hx_tmp;
HXDLIN(1498)		if (::hx::IsInstanceNotEq( this->graphic,Value )) {
HXLINE(1498)			_hx_tmp = ::hx::IsNotNull( Value );
            		}
            		else {
HXLINE(1498)			_hx_tmp = false;
            		}
HXDLIN(1498)		if (_hx_tmp) {
HXLINE(1500)			Value->set_useCount((Value->get_useCount() + 1));
            		}
HXLINE(1503)		bool _hx_tmp1;
HXDLIN(1503)		if (::hx::IsNotNull( oldGraphic )) {
HXLINE(1503)			_hx_tmp1 = ::hx::IsInstanceNotEq( oldGraphic,Value );
            		}
            		else {
HXLINE(1503)			_hx_tmp1 = false;
            		}
HXDLIN(1503)		if (_hx_tmp1) {
HXLINE(1505)			oldGraphic->set_useCount((oldGraphic->get_useCount() - 1));
            		}
HXLINE(1508)		return (this->graphic = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_graphic,return )

 ::flixel::math::FlxRect FlxSprite_obj::set_clipRect( ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1513_set_clipRect)
HXLINE(1514)		if (::hx::IsNotNull( rect )) {
HXLINE(1515)			rect->x = ( (Float)(::Math_obj::round(rect->x)) );
HXDLIN(1515)			rect->y = ( (Float)(::Math_obj::round(rect->y)) );
HXDLIN(1515)			rect->width = ( (Float)(::Math_obj::round(rect->width)) );
HXDLIN(1515)			rect->height = ( (Float)(::Math_obj::round(rect->height)) );
HXDLIN(1515)			this->clipRect = rect;
            		}
            		else {
HXLINE(1517)			this->clipRect = null();
            		}
HXLINE(1519)		if (::hx::IsNotNull( this->frames )) {
HXLINE(1520)			this->set_frame(this->frames->frames->__get(this->animation->frameIndex).StaticCast<  ::flixel::graphics::frames::FlxFrame >());
            		}
HXLINE(1522)		return rect;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_clipRect,return )

 ::flixel::graphics::frames::FlxFramesCollection FlxSprite_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1534_set_frames)
HXLINE(1535)		if (::hx::IsNotNull( this->animation )) {
HXLINE(1537)			this->animation->destroyAnimations();
            		}
HXLINE(1540)		if (::hx::IsNotNull( Frames )) {
HXLINE(1542)			this->set_graphic(Frames->parent);
HXLINE(1543)			this->frames = Frames;
HXLINE(1544)			this->set_frame(this->frames->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >());
HXLINE(1545)			this->numFrames = this->frames->frames->length;
HXLINE(1546)			this->resetHelpers();
HXLINE(1547)			this->bakedRotationAngle = ( (Float)(0) );
HXLINE(1548)			this->animation->set_frameIndex(0);
HXLINE(1549)			this->graphicLoaded();
            		}
            		else {
HXLINE(1553)			this->frames = null();
HXLINE(1554)			this->set_frame(null());
HXLINE(1555)			this->set_graphic(null());
            		}
HXLINE(1558)		return Frames;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_frames,return )

bool FlxSprite_obj::set_flipX(bool Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1563_set_flipX)
HXLINE(1564)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1566)			int _hx_tmp;
HXDLIN(1566)			if (Value) {
HXLINE(1566)				_hx_tmp = -1;
            			}
            			else {
HXLINE(1566)				_hx_tmp = 1;
            			}
HXDLIN(1566)			this->_facingHorizontalMult = _hx_tmp;
            		}
HXLINE(1568)		bool _hx_tmp;
HXDLIN(1568)		if ((this->flipX == Value)) {
HXLINE(1568)			_hx_tmp = this->dirty;
            		}
            		else {
HXLINE(1568)			_hx_tmp = true;
            		}
HXDLIN(1568)		this->dirty = _hx_tmp;
HXLINE(1569)		return (this->flipX = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_flipX,return )

bool FlxSprite_obj::set_flipY(bool Value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1574_set_flipY)
HXLINE(1575)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1577)			int _hx_tmp;
HXDLIN(1577)			if (Value) {
HXLINE(1577)				_hx_tmp = -1;
            			}
            			else {
HXLINE(1577)				_hx_tmp = 1;
            			}
HXDLIN(1577)			this->_facingVerticalMult = _hx_tmp;
            		}
HXLINE(1579)		bool _hx_tmp;
HXDLIN(1579)		if ((this->flipY == Value)) {
HXLINE(1579)			_hx_tmp = this->dirty;
            		}
            		else {
HXLINE(1579)			_hx_tmp = true;
            		}
HXDLIN(1579)		this->dirty = _hx_tmp;
HXLINE(1580)		return (this->flipY = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_flipY,return )

bool FlxSprite_obj::set_antialiasing(bool value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1586_set_antialiasing)
HXDLIN(1586)		return (this->antialiasing = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_antialiasing,return )

bool FlxSprite_obj::set_useFramePixels(bool value){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1592_set_useFramePixels)
HXDLIN(1592)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1594)			if ((value != this->useFramePixels)) {
HXLINE(1596)				this->useFramePixels = value;
HXLINE(1597)				this->set_frame(this->frame);
HXLINE(1599)				if (value) {
HXLINE(1601)					this->updateFramePixels();
            				}
            			}
HXLINE(1605)			return value;
            		}
            		else {
HXLINE(1609)			this->useFramePixels = true;
HXLINE(1610)			return true;
            		}
HXLINE(1592)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSprite_obj,set_useFramePixels,return )

bool FlxSprite_obj::checkFlipX(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1616_checkFlipX)
HXLINE(1617)		bool doFlipX = (this->flipX != this->_frame->flipX);
HXLINE(1618)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(1620)			return (doFlipX != this->animation->_curAnim->flipX);
            		}
HXLINE(1622)		return doFlipX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,checkFlipX,return )

bool FlxSprite_obj::checkFlipY(){
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_1627_checkFlipY)
HXLINE(1628)		bool doFlipY = (this->flipY != this->_frame->flipY);
HXLINE(1629)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE(1631)			return (doFlipY != this->animation->_curAnim->flipY);
            		}
HXLINE(1633)		return doFlipY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSprite_obj,checkFlipY,return )

bool FlxSprite_obj::defaultAntialiasing;


::hx::ObjectPtr< FlxSprite_obj > FlxSprite_obj::__new( ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic) {
	::hx::ObjectPtr< FlxSprite_obj > __this = new FlxSprite_obj();
	__this->__construct(__o_X,__o_Y,SimpleGraphic);
	return __this;
}

::hx::ObjectPtr< FlxSprite_obj > FlxSprite_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_X, ::Dynamic __o_Y, ::Dynamic SimpleGraphic) {
	FlxSprite_obj *__this = (FlxSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSprite_obj), true, "flixel.FlxSprite"));
	*(void **)__this = FlxSprite_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,SimpleGraphic);
	return __this;
}

FlxSprite_obj::FlxSprite_obj()
{
}

void FlxSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSprite);
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(framePixels,"framePixels");
	HX_MARK_MEMBER_NAME(useFramePixels,"useFramePixels");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(frameWidth,"frameWidth");
	HX_MARK_MEMBER_NAME(frameHeight,"frameHeight");
	HX_MARK_MEMBER_NAME(numFrames,"numFrames");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(graphic,"graphic");
	HX_MARK_MEMBER_NAME(bakedRotationAngle,"bakedRotationAngle");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(facing,"facing");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_MARK_MEMBER_NAME(clipRect,"clipRect");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(_frame,"_frame");
	HX_MARK_MEMBER_NAME(_frameGraphic,"_frameGraphic");
	HX_MARK_MEMBER_NAME(_facingHorizontalMult,"_facingHorizontalMult");
	HX_MARK_MEMBER_NAME(_facingVerticalMult,"_facingVerticalMult");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_MARK_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_halfSize,"_halfSize");
	HX_MARK_MEMBER_NAME(_scaledOrigin,"_scaledOrigin");
	HX_MARK_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_MARK_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_MARK_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_MARK_MEMBER_NAME(_facingFlip,"_facingFlip");
	 ::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(framePixels,"framePixels");
	HX_VISIT_MEMBER_NAME(useFramePixels,"useFramePixels");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(frameWidth,"frameWidth");
	HX_VISIT_MEMBER_NAME(frameHeight,"frameHeight");
	HX_VISIT_MEMBER_NAME(numFrames,"numFrames");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(graphic,"graphic");
	HX_VISIT_MEMBER_NAME(bakedRotationAngle,"bakedRotationAngle");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(facing,"facing");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(useColorTransform,"useColorTransform");
	HX_VISIT_MEMBER_NAME(clipRect,"clipRect");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(_frame,"_frame");
	HX_VISIT_MEMBER_NAME(_frameGraphic,"_frameGraphic");
	HX_VISIT_MEMBER_NAME(_facingHorizontalMult,"_facingHorizontalMult");
	HX_VISIT_MEMBER_NAME(_facingVerticalMult,"_facingVerticalMult");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashRect2,"_flashRect2");
	HX_VISIT_MEMBER_NAME(_flashPointZero,"_flashPointZero");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_halfSize,"_halfSize");
	HX_VISIT_MEMBER_NAME(_scaledOrigin,"_scaledOrigin");
	HX_VISIT_MEMBER_NAME(_sinAngle,"_sinAngle");
	HX_VISIT_MEMBER_NAME(_cosAngle,"_cosAngle");
	HX_VISIT_MEMBER_NAME(_angleChanged,"_angleChanged");
	HX_VISIT_MEMBER_NAME(_facingFlip,"_facingFlip");
	 ::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return ::hx::Val( dirty ); }
		if (HX_FIELD_EQ(inName,"frame") ) { return ::hx::Val( frame ); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		if (HX_FIELD_EQ(inName,"flipX") ) { return ::hx::Val( flipX ); }
		if (HX_FIELD_EQ(inName,"flipY") ) { return ::hx::Val( flipY ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale ); }
		if (HX_FIELD_EQ(inName,"blend") ) { return ::hx::Val( blend ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return ::hx::Val( stamp_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pixels() ); }
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"facing") ) { return ::hx::Val( facing ); }
		if (HX_FIELD_EQ(inName,"origin") ) { return ::hx::Val( origin ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"_frame") ) { return ::hx::Val( _frame ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { return ::hx::Val( graphic ); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return ::hx::Val( _matrix ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { return ::hx::Val( clipRect ); }
		if (HX_FIELD_EQ(inName,"initVars") ) { return ::hx::Val( initVars_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return ::hx::Val( animation ); }
		if (HX_FIELD_EQ(inName,"numFrames") ) { return ::hx::Val( numFrames ); }
		if (HX_FIELD_EQ(inName,"_halfSize") ) { return ::hx::Val( _halfSize ); }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { return ::hx::Val( _sinAngle ); }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { return ::hx::Val( _cosAngle ); }
		if (HX_FIELD_EQ(inName,"resetSize") ) { return ::hx::Val( resetSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return ::hx::Val( drawFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return ::hx::Val( calcFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFrames") ) { return ::hx::Val( setFrames_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return ::hx::Val( set_frame_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return ::hx::Val( set_angle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return ::hx::Val( set_blend_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_flipX") ) { return ::hx::Val( set_flipX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_flipY") ) { return ::hx::Val( set_flipY_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { return ::hx::Val( frameWidth ); }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return ::hx::Val( _flashRect ); }
		if (HX_FIELD_EQ(inName,"resetFrame") ) { return ::hx::Val( resetFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawSimple") ) { return ::hx::Val( drawSimple_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPixelAt") ) { return ::hx::Val( getPixelAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return ::hx::Val( isOnScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pixels") ) { return ::hx::Val( get_pixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return ::hx::Val( set_pixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_facing") ) { return ::hx::Val( set_facing_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateTrig") ) { return ::hx::Val( updateTrig_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return ::hx::Val( set_frames_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkFlipX") ) { return ::hx::Val( checkFlipX_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkFlipY") ) { return ::hx::Val( checkFlipY_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePixels") ) { return ::hx::Val( framePixels ); }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { return ::hx::Val( frameHeight ); }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return ::hx::Val( _flashPoint ); }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { return ::hx::Val( _flashRect2 ); }
		if (HX_FIELD_EQ(inName,"_facingFlip") ) { return ::hx::Val( _facingFlip ); }
		if (HX_FIELD_EQ(inName,"loadGraphic") ) { return ::hx::Val( loadGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeGraphic") ) { return ::hx::Val( makeGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawComplex") ) { return ::hx::Val( drawComplex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return ::hx::Val( set_graphic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return ::hx::Val( antialiasing ); }
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return ::hx::Val( updateHitbox_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return ::hx::Val( resetHelpers_dyn() ); }
		if (HX_FIELD_EQ(inName,"centerOrigin") ) { return ::hx::Val( centerOrigin_dyn() ); }
		if (HX_FIELD_EQ(inName,"replaceColor") ) { return ::hx::Val( replaceColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_clipRect") ) { return ::hx::Val( set_clipRect_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameGraphic") ) { return ::hx::Val( _frameGraphic ); }
		if (HX_FIELD_EQ(inName,"_scaledOrigin") ) { return ::hx::Val( _scaledOrigin ); }
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { return ::hx::Val( _angleChanged ); }
		if (HX_FIELD_EQ(inName,"graphicLoaded") ) { return ::hx::Val( graphicLoaded_dyn() ); }
		if (HX_FIELD_EQ(inName,"centerOffsets") ) { return ::hx::Val( centerOffsets_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFacingFlip") ) { return ::hx::Val( setFacingFlip_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"useFramePixels") ) { return ::hx::Val( useFramePixels ); }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return ::hx::Val( colorTransform ); }
		if (HX_FIELD_EQ(inName,"resetFrameSize") ) { return ::hx::Val( resetFrameSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGraphicSize") ) { return ::hx::Val( setGraphicSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"isSimpleRender") ) { return ::hx::Val( isSimpleRender_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { return ::hx::Val( _flashPointZero ); }
		if (HX_FIELD_EQ(inName,"updateAnimation") ) { return ::hx::Val( updateAnimation_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkEmptyFrame") ) { return ::hx::Val( checkEmptyFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"getScreenBounds") ) { return ::hx::Val( getScreenBounds_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadRotatedFrame") ) { return ::hx::Val( loadRotatedFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPixelAtScreen") ) { return ::hx::Val( getPixelAtScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRotatedBounds") ) { return ::hx::Val( getRotatedBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return ::hx::Val( set_antialiasing_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { return ::hx::Val( useColorTransform ); }
		if (HX_FIELD_EQ(inName,"setColorTransform") ) { return ::hx::Val( setColorTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateFramePixels") ) { return ::hx::Val( updateFramePixels_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bakedRotationAngle") ) { return ::hx::Val( bakedRotationAngle ); }
		if (HX_FIELD_EQ(inName,"loadRotatedGraphic") ) { return ::hx::Val( loadRotatedGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetSizeFromFrame") ) { return ::hx::Val( resetSizeFromFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"pixelsOverlapPoint") ) { return ::hx::Val( pixelsOverlapPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"getGraphicMidpoint") ) { return ::hx::Val( getGraphicMidpoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"isSimpleRenderBlit") ) { return ::hx::Val( isSimpleRenderBlit_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_useFramePixels") ) { return ::hx::Val( set_useFramePixels_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_facingVerticalMult") ) { return ::hx::Val( _facingVerticalMult ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return ::hx::Val( updateColorTransform_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_facingHorizontalMult") ) { return ::hx::Val( _facingHorizontalMult ); }
		if (HX_FIELD_EQ(inName,"loadGraphicFromSprite") ) { return ::hx::Val( loadGraphicFromSprite_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"transformWorldToPixels") ) { return ::hx::Val( transformWorldToPixels_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"transformScreenToPixels") ) { return ::hx::Val( transformScreenToPixels_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"transformWorldToPixelsSimple") ) { return ::hx::Val( transformWorldToPixelsSimple_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxSprite_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"defaultAntialiasing") ) { outValue = ( defaultAntialiasing ); return true; }
	}
	return false;
}

::hx::Val FlxSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frame(inValue.Cast<  ::flixel::graphics::frames::FlxFrame >()) );frame=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) );alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_flipX(inValue.Cast< bool >()) );flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_flipY(inValue.Cast< bool >()) );flipY=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blend(inValue.Cast<  ::Dynamic >()) );blend=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast< int >()) );color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pixels") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pixels(inValue.Cast<  ::openfl::display::BitmapData >()) ); }
		if (HX_FIELD_EQ(inName,"frames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frames(inValue.Cast<  ::flixel::graphics::frames::FlxFramesCollection >()) );frames=inValue.Cast<  ::flixel::graphics::frames::FlxFramesCollection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"facing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_facing(inValue.Cast< int >()) );facing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::flixel::graphics::tile::FlxGraphicsShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frame") ) { _frame=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_graphic(inValue.Cast<  ::flixel::graphics::FlxGraphic >()) );graphic=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast<  ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_clipRect(inValue.Cast<  ::flixel::math::FlxRect >()) );clipRect=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast<  ::flixel::animation::FlxAnimationController >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numFrames") ) { numFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halfSize") ) { _halfSize=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sinAngle") ) { _sinAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cosAngle") ) { _cosAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameWidth") ) { frameWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePixels") ) { framePixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameHeight") ) { frameHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect2") ) { _flashRect2=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_facingFlip") ) { _facingFlip=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_antialiasing(inValue.Cast< bool >()) );antialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameGraphic") ) { _frameGraphic=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaledOrigin") ) { _scaledOrigin=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_angleChanged") ) { _angleChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"useFramePixels") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_useFramePixels(inValue.Cast< bool >()) );useFramePixels=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_flashPointZero") ) { _flashPointZero=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"useColorTransform") ) { useColorTransform=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"bakedRotationAngle") ) { bakedRotationAngle=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_facingVerticalMult") ) { _facingVerticalMult=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_facingHorizontalMult") ) { _facingHorizontalMult=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxSprite_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"defaultAntialiasing") ) { defaultAntialiasing=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void FlxSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animation",04,ef,34,4b));
	outFields->push(HX_("framePixels",3a,bb,f1,6a));
	outFields->push(HX_("useFramePixels",33,0e,5a,8e));
	outFields->push(HX_("antialiasing",f4,16,b3,48));
	outFields->push(HX_("dirty",12,50,d0,d9));
	outFields->push(HX_("pixels",2d,ef,a9,8c));
	outFields->push(HX_("frame",2d,78,83,06));
	outFields->push(HX_("frameWidth",99,ea,88,ad));
	outFields->push(HX_("frameHeight",f4,d3,93,e0));
	outFields->push(HX_("numFrames",8c,fa,86,5d));
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("graphic",a8,5a,07,74));
	outFields->push(HX_("bakedRotationAngle",8a,d1,9c,9b));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("facing",1a,3f,05,e4));
	outFields->push(HX_("flipX",0b,45,92,02));
	outFields->push(HX_("flipY",0c,45,92,02));
	outFields->push(HX_("origin",e6,19,01,4b));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("scale",8a,ce,ce,78));
	outFields->push(HX_("blend",51,e8,f4,b4));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("colorTransform",89,d7,3f,ad));
	outFields->push(HX_("useColorTransform",30,e6,ec,72));
	outFields->push(HX_("clipRect",14,90,6a,58));
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("_frame",6e,bf,6a,02));
	outFields->push(HX_("_frameGraphic",da,ac,00,f7));
	outFields->push(HX_("_facingHorizontalMult",8d,29,a1,51));
	outFields->push(HX_("_facingVerticalMult",df,11,0c,86));
	outFields->push(HX_("_flashPoint",9f,1d,2a,b7));
	outFields->push(HX_("_flashRect",b5,c2,f3,5d));
	outFields->push(HX_("_flashRect2",dd,9b,56,d7));
	outFields->push(HX_("_flashPointZero",67,14,7d,fb));
	outFields->push(HX_("_matrix",e0,47,3f,2a));
	outFields->push(HX_("_halfSize",73,43,4d,66));
	outFields->push(HX_("_scaledOrigin",ff,fa,5e,6a));
	outFields->push(HX_("_sinAngle",fa,54,de,b8));
	outFields->push(HX_("_cosAngle",6b,c9,00,1f));
	outFields->push(HX_("_angleChanged",40,98,5c,b2));
	outFields->push(HX_("_facingFlip",06,e0,9c,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::animation::FlxAnimationController */ ,(int)offsetof(FlxSprite_obj,animation),HX_("animation",04,ef,34,4b)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxSprite_obj,framePixels),HX_("framePixels",3a,bb,f1,6a)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,useFramePixels),HX_("useFramePixels",33,0e,5a,8e)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,antialiasing),HX_("antialiasing",f4,16,b3,48)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,dirty),HX_("dirty",12,50,d0,d9)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(FlxSprite_obj,frame),HX_("frame",2d,78,83,06)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,frameWidth),HX_("frameWidth",99,ea,88,ad)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,frameHeight),HX_("frameHeight",f4,d3,93,e0)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,numFrames),HX_("numFrames",8c,fa,86,5d)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFramesCollection */ ,(int)offsetof(FlxSprite_obj,frames),HX_("frames",a6,af,85,ac)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxSprite_obj,graphic),HX_("graphic",a8,5a,07,74)},
	{::hx::fsFloat,(int)offsetof(FlxSprite_obj,bakedRotationAngle),HX_("bakedRotationAngle",8a,d1,9c,9b)},
	{::hx::fsFloat,(int)offsetof(FlxSprite_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,facing),HX_("facing",1a,3f,05,e4)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,flipX),HX_("flipX",0b,45,92,02)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,flipY),HX_("flipY",0c,45,92,02)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxSprite_obj,origin),HX_("origin",e6,19,01,4b)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxSprite_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxSprite_obj,scale),HX_("scale",8a,ce,ce,78)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSprite_obj,blend),HX_("blend",51,e8,f4,b4)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(FlxSprite_obj,colorTransform),HX_("colorTransform",89,d7,3f,ad)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,useColorTransform),HX_("useColorTransform",30,e6,ec,72)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxSprite_obj,clipRect),HX_("clipRect",14,90,6a,58)},
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxGraphicsShader */ ,(int)offsetof(FlxSprite_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(FlxSprite_obj,_frame),HX_("_frame",6e,bf,6a,02)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxSprite_obj,_frameGraphic),HX_("_frameGraphic",da,ac,00,f7)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,_facingHorizontalMult),HX_("_facingHorizontalMult",8d,29,a1,51)},
	{::hx::fsInt,(int)offsetof(FlxSprite_obj,_facingVerticalMult),HX_("_facingVerticalMult",df,11,0c,86)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxSprite_obj,_flashPoint),HX_("_flashPoint",9f,1d,2a,b7)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxSprite_obj,_flashRect),HX_("_flashRect",b5,c2,f3,5d)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxSprite_obj,_flashRect2),HX_("_flashRect2",dd,9b,56,d7)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxSprite_obj,_flashPointZero),HX_("_flashPointZero",67,14,7d,fb)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(int)offsetof(FlxSprite_obj,_matrix),HX_("_matrix",e0,47,3f,2a)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxSprite_obj,_halfSize),HX_("_halfSize",73,43,4d,66)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxSprite_obj,_scaledOrigin),HX_("_scaledOrigin",ff,fa,5e,6a)},
	{::hx::fsFloat,(int)offsetof(FlxSprite_obj,_sinAngle),HX_("_sinAngle",fa,54,de,b8)},
	{::hx::fsFloat,(int)offsetof(FlxSprite_obj,_cosAngle),HX_("_cosAngle",6b,c9,00,1f)},
	{::hx::fsBool,(int)offsetof(FlxSprite_obj,_angleChanged),HX_("_angleChanged",40,98,5c,b2)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(FlxSprite_obj,_facingFlip),HX_("_facingFlip",06,e0,9c,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxSprite_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &FlxSprite_obj::defaultAntialiasing,HX_("defaultAntialiasing",55,d9,0b,c5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxSprite_obj_sMemberFields[] = {
	HX_("animation",04,ef,34,4b),
	HX_("framePixels",3a,bb,f1,6a),
	HX_("useFramePixels",33,0e,5a,8e),
	HX_("antialiasing",f4,16,b3,48),
	HX_("dirty",12,50,d0,d9),
	HX_("frame",2d,78,83,06),
	HX_("frameWidth",99,ea,88,ad),
	HX_("frameHeight",f4,d3,93,e0),
	HX_("numFrames",8c,fa,86,5d),
	HX_("frames",a6,af,85,ac),
	HX_("graphic",a8,5a,07,74),
	HX_("bakedRotationAngle",8a,d1,9c,9b),
	HX_("alpha",5e,a7,96,21),
	HX_("facing",1a,3f,05,e4),
	HX_("flipX",0b,45,92,02),
	HX_("flipY",0c,45,92,02),
	HX_("origin",e6,19,01,4b),
	HX_("offset",93,97,3f,60),
	HX_("scale",8a,ce,ce,78),
	HX_("blend",51,e8,f4,b4),
	HX_("color",63,71,5c,4a),
	HX_("colorTransform",89,d7,3f,ad),
	HX_("useColorTransform",30,e6,ec,72),
	HX_("clipRect",14,90,6a,58),
	HX_("shader",25,bf,20,1d),
	HX_("_frame",6e,bf,6a,02),
	HX_("_frameGraphic",da,ac,00,f7),
	HX_("_facingHorizontalMult",8d,29,a1,51),
	HX_("_facingVerticalMult",df,11,0c,86),
	HX_("_flashPoint",9f,1d,2a,b7),
	HX_("_flashRect",b5,c2,f3,5d),
	HX_("_flashRect2",dd,9b,56,d7),
	HX_("_flashPointZero",67,14,7d,fb),
	HX_("_matrix",e0,47,3f,2a),
	HX_("_halfSize",73,43,4d,66),
	HX_("_scaledOrigin",ff,fa,5e,6a),
	HX_("_sinAngle",fa,54,de,b8),
	HX_("_cosAngle",6b,c9,00,1f),
	HX_("_angleChanged",40,98,5c,b2),
	HX_("_facingFlip",06,e0,9c,02),
	HX_("initVars",dc,5a,00,53),
	HX_("destroy",fa,2c,86,24),
	HX_("clone",5d,13,63,48),
	HX_("loadGraphicFromSprite",d1,7c,73,38),
	HX_("loadGraphic",22,19,a5,44),
	HX_("loadRotatedGraphic",c5,14,74,62),
	HX_("loadRotatedFrame",0a,81,76,8b),
	HX_("makeGraphic",5a,82,11,b8),
	HX_("graphicLoaded",cd,84,20,16),
	HX_("resetSize",30,aa,3f,92),
	HX_("resetFrameSize",bf,c3,44,94),
	HX_("resetSizeFromFrame",13,d2,50,8c),
	HX_("resetFrame",de,af,1f,ef),
	HX_("setGraphicSize",07,d7,f8,2d),
	HX_("updateHitbox",81,94,eb,56),
	HX_("resetHelpers",36,89,3d,32),
	HX_("update",09,86,05,87),
	HX_("updateAnimation",bb,bf,bf,9a),
	HX_("checkEmptyFrame",48,b5,2f,00),
	HX_("draw",04,2c,70,42),
	HX_("drawSimple",56,7f,42,fa),
	HX_("drawComplex",8c,aa,b9,cc),
	HX_("stamp",03,70,0b,84),
	HX_("drawFrame",89,ad,8e,ce),
	HX_("centerOffsets",2b,a0,b2,c1),
	HX_("centerOrigin",9b,41,36,0f),
	HX_("replaceColor",8f,5c,eb,3d),
	HX_("setColorTransform",cb,5e,21,43),
	HX_("updateColorTransform",72,0f,d2,2f),
	HX_("pixelsOverlapPoint",16,82,44,e0),
	HX_("getPixelAt",23,b3,68,d7),
	HX_("getPixelAtScreen",ef,de,d1,02),
	HX_("transformWorldToPixels",6e,ba,1c,c0),
	HX_("transformWorldToPixelsSimple",40,b9,b0,20),
	HX_("transformScreenToPixels",20,c1,67,1b),
	HX_("calcFrame",58,93,8c,f9),
	HX_("updateFramePixels",b1,67,5b,cf),
	HX_("getGraphicMidpoint",9a,b4,dd,57),
	HX_("isOnScreen",f5,43,b9,a1),
	HX_("isSimpleRender",32,f4,2a,47),
	HX_("isSimpleRenderBlit",87,59,b0,df),
	HX_("getRotatedBounds",88,12,38,3c),
	HX_("getScreenBounds",b7,e4,25,66),
	HX_("setFacingFlip",29,51,8b,d1),
	HX_("setFrames",e8,24,2d,0c),
	HX_("get_pixels",f6,5e,31,7d),
	HX_("set_pixels",6a,fd,ae,80),
	HX_("set_frame",90,c0,7d,2d),
	HX_("set_facing",57,4d,0a,d8),
	HX_("set_alpha",c1,ef,90,48),
	HX_("set_color",c6,b9,56,71),
	HX_("set_angle",36,8c,dc,49),
	HX_("updateTrig",85,87,b8,05),
	HX_("set_blend",b4,30,ef,db),
	HX_("set_graphic",cb,c1,6e,04),
	HX_("set_clipRect",91,67,7d,22),
	HX_("set_frames",e3,bd,8a,a0),
	HX_("set_flipX",6e,8d,8c,29),
	HX_("set_flipY",6f,8d,8c,29),
	HX_("set_antialiasing",f1,f0,93,a3),
	HX_("set_useFramePixels",70,21,a3,06),
	HX_("checkFlipX",23,47,82,12),
	HX_("checkFlipY",24,47,82,12),
	::String(null()) };

static void FlxSprite_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSprite_obj::defaultAntialiasing,"defaultAntialiasing");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxSprite_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSprite_obj::defaultAntialiasing,"defaultAntialiasing");
};

#endif

::hx::Class FlxSprite_obj::__mClass;

static ::String FlxSprite_obj_sStaticFields[] = {
	HX_("defaultAntialiasing",55,d9,0b,c5),
	::String(null())
};

void FlxSprite_obj::__register()
{
	FlxSprite_obj _hx_dummy;
	FlxSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.FlxSprite",65,ad,eb,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxSprite_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxSprite_obj::__SetStatic;
	__mClass->mMarkFunc = FlxSprite_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxSprite_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSprite_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxSprite_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxSprite_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cfd221447aa7194b_136_boot)
HXDLIN( 136)		defaultAntialiasing = false;
            	}
}

} // end namespace flixel
