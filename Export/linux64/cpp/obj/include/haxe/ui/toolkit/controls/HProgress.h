#ifndef INCLUDED_haxe_ui_toolkit_controls_HProgress
#define INCLUDED_haxe_ui_toolkit_controls_HProgress

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_controls_Progress
#include <haxe/ui/toolkit/controls/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,HProgress)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Progress)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDirectional)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IScrollable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  HProgress_obj : public ::haxe::ui::toolkit::controls::Progress_obj{
	public:
		typedef ::haxe::ui::toolkit::controls::Progress_obj super;
		typedef HProgress_obj OBJ_;
		HProgress_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.controls.HProgress")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HProgress_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HProgress_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
		::String __ToString() const { return HX_HCSTRING("HProgress","\x15","\x3c","\xc2","\xb3"); }

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_HProgress */ 
