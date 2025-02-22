// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.Clickable
#include "VROSC/Clickable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Key
  class Key;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: KeyboardLaserInput
  class KeyboardLaserInput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::KeyboardLaserInput);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KeyboardLaserInput*, "", "KeyboardLaserInput");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: KeyboardLaserInput
  // [TokenAttribute] Offset: FFFFFFFF
  class KeyboardLaserInput : public ::VROSC::Clickable {
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
    // private Key _key
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::Key* key;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Key*) == 0x8);
    // private UnityEngine.Collider _collider
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::Collider* collider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // private System.Single _startRepeatedPressesDelay
    // Size: 0x4
    // Offset: 0x98
    float startRepeatedPressesDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _repeatedPressDelay
    // Size: 0x4
    // Offset: 0x9C
    float repeatedPressDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _repeatedClickStartTime
    // Size: 0x4
    // Offset: 0xA0
    float repeatedClickStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _sentRepeatedClicks
    // Size: 0x4
    // Offset: 0xA4
    int sentRepeatedClicks;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private Key _key
    ::GlobalNamespace::Key*& dyn__key();
    // Get instance field reference: private UnityEngine.Collider _collider
    ::UnityEngine::Collider*& dyn__collider();
    // Get instance field reference: private System.Single _startRepeatedPressesDelay
    float& dyn__startRepeatedPressesDelay();
    // Get instance field reference: private System.Single _repeatedPressDelay
    float& dyn__repeatedPressDelay();
    // Get instance field reference: private System.Single _repeatedClickStartTime
    float& dyn__repeatedClickStartTime();
    // Get instance field reference: private System.Int32 _sentRepeatedClicks
    int& dyn__sentRepeatedClicks();
    // private System.Void Awake()
    // Offset: 0x1388CA4
    void Awake();
    // private System.Void Clicked(System.Boolean clicked)
    // Offset: 0x1388E80
    void Clicked(bool clicked);
    // private System.Void SettingsUpdated()
    // Offset: 0x1388E04
    void SettingsUpdated();
    // private System.Void Update()
    // Offset: 0x1388ED4
    void Update();
    // private System.Boolean ShouldSendRepeatedClick()
    // Offset: 0x1388F34
    bool ShouldSendRepeatedClick();
    // private System.Void OnDestroy()
    // Offset: 0x1388F98
    void OnDestroy();
    // public override System.Boolean get_InteractionStopsLaser()
    // Offset: 0x1388C9C
    // Implemented from: VROSC.Clickable
    // Base method: System.Boolean Clickable::get_InteractionStopsLaser()
    bool get_InteractionStopsLaser();
    // public System.Void .ctor()
    // Offset: 0x13890F4
    // Implemented from: VROSC.Clickable
    // Base method: System.Void Clickable::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyboardLaserInput* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::KeyboardLaserInput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyboardLaserInput*, creationType>()));
    }
  }; // KeyboardLaserInput
  #pragma pack(pop)
  static check_size<sizeof(KeyboardLaserInput), 164 + sizeof(int)> __GlobalNamespace_KeyboardLaserInputSizeCheck;
  static_assert(sizeof(KeyboardLaserInput) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::KeyboardLaserInput::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardLaserInput::*)()>(&GlobalNamespace::KeyboardLaserInput::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardLaserInput*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardLaserInput::Clicked
// Il2CppName: Clicked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardLaserInput::*)(bool)>(&GlobalNamespace::KeyboardLaserInput::Clicked)> {
  static const MethodInfo* get() {
    static auto* clicked = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardLaserInput*), "Clicked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clicked});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardLaserInput::SettingsUpdated
// Il2CppName: SettingsUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardLaserInput::*)()>(&GlobalNamespace::KeyboardLaserInput::SettingsUpdated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardLaserInput*), "SettingsUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardLaserInput::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardLaserInput::*)()>(&GlobalNamespace::KeyboardLaserInput::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardLaserInput*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardLaserInput::ShouldSendRepeatedClick
// Il2CppName: ShouldSendRepeatedClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::KeyboardLaserInput::*)()>(&GlobalNamespace::KeyboardLaserInput::ShouldSendRepeatedClick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardLaserInput*), "ShouldSendRepeatedClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardLaserInput::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KeyboardLaserInput::*)()>(&GlobalNamespace::KeyboardLaserInput::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardLaserInput*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardLaserInput::get_InteractionStopsLaser
// Il2CppName: get_InteractionStopsLaser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::KeyboardLaserInput::*)()>(&GlobalNamespace::KeyboardLaserInput::get_InteractionStopsLaser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardLaserInput*), "get_InteractionStopsLaser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardLaserInput::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
