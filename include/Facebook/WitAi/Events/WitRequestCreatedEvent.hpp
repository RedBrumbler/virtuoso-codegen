// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi
namespace Facebook::WitAi {
  // Forward declaring type: WitRequest
  class WitRequest;
}
// Completed forward declares
// Type namespace: Facebook.WitAi.Events
namespace Facebook::WitAi::Events {
  // Forward declaring type: WitRequestCreatedEvent
  class WitRequestCreatedEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Events::WitRequestCreatedEvent);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Events::WitRequestCreatedEvent*, "Facebook.WitAi.Events", "WitRequestCreatedEvent");
// Type namespace: Facebook.WitAi.Events
namespace Facebook::WitAi::Events {
  // WARNING Size may be invalid!
  // Autogenerated type: Facebook.WitAi.Events.WitRequestCreatedEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class WitRequestCreatedEvent : public ::UnityEngine::Events::UnityEvent_1<::Facebook::WitAi::WitRequest*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x10FA130
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitRequestCreatedEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Events::WitRequestCreatedEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitRequestCreatedEvent*, creationType>()));
    }
  }; // Facebook.WitAi.Events.WitRequestCreatedEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Events::WitRequestCreatedEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
