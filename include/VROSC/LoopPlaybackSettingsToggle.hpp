// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlaybackSettingsUI
  class LoopPlaybackSettingsUI;
  // Forward declaring type: UIToggle
  class UIToggle;
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopPlaybackSettingsToggle
  class LoopPlaybackSettingsToggle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopPlaybackSettingsToggle);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopPlaybackSettingsToggle*, "VROSC", "LoopPlaybackSettingsToggle");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopPlaybackSettingsToggle
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopPlaybackSettingsToggle : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.LoopPlaybackSettingsUI _playbackSettings
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::LoopPlaybackSettingsUI* playbackSettings;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlaybackSettingsUI*) == 0x8);
    // private VROSC.UIToggle _playbackSettingsButton
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UIToggle* playbackSettingsButton;
    // Field size check
    static_assert(sizeof(::VROSC::UIToggle*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.LoopPlaybackSettingsUI _playbackSettings
    ::VROSC::LoopPlaybackSettingsUI*& dyn__playbackSettings();
    // Get instance field reference: private VROSC.UIToggle _playbackSettingsButton
    ::VROSC::UIToggle*& dyn__playbackSettingsButton();
    // private System.Void Awake()
    // Offset: 0x139741C
    void Awake();
    // public System.Void SetTarget(VROSC.LoopPlaybackSettingsUI settingsUI)
    // Offset: 0x1397568
    void SetTarget(::VROSC::LoopPlaybackSettingsUI* settingsUI);
    // private System.Void PlayBackSettingsOpened(System.Boolean isOn)
    // Offset: 0x139776C
    void PlayBackSettingsOpened(bool isOn);
    // private System.Void OnDestroy()
    // Offset: 0x1397790
    void OnDestroy();
    // public System.Void SetPlaybackSettingsOpen(VROSC.InputDevice inputDevice, System.Boolean isOn)
    // Offset: 0x1397930
    void SetPlaybackSettingsOpen(::VROSC::InputDevice* inputDevice, bool isOn);
    // public System.Void .ctor()
    // Offset: 0x1397A84
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopPlaybackSettingsToggle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopPlaybackSettingsToggle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopPlaybackSettingsToggle*, creationType>()));
    }
  }; // VROSC.LoopPlaybackSettingsToggle
  #pragma pack(pop)
  static check_size<sizeof(LoopPlaybackSettingsToggle), 32 + sizeof(::VROSC::UIToggle*)> __VROSC_LoopPlaybackSettingsToggleSizeCheck;
  static_assert(sizeof(LoopPlaybackSettingsToggle) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopPlaybackSettingsToggle::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlaybackSettingsToggle::*)()>(&VROSC::LoopPlaybackSettingsToggle::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlaybackSettingsToggle*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlaybackSettingsToggle::SetTarget
// Il2CppName: SetTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlaybackSettingsToggle::*)(::VROSC::LoopPlaybackSettingsUI*)>(&VROSC::LoopPlaybackSettingsToggle::SetTarget)> {
  static const MethodInfo* get() {
    static auto* settingsUI = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlaybackSettingsUI")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlaybackSettingsToggle*), "SetTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settingsUI});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlaybackSettingsToggle::PlayBackSettingsOpened
// Il2CppName: PlayBackSettingsOpened
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlaybackSettingsToggle::*)(bool)>(&VROSC::LoopPlaybackSettingsToggle::PlayBackSettingsOpened)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlaybackSettingsToggle*), "PlayBackSettingsOpened", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlaybackSettingsToggle::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlaybackSettingsToggle::*)()>(&VROSC::LoopPlaybackSettingsToggle::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlaybackSettingsToggle*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlaybackSettingsToggle::SetPlaybackSettingsOpen
// Il2CppName: SetPlaybackSettingsOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopPlaybackSettingsToggle::*)(::VROSC::InputDevice*, bool)>(&VROSC::LoopPlaybackSettingsToggle::SetPlaybackSettingsOpen)> {
  static const MethodInfo* get() {
    static auto* inputDevice = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopPlaybackSettingsToggle*), "SetPlaybackSettingsOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputDevice, isOn});
  }
};
// Writing MetadataGetter for method: VROSC::LoopPlaybackSettingsToggle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
