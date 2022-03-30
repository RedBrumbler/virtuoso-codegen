// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Net.Sockets.AddressFamily
#include "System/Net/Sockets/AddressFamily.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Forward declaring type: UdpClient
  class UdpClient;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Sockets::UdpClient);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::UdpClient*, "System.Net.Sockets", "UdpClient");
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x2E
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.UdpClient
  // [TokenAttribute] Offset: FFFFFFFF
  class UdpClient : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // private System.Net.Sockets.Socket m_ClientSocket
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::Sockets::Socket* m_ClientSocket;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::Socket*) == 0x8);
    // private System.Boolean m_Active
    // Size: 0x1
    // Offset: 0x18
    bool m_Active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_Active and: m_Buffer
    char __padding1[0x7] = {};
    // private System.Byte[] m_Buffer
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> m_Buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Net.Sockets.AddressFamily m_Family
    // Size: 0x4
    // Offset: 0x28
    ::System::Net::Sockets::AddressFamily m_Family;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::AddressFamily) == 0x4);
    // private System.Boolean m_CleanedUp
    // Size: 0x1
    // Offset: 0x2C
    bool m_CleanedUp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_IsBroadcast
    // Size: 0x1
    // Offset: 0x2D
    bool m_IsBroadcast;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // static field const value: static private System.Int32 MaxUDPSize
    static constexpr const int MaxUDPSize = 65536;
    // Get static field: static private System.Int32 MaxUDPSize
    static int _get_MaxUDPSize();
    // Set static field: static private System.Int32 MaxUDPSize
    static void _set_MaxUDPSize(int value);
    // Get instance field reference: private System.Net.Sockets.Socket m_ClientSocket
    ::System::Net::Sockets::Socket*& dyn_m_ClientSocket();
    // Get instance field reference: private System.Boolean m_Active
    bool& dyn_m_Active();
    // Get instance field reference: private System.Byte[] m_Buffer
    ::ArrayW<uint8_t>& dyn_m_Buffer();
    // Get instance field reference: private System.Net.Sockets.AddressFamily m_Family
    ::System::Net::Sockets::AddressFamily& dyn_m_Family();
    // Get instance field reference: private System.Boolean m_CleanedUp
    bool& dyn_m_CleanedUp();
    // Get instance field reference: private System.Boolean m_IsBroadcast
    bool& dyn_m_IsBroadcast();
    // public System.Net.Sockets.Socket get_Client()
    // Offset: 0x954688
    ::System::Net::Sockets::Socket* get_Client();
    // public System.Void set_Client(System.Net.Sockets.Socket value)
    // Offset: 0x954690
    void set_Client(::System::Net::Sockets::Socket* value);
    // public System.Void .ctor(System.Net.Sockets.AddressFamily family)
    // Offset: 0x9542B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UdpClient* New_ctor(::System::Net::Sockets::AddressFamily family) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::UdpClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UdpClient*, creationType>(family)));
    }
    // public System.Void .ctor(System.Int32 port)
    // Offset: 0x954464
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UdpClient* New_ctor(int port) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::UdpClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UdpClient*, creationType>(port)));
    }
    // public System.Void .ctor(System.Int32 port, System.Net.Sockets.AddressFamily family)
    // Offset: 0x95446C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UdpClient* New_ctor(int port, ::System::Net::Sockets::AddressFamily family) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::UdpClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UdpClient*, creationType>(port, family)));
    }
    // public System.Void Close()
    // Offset: 0x954698
    void Close();
    // private System.Void FreeResources()
    // Offset: 0x9546A8
    void FreeResources();
    // public System.Void Dispose()
    // Offset: 0x9546FC
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x95470C
    void Dispose(bool disposing);
    // public System.Void Connect(System.Net.IPAddress addr, System.Int32 port)
    // Offset: 0x954798
    void Connect(::System::Net::IPAddress* addr, int port);
    // public System.Void Connect(System.Net.IPEndPoint endPoint)
    // Offset: 0x954938
    void Connect(::System::Net::IPEndPoint* endPoint);
    // private System.Void CheckForBroadcast(System.Net.IPAddress ipAddress)
    // Offset: 0x954A38
    void CheckForBroadcast(::System::Net::IPAddress* ipAddress);
    // public System.Int32 Send(System.Byte[] dgram, System.Int32 bytes)
    // Offset: 0x954AA4
    int Send(::ArrayW<uint8_t> dgram, int bytes);
    // public System.Byte[] Receive(ref System.Net.IPEndPoint remoteEP)
    // Offset: 0x954BC4
    ::ArrayW<uint8_t> Receive(ByRef<::System::Net::IPEndPoint*> remoteEP);
    // private System.Void createClientSocket()
    // Offset: 0x9543F4
    void createClientSocket();
    // public System.Void .ctor()
    // Offset: 0x9542AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UdpClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Sockets::UdpClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UdpClient*, creationType>()));
    }
  }; // System.Net.Sockets.UdpClient
  #pragma pack(pop)
  static check_size<sizeof(UdpClient), 45 + sizeof(bool)> __System_Net_Sockets_UdpClientSizeCheck;
  static_assert(sizeof(UdpClient) == 0x2E);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Sockets::UdpClient::get_Client
