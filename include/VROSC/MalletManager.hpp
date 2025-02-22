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
  // Forward declaring type: MalletSettings
  class MalletSettings;
  // Forward declaring type: Mallet
  class Mallet;
  // Forward declaring type: MinMaxFloat
  class MinMaxFloat;
  // Forward declaring type: ClickData
  class ClickData;
  // Forward declaring type: HandType
  struct HandType;
  // Forward declaring type: UserDataControllers
  class UserDataControllers;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: MalletManager
  class MalletManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::MalletManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MalletManager*, "VROSC", "MalletManager");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.MalletManager
  // [TokenAttribute] Offset: FFFFFFFF
  class MalletManager : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.MalletSettings _malletSettings
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::MalletSettings* malletSettings;
    // Field size check
    static_assert(sizeof(::VROSC::MalletSettings*) == 0x8);
    // private VROSC.Mallet _leftMallet
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::Mallet* leftMallet;
    // Field size check
    static_assert(sizeof(::VROSC::Mallet*) == 0x8);
    // private VROSC.Mallet _rightMallet
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::Mallet* rightMallet;
    // Field size check
    static_assert(sizeof(::VROSC::Mallet*) == 0x8);
    // private System.Single <CurrentAngle>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    float CurrentAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <CurrentLength>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    float CurrentLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean <AutoDimLaserWithMallets>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool AutoDimLaserWithMallets;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: AutoDimLaserWithMallets and: OnCurrentAngleChanged
    char __padding5[0x7] = {};
    // public System.Action`1<System.Single> OnCurrentAngleChanged
    // Size: 0x8
    // Offset: 0x40
    ::System::Action_1<float>* OnCurrentAngleChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<float>*) == 0x8);
    // public System.Action`1<System.Single> OnCurrentLengthChanged
    // Size: 0x8
    // Offset: 0x48
    ::System::Action_1<float>* OnCurrentLengthChanged;
    // Field size check
    static_assert(sizeof(::System::Action_1<float>*) == 0x8);
    // private System.Boolean _isLeftMalletToggled
    // Size: 0x1
    // Offset: 0x50
    bool isLeftMalletToggled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isRightMalletToggled
    // Size: 0x1
    // Offset: 0x51
    bool isRightMalletToggled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsLeftMalletGrabbed>k__BackingField
    // Size: 0x1
    // Offset: 0x52
    bool IsLeftMalletGrabbed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsRightMalletGrabbed>k__BackingField
    // Size: 0x1
    // Offset: 0x53
    bool IsRightMalletGrabbed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsRightMalletGrabbed and: leftDisableSources
    char __padding11[0x4] = {};
    // private System.Collections.Generic.List`1<System.Object> _leftDisableSources
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::Il2CppObject*>* leftDisableSources;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Il2CppObject*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Object> _rightDisableSources
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::Il2CppObject*>* rightDisableSources;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Il2CppObject*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.MalletSettings _malletSettings
    ::VROSC::MalletSettings*& dyn__malletSettings();
    // Get instance field reference: private VROSC.Mallet _leftMallet
    ::VROSC::Mallet*& dyn__leftMallet();
    // Get instance field reference: private VROSC.Mallet _rightMallet
    ::VROSC::Mallet*& dyn__rightMallet();
    // Get instance field reference: private System.Single <CurrentAngle>k__BackingField
    float& dyn_$CurrentAngle$k__BackingField();
    // Get instance field reference: private System.Single <CurrentLength>k__BackingField
    float& dyn_$CurrentLength$k__BackingField();
    // Get instance field reference: private System.Boolean <AutoDimLaserWithMallets>k__BackingField
    bool& dyn_$AutoDimLaserWithMallets$k__BackingField();
    // Get instance field reference: public System.Action`1<System.Single> OnCurrentAngleChanged
    ::System::Action_1<float>*& dyn_OnCurrentAngleChanged();
    // Get instance field reference: public System.Action`1<System.Single> OnCurrentLengthChanged
    ::System::Action_1<float>*& dyn_OnCurrentLengthChanged();
    // Get instance field reference: private System.Boolean _isLeftMalletToggled
    bool& dyn__isLeftMalletToggled();
    // Get instance field reference: private System.Boolean _isRightMalletToggled
    bool& dyn__isRightMalletToggled();
    // Get instance field reference: private System.Boolean <IsLeftMalletGrabbed>k__BackingField
    bool& dyn_$IsLeftMalletGrabbed$k__BackingField();
    // Get instance field reference: private System.Boolean <IsRightMalletGrabbed>k__BackingField
    bool& dyn_$IsRightMalletGrabbed$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Object> _leftDisableSources
    ::System::Collections::Generic::List_1<::Il2CppObject*>*& dyn__leftDisableSources();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Object> _rightDisableSources
    ::System::Collections::Generic::List_1<::Il2CppObject*>*& dyn__rightDisableSources();
    // public System.Single get_CurrentAngle()
    // Offset: 0x8ABB20
    float get_CurrentAngle();
    // private System.Void set_CurrentAngle(System.Single value)
    // Offset: 0x8ABB18
    void set_CurrentAngle(float value);
    // public System.Single get_CurrentLength()
    // Offset: 0x8ABB30
    float get_CurrentLength();
    // private System.Void set_CurrentLength(System.Single value)
    // Offset: 0x8ABB28
    void set_CurrentLength(float value);
    // public System.Boolean get_AutoDimLaserWithMallets()
    // Offset: 0x8ABB44
    bool get_AutoDimLaserWithMallets();
    // private System.Void set_AutoDimLaserWithMallets(System.Boolean value)
    // Offset: 0x8ABB38
    void set_AutoDimLaserWithMallets(bool value);
    // public VROSC.MinMaxFloat get_MinMaxMalletAngle()
    // Offset: 0x8ABB4C
    ::VROSC::MinMaxFloat* get_MinMaxMalletAngle();
    // public VROSC.MinMaxFloat get_MinMaxMalletLength()
    // Offset: 0x8ABB68
    ::VROSC::MinMaxFloat* get_MinMaxMalletLength();
    // public UnityEngine.Color get_DefaultColor()
    // Offset: 0x8AB310
    ::UnityEngine::Color get_DefaultColor();
    // public System.Boolean get_IsLeftMalletGrabbed()
    // Offset: 0x8ABB84
    bool get_IsLeftMalletGrabbed();
    // private System.Void set_IsLeftMalletGrabbed(System.Boolean value)
    // Offset: 0x8ABB8C
    void set_IsLeftMalletGrabbed(bool value);
    // public System.Boolean get_IsRightMalletGrabbed()
    // Offset: 0x8ABB98
    bool get_IsRightMalletGrabbed();
    // private System.Void set_IsRightMalletGrabbed(System.Boolean value)
    // Offset: 0x8ABBA0
    void set_IsRightMalletGrabbed(bool value);
    // public System.Void Setup()
    // Offset: 0x8ABBAC
    void Setup();
    // private System.Void OnDestroy()
    // Offset: 0x8ABE3C
    void OnDestroy();
    // public System.Void ToggleMallet(VROSC.ClickData clickData, System.Boolean toggle)
    // Offset: 0x8ABF28
    void ToggleMallet(::VROSC::ClickData* clickData, bool toggle);
    // public System.Void GrabMallet(System.Boolean isLeftHand, System.Boolean grab)
    // Offset: 0x8ABFF8
    void GrabMallet(bool isLeftHand, bool grab);
    // public System.Void SetMalletLength(System.Single length)
    // Offset: 0x8AC100
    void SetMalletLength(float length);
    // System.Void SetLaserAutoDimWhenHoldingMallets(System.Boolean active)
    // Offset: 0x8AC208
    void SetLaserAutoDimWhenHoldingMallets(bool active);
    // public System.Void SetDrumpadsActive(System.Boolean isActive)
    // Offset: 0x8ABDF8
    void SetDrumpadsActive(bool isActive);
    // public System.Void DisableMallets(System.Boolean disable, VROSC.HandType handType, System.Object source)
    // Offset: 0x8AC2E8
    void DisableMallets(bool disable, ::VROSC::HandType handType, ::Il2CppObject* source);
    // private System.Void DisableMallet(System.Boolean disable, System.Object source, System.Boolean left)
    // Offset: 0x8AC37C
    void DisableMallet(bool disable, ::Il2CppObject* source, bool left);
    // public System.Void SetMalletAngle(System.Single angle)
    // Offset: 0x8AC494
    void SetMalletAngle(float angle);
    // private System.Void UserDataLoaded(VROSC.UserDataControllers user)
    // Offset: 0x8AC590
    void UserDataLoaded(::VROSC::UserDataControllers* user);
    // System.Void ResetValuesToDefault()
    // Offset: 0x8AC650
    void ResetValuesToDefault();
    // public System.Void .ctor()
    // Offset: 0x8AC690
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MalletManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::MalletManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MalletManager*, creationType>()));
    }
  }; // VROSC.MalletManager
  #pragma pack(pop)
  static check_size<sizeof(MalletManager), 96 + sizeof(::System::Collections::Generic::List_1<::Il2CppObject*>*)> __VROSC_MalletManagerSizeCheck;
  static_assert(sizeof(MalletManager) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::MalletManager::get_CurrentAngle
// Il2CppName: get_CurrentAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::MalletManager::*)()>(&VROSC::MalletManager::get_CurrentAngle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "get_CurrentAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::set_CurrentAngle
// Il2CppName: set_CurrentAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletManager::*)(float)>(&VROSC::MalletManager::set_CurrentAngle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "set_CurrentAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::get_CurrentLength
// Il2CppName: get_CurrentLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::MalletManager::*)()>(&VROSC::MalletManager::get_CurrentLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "get_CurrentLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::set_CurrentLength
// Il2CppName: set_CurrentLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletManager::*)(float)>(&VROSC::MalletManager::set_CurrentLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "set_CurrentLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::get_AutoDimLaserWithMallets
// Il2CppName: get_AutoDimLaserWithMallets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::MalletManager::*)()>(&VROSC::MalletManager::get_AutoDimLaserWithMallets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "get_AutoDimLaserWithMallets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::set_AutoDimLaserWithMallets
// Il2CppName: set_AutoDimLaserWithMallets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletManager::*)(bool)>(&VROSC::MalletManager::set_AutoDimLaserWithMallets)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "set_AutoDimLaserWithMallets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::get_MinMaxMalletAngle
// Il2CppName: get_MinMaxMalletAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MinMaxFloat* (VROSC::MalletManager::*)()>(&VROSC::MalletManager::get_MinMaxMalletAngle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "get_MinMaxMalletAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::get_MinMaxMalletLength
// Il2CppName: get_MinMaxMalletLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::MinMaxFloat* (VROSC::MalletManager::*)()>(&VROSC::MalletManager::get_MinMaxMalletLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "get_MinMaxMalletLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::get_DefaultColor
// Il2CppName: get_DefaultColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::MalletManager::*)()>(&VROSC::MalletManager::get_DefaultColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "get_DefaultColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::get_IsLeftMalletGrabbed
// Il2CppName: get_IsLeftMalletGrabbed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::MalletManager::*)()>(&VROSC::MalletManager::get_IsLeftMalletGrabbed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "get_IsLeftMalletGrabbed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::set_IsLeftMalletGrabbed
// Il2CppName: set_IsLeftMalletGrabbed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletManager::*)(bool)>(&VROSC::MalletManager::set_IsLeftMalletGrabbed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "set_IsLeftMalletGrabbed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::get_IsRightMalletGrabbed
// Il2CppName: get_IsRightMalletGrabbed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::MalletManager::*)()>(&VROSC::MalletManager::get_IsRightMalletGrabbed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "get_IsRightMalletGrabbed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::set_IsRightMalletGrabbed
// Il2CppName: set_IsRightMalletGrabbed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletManager::*)(bool)>(&VROSC::MalletManager::set_IsRightMalletGrabbed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "set_IsRightMalletGrabbed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletManager::*)()>(&VROSC::MalletManager::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletManager::*)()>(&VROSC::MalletManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::ToggleMallet
// Il2CppName: ToggleMallet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletManager::*)(::VROSC::ClickData*, bool)>(&VROSC::MalletManager::ToggleMallet)> {
  static const MethodInfo* get() {
    static auto* clickData = &::il2cpp_utils::GetClassFromName("VROSC", "ClickData")->byval_arg;
    static auto* toggle = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "ToggleMallet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clickData, toggle});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::GrabMallet
// Il2CppName: GrabMallet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletManager::*)(bool, bool)>(&VROSC::MalletManager::GrabMallet)> {
  static const MethodInfo* get() {
    static auto* isLeftHand = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* grab = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "GrabMallet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isLeftHand, grab});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::SetMalletLength
// Il2CppName: SetMalletLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletManager::*)(float)>(&VROSC::MalletManager::SetMalletLength)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "SetMalletLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::SetLaserAutoDimWhenHoldingMallets
// Il2CppName: SetLaserAutoDimWhenHoldingMallets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletManager::*)(bool)>(&VROSC::MalletManager::SetLaserAutoDimWhenHoldingMallets)> {
  static const MethodInfo* get() {
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "SetLaserAutoDimWhenHoldingMallets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{active});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::SetDrumpadsActive
// Il2CppName: SetDrumpadsActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletManager::*)(bool)>(&VROSC::MalletManager::SetDrumpadsActive)> {
  static const MethodInfo* get() {
    static auto* isActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "SetDrumpadsActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isActive});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::DisableMallets
// Il2CppName: DisableMallets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletManager::*)(bool, ::VROSC::HandType, ::Il2CppObject*)>(&VROSC::MalletManager::DisableMallets)> {
  static const MethodInfo* get() {
    static auto* disable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* handType = &::il2cpp_utils::GetClassFromName("VROSC", "HandType")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "DisableMallets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disable, handType, source});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::DisableMallet
// Il2CppName: DisableMallet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletManager::*)(bool, ::Il2CppObject*, bool)>(&VROSC::MalletManager::DisableMallet)> {
  static const MethodInfo* get() {
    static auto* disable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "DisableMallet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disable, source, left});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::SetMalletAngle
// Il2CppName: SetMalletAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletManager::*)(float)>(&VROSC::MalletManager::SetMalletAngle)> {
  static const MethodInfo* get() {
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "SetMalletAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{angle});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::UserDataLoaded
// Il2CppName: UserDataLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletManager::*)(::VROSC::UserDataControllers*)>(&VROSC::MalletManager::UserDataLoaded)> {
  static const MethodInfo* get() {
    static auto* user = &::il2cpp_utils::GetClassFromName("VROSC", "UserDataControllers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "UserDataLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{user});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::ResetValuesToDefault
// Il2CppName: ResetValuesToDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletManager::*)()>(&VROSC::MalletManager::ResetValuesToDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletManager*), "ResetValuesToDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MalletManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
