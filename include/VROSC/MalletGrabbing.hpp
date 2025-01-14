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
  // Forward declaring type: Mallet
  class Mallet;
  // Forward declaring type: MalletSettings
  class MalletSettings;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: MalletGrabbing
  class MalletGrabbing;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::MalletGrabbing);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MalletGrabbing*, "VROSC", "MalletGrabbing");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x37
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.MalletGrabbing
  // [TokenAttribute] Offset: FFFFFFFF
  class MalletGrabbing : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.Mallet _mallet
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::Mallet* mallet;
    // Field size check
    static_assert(sizeof(::VROSC::Mallet*) == 0x8);
    // private VROSC.MalletSettings _malletSettings
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::MalletSettings* malletSettings;
    // Field size check
    static_assert(sizeof(::VROSC::MalletSettings*) == 0x8);
    // private System.Boolean _isGrabbing
    // Size: 0x1
    // Offset: 0x28
    bool isGrabbing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isGrabbing and: changeTimer
    char __padding2[0x3] = {};
    // private System.Single _changeTimer
    // Size: 0x4
    // Offset: 0x2C
    float changeTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _hitTimer
    // Size: 0x4
    // Offset: 0x30
    float hitTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _laserWasHovering
    // Size: 0x1
    // Offset: 0x34
    bool laserWasHovering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _laserIsDim
    // Size: 0x1
    // Offset: 0x35
    bool laserIsDim;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _userDisabledLaser
    // Size: 0x1
    // Offset: 0x36
    bool userDisabledLaser;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.Mallet _mallet
    ::VROSC::Mallet*& dyn__mallet();
    // Get instance field reference: private VROSC.MalletSettings _malletSettings
    ::VROSC::MalletSettings*& dyn__malletSettings();
    // Get instance field reference: private System.Boolean _isGrabbing
    bool& dyn__isGrabbing();
    // Get instance field reference: private System.Single _changeTimer
    float& dyn__changeTimer();
    // Get instance field reference: private System.Single _hitTimer
    float& dyn__hitTimer();
    // Get instance field reference: private System.Boolean _laserWasHovering
    bool& dyn__laserWasHovering();
    // Get instance field reference: private System.Boolean _laserIsDim
    bool& dyn__laserIsDim();
    // Get instance field reference: private System.Boolean _userDisabledLaser
    bool& dyn__userDisabledLaser();
    // private System.Void Awake()
    // Offset: 0x8AB6E0
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x8AB7BC
    void OnDestroy();
    // private System.Void OnHitDSP(System.Single predictedTime, System.Boolean dimLaser)
    // Offset: 0x8AB898
    void OnHitDSP(float predictedTime, bool dimLaser);
    // private System.Void ToggleUserDisabledLaser()
    // Offset: 0x8AB964
    void ToggleUserDisabledLaser();
    // System.Void SetActive(System.Boolean shouldUseMallets)
    // Offset: 0x8AB1FC
    void SetActive(bool shouldUseMallets);
    // private System.Void Update()
    // Offset: 0x8AB97C
    void Update();
    // private System.Void CheckIfLaserHovering()
    // Offset: 0x8ABA60
    void CheckIfLaserHovering();
    // private System.Void SetLaserDimmed(System.Boolean dimmed)
    // Offset: 0x8AB928
    void SetLaserDimmed(bool dimmed);
    // public System.Void .ctor()
    // Offset: 0x8ABB10
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MalletGrabbing* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::MalletGrabbing::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MalletGrabbing*, creationType>()));
    }
  }; // VROSC.MalletGrabbing
  #pragma pack(pop)
  static check_size<sizeof(MalletGrabbing), 54 + sizeof(bool)> __VROSC_MalletGrabbingSizeCheck;
  static_assert(sizeof(MalletGrabbing) == 0x37);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::MalletGrabbing::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletGrabbing::*)()>(&VROSC::MalletGrabbing::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletGrabbing*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MalletGrabbing::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletGrabbing::*)()>(&VROSC::MalletGrabbing::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletGrabbing*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MalletGrabbing::OnHitDSP
// Il2CppName: OnHitDSP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletGrabbing::*)(float, bool)>(&VROSC::MalletGrabbing::OnHitDSP)> {
  static const MethodInfo* get() {
    static auto* predictedTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* dimLaser = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletGrabbing*), "OnHitDSP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{predictedTime, dimLaser});
  }
};
// Writing MetadataGetter for method: VROSC::MalletGrabbing::ToggleUserDisabledLaser
// Il2CppName: ToggleUserDisabledLaser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletGrabbing::*)()>(&VROSC::MalletGrabbing::ToggleUserDisabledLaser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletGrabbing*), "ToggleUserDisabledLaser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MalletGrabbing::SetActive
// Il2CppName: SetActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletGrabbing::*)(bool)>(&VROSC::MalletGrabbing::SetActive)> {
  static const MethodInfo* get() {
    static auto* shouldUseMallets = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletGrabbing*), "SetActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shouldUseMallets});
  }
};
// Writing MetadataGetter for method: VROSC::MalletGrabbing::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletGrabbing::*)()>(&VROSC::MalletGrabbing::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletGrabbing*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MalletGrabbing::CheckIfLaserHovering
// Il2CppName: CheckIfLaserHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletGrabbing::*)()>(&VROSC::MalletGrabbing::CheckIfLaserHovering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletGrabbing*), "CheckIfLaserHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MalletGrabbing::SetLaserDimmed
// Il2CppName: SetLaserDimmed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MalletGrabbing::*)(bool)>(&VROSC::MalletGrabbing::SetLaserDimmed)> {
  static const MethodInfo* get() {
    static auto* dimmed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MalletGrabbing*), "SetLaserDimmed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dimmed});
  }
};
// Writing MetadataGetter for method: VROSC::MalletGrabbing::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
