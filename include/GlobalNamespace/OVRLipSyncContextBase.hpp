// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRLipSync/ContextProviders
#include "GlobalNamespace/OVRLipSync_ContextProviders.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRLipSyncContextBase
  class OVRLipSyncContextBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRLipSyncContextBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLipSyncContextBase*, "", "OVRLipSyncContextBase");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: OVRLipSyncContextBase
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 5E0FC8
  class OVRLipSyncContextBase : public ::UnityEngine::MonoBehaviour {
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
    // public UnityEngine.AudioSource audioSource
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // [TooltipAttribute] Offset: 0x5E2360
    // public OVRLipSync/ContextProviders provider
    // Size: 0x14
    // Offset: 0x20
    ::GlobalNamespace::OVRLipSync::ContextProviders provider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRLipSync::ContextProviders) == 0x14);
    // [TooltipAttribute] Offset: 0x5E2398
    // public System.Boolean enableAcceleration
    // Size: 0x1
    // Offset: 0x24
    bool enableAcceleration;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enableAcceleration and: frame
    char __padding2[0x3] = {};
    // private OVRLipSync/Frame frame
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::OVRLipSync::Frame* frame;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRLipSync::Frame*) == 0x8);
    // private System.UInt32 context
    // Size: 0x4
    // Offset: 0x30
    uint context;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Int32 _smoothing
    // Size: 0x4
    // Offset: 0x34
    int smoothing;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.AudioSource audioSource
    ::UnityEngine::AudioSource*& dyn_audioSource();
    // Get instance field reference: public OVRLipSync/ContextProviders provider
    ::GlobalNamespace::OVRLipSync::ContextProviders& dyn_provider();
    // Get instance field reference: public System.Boolean enableAcceleration
    bool& dyn_enableAcceleration();
    // Get instance field reference: private OVRLipSync/Frame frame
    ::GlobalNamespace::OVRLipSync::Frame*& dyn_frame();
    // Get instance field reference: private System.UInt32 context
    uint& dyn_context();
    // Get instance field reference: private System.Int32 _smoothing
    int& dyn__smoothing();
    // public System.Int32 get_Smoothing()
    // Offset: 0x12ABA48
    int get_Smoothing();
    // public System.Void set_Smoothing(System.Int32 value)
    // Offset: 0x12AB93C
    void set_Smoothing(int value);
    // public System.UInt32 get_Context()
    // Offset: 0x12ABA50
    uint get_Context();
    // protected OVRLipSync/Frame get_Frame()
    // Offset: 0x12ABA58
    ::GlobalNamespace::OVRLipSync::Frame* get_Frame();
    // private System.Void Awake()
    // Offset: 0x12ABA60
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x12ABC48
    void OnDestroy();
    // public OVRLipSync/Frame GetCurrentPhonemeFrame()
    // Offset: 0x12ABDAC
    ::GlobalNamespace::OVRLipSync::Frame* GetCurrentPhonemeFrame();
    // public System.Void SetVisemeBlend(System.Int32 viseme, System.Int32 amount)
    // Offset: 0x12ABDB4
    void SetVisemeBlend(int viseme, int amount);
    // public System.Void SetLaughterBlend(System.Int32 amount)
    // Offset: 0x12ABEC8
    void SetLaughterBlend(int amount);
    // public OVRLipSync/Result ResetContext()
    // Offset: 0x12ABFA4
    ::GlobalNamespace::OVRLipSync::Result ResetContext();
    // public System.Void .ctor()
    // Offset: 0x12AB8D0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRLipSyncContextBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRLipSyncContextBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRLipSyncContextBase*, creationType>()));
    }
  }; // OVRLipSyncContextBase
  #pragma pack(pop)
  static check_size<sizeof(OVRLipSyncContextBase), 52 + sizeof(int)> __GlobalNamespace_OVRLipSyncContextBaseSizeCheck;
  static_assert(sizeof(OVRLipSyncContextBase) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextBase::get_Smoothing
// Il2CppName: get_Smoothing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRLipSyncContextBase::*)()>(&GlobalNamespace::OVRLipSyncContextBase::get_Smoothing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextBase*), "get_Smoothing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextBase::set_Smoothing
// Il2CppName: set_Smoothing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncContextBase::*)(int)>(&GlobalNamespace::OVRLipSyncContextBase::set_Smoothing)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextBase*), "set_Smoothing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextBase::get_Context
// Il2CppName: get_Context
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::OVRLipSyncContextBase::*)()>(&GlobalNamespace::OVRLipSyncContextBase::get_Context)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextBase*), "get_Context", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextBase::get_Frame
// Il2CppName: get_Frame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRLipSync::Frame* (GlobalNamespace::OVRLipSyncContextBase::*)()>(&GlobalNamespace::OVRLipSyncContextBase::get_Frame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextBase*), "get_Frame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextBase::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncContextBase::*)()>(&GlobalNamespace::OVRLipSyncContextBase::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextBase*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextBase::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncContextBase::*)()>(&GlobalNamespace::OVRLipSyncContextBase::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextBase*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextBase::GetCurrentPhonemeFrame
// Il2CppName: GetCurrentPhonemeFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRLipSync::Frame* (GlobalNamespace::OVRLipSyncContextBase::*)()>(&GlobalNamespace::OVRLipSyncContextBase::GetCurrentPhonemeFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextBase*), "GetCurrentPhonemeFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextBase::SetVisemeBlend
// Il2CppName: SetVisemeBlend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncContextBase::*)(int, int)>(&GlobalNamespace::OVRLipSyncContextBase::SetVisemeBlend)> {
  static const MethodInfo* get() {
    static auto* viseme = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextBase*), "SetVisemeBlend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viseme, amount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextBase::SetLaughterBlend
// Il2CppName: SetLaughterBlend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSyncContextBase::*)(int)>(&GlobalNamespace::OVRLipSyncContextBase::SetLaughterBlend)> {
  static const MethodInfo* get() {
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextBase*), "SetLaughterBlend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{amount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextBase::ResetContext
// Il2CppName: ResetContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRLipSync::Result (GlobalNamespace::OVRLipSyncContextBase::*)()>(&GlobalNamespace::OVRLipSyncContextBase::ResetContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSyncContextBase*), "ResetContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSyncContextBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!