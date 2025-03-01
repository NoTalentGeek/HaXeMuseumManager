#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_CollectionPremade
#include <CollectionPremade.h>
#endif
#ifndef INCLUDED_CollectionPremadeTag
#include <CollectionPremadeTag.h>
#endif
#ifndef INCLUDED_CollectionTagGeneral
#include <CollectionTagGeneral.h>
#endif
#ifndef INCLUDED_EnumMuseumType
#include <EnumMuseumType.h>
#endif
#ifndef INCLUDED_EnumVisitorMode
#include <EnumVisitorMode.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_ObjectMuseum
#include <ObjectMuseum.h>
#endif
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif
#ifndef INCLUDED_ObjectVisitor
#include <ObjectVisitor.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_UIPopupAddObjectMuseum
#include <UIPopupAddObjectMuseum.h>
#endif
#ifndef INCLUDED_UIPopupAddObjectTag
#include <UIPopupAddObjectTag.h>
#endif
#ifndef INCLUDED_UIPopupAddObjectVisitor
#include <UIPopupAddObjectVisitor.h>
#endif
#ifndef INCLUDED_UIPopupEditObjectMuseum
#include <UIPopupEditObjectMuseum.h>
#endif
#ifndef INCLUDED_UIPopupEditObjectTag
#include <UIPopupEditObjectTag.h>
#endif
#ifndef INCLUDED_UIPopupEditObjectVisitor
#include <UIPopupEditObjectVisitor.h>
#endif
#ifndef INCLUDED_UIPopupRemoveObjectMuseum
#include <UIPopupRemoveObjectMuseum.h>
#endif
#ifndef INCLUDED_UIPopupRemoveObjectTag
#include <UIPopupRemoveObjectTag.h>
#endif
#ifndef INCLUDED_UIPopupRemoveObjectVisitor
#include <UIPopupRemoveObjectVisitor.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Absolute
#include <haxe/ui/toolkit/containers/Absolute.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Accordion
#include <haxe/ui/toolkit/containers/Accordion.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_PopupContent
#include <haxe/ui/toolkit/controls/popups/PopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_SimplePopupContent
#include <haxe/ui/toolkit/controls/popups/SimplePopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupManager
#include <haxe/ui/toolkit/core/PopupManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Toolkit
#include <haxe/ui/toolkit/core/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable
#include <haxe/ui/toolkit/core/interfaces/IDraggable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_hxSerial_Serial
#include <hxSerial/Serial.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",24,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(56)
	this->serialObject = null();
	HX_STACK_LINE(54)
	this->updateAfterBool = false;
	HX_STACK_LINE(53)
	this->uiPopupRemoveVisitorObject = null();
	HX_STACK_LINE(52)
	this->uiPopupRemoveTagObject = null();
	HX_STACK_LINE(51)
	this->uiPopupRemoveMuseumObject = null();
	HX_STACK_LINE(50)
	this->uiPopupLoadingWordObject = null();
	HX_STACK_LINE(49)
	this->uiPopupEditVisitorObject = null();
	HX_STACK_LINE(48)
	this->uiPopupEditTagObject = null();
	HX_STACK_LINE(47)
	this->uiPopupEditMuseumObject = null();
	HX_STACK_LINE(46)
	this->uiPopupAddVisitorObject = null();
	HX_STACK_LINE(45)
	this->uiPopupAddTagObject = null();
	HX_STACK_LINE(44)
	this->uiPopupAddMuseumObject = null();
	HX_STACK_LINE(43)
	this->tagAmountInt = (int)-1;
	HX_STACK_LINE(42)
	this->soundProgressBool = false;
	HX_STACK_LINE(41)
	this->serialLength = (int)0;
	HX_STACK_LINE(40)
	this->serialIndexInt = (int)0;
	HX_STACK_LINE(39)
	this->serialEstablishedBool = false;
	HX_STACK_LINE(38)
	this->serialCounterInt = (int)0;
	HX_STACK_LINE(37)
	this->sendInstructionToArduinoStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(35)
	this->loopCounterCompanyWordInt = (int)0;
	HX_STACK_LINE(34)
	this->loopCounterMainInt = (int)0;
	HX_STACK_LINE(30)
	this->collectionGlobalObject = ::CollectionGlobal_obj::__new();
	HX_STACK_LINE(65)
	::Main _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(68)
	super::__construct();
	HX_STACK_LINE(71)
	int tmp = ::hxSerial::Serial_obj::getDeviceList()->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	this->serialLength = tmp;
	HX_STACK_LINE(75)
	::haxe::ui::toolkit::core::Toolkit_obj::init();
	HX_STACK_LINE(79)
	::haxe::ui::toolkit::core::Toolkit_obj::setTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Accordion >(),HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));
	HX_STACK_LINE(80)
	::haxe::ui::toolkit::core::Toolkit_obj::setTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::popups::Popup >(),HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::Main,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::core::Root _root){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Main.hx",83,0x087e5c05)
		HX_STACK_ARG(_root,"_root")
		{
			HX_STACK_LINE(86)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp1 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIMain.xml","\x1b","\x90","\x6d","\x46"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject uiMainObject = tmp1;		HX_STACK_VAR(uiMainObject,"uiMainObject");
			HX_STACK_LINE(89)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = uiMainObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(89)
			_g->collectionGlobalObject->SetUIMainObjectVoid(tmp2);
			HX_STACK_LINE(91)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = uiMainObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			_root->addChild(tmp3);
			HX_STACK_LINE(95)
			::UIPopupAddObjectMuseum tmp4 = ::UIPopupAddObjectMuseum_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(95)
			_g->uiPopupAddMuseumObject = tmp4;
			HX_STACK_LINE(96)
			::UIPopupAddObjectTag tmp5 = ::UIPopupAddObjectTag_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(96)
			_g->uiPopupAddTagObject = tmp5;
			HX_STACK_LINE(97)
			::UIPopupAddObjectVisitor tmp6 = ::UIPopupAddObjectVisitor_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(97)
			_g->uiPopupAddVisitorObject = tmp6;
			HX_STACK_LINE(98)
			::UIPopupEditObjectMuseum tmp7 = ::UIPopupEditObjectMuseum_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(98)
			_g->uiPopupEditMuseumObject = tmp7;
			HX_STACK_LINE(99)
			::UIPopupEditObjectTag tmp8 = ::UIPopupEditObjectTag_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(99)
			_g->uiPopupEditTagObject = tmp8;
			HX_STACK_LINE(100)
			::UIPopupEditObjectVisitor tmp9 = ::UIPopupEditObjectVisitor_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(100)
			_g->uiPopupEditVisitorObject = tmp9;
			HX_STACK_LINE(101)
			::UIPopupRemoveObjectMuseum tmp10 = ::UIPopupRemoveObjectMuseum_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(101)
			_g->uiPopupRemoveMuseumObject = tmp10;
			HX_STACK_LINE(102)
			::UIPopupRemoveObjectTag tmp11 = ::UIPopupRemoveObjectTag_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(102)
			_g->uiPopupRemoveTagObject = tmp11;
			HX_STACK_LINE(103)
			::UIPopupRemoveObjectVisitor tmp12 = ::UIPopupRemoveObjectVisitor_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(103)
			_g->uiPopupRemoveVisitorObject = tmp12;
			HX_STACK_LINE(107)
			::haxe::ui::toolkit::containers::Absolute tmp13 = _root->findChild(HX_HCSTRING("UIMuseumAbsolute","\xdd","\x3c","\xb2","\xbe"),hx::ClassOf< ::haxe::ui::toolkit::containers::Absolute >(),true);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(107)
			::haxe::ui::toolkit::containers::Absolute uiMuseumAbsoluteObject = tmp13;		HX_STACK_VAR(uiMuseumAbsoluteObject,"uiMuseumAbsoluteObject");
			HX_STACK_LINE(110)
			::haxe::ui::toolkit::containers::Absolute tmp14 = uiMuseumAbsoluteObject;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(110)
			_g->collectionGlobalObject->SetUIMuseumAbsoluteObjectVoid(tmp14);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(83)
	::haxe::ui::toolkit::core::Toolkit_obj::openFullscreen( Dynamic(new _Function_1_1(_g)));
	HX_STACK_LINE(116)
	::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	::CollectionTagGeneral_obj::TagGeneralStructVoid(tmp1);
	HX_STACK_LINE(117)
	::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	::CollectionPremadeTag_obj::PremadeTagStructVoid(tmp2);
	HX_STACK_LINE(118)
	::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(118)
	::CollectionPremade_obj::PremadeFloorNewObjectVoid(tmp3);
	HX_STACK_LINE(119)
	::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(119)
	::CollectionPremade_obj::PremadeRoomNewObjectVoid(tmp4);
	HX_STACK_LINE(120)
	::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(120)
	::CollectionPremade_obj::PremadeExhibitionNewObjectVoid(tmp5);
	HX_STACK_LINE(127)
	::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(127)
	::CollectionPremade_obj::PremadeVisitorObjectVoid((int)30,tmp6);
	HX_STACK_LINE(129)
	::CollectionGlobal tmp7 = this->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(129)
	int tmp8 = tmp7->GetTagGeneralObjectArray()->length;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(129)
	::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(129)
	int tmp10 = tmp9->GetTagObjectArray()->length;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(129)
	int tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(129)
	this->tagAmountInt = tmp11;
	HX_STACK_LINE(130)
	::haxe::ui::toolkit::core::PopupManager tmp12 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(130)
	::haxe::ui::toolkit::controls::popups::Popup tmp13 = tmp12->showBusy(HX_HCSTRING("Cooking words!!!","\x5e","\x69","\xa9","\x71"),null(),null(),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(130)
	this->uiPopupLoadingWordObject = tmp13;
	HX_STACK_LINE(131)
	::haxe::ui::toolkit::core::PopupManager tmp14 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(131)
	::haxe::ui::toolkit::controls::popups::Popup tmp15 = this->uiPopupLoadingWordObject;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(131)
	tmp14->showPopup(tmp15);
	HX_STACK_LINE(134)
	::String tmp16 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(134)
	Dynamic tmp17 = this->UpdateVoid_dyn();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(134)
	this->addEventListener(tmp16,tmp17,null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::SearchForSerialConnectionVoid( ){
{
		HX_STACK_FRAME("Main","SearchForSerialConnectionVoid",0xfbbfb9d2,"Main.SearchForSerialConnectionVoid","Main.hx",146,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(156)
		int tmp = this->serialIndexInt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		int tmp1 = this->serialLength;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		if ((tmp2)){
			HX_STACK_LINE(156)
			return null();
		}
		HX_STACK_LINE(158)
		bool tmp3 = this->serialEstablishedBool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(158)
		bool tmp4 = (tmp3 == false);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(158)
		if ((tmp4)){
			HX_STACK_LINE(160)
			::hxSerial::Serial tmp5 = this->serialObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(160)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(160)
			if ((tmp6)){
				HX_STACK_LINE(162)
				int tmp7 = this->serialIndexInt;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(162)
				::String tmp8 = ::hxSerial::Serial_obj::getDeviceList()->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(162)
				::hxSerial::Serial tmp9 = ::hxSerial::Serial_obj::__new(tmp8,(int)9600,true);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(162)
				this->serialObject = tmp9;
				HX_STACK_LINE(163)
				::hxSerial::Serial tmp10 = this->serialObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(163)
				::String tmp11 = tmp10->portName;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(163)
				Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),163,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("SearchForSerialConnectionVoid","\xa7","\x8a","\x33","\x40"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(163)
				::haxe::Log_obj::trace(tmp11,tmp12);
			}
			else{
				HX_STACK_LINE(166)
				::hxSerial::Serial tmp7 = this->serialObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(166)
				bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(166)
				if ((tmp8)){
					HX_STACK_LINE(168)
					::hxSerial::Serial tmp9 = this->serialObject;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(168)
					int tmp10 = tmp9->available();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(168)
					bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(168)
					if ((tmp11)){
						HX_STACK_LINE(170)
						::hxSerial::Serial tmp12 = this->serialObject;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(170)
						::String tmp13 = tmp12->readBytes((int)9);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(170)
						bool tmp14 = (tmp13 == HX_HCSTRING("HANDSHAKE","\xd7","\x50","\x8e","\xaf"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(170)
						if ((tmp14)){
							HX_STACK_LINE(172)
							this->serialEstablishedBool = true;
							HX_STACK_LINE(173)
							return null();
						}
					}
				}
			}
			HX_STACK_LINE(181)
			(this->serialCounterInt)++;
			HX_STACK_LINE(182)
			int tmp7 = this->serialCounterInt;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(182)
			bool tmp8 = (tmp7 >= (int)300);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(182)
			if ((tmp8)){
				HX_STACK_LINE(184)
				this->serialObject = null();
				HX_STACK_LINE(185)
				(this->serialIndexInt)++;
				HX_STACK_LINE(186)
				this->serialCounterInt = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,SearchForSerialConnectionVoid,(void))

Void Main_obj::UpdateVoid( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("Main","UpdateVoid",0x95413012,"Main.UpdateVoid","Main.hx",207,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(210)
		bool tmp = this->updateAfterBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		if ((tmp1)){
			HX_STACK_LINE(210)
			this->UpdateAfterCompanyWordVoid();
		}
		else{
			HX_STACK_LINE(211)
			bool tmp2 = this->updateAfterBool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(211)
			bool tmp3 = (tmp2 == false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(211)
			if ((tmp3)){
				HX_STACK_LINE(211)
				this->UpdateBeforeCompanyWordVoid();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,UpdateVoid,(void))

Void Main_obj::UpdateAfterCompanyWordVoid( ){
{
		HX_STACK_FRAME("Main","UpdateAfterCompanyWordVoid",0x20b99e9d,"Main.UpdateAfterCompanyWordVoid","Main.hx",222,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(224)
		::haxe::ui::toolkit::core::PopupManager tmp = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		::haxe::ui::toolkit::controls::popups::Popup tmp1 = this->uiPopupLoadingWordObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		tmp->hidePopup(tmp1,null());
		HX_STACK_LINE(229)
		this->SearchForSerialConnectionVoid();
		HX_STACK_LINE(230)
		bool tmp2 = this->serialEstablishedBool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(230)
		bool tmp3 = (tmp2 == true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(230)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(230)
		if ((tmp3)){
			HX_STACK_LINE(230)
			bool tmp5 = this->soundProgressBool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(230)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(230)
			tmp4 = (tmp6 == false);
		}
		else{
			HX_STACK_LINE(230)
			tmp4 = false;
		}
		HX_STACK_LINE(230)
		if ((tmp4)){
			HX_STACK_LINE(233)
			::hxSerial::Serial tmp5 = this->serialObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(233)
			int tmp6 = tmp5->available();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(233)
			bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(233)
			if ((tmp7)){
				HX_STACK_LINE(236)
				::hxSerial::Serial tmp8 = this->serialObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(236)
				::String tmp9 = tmp8->readBytes((int)7);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(236)
				::String targetExhibitionString = tmp9;		HX_STACK_VAR(targetExhibitionString,"targetExhibitionString");
				HX_STACK_LINE(239)
				::String tmp10 = targetExhibitionString.substring((int)0,(int)3);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(239)
				bool tmp11 = (tmp10 == HX_HCSTRING("EXH","\x75","\xa8","\x34","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(239)
				if ((tmp11)){
					HX_STACK_LINE(241)
					::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(241)
					::ObjectVisitor tmp13 = tmp12->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(241)
					::EnumVisitorMode tmp14 = tmp13->GetVisitorModeEnum();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(241)
					bool tmp15 = (tmp14 == ::EnumVisitorMode_obj::HARDWARE_MANUAL);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(241)
					if ((tmp15)){
						HX_STACK_LINE(243)
						::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(243)
						::ObjectVisitor tmp17 = tmp16->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(243)
						::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(243)
						::String tmp19 = targetExhibitionString;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(243)
						::ObjectMuseum tmp20 = ::CollectionFunction_obj::FindMuseumObject(tmp18,::EnumMuseumType_obj::EXH,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(243)
						tmp17->ChangeExhibitionCurrentVoid(tmp20);
						HX_STACK_LINE(244)
						::hxSerial::Serial tmp21 = this->serialObject;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(244)
						tmp21->writeBytes(HX_HCSTRING("I","\x49","\x00","\x00","\x00"));
						HX_STACK_LINE(245)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("Y","\x59","\x00","\x00","\x00"));
						HX_STACK_LINE(246)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("Q","\x51","\x00","\x00","\x00"));
						HX_STACK_LINE(247)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("W","\x57","\x00","\x00","\x00"));
						HX_STACK_LINE(248)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("E","\x45","\x00","\x00","\x00"));
						HX_STACK_LINE(249)
						::CollectionGlobal tmp22 = this->collectionGlobalObject;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(249)
						::ObjectVisitor tmp23 = tmp22->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(249)
						int tmp24 = tmp23->GetExplanationCurrentIndexInt();		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(249)
						int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(249)
						::String tmp26 = ::Std_obj::string(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(249)
						this->sendInstructionToArduinoStringArray->push(tmp26);
						HX_STACK_LINE(250)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("T","\x54","\x00","\x00","\x00"));
						HX_STACK_LINE(251)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("Q","\x51","\x00","\x00","\x00"));
						HX_STACK_LINE(252)
						::CollectionGlobal tmp27 = this->collectionGlobalObject;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(252)
						::ObjectVisitor tmp28 = tmp27->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(252)
						::ObjectMuseum tmp29 = tmp28->GetExhibitionTargetObjectArray()->__get((int)0).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(252)
						int tmp30 = tmp29->GetIndexGlobalInt();		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(252)
						int tmp31 = (tmp30 + (int)1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(252)
						::String tmp32 = ::Std_obj::string(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(252)
						this->sendInstructionToArduinoStringArray->push(tmp32);
						HX_STACK_LINE(253)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("R","\x52","\x00","\x00","\x00"));
						HX_STACK_LINE(254)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("Q","\x51","\x00","\x00","\x00"));
						HX_STACK_LINE(255)
						::CollectionGlobal tmp33 = this->collectionGlobalObject;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(255)
						::ObjectVisitor tmp34 = tmp33->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(255)
						::ObjectMuseum tmp35 = tmp34->GetExhibitionTargetObjectArray()->__get((int)1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(255)
						int tmp36 = tmp35->GetIndexGlobalInt();		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(255)
						int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(255)
						::String tmp38 = ::Std_obj::string(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(255)
						this->sendInstructionToArduinoStringArray->push(tmp38);
						HX_STACK_LINE(256)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("R","\x52","\x00","\x00","\x00"));
						HX_STACK_LINE(257)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("Q","\x51","\x00","\x00","\x00"));
						HX_STACK_LINE(258)
						::CollectionGlobal tmp39 = this->collectionGlobalObject;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(258)
						::ObjectVisitor tmp40 = tmp39->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(258)
						::ObjectMuseum tmp41 = tmp40->GetExhibitionTargetObjectArray()->__get((int)2).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(258)
						int tmp42 = tmp41->GetIndexGlobalInt();		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(258)
						int tmp43 = (tmp42 + (int)1);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(258)
						::String tmp44 = ::Std_obj::string(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(258)
						this->sendInstructionToArduinoStringArray->push(tmp44);
						HX_STACK_LINE(259)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("U","\x55","\x00","\x00","\x00"));
						HX_STACK_LINE(260)
						this->soundProgressBool = true;
					}
					HX_STACK_LINE(264)
					::String tmp16 = targetExhibitionString;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(264)
					Dynamic tmp17 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),264,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("UpdateAfterCompanyWordVoid","\xa8","\x26","\x50","\x6a"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(264)
					::haxe::Log_obj::trace(tmp16,tmp17);
				}
			}
		}
		HX_STACK_LINE(271)
		bool tmp5 = this->soundProgressBool;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(271)
		bool tmp6 = (tmp5 == true);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(271)
		if ((tmp6)){
			HX_STACK_LINE(273)
			::hxSerial::Serial tmp7 = this->serialObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(273)
			int tmp8 = tmp7->available();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(273)
			bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(273)
			if ((tmp9)){
				HX_STACK_LINE(275)
				::hxSerial::Serial tmp10 = this->serialObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(275)
				::String tmp11 = tmp10->readBytes((int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(275)
				::String string = tmp11;		HX_STACK_VAR(string,"string");
				HX_STACK_LINE(277)
				bool tmp12 = (string == HX_HCSTRING("O","\x4f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(277)
				if ((tmp12)){
					HX_STACK_LINE(279)
					::hxSerial::Serial tmp13 = this->serialObject;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(279)
					::String tmp14 = this->sendInstructionToArduinoStringArray->__get((int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(279)
					tmp13->writeBytes(tmp14);
					HX_STACK_LINE(281)
					::String tmp15 = this->sendInstructionToArduinoStringArray->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(281)
					Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),281,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("UpdateAfterCompanyWordVoid","\xa8","\x26","\x50","\x6a"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(281)
					::haxe::Log_obj::trace(tmp15,tmp16);
					HX_STACK_LINE(283)
					::String tmp17 = this->sendInstructionToArduinoStringArray->__get((int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(283)
					this->sendInstructionToArduinoStringArray->remove(tmp17);
					HX_STACK_LINE(284)
					int tmp18 = this->sendInstructionToArduinoStringArray->length;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(284)
					bool tmp19 = (tmp18 == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(284)
					if ((tmp19)){
						HX_STACK_LINE(284)
						this->soundProgressBool = false;
					}
				}
			}
		}
		HX_STACK_LINE(294)
		this->UpdateSlowVoid();
		HX_STACK_LINE(295)
		::UIPopupAddObjectMuseum tmp7 = this->uiPopupAddMuseumObject;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(295)
		tmp7->UpdateVoid();
		HX_STACK_LINE(296)
		::UIPopupAddObjectTag tmp8 = this->uiPopupAddTagObject;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(296)
		tmp8->UpdateVoid();
		HX_STACK_LINE(297)
		::UIPopupAddObjectVisitor tmp9 = this->uiPopupAddVisitorObject;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(297)
		tmp9->UpdateVoid();
		HX_STACK_LINE(298)
		::UIPopupEditObjectMuseum tmp10 = this->uiPopupEditMuseumObject;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(298)
		tmp10->UpdateVoid();
		HX_STACK_LINE(299)
		::UIPopupEditObjectTag tmp11 = this->uiPopupEditTagObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(299)
		tmp11->UpdateVoid();
		HX_STACK_LINE(300)
		::UIPopupEditObjectVisitor tmp12 = this->uiPopupEditVisitorObject;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(300)
		tmp12->UpdateVoid();
		HX_STACK_LINE(301)
		::UIPopupRemoveObjectMuseum tmp13 = this->uiPopupRemoveMuseumObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(301)
		tmp13->UpdateVoid();
		HX_STACK_LINE(302)
		::UIPopupRemoveObjectTag tmp14 = this->uiPopupRemoveTagObject;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(302)
		tmp14->UpdateVoid();
		HX_STACK_LINE(303)
		::UIPopupRemoveObjectVisitor tmp15 = this->uiPopupRemoveVisitorObject;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(303)
		tmp15->UpdateVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,UpdateAfterCompanyWordVoid,(void))

Void Main_obj::UpdateBeforeCompanyWordVoid( ){
{
		HX_STACK_FRAME("Main","UpdateBeforeCompanyWordVoid",0x19ce6c5e,"Main.UpdateBeforeCompanyWordVoid","Main.hx",317,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(319)
		::String tagString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tagString,"tagString");
		HX_STACK_LINE(321)
		::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		int tmp1 = this->loopCounterCompanyWordInt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		::ObjectTag tmp2 = tmp->GetTagGeneralObjectArray()->__get(tmp1).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(321)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(321)
		if ((tmp3)){
			HX_STACK_LINE(324)
			::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(324)
			int tmp5 = this->loopCounterCompanyWordInt;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(324)
			::ObjectTag tmp6 = tmp4->GetTagGeneralObjectArray()->__get(tmp5).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(324)
			tmp6->GenerateCompanyWordVoid();
			HX_STACK_LINE(325)
			::CollectionGlobal tmp7 = this->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(325)
			int tmp8 = this->loopCounterCompanyWordInt;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(325)
			::ObjectTag tmp9 = tmp7->GetTagGeneralObjectArray()->__get(tmp8).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(325)
			::String tmp10 = tmp9->GetNameOriginalString();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(325)
			tagString = tmp10;
		}
		else{
			HX_STACK_LINE(329)
			::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(329)
			int tmp5 = this->loopCounterCompanyWordInt;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(329)
			::ObjectTag tmp6 = tmp4->GetTagGeneralObjectArray()->__get(tmp5).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(329)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(329)
			if ((tmp7)){
				HX_STACK_LINE(331)
				::CollectionGlobal tmp8 = this->collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(331)
				int tmp9 = this->loopCounterCompanyWordInt;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(331)
				::CollectionGlobal tmp10 = this->collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(331)
				int tmp11 = tmp10->GetTagGeneralObjectArray()->length;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(331)
				int tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(331)
				::ObjectTag tmp13 = tmp8->GetTagObjectArray()->__get(tmp12).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(331)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(331)
				if ((tmp14)){
					HX_STACK_LINE(334)
					::CollectionGlobal tmp15 = this->collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(334)
					int tmp16 = this->loopCounterCompanyWordInt;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(334)
					::CollectionGlobal tmp17 = this->collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(334)
					int tmp18 = tmp17->GetTagGeneralObjectArray()->length;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(334)
					int tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(334)
					::ObjectTag tmp20 = tmp15->GetTagObjectArray()->__get(tmp19).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(334)
					tmp20->GenerateCompanyWordVoid();
					HX_STACK_LINE(335)
					::CollectionGlobal tmp21 = this->collectionGlobalObject;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(335)
					int tmp22 = this->loopCounterCompanyWordInt;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(335)
					::CollectionGlobal tmp23 = this->collectionGlobalObject;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(335)
					int tmp24 = tmp23->GetTagGeneralObjectArray()->length;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(335)
					int tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(335)
					::ObjectTag tmp26 = tmp21->GetTagObjectArray()->__get(tmp25).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(335)
					::String tmp27 = tmp26->GetNameOriginalString();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(335)
					tagString = tmp27;
				}
				else{
					HX_STACK_LINE(338)
					::CollectionGlobal tmp15 = this->collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(338)
					int tmp16 = this->loopCounterCompanyWordInt;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(338)
					::CollectionGlobal tmp17 = this->collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(338)
					int tmp18 = tmp17->GetTagGeneralObjectArray()->length;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(338)
					int tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(338)
					::ObjectTag tmp20 = tmp15->GetTagObjectArray()->__get(tmp19).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(338)
					bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(338)
					if ((tmp21)){
						HX_STACK_LINE(338)
						this->updateAfterBool = true;
					}
				}
			}
		}
		HX_STACK_LINE(360)
		::haxe::ui::toolkit::controls::popups::Popup tmp4 = this->uiPopupLoadingWordObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(360)
		::haxe::ui::toolkit::controls::popups::PopupContent tmp5 = tmp4->get_content();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(359)
		::haxe::ui::toolkit::controls::popups::SimplePopupContent tmp6 = ::Std_obj::instance(tmp5,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::SimplePopupContent >());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(363)
		::String tmp7 = (HX_HCSTRING("Cooking words!!! ","\x02","\xc9","\x92","\x02") + tagString);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(363)
		::String tmp8 = (tmp7 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(366)
		int tmp9 = this->loopCounterCompanyWordInt;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(363)
		::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(363)
		::String tmp11 = (tmp10 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(368)
		int tmp12 = this->tagAmountInt;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(363)
		::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(359)
		tmp6->SetTextControlStringVoid(tmp13);
		HX_STACK_LINE(373)
		(this->loopCounterCompanyWordInt)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,UpdateBeforeCompanyWordVoid,(void))

Void Main_obj::UpdateSlowVoid( ){
{
		HX_STACK_FRAME("Main","UpdateSlowVoid",0xca6605b3,"Main.UpdateSlowVoid","Main.hx",393,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(396)
		::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(396)
		int tmp1 = tmp->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(396)
		::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(396)
		int tmp3 = tmp2->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(396)
		Float tmp4 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(396)
		Float leastCommonMultipleFloat = tmp4;		HX_STACK_VAR(leastCommonMultipleFloat,"leastCommonMultipleFloat");
		HX_STACK_LINE(397)
		Float tmp5 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(397)
		::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(397)
		int tmp7 = tmp6->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(397)
		Float tmp8 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(397)
		leastCommonMultipleFloat = tmp8;
		HX_STACK_LINE(398)
		Float tmp9 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(398)
		::CollectionGlobal tmp10 = this->collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(398)
		int tmp11 = tmp10->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(398)
		Float tmp12 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(398)
		leastCommonMultipleFloat = tmp12;
		HX_STACK_LINE(399)
		Float tmp13 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(399)
		int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(399)
		int leastCommonMultipleInt = tmp14;		HX_STACK_VAR(leastCommonMultipleInt,"leastCommonMultipleInt");
		HX_STACK_LINE(400)
		int tmp15 = this->loopCounterMainInt;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(400)
		int tmp16 = leastCommonMultipleInt;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(400)
		bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(400)
		if ((tmp17)){
			HX_STACK_LINE(400)
			this->loopCounterMainInt = (int)0;
		}
		HX_STACK_LINE(401)
		::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(401)
		int tmp19 = this->loopCounterMainInt;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(401)
		::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(401)
		int tmp21 = tmp20->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(401)
		int tmp22 = hx::Mod(tmp19,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(401)
		::ObjectMuseum tmp23 = tmp18->GetExhibitionObjectArray()->__get(tmp22).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(401)
		tmp23->UpdateVoid();
		HX_STACK_LINE(402)
		::CollectionGlobal tmp24 = this->collectionGlobalObject;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(402)
		int tmp25 = this->loopCounterMainInt;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(402)
		::CollectionGlobal tmp26 = this->collectionGlobalObject;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(402)
		int tmp27 = tmp26->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(402)
		int tmp28 = hx::Mod(tmp25,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(402)
		::ObjectMuseum tmp29 = tmp24->GetFloorObjectArray()->__get(tmp28).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(402)
		tmp29->UpdateVoid();
		HX_STACK_LINE(403)
		::CollectionGlobal tmp30 = this->collectionGlobalObject;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(403)
		int tmp31 = this->loopCounterMainInt;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(403)
		::CollectionGlobal tmp32 = this->collectionGlobalObject;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(403)
		int tmp33 = tmp32->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(403)
		int tmp34 = hx::Mod(tmp31,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(403)
		::ObjectMuseum tmp35 = tmp30->GetRoomObjectArray()->__get(tmp34).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(403)
		tmp35->UpdateVoid();
		HX_STACK_LINE(404)
		::CollectionGlobal tmp36 = this->collectionGlobalObject;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(404)
		int tmp37 = this->loopCounterMainInt;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(404)
		::CollectionGlobal tmp38 = this->collectionGlobalObject;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(404)
		int tmp39 = tmp38->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(404)
		int tmp40 = hx::Mod(tmp37,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(404)
		::ObjectVisitor tmp41 = tmp36->GetVisitorObjectArray()->__get(tmp40).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(404)
		tmp41->UpdateVoid();
		HX_STACK_LINE(405)
		(this->loopCounterMainInt)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,UpdateSlowVoid,(void))

Void Main_obj::UpdateNormalVoid( ){
{
		HX_STACK_FRAME("Main","UpdateNormalVoid",0x168c9059,"Main.UpdateNormalVoid","Main.hx",408,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(411)
		::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(411)
		int tmp1 = tmp->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(411)
		::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(411)
		int tmp3 = tmp2->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(411)
		Float tmp4 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(411)
		Float leastCommonMultipleFloat = tmp4;		HX_STACK_VAR(leastCommonMultipleFloat,"leastCommonMultipleFloat");
		HX_STACK_LINE(412)
		Float tmp5 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(412)
		::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(412)
		int tmp7 = tmp6->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(412)
		Float tmp8 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(412)
		leastCommonMultipleFloat = tmp8;
		HX_STACK_LINE(413)
		Float tmp9 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(413)
		int tmp10 = ::Math_obj::round(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(413)
		int leastCommonMultipleInt = tmp10;		HX_STACK_VAR(leastCommonMultipleInt,"leastCommonMultipleInt");
		HX_STACK_LINE(414)
		int tmp11 = this->loopCounterMainInt;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(414)
		int tmp12 = leastCommonMultipleInt;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(414)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(414)
		if ((tmp13)){
			HX_STACK_LINE(414)
			this->loopCounterMainInt = (int)0;
		}
		HX_STACK_LINE(415)
		::CollectionGlobal tmp14 = this->collectionGlobalObject;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(415)
		int tmp15 = this->loopCounterMainInt;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(415)
		::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(415)
		int tmp17 = tmp16->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(415)
		int tmp18 = hx::Mod(tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(415)
		::ObjectMuseum tmp19 = tmp14->GetExhibitionObjectArray()->__get(tmp18).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(415)
		tmp19->UpdateVoid();
		HX_STACK_LINE(416)
		::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(416)
		int tmp21 = this->loopCounterMainInt;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(416)
		::CollectionGlobal tmp22 = this->collectionGlobalObject;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(416)
		int tmp23 = tmp22->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(416)
		int tmp24 = hx::Mod(tmp21,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(416)
		::ObjectMuseum tmp25 = tmp20->GetFloorObjectArray()->__get(tmp24).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(416)
		tmp25->UpdateVoid();
		HX_STACK_LINE(417)
		::CollectionGlobal tmp26 = this->collectionGlobalObject;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(417)
		int tmp27 = this->loopCounterMainInt;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(417)
		::CollectionGlobal tmp28 = this->collectionGlobalObject;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(417)
		int tmp29 = tmp28->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(417)
		int tmp30 = hx::Mod(tmp27,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(417)
		::ObjectMuseum tmp31 = tmp26->GetRoomObjectArray()->__get(tmp30).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(417)
		tmp31->UpdateVoid();
		HX_STACK_LINE(418)
		(this->loopCounterMainInt)++;
		HX_STACK_LINE(419)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(420)
		while((true)){
			HX_STACK_LINE(420)
			int tmp32 = loopCounter1Int;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(420)
			::CollectionGlobal tmp33 = this->collectionGlobalObject;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(420)
			int tmp34 = tmp33->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(420)
			bool tmp35 = (tmp32 < tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(420)
			bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(420)
			if ((tmp36)){
				HX_STACK_LINE(420)
				break;
			}
			HX_STACK_LINE(421)
			::CollectionGlobal tmp37 = this->collectionGlobalObject;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(421)
			::ObjectVisitor tmp38 = tmp37->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(421)
			tmp38->UpdateVoid();
			HX_STACK_LINE(422)
			(loopCounter1Int)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,UpdateNormalVoid,(void))

Void Main_obj::UpdateFastVoid( ){
{
		HX_STACK_FRAME("Main","UpdateFastVoid",0xf8a3d3ce,"Main.UpdateFastVoid","Main.hx",426,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(428)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(429)
		while((true)){
			HX_STACK_LINE(429)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(429)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(429)
			int tmp2 = tmp1->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(429)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(429)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(429)
			if ((tmp4)){
				HX_STACK_LINE(429)
				break;
			}
			HX_STACK_LINE(429)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(429)
			::ObjectMuseum tmp6 = tmp5->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(429)
			tmp6->UpdateVoid();
			HX_STACK_LINE(429)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(430)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(431)
		while((true)){
			HX_STACK_LINE(431)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(431)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(431)
			int tmp2 = tmp1->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(431)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(431)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(431)
			if ((tmp4)){
				HX_STACK_LINE(431)
				break;
			}
			HX_STACK_LINE(431)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(431)
			::ObjectMuseum tmp6 = tmp5->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(431)
			tmp6->UpdateVoid();
			HX_STACK_LINE(431)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(432)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(433)
		while((true)){
			HX_STACK_LINE(433)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(433)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(433)
			int tmp2 = tmp1->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(433)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(433)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(433)
			if ((tmp4)){
				HX_STACK_LINE(433)
				break;
			}
			HX_STACK_LINE(433)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(433)
			::ObjectMuseum tmp6 = tmp5->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(433)
			tmp6->UpdateVoid();
			HX_STACK_LINE(433)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(434)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(435)
		while((true)){
			HX_STACK_LINE(435)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(435)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(435)
			int tmp2 = tmp1->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(435)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(435)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(435)
			if ((tmp4)){
				HX_STACK_LINE(435)
				break;
			}
			HX_STACK_LINE(435)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(435)
			::ObjectVisitor tmp6 = tmp5->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(435)
			tmp6->UpdateVoid();
			HX_STACK_LINE(435)
			(loopCounter1Int)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,UpdateFastVoid,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(loopCounterMainInt,"loopCounterMainInt");
	HX_MARK_MEMBER_NAME(loopCounterCompanyWordInt,"loopCounterCompanyWordInt");
	HX_MARK_MEMBER_NAME(sendInstructionToArduinoStringArray,"sendInstructionToArduinoStringArray");
	HX_MARK_MEMBER_NAME(serialCounterInt,"serialCounterInt");
	HX_MARK_MEMBER_NAME(serialEstablishedBool,"serialEstablishedBool");
	HX_MARK_MEMBER_NAME(serialIndexInt,"serialIndexInt");
	HX_MARK_MEMBER_NAME(serialLength,"serialLength");
	HX_MARK_MEMBER_NAME(soundProgressBool,"soundProgressBool");
	HX_MARK_MEMBER_NAME(tagAmountInt,"tagAmountInt");
	HX_MARK_MEMBER_NAME(uiPopupAddMuseumObject,"uiPopupAddMuseumObject");
	HX_MARK_MEMBER_NAME(uiPopupAddTagObject,"uiPopupAddTagObject");
	HX_MARK_MEMBER_NAME(uiPopupAddVisitorObject,"uiPopupAddVisitorObject");
	HX_MARK_MEMBER_NAME(uiPopupEditMuseumObject,"uiPopupEditMuseumObject");
	HX_MARK_MEMBER_NAME(uiPopupEditTagObject,"uiPopupEditTagObject");
	HX_MARK_MEMBER_NAME(uiPopupEditVisitorObject,"uiPopupEditVisitorObject");
	HX_MARK_MEMBER_NAME(uiPopupLoadingWordObject,"uiPopupLoadingWordObject");
	HX_MARK_MEMBER_NAME(uiPopupRemoveMuseumObject,"uiPopupRemoveMuseumObject");
	HX_MARK_MEMBER_NAME(uiPopupRemoveTagObject,"uiPopupRemoveTagObject");
	HX_MARK_MEMBER_NAME(uiPopupRemoveVisitorObject,"uiPopupRemoveVisitorObject");
	HX_MARK_MEMBER_NAME(updateAfterBool,"updateAfterBool");
	HX_MARK_MEMBER_NAME(serialObject,"serialObject");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(loopCounterMainInt,"loopCounterMainInt");
	HX_VISIT_MEMBER_NAME(loopCounterCompanyWordInt,"loopCounterCompanyWordInt");
	HX_VISIT_MEMBER_NAME(sendInstructionToArduinoStringArray,"sendInstructionToArduinoStringArray");
	HX_VISIT_MEMBER_NAME(serialCounterInt,"serialCounterInt");
	HX_VISIT_MEMBER_NAME(serialEstablishedBool,"serialEstablishedBool");
	HX_VISIT_MEMBER_NAME(serialIndexInt,"serialIndexInt");
	HX_VISIT_MEMBER_NAME(serialLength,"serialLength");
	HX_VISIT_MEMBER_NAME(soundProgressBool,"soundProgressBool");
	HX_VISIT_MEMBER_NAME(tagAmountInt,"tagAmountInt");
	HX_VISIT_MEMBER_NAME(uiPopupAddMuseumObject,"uiPopupAddMuseumObject");
	HX_VISIT_MEMBER_NAME(uiPopupAddTagObject,"uiPopupAddTagObject");
	HX_VISIT_MEMBER_NAME(uiPopupAddVisitorObject,"uiPopupAddVisitorObject");
	HX_VISIT_MEMBER_NAME(uiPopupEditMuseumObject,"uiPopupEditMuseumObject");
	HX_VISIT_MEMBER_NAME(uiPopupEditTagObject,"uiPopupEditTagObject");
	HX_VISIT_MEMBER_NAME(uiPopupEditVisitorObject,"uiPopupEditVisitorObject");
	HX_VISIT_MEMBER_NAME(uiPopupLoadingWordObject,"uiPopupLoadingWordObject");
	HX_VISIT_MEMBER_NAME(uiPopupRemoveMuseumObject,"uiPopupRemoveMuseumObject");
	HX_VISIT_MEMBER_NAME(uiPopupRemoveTagObject,"uiPopupRemoveTagObject");
	HX_VISIT_MEMBER_NAME(uiPopupRemoveVisitorObject,"uiPopupRemoveVisitorObject");
	HX_VISIT_MEMBER_NAME(updateAfterBool,"updateAfterBool");
	HX_VISIT_MEMBER_NAME(serialObject,"serialObject");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"UpdateVoid") ) { return UpdateVoid_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"serialLength") ) { return serialLength; }
		if (HX_FIELD_EQ(inName,"tagAmountInt") ) { return tagAmountInt; }
		if (HX_FIELD_EQ(inName,"serialObject") ) { return serialObject; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"serialIndexInt") ) { return serialIndexInt; }
		if (HX_FIELD_EQ(inName,"UpdateSlowVoid") ) { return UpdateSlowVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateFastVoid") ) { return UpdateFastVoid_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateAfterBool") ) { return updateAfterBool; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"serialCounterInt") ) { return serialCounterInt; }
		if (HX_FIELD_EQ(inName,"UpdateNormalVoid") ) { return UpdateNormalVoid_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"soundProgressBool") ) { return soundProgressBool; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loopCounterMainInt") ) { return loopCounterMainInt; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uiPopupAddTagObject") ) { return uiPopupAddTagObject; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uiPopupEditTagObject") ) { return uiPopupEditTagObject; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"serialEstablishedBool") ) { return serialEstablishedBool; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		if (HX_FIELD_EQ(inName,"uiPopupAddMuseumObject") ) { return uiPopupAddMuseumObject; }
		if (HX_FIELD_EQ(inName,"uiPopupRemoveTagObject") ) { return uiPopupRemoveTagObject; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"uiPopupAddVisitorObject") ) { return uiPopupAddVisitorObject; }
		if (HX_FIELD_EQ(inName,"uiPopupEditMuseumObject") ) { return uiPopupEditMuseumObject; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"uiPopupEditVisitorObject") ) { return uiPopupEditVisitorObject; }
		if (HX_FIELD_EQ(inName,"uiPopupLoadingWordObject") ) { return uiPopupLoadingWordObject; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"loopCounterCompanyWordInt") ) { return loopCounterCompanyWordInt; }
		if (HX_FIELD_EQ(inName,"uiPopupRemoveMuseumObject") ) { return uiPopupRemoveMuseumObject; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"uiPopupRemoveVisitorObject") ) { return uiPopupRemoveVisitorObject; }
		if (HX_FIELD_EQ(inName,"UpdateAfterCompanyWordVoid") ) { return UpdateAfterCompanyWordVoid_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"UpdateBeforeCompanyWordVoid") ) { return UpdateBeforeCompanyWordVoid_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"SearchForSerialConnectionVoid") ) { return SearchForSerialConnectionVoid_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"sendInstructionToArduinoStringArray") ) { return sendInstructionToArduinoStringArray; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"serialLength") ) { serialLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tagAmountInt") ) { tagAmountInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"serialObject") ) { serialObject=inValue.Cast< ::hxSerial::Serial >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"serialIndexInt") ) { serialIndexInt=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateAfterBool") ) { updateAfterBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"serialCounterInt") ) { serialCounterInt=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"soundProgressBool") ) { soundProgressBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loopCounterMainInt") ) { loopCounterMainInt=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uiPopupAddTagObject") ) { uiPopupAddTagObject=inValue.Cast< ::UIPopupAddObjectTag >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uiPopupEditTagObject") ) { uiPopupEditTagObject=inValue.Cast< ::UIPopupEditObjectTag >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"serialEstablishedBool") ) { serialEstablishedBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uiPopupAddMuseumObject") ) { uiPopupAddMuseumObject=inValue.Cast< ::UIPopupAddObjectMuseum >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uiPopupRemoveTagObject") ) { uiPopupRemoveTagObject=inValue.Cast< ::UIPopupRemoveObjectTag >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"uiPopupAddVisitorObject") ) { uiPopupAddVisitorObject=inValue.Cast< ::UIPopupAddObjectVisitor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uiPopupEditMuseumObject") ) { uiPopupEditMuseumObject=inValue.Cast< ::UIPopupEditObjectMuseum >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"uiPopupEditVisitorObject") ) { uiPopupEditVisitorObject=inValue.Cast< ::UIPopupEditObjectVisitor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uiPopupLoadingWordObject") ) { uiPopupLoadingWordObject=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"loopCounterCompanyWordInt") ) { loopCounterCompanyWordInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uiPopupRemoveMuseumObject") ) { uiPopupRemoveMuseumObject=inValue.Cast< ::UIPopupRemoveObjectMuseum >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"uiPopupRemoveVisitorObject") ) { uiPopupRemoveVisitorObject=inValue.Cast< ::UIPopupRemoveObjectVisitor >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"sendInstructionToArduinoStringArray") ) { sendInstructionToArduinoStringArray=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("loopCounterMainInt","\x1e","\x68","\xc1","\x8f"));
	outFields->push(HX_HCSTRING("loopCounterCompanyWordInt","\xa0","\x3c","\x80","\x59"));
	outFields->push(HX_HCSTRING("sendInstructionToArduinoStringArray","\xa1","\x15","\xbe","\x44"));
	outFields->push(HX_HCSTRING("serialCounterInt","\x67","\x82","\x4a","\x77"));
	outFields->push(HX_HCSTRING("serialEstablishedBool","\xce","\x2b","\xaf","\xf9"));
	outFields->push(HX_HCSTRING("serialIndexInt","\x11","\x1b","\xa4","\x95"));
	outFields->push(HX_HCSTRING("serialLength","\xfa","\x61","\xb3","\x91"));
	outFields->push(HX_HCSTRING("soundProgressBool","\xe6","\xd5","\xdf","\x9a"));
	outFields->push(HX_HCSTRING("tagAmountInt","\x3d","\xd4","\x48","\x59"));
	outFields->push(HX_HCSTRING("uiPopupAddMuseumObject","\x9a","\xd2","\xa9","\x59"));
	outFields->push(HX_HCSTRING("uiPopupAddTagObject","\xb0","\x91","\x6c","\xdd"));
	outFields->push(HX_HCSTRING("uiPopupAddVisitorObject","\x84","\x59","\x19","\x99"));
	outFields->push(HX_HCSTRING("uiPopupEditMuseumObject","\xb3","\x0f","\x9f","\x2e"));
	outFields->push(HX_HCSTRING("uiPopupEditTagObject","\xf7","\x1a","\x21","\x2e"));
	outFields->push(HX_HCSTRING("uiPopupEditVisitorObject","\x4b","\x92","\xb9","\x1a"));
	outFields->push(HX_HCSTRING("uiPopupLoadingWordObject","\x6d","\xab","\xd4","\x98"));
	outFields->push(HX_HCSTRING("uiPopupRemoveMuseumObject","\xed","\xd6","\xe4","\xd0"));
	outFields->push(HX_HCSTRING("uiPopupRemoveTagObject","\x7d","\xeb","\x8f","\xb9"));
	outFields->push(HX_HCSTRING("uiPopupRemoveVisitorObject","\xd1","\x1d","\x82","\x75"));
	outFields->push(HX_HCSTRING("updateAfterBool","\x1d","\x25","\x85","\x10"));
	outFields->push(HX_HCSTRING("serialObject","\xd3","\x4b","\xeb","\x07"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(Main_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsInt,(int)offsetof(Main_obj,loopCounterMainInt),HX_HCSTRING("loopCounterMainInt","\x1e","\x68","\xc1","\x8f")},
	{hx::fsInt,(int)offsetof(Main_obj,loopCounterCompanyWordInt),HX_HCSTRING("loopCounterCompanyWordInt","\xa0","\x3c","\x80","\x59")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Main_obj,sendInstructionToArduinoStringArray),HX_HCSTRING("sendInstructionToArduinoStringArray","\xa1","\x15","\xbe","\x44")},
	{hx::fsInt,(int)offsetof(Main_obj,serialCounterInt),HX_HCSTRING("serialCounterInt","\x67","\x82","\x4a","\x77")},
	{hx::fsBool,(int)offsetof(Main_obj,serialEstablishedBool),HX_HCSTRING("serialEstablishedBool","\xce","\x2b","\xaf","\xf9")},
	{hx::fsInt,(int)offsetof(Main_obj,serialIndexInt),HX_HCSTRING("serialIndexInt","\x11","\x1b","\xa4","\x95")},
	{hx::fsInt,(int)offsetof(Main_obj,serialLength),HX_HCSTRING("serialLength","\xfa","\x61","\xb3","\x91")},
	{hx::fsBool,(int)offsetof(Main_obj,soundProgressBool),HX_HCSTRING("soundProgressBool","\xe6","\xd5","\xdf","\x9a")},
	{hx::fsInt,(int)offsetof(Main_obj,tagAmountInt),HX_HCSTRING("tagAmountInt","\x3d","\xd4","\x48","\x59")},
	{hx::fsObject /*::UIPopupAddObjectMuseum*/ ,(int)offsetof(Main_obj,uiPopupAddMuseumObject),HX_HCSTRING("uiPopupAddMuseumObject","\x9a","\xd2","\xa9","\x59")},
	{hx::fsObject /*::UIPopupAddObjectTag*/ ,(int)offsetof(Main_obj,uiPopupAddTagObject),HX_HCSTRING("uiPopupAddTagObject","\xb0","\x91","\x6c","\xdd")},
	{hx::fsObject /*::UIPopupAddObjectVisitor*/ ,(int)offsetof(Main_obj,uiPopupAddVisitorObject),HX_HCSTRING("uiPopupAddVisitorObject","\x84","\x59","\x19","\x99")},
	{hx::fsObject /*::UIPopupEditObjectMuseum*/ ,(int)offsetof(Main_obj,uiPopupEditMuseumObject),HX_HCSTRING("uiPopupEditMuseumObject","\xb3","\x0f","\x9f","\x2e")},
	{hx::fsObject /*::UIPopupEditObjectTag*/ ,(int)offsetof(Main_obj,uiPopupEditTagObject),HX_HCSTRING("uiPopupEditTagObject","\xf7","\x1a","\x21","\x2e")},
	{hx::fsObject /*::UIPopupEditObjectVisitor*/ ,(int)offsetof(Main_obj,uiPopupEditVisitorObject),HX_HCSTRING("uiPopupEditVisitorObject","\x4b","\x92","\xb9","\x1a")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(Main_obj,uiPopupLoadingWordObject),HX_HCSTRING("uiPopupLoadingWordObject","\x6d","\xab","\xd4","\x98")},
	{hx::fsObject /*::UIPopupRemoveObjectMuseum*/ ,(int)offsetof(Main_obj,uiPopupRemoveMuseumObject),HX_HCSTRING("uiPopupRemoveMuseumObject","\xed","\xd6","\xe4","\xd0")},
	{hx::fsObject /*::UIPopupRemoveObjectTag*/ ,(int)offsetof(Main_obj,uiPopupRemoveTagObject),HX_HCSTRING("uiPopupRemoveTagObject","\x7d","\xeb","\x8f","\xb9")},
	{hx::fsObject /*::UIPopupRemoveObjectVisitor*/ ,(int)offsetof(Main_obj,uiPopupRemoveVisitorObject),HX_HCSTRING("uiPopupRemoveVisitorObject","\xd1","\x1d","\x82","\x75")},
	{hx::fsBool,(int)offsetof(Main_obj,updateAfterBool),HX_HCSTRING("updateAfterBool","\x1d","\x25","\x85","\x10")},
	{hx::fsObject /*::hxSerial::Serial*/ ,(int)offsetof(Main_obj,serialObject),HX_HCSTRING("serialObject","\xd3","\x4b","\xeb","\x07")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("loopCounterMainInt","\x1e","\x68","\xc1","\x8f"),
	HX_HCSTRING("loopCounterCompanyWordInt","\xa0","\x3c","\x80","\x59"),
	HX_HCSTRING("sendInstructionToArduinoStringArray","\xa1","\x15","\xbe","\x44"),
	HX_HCSTRING("serialCounterInt","\x67","\x82","\x4a","\x77"),
	HX_HCSTRING("serialEstablishedBool","\xce","\x2b","\xaf","\xf9"),
	HX_HCSTRING("serialIndexInt","\x11","\x1b","\xa4","\x95"),
	HX_HCSTRING("serialLength","\xfa","\x61","\xb3","\x91"),
	HX_HCSTRING("soundProgressBool","\xe6","\xd5","\xdf","\x9a"),
	HX_HCSTRING("tagAmountInt","\x3d","\xd4","\x48","\x59"),
	HX_HCSTRING("uiPopupAddMuseumObject","\x9a","\xd2","\xa9","\x59"),
	HX_HCSTRING("uiPopupAddTagObject","\xb0","\x91","\x6c","\xdd"),
	HX_HCSTRING("uiPopupAddVisitorObject","\x84","\x59","\x19","\x99"),
	HX_HCSTRING("uiPopupEditMuseumObject","\xb3","\x0f","\x9f","\x2e"),
	HX_HCSTRING("uiPopupEditTagObject","\xf7","\x1a","\x21","\x2e"),
	HX_HCSTRING("uiPopupEditVisitorObject","\x4b","\x92","\xb9","\x1a"),
	HX_HCSTRING("uiPopupLoadingWordObject","\x6d","\xab","\xd4","\x98"),
	HX_HCSTRING("uiPopupRemoveMuseumObject","\xed","\xd6","\xe4","\xd0"),
	HX_HCSTRING("uiPopupRemoveTagObject","\x7d","\xeb","\x8f","\xb9"),
	HX_HCSTRING("uiPopupRemoveVisitorObject","\xd1","\x1d","\x82","\x75"),
	HX_HCSTRING("updateAfterBool","\x1d","\x25","\x85","\x10"),
	HX_HCSTRING("serialObject","\xd3","\x4b","\xeb","\x07"),
	HX_HCSTRING("SearchForSerialConnectionVoid","\xa7","\x8a","\x33","\x40"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	HX_HCSTRING("UpdateAfterCompanyWordVoid","\xa8","\x26","\x50","\x6a"),
	HX_HCSTRING("UpdateBeforeCompanyWordVoid","\xf3","\xed","\xee","\x33"),
	HX_HCSTRING("UpdateSlowVoid","\x3e","\xe9","\xaf","\x3b"),
	HX_HCSTRING("UpdateNormalVoid","\xa4","\xac","\xbe","\xd8"),
	HX_HCSTRING("UpdateFastVoid","\x59","\xb7","\xed","\x69"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

hx::Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

