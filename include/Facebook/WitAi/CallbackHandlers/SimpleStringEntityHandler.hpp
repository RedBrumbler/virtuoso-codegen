// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Facebook.WitAi.CallbackHandlers.WitResponseHandler
#include "Facebook/WitAi/CallbackHandlers/WitResponseHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::CallbackHandlers
namespace Facebook::WitAi::CallbackHandlers {
  // Forward declaring type: StringEntityMatchEvent
  class StringEntityMatchEvent;
}
// Forward declaring namespace: Facebook::WitAi::Lib
namespace Facebook::WitAi::Lib {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Completed forward declares
// Type namespace: Facebook.WitAi.CallbackHandlers
namespace Facebook::WitAi::CallbackHandlers {
  // Forward declaring type: SimpleStringEntityHandler
  class SimpleStringEntityHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::CallbackHandlers::SimpleStringEntityHandler);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::CallbackHandlers::SimpleStringEntityHandler*, "Facebook.WitAi.CallbackHandlers", "SimpleStringEntityHandler");
// Type namespace: Facebook.WitAi.CallbackHandlers
namespace Facebook::WitAi::CallbackHandlers {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.CallbackHandlers.SimpleStringEntityHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleStringEntityHandler : public ::Facebook::WitAi::CallbackHandlers::WitResponseHandler {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.String intent
    // Size: 0x8
    // Offset: 0x20
    ::StringW intent;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String entity
    // Size: 0x8
    // Offset: 0x28
    ::StringW entity;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [RangeAttribute] Offset: 0x5B1EE8
    // public System.Single confidence
    // Size: 0x4
    // Offset: 0x30
    float confidence;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: confidence and: format
    char __padding2[0x4] = {};
    // public System.String format
    // Size: 0x8
    // Offset: 0x38
    ::StringW format;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Facebook.WitAi.CallbackHandlers.StringEntityMatchEvent onIntentEntityTriggered
    // Size: 0x8
    // Offset: 0x40
    ::Facebook::WitAi::CallbackHandlers::StringEntityMatchEvent* onIntentEntityTriggered;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::CallbackHandlers::StringEntityMatchEvent*) == 0x8);
    public:
    // Get instance field reference: public System.String intent
    ::StringW& dyn_intent();
    // Get instance field reference: public System.String entity
    ::StringW& dyn_entity();
    // Get instance field reference: public System.Single confidence
    float& dyn_confidence();
    // Get instance field reference: public System.String format
    ::StringW& dyn_format();
    // Get instance field reference: private Facebook.WitAi.CallbackHandlers.StringEntityMatchEvent onIntentEntityTriggered
    ::Facebook::WitAi::CallbackHandlers::StringEntityMatchEvent*& dyn_onIntentEntityTriggered();
    // public Facebook.WitAi.CallbackHandlers.StringEntityMatchEvent get_OnIntentEntityTriggered()
    // Offset: 0x10F9858
    ::Facebook::WitAi::CallbackHandlers::StringEntityMatchEvent* get_OnIntentEntityTriggered();
    // public System.Void .ctor()
    // Offset: 0x10F9ABC
    // Implemented from: Facebook.WitAi.CallbackHandlers.WitResponseHandler
    // Base method: System.Void WitResponseHandler::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleStringEntityHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::CallbackHandlers::SimpleStringEntityHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleStringEntityHandler*, creationType>()));
    }
    // protected override System.Void OnHandleResponse(Facebook.WitAi.Lib.WitResponseNode response)
    // Offset: 0x10F9860
    // Implemented from: Facebook.WitAi.CallbackHandlers.WitResponseHandler
    // Base method: System.Void WitResponseHandler::OnHandleResponse(Facebook.WitAi.Lib.WitResponseNode response)
    void OnHandleResponse(::Facebook::WitAi::Lib::WitResponseNode* response);
  }; // Facebook.WitAi.CallbackHandlers.SimpleStringEntityHandler
  #pragma pack(pop)
  static check_size<sizeof(SimpleStringEntityHandler), 64 + sizeof(::Facebook::WitAi::CallbackHandlers::StringEntityMatchEvent*)> __Facebook_WitAi_CallbackHandlers_SimpleStringEntityHandlerSizeCheck;
  static_assert(sizeof(SimpleStringEntityHandler) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::SimpleStringEntityHandler::get_OnIntentEntityTriggered
// Il2CppName: get_OnIntentEntityTriggered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::CallbackHandlers::StringEntityMatchEvent* (Facebook::WitAi::CallbackHandlers::SimpleStringEntityHandler::*)()>(&Facebook::WitAi::CallbackHandlers::SimpleStringEntityHandler::get_OnIntentEntityTriggered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::CallbackHandlers::SimpleStringEntityHandler*), "get_OnIntentEntityTriggered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::SimpleStringEntityHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Facebook::WitAi::CallbackHandlers::SimpleStringEntityHandler::OnHandleResponse
// Il2CppName: OnHandleResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::CallbackHandlers::SimpleStringEntityHandler::*)(::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::CallbackHandlers::SimpleStringEntityHandler::OnHandleResponse)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::CallbackHandlers::SimpleStringEntityHandler*), "OnHandleResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
