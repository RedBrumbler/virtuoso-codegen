// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSystemPerfMetrics
#include "GlobalNamespace/OVRSystemPerfMetrics.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRNetwork
#include "GlobalNamespace/OVRNetwork.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer*, "", "OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer : public ::UnityEngine::MonoBehaviour {
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
    // private OVRNetwork/OVRNetworkTcpServer tcpServer
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OVRNetwork::OVRNetworkTcpServer* tcpServer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRNetwork::OVRNetworkTcpServer*) == 0x8);
    // public System.Int32 listeningPort
    // Size: 0x4
    // Offset: 0x20
    int listeningPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static public OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer singleton
    static ::GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer* _get_singleton();
    // Set static field: static public OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer singleton
    static void _set_singleton(::GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer* value);
    // Get instance field reference: private OVRNetwork/OVRNetworkTcpServer tcpServer
    ::GlobalNamespace::OVRNetwork::OVRNetworkTcpServer*& dyn_tcpServer();
    // Get instance field reference: public System.Int32 listeningPort
    int& dyn_listeningPort();
    // private System.Void OnEnable()
    // Offset: 0xF15A70
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0xF15BCC
    void OnDisable();
    // private System.Void Update()
    // Offset: 0xF15C90
    void Update();
    // private OVRSystemPerfMetrics/PerfMetrics GatherPerfMetrics()
    // Offset: 0xF15D18
    ::GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics* GatherPerfMetrics();
    // public System.Void .ctor()
    // Offset: 0xF164BC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xF16528
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer
  #pragma pack(pop)
  static check_size<sizeof(OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer), 32 + sizeof(int)> __GlobalNamespace_OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServerSizeCheck;
  static_assert(sizeof(OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer::*)()>(&GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer::*)()>(&GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer::*)()>(&GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer::GatherPerfMetrics
// Il2CppName: GatherPerfMetrics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics* (GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer::*)()>(&GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer::GatherPerfMetrics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer*), "GatherPerfMetrics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};