// Il2CppName: get_Client
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (System::Net::Sockets::UdpClient::*)()>(&System::Net::Sockets::UdpClient::get_Client)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::UdpClient*), "get_Client", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::UdpClient::set_Client
// Il2CppName: set_Client
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::UdpClient::*)(::System::Net::Sockets::Socket*)>(&System::Net::Sockets::UdpClient::set_Client)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Sockets", "Socket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::UdpClient*), "set_Client", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::UdpClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::UdpClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::UdpClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Sockets::UdpClient::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::UdpClient::*)()>(&System::Net::Sockets::UdpClient::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::UdpClient*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::UdpClient::FreeResources
// Il2CppName: FreeResources
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::UdpClient::*)()>(&System::Net::Sockets::UdpClient::FreeResources)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::UdpClient*), "FreeResources", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::UdpClient::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::UdpClient::*)()>(&System::Net::Sockets::UdpClient::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::UdpClient*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::UdpClient::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::UdpClient::*)(bool)>(&System::Net::Sockets::UdpClient::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::UdpClient*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::UdpClient::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::UdpClient::*)(::System::Net::IPAddress*, int)>(&System::Net::Sockets::UdpClient::Connect)> {
  static const MethodInfo* get() {
    static auto* addr = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::UdpClient*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{addr, port});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::UdpClient::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::UdpClient::*)(::System::Net::IPEndPoint*)>(&System::Net::Sockets::UdpClient::Connect)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::UdpClient*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::UdpClient::CheckForBroadcast
// Il2CppName: CheckForBroadcast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::UdpClient::*)(::System::Net::IPAddress*)>(&System::Net::Sockets::UdpClient::CheckForBroadcast)> {
  static const MethodInfo* get() {
    static auto* ipAddress = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::UdpClient*), "CheckForBroadcast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ipAddress});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::UdpClient::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Sockets::UdpClient::*)(::ArrayW<uint8_t>, int)>(&System::Net::Sockets::UdpClient::Send)> {
  static const MethodInfo* get() {
    static auto* dgram = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* bytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::UdpClient*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dgram, bytes});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::UdpClient::Receive
// Il2CppName: Receive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Net::Sockets::UdpClient::*)(ByRef<::System::Net::IPEndPoint*>)>(&System::Net::Sockets::UdpClient::Receive)> {
  static const MethodInfo* get() {
    static auto* remoteEP = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::UdpClient*), "Receive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{remoteEP});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::UdpClient::createClientSocket
// Il2CppName: createClientSocket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Sockets::UdpClient::*)()>(&System::Net::Sockets::UdpClient::createClientSocket)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Sockets::UdpClient*), "createClientSocket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Sockets::UdpClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
