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
// Type namespace: Facebook.WitAi.Events
namespace Facebook::WitAi::Events {
  // Forward declaring type: WitMicLevelChangedEvent
  class WitMicLevelChangedEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Events::WitMicLevelChangedEvent);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Events::WitMicLevelChangedEvent*, "Facebook.WitAi.Events", "WitMicLevelChangedEvent");
// Type namespace: Facebook.WitAi.Events
namespace Facebook::WitAi::Events {
  // WARNING Size may be invalid!
  // Autogenerated type: Facebook.WitAi.Events.WitMicLevelChangedEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class WitMicLevelChangedEvent : public ::UnityEngine::Events::UnityEvent_1<float> {
    public:
    // public System.Void .ctor()
    // Offset: 0x10F8268
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitMicLevelChangedEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Events::WitMicLevelChangedEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitMicLevelChangedEvent*, creationType>()));
    }
  }; // Facebook.WitAi.Events.WitMicLevelChangedEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Events::WitMicLevelChangedEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!