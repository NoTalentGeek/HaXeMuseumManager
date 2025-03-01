#ifndef INCLUDED_haxe_ui_toolkit_util_Identifier
#define INCLUDED_haxe_ui_toolkit_util_Identifier

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,toolkit,util,Identifier)
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  Identifier_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Identifier_obj OBJ_;
		Identifier_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.util.Identifier")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Identifier_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Identifier_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Identifier","\x89","\xcc","\xdd","\xc4"); }

		static void __boot();
		static ::haxe::ds::StringMap _objectCount;
		static ::String createObjectId( Dynamic instance);
		static Dynamic createObjectId_dyn();

		static ::String createClassId( ::hx::Class type);
		static Dynamic createClassId_dyn();

		static ::String guid( );
		static Dynamic guid_dyn();

		static ::String S4( );
		static Dynamic S4_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util

#endif /* INCLUDED_haxe_ui_toolkit_util_Identifier */ 
