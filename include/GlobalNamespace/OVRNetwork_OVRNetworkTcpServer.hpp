// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRNetwork
#include "GlobalNamespace/OVRNetwork.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: TcpListener
  class TcpListener;
  // Forward declaring type: TcpClient
  class TcpClient;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRNetwork::OVRNetworkTcpServer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNetwork::OVRNetworkTcpServer*, "", "OVRNetwork/OVRNetworkTcpServer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OVRNetwork/OVRNetworkTcpServer
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRNetwork::OVRNetworkTcpServer : public ::Il2CppObject {
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
    // public System.Net.Sockets.TcpListener tcpListener
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::Sockets::TcpListener* tcpListener;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::TcpListener*) == 0x8);
    // private readonly System.Object clientsLock
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* clientsLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public readonly System.Collections.Generic.List`1<System.Net.Sockets.TcpClient> clients
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>* clients;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>*) == 0x8);
    public:
    // Get instance field reference: public System.Net.Sockets.TcpListener tcpListener
    ::System::Net::Sockets::TcpListener*& dyn_tcpListener();
    // Get instance field reference: private readonly System.Object clientsLock
    ::Il2CppObject*& dyn_clientsLock();
    // Get instance field reference: public readonly System.Collections.Generic.List`1<System.Net.Sockets.TcpClient> clients
    ::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>*& dyn_clients();
    // public System.Void StartListening(System.Int32 listeningPort)
    // Offset: 0x73D8E8
    void StartListening(int listeningPort);
    // public System.Void StopListening()
    // Offset: 0x73DE84
    void StopListening();
    // private System.Void DoAcceptTcpClientCallback(System.IAsyncResult ar)
    // Offset: 0x73E034
    void DoAcceptTcpClientCallback(::System::IAsyncResult* ar);
    // public System.Boolean HasConnectedClient()
    // Offset: 0x73E5F4
    bool HasConnectedClient();
    // public System.Void Broadcast(System.Int32 payloadType, System.Byte[] payload)
    // Offset: 0x73E814
    void Broadcast(int payloadType, ::ArrayW<uint8_t> payload);
    // private System.Void DoWriteDataCallback(System.IAsyncResult ar)
    // Offset: 0x73EE14
    void DoWriteDataCallback(::System::IAsyncResult* ar);
    // public System.Void .ctor()
    // Offset: 0x73EF14
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRNetwork::OVRNetworkTcpServer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRNetwork::OVRNetworkTcpServer*, creationType>()));
    }
  }; // OVRNetwork/OVRNetworkTcpServer
  #pragma pack(pop)
  static check_size<sizeof(OVRNetwork::OVRNetworkTcpServer), 32 + sizeof(::System::Collections::Generic::List_1<::System::Net::Sockets::TcpClient*>*)> __GlobalNamespace_OVRNetwork_OVRNetworkTcpServerSizeCheck;
  static_assert(sizeof(OVRNetwork::OVRNetworkTcpServer) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::StartListening
// Il2CppName: StartListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::*)(int)>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::StartListening)> {
  static const MethodInfo* get() {
    static auto* listeningPort = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpServer*), "StartListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{listeningPort});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::StopListening
// Il2CppName: StopListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::*)()>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::StopListening)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpServer*), "StopListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::DoAcceptTcpClientCallback
// Il2CppName: DoAcceptTcpClientCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::*)(::System::IAsyncResult*)>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::DoAcceptTcpClientCallback)> {
  static const MethodInfo* get() {
    static auto* ar = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpServer*), "DoAcceptTcpClientCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ar});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::HasConnectedClient
// Il2CppName: HasConnectedClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::*)()>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::HasConnectedClient)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpServer*), "HasConnectedClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::Broadcast
// Il2CppName: Broadcast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::*)(int, ::ArrayW<uint8_t>)>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::Broadcast)> {
  static const MethodInfo* get() {
    static auto* payloadType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* payload = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpServer*), "Broadcast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{payloadType, payload});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::DoWriteDataCallback
// Il2CppName: DoWriteDataCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::*)(::System::IAsyncResult*)>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::DoWriteDataCallback)> {
  static const MethodInfo* get() {
    static auto* ar = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpServer*), "DoWriteDataCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ar});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpServer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
