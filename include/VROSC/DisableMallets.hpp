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
  // Forward declaring type: ControllerInputNode
  class ControllerInputNode;
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: DisableMallets
  class DisableMallets;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::DisableMallets);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DisableMallets*, "VROSC", "DisableMallets");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.DisableMallets
  // [TokenAttribute] Offset: FFFFFFFF
  class DisableMallets : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.ControllerInputNode _controllerInputNode
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::ControllerInputNode* controllerInputNode;
    // Field size check
    static_assert(sizeof(::VROSC::ControllerInputNode*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.ControllerInputNode _controllerInputNode
    ::VROSC::ControllerInputNode*& dyn__controllerInputNode();
    // protected System.Void Awake()
    // Offset: 0x130BAC4
    void Awake();
    // private System.Void HoverBegin(VROSC.InputDevice device)
    // Offset: 0x130BBFC
    void HoverBegin(::VROSC::InputDevice* device);
    // private System.Void HoverEnd(VROSC.InputDevice device)
    // Offset: 0x130BC74
    void HoverEnd(::VROSC::InputDevice* device);
    // public System.Void .ctor()
    // Offset: 0x130BCEC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisableMallets* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::DisableMallets::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisableMallets*, creationType>()));
    }
  }; // VROSC.DisableMallets
  #pragma pack(pop)
  static check_size<sizeof(DisableMallets), 24 + sizeof(::VROSC::ControllerInputNode*)> __VROSC_DisableMalletsSizeCheck;
  static_assert(sizeof(DisableMallets) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::DisableMallets::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::DisableMallets::*)()>(&VROSC::DisableMallets::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::DisableMallets*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::DisableMallets::HoverBegin
// Il2CppName: HoverBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::DisableMallets::*)(::VROSC::InputDevice*)>(&VROSC::DisableMallets::HoverBegin)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::DisableMallets*), "HoverBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: VROSC::DisableMallets::HoverEnd
// Il2CppName: HoverEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::DisableMallets::*)(::VROSC::InputDevice*)>(&VROSC::DisableMallets::HoverEnd)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::DisableMallets*), "HoverEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: VROSC::DisableMallets::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
