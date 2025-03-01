#ifndef INCLUDED_haxe_ui_toolkit_data_ArrayDataSource
#define INCLUDED_haxe_ui_toolkit_data_ArrayDataSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#include <haxe/ui/toolkit/data/DataSource.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,ArrayDataSource)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,DataSource)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,IDataSource)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace toolkit{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  ArrayDataSource_obj : public ::haxe::ui::toolkit::data::DataSource_obj{
	public:
		typedef ::haxe::ui::toolkit::data::DataSource_obj super;
		typedef ArrayDataSource_obj OBJ_;
		ArrayDataSource_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.data.ArrayDataSource")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ArrayDataSource_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArrayDataSource_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ArrayDataSource","\x7e","\x49","\xf8","\x7b"); }

		cpp::ArrayBase array;
		int pos;
		virtual Void create( ::Xml config);

		virtual bool _moveFirst( );

		virtual bool _moveNext( );

		virtual Dynamic _get( );

		virtual bool _add( Dynamic o);

		virtual bool _remove( );

		virtual int size( );

		virtual Void createFromString( ::String data,Dynamic config);

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data

#endif /* INCLUDED_haxe_ui_toolkit_data_ArrayDataSource */ 
