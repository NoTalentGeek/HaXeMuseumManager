#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DateTools
#include <DateTools.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

Void DateTools_obj::__construct()
{
	return null();
}

//DateTools_obj::~DateTools_obj() { }

Dynamic DateTools_obj::__CreateEmpty() { return  new DateTools_obj; }
hx::ObjectPtr< DateTools_obj > DateTools_obj::__new()
{  hx::ObjectPtr< DateTools_obj > _result_ = new DateTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic DateTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DateTools_obj > _result_ = new DateTools_obj();
	_result_->__construct();
	return _result_;}

::String DateTools_obj::__format_get( ::Date d,::String e){
	HX_STACK_FRAME("DateTools","__format_get",0xabb90f8f,"DateTools.__format_get","/usr/lib/haxe/std/DateTools.hx",36,0x64e40392)
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(37)
	::String tmp = e;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("%","\x25","\x00","\x00","\x00"))){
		HX_STACK_LINE(39)
		tmp1 = HX_HCSTRING("%","\x25","\x00","\x00","\x00");
	}
	else if (  ( _switch_1==HX_HCSTRING("C","\x43","\x00","\x00","\x00"))){
		HX_STACK_LINE(41)
		int tmp2 = d->getFullYear();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		Float tmp3 = (Float(tmp2) / Float((int)100));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		tmp1 = ::StringTools_obj::lpad(tmp5,HX_HCSTRING("0","\x30","\x00","\x00","\x00"),(int)2);
	}
	else if (  ( _switch_1==HX_HCSTRING("d","\x64","\x00","\x00","\x00"))){
		HX_STACK_LINE(43)
		int tmp2 = d->getDate();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		tmp1 = ::StringTools_obj::lpad(tmp3,HX_HCSTRING("0","\x30","\x00","\x00","\x00"),(int)2);
	}
	else if (  ( _switch_1==HX_HCSTRING("D","\x44","\x00","\x00","\x00"))){
		HX_STACK_LINE(45)
		::Date tmp2 = d;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		tmp1 = ::DateTools_obj::__format(tmp2,HX_HCSTRING("%m/%d/%y","\x7d","\x9b","\xc4","\x53"));
	}
	else if (  ( _switch_1==HX_HCSTRING("e","\x65","\x00","\x00","\x00"))){
		HX_STACK_LINE(47)
		int tmp2 = d->getDate();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		tmp1 = ::Std_obj::string(tmp2);
	}
	else if (  ( _switch_1==HX_HCSTRING("F","\x46","\x00","\x00","\x00"))){
		HX_STACK_LINE(49)
		::Date tmp2 = d;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		tmp1 = ::DateTools_obj::__format(tmp2,HX_HCSTRING("%Y-%m-%d","\xab","\x02","\x52","\x4d"));
	}
	else if (  ( _switch_1==HX_HCSTRING("H","\x48","\x00","\x00","\x00")) ||  ( _switch_1==HX_HCSTRING("k","\x6b","\x00","\x00","\x00"))){
		HX_STACK_LINE(51)
		int tmp2 = d->getHours();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		bool tmp4 = (e == HX_HCSTRING("H","\x48","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		if ((tmp4)){
			HX_STACK_LINE(51)
			tmp5 = HX_HCSTRING("0","\x30","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(51)
			tmp5 = HX_HCSTRING(" ","\x20","\x00","\x00","\x00");
		}
		HX_STACK_LINE(51)
		tmp1 = ::StringTools_obj::lpad(tmp3,tmp5,(int)2);
	}
	else if (  ( _switch_1==HX_HCSTRING("I","\x49","\x00","\x00","\x00")) ||  ( _switch_1==HX_HCSTRING("l","\x6c","\x00","\x00","\x00"))){
		HX_STACK_LINE(53)
		int tmp2 = d->getHours();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		int tmp3 = hx::Mod(tmp2,(int)12);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		int hour = tmp3;		HX_STACK_VAR(hour,"hour");
		HX_STACK_LINE(54)
		bool tmp4 = (hour == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(54)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		if ((tmp4)){
			HX_STACK_LINE(54)
			tmp5 = (int)12;
		}
		else{
			HX_STACK_LINE(54)
			tmp5 = hour;
		}
		HX_STACK_LINE(54)
		::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		bool tmp7 = (e == HX_HCSTRING("I","\x49","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(54)
		if ((tmp7)){
			HX_STACK_LINE(54)
			tmp8 = HX_HCSTRING("0","\x30","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(54)
			tmp8 = HX_HCSTRING(" ","\x20","\x00","\x00","\x00");
		}
		HX_STACK_LINE(54)
		tmp1 = ::StringTools_obj::lpad(tmp6,tmp8,(int)2);
	}
	else if (  ( _switch_1==HX_HCSTRING("m","\x6d","\x00","\x00","\x00"))){
		HX_STACK_LINE(56)
		int tmp2 = d->getMonth();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		tmp1 = ::StringTools_obj::lpad(tmp4,HX_HCSTRING("0","\x30","\x00","\x00","\x00"),(int)2);
	}
	else if (  ( _switch_1==HX_HCSTRING("M","\x4d","\x00","\x00","\x00"))){
		HX_STACK_LINE(58)
		int tmp2 = d->getMinutes();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		tmp1 = ::StringTools_obj::lpad(tmp3,HX_HCSTRING("0","\x30","\x00","\x00","\x00"),(int)2);
	}
	else if (  ( _switch_1==HX_HCSTRING("n","\x6e","\x00","\x00","\x00"))){
		HX_STACK_LINE(60)
		tmp1 = HX_HCSTRING("\n","\x0a","\x00","\x00","\x00");
	}
	else if (  ( _switch_1==HX_HCSTRING("p","\x70","\x00","\x00","\x00"))){
		HX_STACK_LINE(62)
		int tmp2 = d->getHours();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		bool tmp3 = (tmp2 > (int)11);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		if ((tmp3)){
			HX_STACK_LINE(62)
			tmp1 = HX_HCSTRING("PM","\xfd","\x45","\x00","\x00");
		}
		else{
			HX_STACK_LINE(62)
			tmp1 = HX_HCSTRING("AM","\xec","\x38","\x00","\x00");
		}
	}
	else if (  ( _switch_1==HX_HCSTRING("r","\x72","\x00","\x00","\x00"))){
		HX_STACK_LINE(64)
		::Date tmp2 = d;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		tmp1 = ::DateTools_obj::__format(tmp2,HX_HCSTRING("%I:%M:%S %p","\x41","\x32","\xce","\xbb"));
	}
	else if (  ( _switch_1==HX_HCSTRING("R","\x52","\x00","\x00","\x00"))){
		HX_STACK_LINE(66)
		::Date tmp2 = d;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		tmp1 = ::DateTools_obj::__format(tmp2,HX_HCSTRING("%H:%M","\x9f","\xf6","\x96","\x7d"));
	}
	else if (  ( _switch_1==HX_HCSTRING("s","\x73","\x00","\x00","\x00"))){
		HX_STACK_LINE(68)
		Float tmp2 = d->getTime();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		Float tmp3 = (Float(tmp2) / Float((int)1000));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		tmp1 = ::Std_obj::string(tmp4);
	}
	else if (  ( _switch_1==HX_HCSTRING("S","\x53","\x00","\x00","\x00"))){
		HX_STACK_LINE(70)
		int tmp2 = d->getSeconds();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		tmp1 = ::StringTools_obj::lpad(tmp3,HX_HCSTRING("0","\x30","\x00","\x00","\x00"),(int)2);
	}
	else if (  ( _switch_1==HX_HCSTRING("t","\x74","\x00","\x00","\x00"))){
		HX_STACK_LINE(72)
		tmp1 = HX_HCSTRING("\t","\x09","\x00","\x00","\x00");
	}
	else if (  ( _switch_1==HX_HCSTRING("T","\x54","\x00","\x00","\x00"))){
		HX_STACK_LINE(74)
		::Date tmp2 = d;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		tmp1 = ::DateTools_obj::__format(tmp2,HX_HCSTRING("%H:%M:%S","\x09","\xda","\xeb","\xa7"));
	}
	else if (  ( _switch_1==HX_HCSTRING("u","\x75","\x00","\x00","\x00"))){
		HX_STACK_LINE(77)
		int tmp2 = d->getDay();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		int t = tmp2;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(78)
		bool tmp3 = (t == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		if ((tmp3)){
			HX_STACK_LINE(78)
			tmp1 = HX_HCSTRING("7","\x37","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(78)
			int tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(78)
			tmp1 = ::Std_obj::string(tmp4);
		}
	}
	else if (  ( _switch_1==HX_HCSTRING("w","\x77","\x00","\x00","\x00"))){
		HX_STACK_LINE(81)
		int tmp2 = d->getDay();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		tmp1 = ::Std_obj::string(tmp2);
	}
	else if (  ( _switch_1==HX_HCSTRING("y","\x79","\x00","\x00","\x00"))){
		HX_STACK_LINE(83)
		int tmp2 = d->getFullYear();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		int tmp3 = hx::Mod(tmp2,(int)100);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		tmp1 = ::StringTools_obj::lpad(tmp4,HX_HCSTRING("0","\x30","\x00","\x00","\x00"),(int)2);
	}
	else if (  ( _switch_1==HX_HCSTRING("Y","\x59","\x00","\x00","\x00"))){
		HX_STACK_LINE(85)
		int tmp2 = d->getFullYear();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		tmp1 = ::Std_obj::string(tmp2);
	}
	else  {
		HX_STACK_LINE(87)
		::String tmp2 = (HX_HCSTRING("Date.format %","\x1c","\xc9","\xee","\x03") + e);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		::String tmp3 = (tmp2 + HX_HCSTRING("- not implemented yet.","\xa4","\x96","\xbe","\x31"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		HX_STACK_DO_THROW(tmp3);
	}
;
;
	HX_STACK_LINE(37)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DateTools_obj,__format_get,return )

::String DateTools_obj::__format( ::Date d,::String f){
	HX_STACK_FRAME("DateTools","__format",0x77c4edf8,"DateTools.__format","/usr/lib/haxe/std/DateTools.hx",91,0x64e40392)
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(92)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	::StringBuf r = tmp;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(93)
	int p = (int)0;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(94)
	while((true)){
		HX_STACK_LINE(95)
		int tmp1 = p;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		int tmp2 = f.indexOf(HX_HCSTRING("%","\x25","\x00","\x00","\x00"),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		int np = tmp2;		HX_STACK_VAR(np,"np");
		HX_STACK_LINE(96)
		bool tmp3 = (np < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		if ((tmp3)){
			HX_STACK_LINE(97)
			break;
		}
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			int tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(99)
			int tmp5 = (np - p);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(99)
			::String tmp6 = f.substr(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(99)
			r->b->push(tmp6);
		}
		HX_STACK_LINE(100)
		::Date tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		int tmp5 = (np + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		::String tmp6 = f.substr(tmp5,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		::String tmp7 = ::DateTools_obj::__format_get(tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		r->add(tmp7);
		HX_STACK_LINE(102)
		int tmp8 = (np + (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(102)
		p = tmp8;
	}
	HX_STACK_LINE(104)
	{
		HX_STACK_LINE(104)
		int tmp1 = p;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		int tmp2 = (f.length - p);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		::String tmp3 = f.substr(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(104)
		r->b->push(tmp3);
	}
	HX_STACK_LINE(105)
	::String tmp1 = r->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DateTools_obj,__format,return )

::String DateTools_obj::format( ::Date d,::String f){
	HX_STACK_FRAME("DateTools","format",0x1113a898,"DateTools.format","/usr/lib/haxe/std/DateTools.hx",116,0x64e40392)
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(122)
	::Date tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	::String tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	::String tmp2 = ::DateTools_obj::__format(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(122)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DateTools_obj,format,return )


DateTools_obj::DateTools_obj()
{
}

bool DateTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { outValue = format_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { outValue = __format_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__format_get") ) { outValue = __format_get_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DateTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DateTools_obj::__mClass,"__mClass");
};

#endif

hx::Class DateTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__format_get","\x6e","\x37","\x39","\x4c"),
	HX_HCSTRING("__format","\x57","\xfa","\xbd","\xa5"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	::String(null()) };

void DateTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("DateTools","\xed","\x64","\x5e","\x95");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DateTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DateTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

