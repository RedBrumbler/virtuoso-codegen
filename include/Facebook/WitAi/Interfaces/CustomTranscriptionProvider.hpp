// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Facebook.WitAi.Interfaces.ITranscriptionProvider
#include "Facebook/WitAi/Interfaces/ITranscriptionProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::Events
namespace Facebook::WitAi::Events {
  // Forward declaring type: WitTranscriptionEvent
  class WitTranscriptionEvent;
  // Forward declaring type: WitMicLevelChangedEvent
  class WitMicLevelChangedEvent;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Completed forward declares
// Type namespace: Facebook.WitAi.Interfaces
namespace Facebook::WitAi::Interfaces {
  // Forward declaring type: CustomTranscriptionProvider
  class CustomTranscriptionProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Interfaces::CustomTranscriptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Interfaces::CustomTranscriptionProvider*, "Facebook.WitAi.Interfaces", "CustomTranscriptionProvider");
// Type namespace: Facebook.WitAi.Interfaces
namespace Facebook::WitAi::Interfaces {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Interfaces.CustomTranscriptionProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomTranscriptionProvider : public ::UnityEngine::MonoBehaviour/*, public ::Facebook::WitAi::Interfaces::ITranscriptionProvider*/ {
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
    // private System.Boolean overrideMicLevel
    // Size: 0x1
    // Offset: 0x18
    bool overrideMicLevel;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideMicLevel and: onPartialTranscription
    char __padding0[0x7] = {};
    // private Facebook.WitAi.Events.WitTranscriptionEvent onPartialTranscription
    // Size: 0x8
    // Offset: 0x20
    ::Facebook::WitAi::Events::WitTranscriptionEvent* onPartialTranscription;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Events::WitTranscriptionEvent*) == 0x8);
    // private Facebook.WitAi.Events.WitTranscriptionEvent onFullTranscription
    // Size: 0x8
    // Offset: 0x28
    ::Facebook::WitAi::Events::WitTranscriptionEvent* onFullTranscription;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Events::WitTranscriptionEvent*) == 0x8);
    // private UnityEngine.Events.UnityEvent onStoppedListening
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Events::UnityEvent* onStoppedListening;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private UnityEngine.Events.UnityEvent onStartListening
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Events::UnityEvent* onStartListening;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private Facebook.WitAi.Events.WitMicLevelChangedEvent onMicLevelChanged
    // Size: 0x8
    // Offset: 0x40
    ::Facebook::WitAi::Events::WitMicLevelChangedEvent* onMicLevelChanged;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Events::WitMicLevelChangedEvent*) == 0x8);
    // private readonly System.String <LastTranscription>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::StringW LastTranscription;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Facebook::WitAi::Interfaces::ITranscriptionProvider
    operator ::Facebook::WitAi::Interfaces::ITranscriptionProvider() noexcept {
      return *reinterpret_cast<::Facebook::WitAi::Interfaces::ITranscriptionProvider*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean overrideMicLevel
    bool& dyn_overrideMicLevel();
    // Get instance field reference: private Facebook.WitAi.Events.WitTranscriptionEvent onPartialTranscription
    ::Facebook::WitAi::Events::WitTranscriptionEvent*& dyn_onPartialTranscription();
    // Get instance field reference: private Facebook.WitAi.Events.WitTranscriptionEvent onFullTranscription
    ::Facebook::WitAi::Events::WitTranscriptionEvent*& dyn_onFullTranscription();
    // Get instance field reference: private UnityEngine.Events.UnityEvent onStoppedListening
    ::UnityEngine::Events::UnityEvent*& dyn_onStoppedListening();
    // Get instance field reference: private UnityEngine.Events.UnityEvent onStartListening
    ::UnityEngine::Events::UnityEvent*& dyn_onStartListening();
    // Get instance field reference: private Facebook.WitAi.Events.WitMicLevelChangedEvent onMicLevelChanged
    ::Facebook::WitAi::Events::WitMicLevelChangedEvent*& dyn_onMicLevelChanged();
    // Get instance field reference: private readonly System.String <LastTranscription>k__BackingField
    ::StringW& dyn_$LastTranscription$k__BackingField();
    // public System.String get_LastTranscription()
    // Offset: 0x10F80FC
    ::StringW get_LastTranscription();
    // public Facebook.WitAi.Events.WitTranscriptionEvent get_OnPartialTranscription()
    // Offset: 0x10F8104
    ::Facebook::WitAi::Events::WitTranscriptionEvent* get_OnPartialTranscription();
    // public Facebook.WitAi.Events.WitTranscriptionEvent get_OnFullTranscription()
    // Offset: 0x10F810C
    ::Facebook::WitAi::Events::WitTranscriptionEvent* get_OnFullTranscription();
    // public UnityEngine.Events.UnityEvent get_OnStoppedListening()
    // Offset: 0x10F8114
    ::UnityEngine::Events::UnityEvent* get_OnStoppedListening();
    // public UnityEngine.Events.UnityEvent get_OnStartListening()
    // Offset: 0x10F811C
    ::UnityEngine::Events::UnityEvent* get_OnStartListening();
    // public Facebook.WitAi.Events.WitMicLevelChangedEvent get_OnMicLevelChanged()
    // Offset: 0x10F8124
    ::Facebook::WitAi::Events::WitMicLevelChangedEvent* get_OnMicLevelChanged();
    // public System.Boolean get_OverrideMicLevel()
    // Offset: 0x10F812C
    bool get_OverrideMicLevel();
    // public System.Void Activate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Activate();
    // public System.Void Deactivate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Deactivate();
    // protected System.Void .ctor()
    // Offset: 0x10F8134
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomTranscriptionProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Interfaces::CustomTranscriptionProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomTranscriptionProvider*, creationType>()));
    }
  }; // Facebook.WitAi.Interfaces.CustomTranscriptionProvider
  #pragma pack(pop)
  static check_size<sizeof(CustomTranscriptionProvider), 72 + sizeof(::StringW)> __Facebook_WitAi_Interfaces_CustomTranscriptionProviderSizeCheck;
  static_assert(sizeof(CustomTranscriptionProvider) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Interfaces::CustomTranscriptionProvider::get_LastTranscription
// Il2CppName: get_LastTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Facebook::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&Facebook::WitAi::Interfaces::CustomTranscriptionProvider::get_LastTranscription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Interfaces::CustomTranscriptionProvider*), "get_LastTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Interfaces::CustomTranscriptionProvider::get_OnPartialTranscription
// Il2CppName: get_OnPartialTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Events::WitTranscriptionEvent* (Facebook::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&Facebook::WitAi::Interfaces::CustomTranscriptionProvider::get_OnPartialTranscription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Interfaces::CustomTranscriptionProvider*), "get_OnPartialTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Interfaces::CustomTranscriptionProvider::get_OnFullTranscription
// Il2CppName: get_OnFullTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Events::WitTranscriptionEvent* (Facebook::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&Facebook::WitAi::Interfaces::CustomTranscriptionProvider::get_OnFullTranscription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Interfaces::CustomTranscriptionProvider*), "get_OnFullTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Interfaces::CustomTranscriptionProvider::get_OnStoppedListening
// Il2CppName: get_OnStoppedListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (Facebook::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&Facebook::WitAi::Interfaces::CustomTranscriptionProvider::get_OnStoppedListening)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Interfaces::CustomTranscriptionProvider*), "get_OnStoppedListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Interfaces::CustomTranscriptionProvider::get_OnStartListening
// Il2CppName: get_OnStartListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent* (Facebook::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&Facebook::WitAi::Interfaces::CustomTranscriptionProvider::get_OnStartListening)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Interfaces::CustomTranscriptionProvider*), "get_OnStartListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Interfaces::CustomTranscriptionProvider::get_OnMicLevelChanged
// Il2CppName: get_OnMicLevelChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Events::WitMicLevelChangedEvent* (Facebook::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&Facebook::WitAi::Interfaces::CustomTranscriptionProvider::get_OnMicLevelChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Interfaces::CustomTranscriptionProvider*), "get_OnMicLevelChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Interfaces::CustomTranscriptionProvider::get_OverrideMicLevel
// Il2CppName: get_OverrideMicLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&Facebook::WitAi::Interfaces::CustomTranscriptionProvider::get_OverrideMicLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Interfaces::CustomTranscriptionProvider*), "get_OverrideMicLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Interfaces::CustomTranscriptionProvider::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&Facebook::WitAi::Interfaces::CustomTranscriptionProvider::Activate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Interfaces::CustomTranscriptionProvider*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Interfaces::CustomTranscriptionProvider::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&Facebook::WitAi::Interfaces::CustomTranscriptionProvider::Deactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Interfaces::CustomTranscriptionProvider*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Interfaces::CustomTranscriptionProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!