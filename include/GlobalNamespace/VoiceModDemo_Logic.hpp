// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRTouchpad
#include "GlobalNamespace/OVRTouchpad.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRVoiceModContext
  class OVRVoiceModContext;
  // Forward declaring type: VoiceModEnableSwitch
  class VoiceModEnableSwitch;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VoiceModDemo_Logic
  class VoiceModDemo_Logic;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VoiceModDemo_Logic);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VoiceModDemo_Logic*, "", "VoiceModDemo_Logic");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VoiceModDemo_Logic
  // [TokenAttribute] Offset: FFFFFFFF
  class VoiceModDemo_Logic : public ::UnityEngine::MonoBehaviour {
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
    // public OVRVoiceModContext[] contexts
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::OVRVoiceModContext*> contexts;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRVoiceModContext*>) == 0x8);
    // public UnityEngine.Material material
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.Transform[] xfrms
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Transform*> xfrms;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // public VoiceModEnableSwitch SwitchTarget
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::VoiceModEnableSwitch* SwitchTarget;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VoiceModEnableSwitch*) == 0x8);
    // private System.Int32 targetSet
    // Size: 0x4
    // Offset: 0x38
    int targetSet;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector3 scale
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 scale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single scaleMax
    // Size: 0x4
    // Offset: 0x48
    float scaleMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 currentPreset
    // Size: 0x4
    // Offset: 0x4C
    int currentPreset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public OVRVoiceModContext[] contexts
    ::ArrayW<::GlobalNamespace::OVRVoiceModContext*>& dyn_contexts();
    // Get instance field reference: public UnityEngine.Material material
    ::UnityEngine::Material*& dyn_material();
    // Get instance field reference: public UnityEngine.Transform[] xfrms
    ::ArrayW<::UnityEngine::Transform*>& dyn_xfrms();
    // Get instance field reference: public VoiceModEnableSwitch SwitchTarget
    ::GlobalNamespace::VoiceModEnableSwitch*& dyn_SwitchTarget();
    // Get instance field reference: private System.Int32 targetSet
    int& dyn_targetSet();
    // Get instance field reference: private UnityEngine.Vector3 scale
    ::UnityEngine::Vector3& dyn_scale();
    // Get instance field reference: private System.Single scaleMax
    float& dyn_scaleMax();
    // Get instance field reference: private System.Int32 currentPreset
    int& dyn_currentPreset();
    // private System.Void Start()
    // Offset: 0x135212C
    void Start();
    // private System.Void Update()
    // Offset: 0x1352374
    void Update();
    // private System.Void SetCurrentTarget()
    // Offset: 0x1352710
    void SetCurrentTarget();
    // private System.Void LocalTouchEventCallback(OVRTouchpad/TouchEvent touchEvent)
    // Offset: 0x135281C
    void LocalTouchEventCallback(::GlobalNamespace::OVRTouchpad::TouchEvent touchEvent);
    // private System.Void UpdateModelScale()
    // Offset: 0x1352638
    void UpdateModelScale();
    // public System.Void .ctor()
    // Offset: 0x1352BD8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VoiceModDemo_Logic* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VoiceModDemo_Logic::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VoiceModDemo_Logic*, creationType>()));
    }
  }; // VoiceModDemo_Logic
  #pragma pack(pop)
  static check_size<sizeof(VoiceModDemo_Logic), 76 + sizeof(int)> __GlobalNamespace_VoiceModDemo_LogicSizeCheck;
  static_assert(sizeof(VoiceModDemo_Logic) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VoiceModDemo_Logic::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VoiceModDemo_Logic::*)()>(&GlobalNamespace::VoiceModDemo_Logic::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VoiceModDemo_Logic*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VoiceModDemo_Logic::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VoiceModDemo_Logic::*)()>(&GlobalNamespace::VoiceModDemo_Logic::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VoiceModDemo_Logic*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VoiceModDemo_Logic::SetCurrentTarget
// Il2CppName: SetCurrentTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VoiceModDemo_Logic::*)()>(&GlobalNamespace::VoiceModDemo_Logic::SetCurrentTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VoiceModDemo_Logic*), "SetCurrentTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VoiceModDemo_Logic::LocalTouchEventCallback
// Il2CppName: LocalTouchEventCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VoiceModDemo_Logic::*)(::GlobalNamespace::OVRTouchpad::TouchEvent)>(&GlobalNamespace::VoiceModDemo_Logic::LocalTouchEventCallback)> {
  static const MethodInfo* get() {
    static auto* touchEvent = &::il2cpp_utils::GetClassFromName("", "OVRTouchpad/TouchEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VoiceModDemo_Logic*), "LocalTouchEventCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{touchEvent});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VoiceModDemo_Logic::UpdateModelScale
// Il2CppName: UpdateModelScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VoiceModDemo_Logic::*)()>(&GlobalNamespace::VoiceModDemo_Logic::UpdateModelScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VoiceModDemo_Logic*), "UpdateModelScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VoiceModDemo_Logic::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
