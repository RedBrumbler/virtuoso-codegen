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
  // Forward declaring type: TutorialInputDevice
  class TutorialInputDevice;
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: HandType
  struct HandType;
  // Forward declaring type: TriggerButton
  struct TriggerButton;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: TutorialInputDeviceManager
  class TutorialInputDeviceManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TutorialInputDeviceManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialInputDeviceManager*, "VROSC", "TutorialInputDeviceManager");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TutorialInputDeviceManager
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialInputDeviceManager : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.TutorialInputDevice _left
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::TutorialInputDevice* left;
    // Field size check
    static_assert(sizeof(::VROSC::TutorialInputDevice*) == 0x8);
    // private VROSC.TutorialInputDevice _right
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::TutorialInputDevice* right;
    // Field size check
    static_assert(sizeof(::VROSC::TutorialInputDevice*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.TutorialInputDevice _left
    ::VROSC::TutorialInputDevice*& dyn__left();
    // Get instance field reference: private VROSC.TutorialInputDevice _right
    ::VROSC::TutorialInputDevice*& dyn__right();
    // public System.Void Setup(VROSC.InputDevice left, VROSC.InputDevice right)
    // Offset: 0x1407C04
    void Setup(::VROSC::InputDevice* left, ::VROSC::InputDevice* right);
    // public System.Void StartButtonBlinking(VROSC.HandType hand, VROSC.TriggerButton trigger, UnityEngine.Color color)
    // Offset: 0x1407C30
    void StartButtonBlinking(::VROSC::HandType hand, ::VROSC::TriggerButton trigger, ::UnityEngine::Color color);
    // public System.Void StopButtonBlinking(VROSC.HandType hand, VROSC.TriggerButton trigger, System.Single fadeTime)
    // Offset: 0x1407E10
    void StopButtonBlinking(::VROSC::HandType hand, ::VROSC::TriggerButton trigger, float fadeTime);
    // public System.Void StopAllBlinking(VROSC.HandType hand, System.Single fadeTime)
    // Offset: 0x1407E9C
    void StopAllBlinking(::VROSC::HandType hand, float fadeTime);
    // private System.Boolean IsLeftValid(VROSC.HandType hand)
    // Offset: 0x1407CEC
    bool IsLeftValid(::VROSC::HandType hand);
    // private System.Boolean IsRightValid(VROSC.HandType hand)
    // Offset: 0x1407D7C
    bool IsRightValid(::VROSC::HandType hand);
    // public System.Void .ctor()
    // Offset: 0x1407F10
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialInputDeviceManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TutorialInputDeviceManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialInputDeviceManager*, creationType>()));
    }
  }; // VROSC.TutorialInputDeviceManager
  #pragma pack(pop)
  static check_size<sizeof(TutorialInputDeviceManager), 32 + sizeof(::VROSC::TutorialInputDevice*)> __VROSC_TutorialInputDeviceManagerSizeCheck;
  static_assert(sizeof(TutorialInputDeviceManager) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TutorialInputDeviceManager::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialInputDeviceManager::*)(::VROSC::InputDevice*, ::VROSC::InputDevice*)>(&VROSC::TutorialInputDeviceManager::Setup)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialInputDeviceManager*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialInputDeviceManager::StartButtonBlinking
// Il2CppName: StartButtonBlinking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialInputDeviceManager::*)(::VROSC::HandType, ::VROSC::TriggerButton, ::UnityEngine::Color)>(&VROSC::TutorialInputDeviceManager::StartButtonBlinking)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("VROSC", "HandType")->byval_arg;
    static auto* trigger = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialInputDeviceManager*), "StartButtonBlinking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, trigger, color});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialInputDeviceManager::StopButtonBlinking
// Il2CppName: StopButtonBlinking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialInputDeviceManager::*)(::VROSC::HandType, ::VROSC::TriggerButton, float)>(&VROSC::TutorialInputDeviceManager::StopButtonBlinking)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("VROSC", "HandType")->byval_arg;
    static auto* trigger = &::il2cpp_utils::GetClassFromName("VROSC", "TriggerButton")->byval_arg;
    static auto* fadeTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialInputDeviceManager*), "StopButtonBlinking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, trigger, fadeTime});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialInputDeviceManager::StopAllBlinking
// Il2CppName: StopAllBlinking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialInputDeviceManager::*)(::VROSC::HandType, float)>(&VROSC::TutorialInputDeviceManager::StopAllBlinking)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("VROSC", "HandType")->byval_arg;
    static auto* fadeTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialInputDeviceManager*), "StopAllBlinking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, fadeTime});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialInputDeviceManager::IsLeftValid
// Il2CppName: IsLeftValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::TutorialInputDeviceManager::*)(::VROSC::HandType)>(&VROSC::TutorialInputDeviceManager::IsLeftValid)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("VROSC", "HandType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialInputDeviceManager*), "IsLeftValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialInputDeviceManager::IsRightValid
// Il2CppName: IsRightValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::TutorialInputDeviceManager::*)(::VROSC::HandType)>(&VROSC::TutorialInputDeviceManager::IsRightValid)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("VROSC", "HandType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialInputDeviceManager*), "IsRightValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialInputDeviceManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!