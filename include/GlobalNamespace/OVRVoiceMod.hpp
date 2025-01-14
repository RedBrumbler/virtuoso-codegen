// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRVoiceMod
  class OVRVoiceMod;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRVoiceMod);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVoiceMod*, "", "OVRVoiceMod");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OVRVoiceMod
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRVoiceMod : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OVRVoiceMod::ovrVoiceModError
    struct ovrVoiceModError;
    // Nested type: ::GlobalNamespace::OVRVoiceMod::ovrViceModFlag
    struct ovrViceModFlag;
    // static field const value: static public System.Int32 ovrVoiceModSuccess
    static constexpr const int ovrVoiceModSuccess = 0;
    // Get static field: static public System.Int32 ovrVoiceModSuccess
    static int _get_ovrVoiceModSuccess();
    // Set static field: static public System.Int32 ovrVoiceModSuccess
    static void _set_ovrVoiceModSuccess(int value);
    // static field const value: static public System.String strOVRLS
    static constexpr const char* strOVRLS = "OVRVoiceMod";
    // Get static field: static public System.String strOVRLS
    static ::StringW _get_strOVRLS();
    // Set static field: static public System.String strOVRLS
    static void _set_strOVRLS(::StringW value);
    // Get static field: static private System.Int32 sOVRVoiceModInit
    static int _get_sOVRVoiceModInit();
    // Set static field: static private System.Int32 sOVRVoiceModInit
    static void _set_sOVRVoiceModInit(int value);
    // Get static field: static public OVRVoiceMod sInstance
    static ::GlobalNamespace::OVRVoiceMod* _get_sInstance();
    // Set static field: static public OVRVoiceMod sInstance
    static void _set_sInstance(::GlobalNamespace::OVRVoiceMod* value);
    // static private System.Int32 ovrVoiceModDll_Initialize(System.Int32 SampleRate, System.Int32 BufferSize)
    // Offset: 0xA1BDF0
    static int ovrVoiceModDll_Initialize(int SampleRate, int BufferSize);
    // static private System.Void ovrVoiceModDll_Shutdown()
    // Offset: 0xA1BE80
    static void ovrVoiceModDll_Shutdown();
    // static private System.IntPtr ovrVoicemodDll_GetVersion(ref System.Int32 Major, ref System.Int32 Minor, ref System.Int32 Patch)
    // Offset: 0xA1BEF0
    static ::System::IntPtr ovrVoicemodDll_GetVersion(ByRef<int> Major, ByRef<int> Minor, ByRef<int> Patch);
    // static private System.Int32 ovrVoiceModDll_CreateContext(ref System.UInt32 Context)
    // Offset: 0xA1BF88
    static int ovrVoiceModDll_CreateContext(ByRef<uint> Context);
    // static private System.Int32 ovrVoiceModDll_DestroyContext(System.UInt32 Context)
    // Offset: 0xA1C008
    static int ovrVoiceModDll_DestroyContext(uint Context);
    // static private System.Int32 ovrVoiceModDll_SendParameter(System.UInt32 Context, System.Int32 Parameter, System.Int32 Value)
    // Offset: 0xA1C088
    static int ovrVoiceModDll_SendParameter(uint Context, int Parameter, int Value);
    // static private System.Int32 ovrVoiceModDll_ProcessFrame(System.UInt32 Context, System.UInt32 Flags, System.Single[] AudioBuffer)
    // Offset: 0xA1C120
    static int ovrVoiceModDll_ProcessFrame(uint Context, uint Flags, ::ArrayW<float> AudioBuffer);
    // static private System.Int32 ovrVoiceModDll_ProcessFrameInterleaved(System.UInt32 Context, System.UInt32 Flags, System.Single[] AudioBuffer)
    // Offset: 0xA1C1C0
    static int ovrVoiceModDll_ProcessFrameInterleaved(uint Context, uint Flags, ::ArrayW<float> AudioBuffer);
    // static private System.Int32 ovrVoiceModDll_GetAverageAbsVolume(System.UInt32 Context, ref System.Single Volume)
    // Offset: 0xA1C260
    static int ovrVoiceModDll_GetAverageAbsVolume(uint Context, ByRef<float> Volume);
    // private System.Void Awake()
    // Offset: 0xA1C2F0
    void Awake();
    // private System.Void Start()
    // Offset: 0xA1C6D8
    void Start();
    // private System.Void Update()
    // Offset: 0xA1C6DC
    void Update();
    // private System.Void OnDestroy()
    // Offset: 0xA1C6E0
    void OnDestroy();
    // static public System.Int32 IsInitialized()
    // Offset: 0xA1C80C
    static int IsInitialized();
    // static public System.Int32 CreateContext(ref System.UInt32 context)
    // Offset: 0xA1C870
    static int CreateContext(ByRef<uint> context);
    // static public System.Int32 DestroyContext(System.UInt32 context)
    // Offset: 0xA1C948
    static int DestroyContext(uint context);
    // static public System.Int32 SendParameter(System.UInt32 context, System.Int32 parameter, System.Int32 value)
    // Offset: 0xA1CA20
    static int SendParameter(uint context, int parameter, int value);
    // static public System.Int32 ProcessFrame(System.UInt32 context, System.Single[] audioBuffer)
    // Offset: 0xA1CB14
    static int ProcessFrame(uint context, ::ArrayW<float> audioBuffer);
    // static public System.Int32 ProcessFrameInterleaved(System.UInt32 context, System.Single[] audioBuffer)
    // Offset: 0xA1CBF8
    static int ProcessFrameInterleaved(uint context, ::ArrayW<float> audioBuffer);
    // static public System.Single GetAverageAbsVolume(System.UInt32 context)
    // Offset: 0xA1CCDC
    static float GetAverageAbsVolume(uint context);
    // public System.Void .ctor()
    // Offset: 0xA1CDB8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRVoiceMod* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRVoiceMod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRVoiceMod*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xA1CDC0
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OVRVoiceMod
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::ovrVoiceModDll_Initialize
// Il2CppName: ovrVoiceModDll_Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&GlobalNamespace::OVRVoiceMod::ovrVoiceModDll_Initialize)> {
  static const MethodInfo* get() {
    static auto* SampleRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* BufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "ovrVoiceModDll_Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{SampleRate, BufferSize});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::ovrVoiceModDll_Shutdown
// Il2CppName: ovrVoiceModDll_Shutdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRVoiceMod::ovrVoiceModDll_Shutdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "ovrVoiceModDll_Shutdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::ovrVoicemodDll_GetVersion
// Il2CppName: ovrVoicemodDll_GetVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(ByRef<int>, ByRef<int>, ByRef<int>)>(&GlobalNamespace::OVRVoiceMod::ovrVoicemodDll_GetVersion)> {
  static const MethodInfo* get() {
    static auto* Major = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* Minor = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* Patch = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "ovrVoicemodDll_GetVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Major, Minor, Patch});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::ovrVoiceModDll_CreateContext
// Il2CppName: ovrVoiceModDll_CreateContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<uint>)>(&GlobalNamespace::OVRVoiceMod::ovrVoiceModDll_CreateContext)> {
  static const MethodInfo* get() {
    static auto* Context = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "ovrVoiceModDll_CreateContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Context});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::ovrVoiceModDll_DestroyContext
// Il2CppName: ovrVoiceModDll_DestroyContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint)>(&GlobalNamespace::OVRVoiceMod::ovrVoiceModDll_DestroyContext)> {
  static const MethodInfo* get() {
    static auto* Context = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "ovrVoiceModDll_DestroyContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Context});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::ovrVoiceModDll_SendParameter
// Il2CppName: ovrVoiceModDll_SendParameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint, int, int)>(&GlobalNamespace::OVRVoiceMod::ovrVoiceModDll_SendParameter)> {
  static const MethodInfo* get() {
    static auto* Context = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* Parameter = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* Value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "ovrVoiceModDll_SendParameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Context, Parameter, Value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::ovrVoiceModDll_ProcessFrame
// Il2CppName: ovrVoiceModDll_ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint, uint, ::ArrayW<float>)>(&GlobalNamespace::OVRVoiceMod::ovrVoiceModDll_ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* Context = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* Flags = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* AudioBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "ovrVoiceModDll_ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Context, Flags, AudioBuffer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::ovrVoiceModDll_ProcessFrameInterleaved
// Il2CppName: ovrVoiceModDll_ProcessFrameInterleaved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint, uint, ::ArrayW<float>)>(&GlobalNamespace::OVRVoiceMod::ovrVoiceModDll_ProcessFrameInterleaved)> {
  static const MethodInfo* get() {
    static auto* Context = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* Flags = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* AudioBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "ovrVoiceModDll_ProcessFrameInterleaved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Context, Flags, AudioBuffer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::ovrVoiceModDll_GetAverageAbsVolume
// Il2CppName: ovrVoiceModDll_GetAverageAbsVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint, ByRef<float>)>(&GlobalNamespace::OVRVoiceMod::ovrVoiceModDll_GetAverageAbsVolume)> {
  static const MethodInfo* get() {
    static auto* Context = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* Volume = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "ovrVoiceModDll_GetAverageAbsVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Context, Volume});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVoiceMod::*)()>(&GlobalNamespace::OVRVoiceMod::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVoiceMod::*)()>(&GlobalNamespace::OVRVoiceMod::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVoiceMod::*)()>(&GlobalNamespace::OVRVoiceMod::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVoiceMod::*)()>(&GlobalNamespace::OVRVoiceMod::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::IsInitialized
// Il2CppName: IsInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&GlobalNamespace::OVRVoiceMod::IsInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "IsInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::CreateContext
// Il2CppName: CreateContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<uint>)>(&GlobalNamespace::OVRVoiceMod::CreateContext)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "CreateContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::DestroyContext
// Il2CppName: DestroyContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint)>(&GlobalNamespace::OVRVoiceMod::DestroyContext)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "DestroyContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::SendParameter
// Il2CppName: SendParameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint, int, int)>(&GlobalNamespace::OVRVoiceMod::SendParameter)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* parameter = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "SendParameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, parameter, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint, ::ArrayW<float>)>(&GlobalNamespace::OVRVoiceMod::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* audioBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, audioBuffer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::ProcessFrameInterleaved
// Il2CppName: ProcessFrameInterleaved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint, ::ArrayW<float>)>(&GlobalNamespace::OVRVoiceMod::ProcessFrameInterleaved)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* audioBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "ProcessFrameInterleaved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, audioBuffer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::GetAverageAbsVolume
// Il2CppName: GetAverageAbsVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(uint)>(&GlobalNamespace::OVRVoiceMod::GetAverageAbsVolume)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), "GetAverageAbsVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRVoiceMod::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRVoiceMod::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVoiceMod*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
