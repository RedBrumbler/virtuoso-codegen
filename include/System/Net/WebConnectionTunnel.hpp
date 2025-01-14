// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueTuple`3
#include "System/ValueTuple_3.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: Version
  class Version;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: WebConnectionTunnel
  class WebConnectionTunnel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebConnectionTunnel);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnectionTunnel*, "System.Net", "WebConnectionTunnel");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebConnectionTunnel
  // [TokenAttribute] Offset: FFFFFFFF
  class WebConnectionTunnel : public ::Il2CppObject {
    public:
    // Nested type: ::System::Net::WebConnectionTunnel::NtlmAuthState
    struct NtlmAuthState;
    // Nested type: ::System::Net::WebConnectionTunnel::$Initialize$d__42
    struct $Initialize$d__42;
    // Nested type: ::System::Net::WebConnectionTunnel::$ReadHeaders$d__43
    struct $ReadHeaders$d__43;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Net.WebConnectionTunnel/System.Net.NtlmAuthState
    // [TokenAttribute] Offset: FFFFFFFF
    struct NtlmAuthState/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: NtlmAuthState
      constexpr NtlmAuthState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Net.WebConnectionTunnel/System.Net.NtlmAuthState None
      static constexpr const int None = 0;
      // Get static field: static public System.Net.WebConnectionTunnel/System.Net.NtlmAuthState None
      static ::System::Net::WebConnectionTunnel::NtlmAuthState _get_None();
      // Set static field: static public System.Net.WebConnectionTunnel/System.Net.NtlmAuthState None
      static void _set_None(::System::Net::WebConnectionTunnel::NtlmAuthState value);
      // static field const value: static public System.Net.WebConnectionTunnel/System.Net.NtlmAuthState Challenge
      static constexpr const int Challenge = 1;
      // Get static field: static public System.Net.WebConnectionTunnel/System.Net.NtlmAuthState Challenge
      static ::System::Net::WebConnectionTunnel::NtlmAuthState _get_Challenge();
      // Set static field: static public System.Net.WebConnectionTunnel/System.Net.NtlmAuthState Challenge
      static void _set_Challenge(::System::Net::WebConnectionTunnel::NtlmAuthState value);
      // static field const value: static public System.Net.WebConnectionTunnel/System.Net.NtlmAuthState Response
      static constexpr const int Response = 2;
      // Get static field: static public System.Net.WebConnectionTunnel/System.Net.NtlmAuthState Response
      static ::System::Net::WebConnectionTunnel::NtlmAuthState _get_Response();
      // Set static field: static public System.Net.WebConnectionTunnel/System.Net.NtlmAuthState Response
      static void _set_Response(::System::Net::WebConnectionTunnel::NtlmAuthState value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // System.Net.WebConnectionTunnel/System.Net.NtlmAuthState
    #pragma pack(pop)
    static check_size<sizeof(WebConnectionTunnel::NtlmAuthState), 0 + sizeof(int)> __System_Net_WebConnectionTunnel_NtlmAuthStateSizeCheck;
    static_assert(sizeof(WebConnectionTunnel::NtlmAuthState) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly System.Net.HttpWebRequest <Request>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::HttpWebRequest* Request;
    // Field size check
    static_assert(sizeof(::System::Net::HttpWebRequest*) == 0x8);
    // private readonly System.Uri <ConnectUri>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Uri* ConnectUri;
    // Field size check
    static_assert(sizeof(::System::Uri*) == 0x8);
    // private System.Net.HttpWebRequest connectRequest
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::HttpWebRequest* connectRequest;
    // Field size check
    static_assert(sizeof(::System::Net::HttpWebRequest*) == 0x8);
    // private System.Net.WebConnectionTunnel/System.Net.NtlmAuthState ntlmAuthState
    // Size: 0x4
    // Offset: 0x28
    ::System::Net::WebConnectionTunnel::NtlmAuthState ntlmAuthState;
    // Field size check
    static_assert(sizeof(::System::Net::WebConnectionTunnel::NtlmAuthState) == 0x4);
    // private System.Boolean <Success>k__BackingField
    // Size: 0x1
    // Offset: 0x2C
    bool Success;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <CloseConnection>k__BackingField
    // Size: 0x1
    // Offset: 0x2D
    bool CloseConnection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: CloseConnection and: StatusCode
    char __padding5[0x2] = {};
    // private System.Int32 <StatusCode>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    int StatusCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: StatusCode and: StatusDescription
    char __padding6[0x4] = {};
    // private System.String <StatusDescription>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::StringW StatusDescription;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String[] <Challenge>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::StringW> Challenge;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.Net.WebHeaderCollection <Headers>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::System::Net::WebHeaderCollection* Headers;
    // Field size check
    static_assert(sizeof(::System::Net::WebHeaderCollection*) == 0x8);
    // private System.Version <ProxyVersion>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    ::System::Version* ProxyVersion;
    // Field size check
    static_assert(sizeof(::System::Version*) == 0x8);
    // private System.Byte[] <Data>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<uint8_t> Data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: private readonly System.Net.HttpWebRequest <Request>k__BackingField
    ::System::Net::HttpWebRequest*& dyn_$Request$k__BackingField();
    // Get instance field reference: private readonly System.Uri <ConnectUri>k__BackingField
    ::System::Uri*& dyn_$ConnectUri$k__BackingField();
    // Get instance field reference: private System.Net.HttpWebRequest connectRequest
    ::System::Net::HttpWebRequest*& dyn_connectRequest();
    // Get instance field reference: private System.Net.WebConnectionTunnel/System.Net.NtlmAuthState ntlmAuthState
    ::System::Net::WebConnectionTunnel::NtlmAuthState& dyn_ntlmAuthState();
    // Get instance field reference: private System.Boolean <Success>k__BackingField
    bool& dyn_$Success$k__BackingField();
    // Get instance field reference: private System.Boolean <CloseConnection>k__BackingField
    bool& dyn_$CloseConnection$k__BackingField();
    // Get instance field reference: private System.Int32 <StatusCode>k__BackingField
    int& dyn_$StatusCode$k__BackingField();
    // Get instance field reference: private System.String <StatusDescription>k__BackingField
    ::StringW& dyn_$StatusDescription$k__BackingField();
    // Get instance field reference: private System.String[] <Challenge>k__BackingField
    ::ArrayW<::StringW>& dyn_$Challenge$k__BackingField();
    // Get instance field reference: private System.Net.WebHeaderCollection <Headers>k__BackingField
    ::System::Net::WebHeaderCollection*& dyn_$Headers$k__BackingField();
    // Get instance field reference: private System.Version <ProxyVersion>k__BackingField
    ::System::Version*& dyn_$ProxyVersion$k__BackingField();
    // Get instance field reference: private System.Byte[] <Data>k__BackingField
    ::ArrayW<uint8_t>& dyn_$Data$k__BackingField();
    // public System.Net.HttpWebRequest get_Request()
    // Offset: 0xAB8724
    ::System::Net::HttpWebRequest* get_Request();
    // public System.Uri get_ConnectUri()
    // Offset: 0xAB872C
    ::System::Uri* get_ConnectUri();
    // public System.Boolean get_Success()
    // Offset: 0xAB876C
    bool get_Success();
    // private System.Void set_Success(System.Boolean value)
    // Offset: 0xAB8774
    void set_Success(bool value);
    // public System.Boolean get_CloseConnection()
    // Offset: 0xAB8780
    bool get_CloseConnection();
    // private System.Void set_CloseConnection(System.Boolean value)
    // Offset: 0xAB8788
    void set_CloseConnection(bool value);
    // public System.Int32 get_StatusCode()
    // Offset: 0xAB8794
    int get_StatusCode();
    // private System.Void set_StatusCode(System.Int32 value)
    // Offset: 0xAB879C
    void set_StatusCode(int value);
    // private System.Void set_StatusDescription(System.String value)
    // Offset: 0xAB87A4
    void set_StatusDescription(::StringW value);
    // public System.String[] get_Challenge()
    // Offset: 0xAB87AC
    ::ArrayW<::StringW> get_Challenge();
    // private System.Void set_Challenge(System.String[] value)
    // Offset: 0xAB87B4
    void set_Challenge(::ArrayW<::StringW> value);
    // public System.Net.WebHeaderCollection get_Headers()
    // Offset: 0xAB87BC
    ::System::Net::WebHeaderCollection* get_Headers();
    // private System.Void set_Headers(System.Net.WebHeaderCollection value)
    // Offset: 0xAB87C4
    void set_Headers(::System::Net::WebHeaderCollection* value);
    // public System.Version get_ProxyVersion()
    // Offset: 0xAB87CC
    ::System::Version* get_ProxyVersion();
    // private System.Void set_ProxyVersion(System.Version value)
    // Offset: 0xAB87D4
    void set_ProxyVersion(::System::Version* value);
    // public System.Byte[] get_Data()
    // Offset: 0xAB87DC
    ::ArrayW<uint8_t> get_Data();
    // private System.Void set_Data(System.Byte[] value)
    // Offset: 0xAB87E4
    void set_Data(::ArrayW<uint8_t> value);
    // public System.Void .ctor(System.Net.HttpWebRequest request, System.Uri connectUri)
    // Offset: 0xAB8734
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebConnectionTunnel* New_ctor(::System::Net::HttpWebRequest* request, ::System::Uri* connectUri) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebConnectionTunnel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebConnectionTunnel*, creationType>(request, connectUri)));
    }
    // System.Threading.Tasks.Task Initialize(System.IO.Stream stream, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xAB87EC
    ::System::Threading::Tasks::Task* Initialize(::System::IO::Stream* stream, ::System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<System.ValueTuple`3<System.Net.WebHeaderCollection,System.Byte[],System.Int32>> ReadHeaders(System.IO.Stream stream, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xAB8910
    ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t>, int>>* ReadHeaders(::System::IO::Stream* stream, ::System::Threading::CancellationToken cancellationToken);
    // private System.Void FlushContents(System.IO.Stream stream, System.Int32 contentLength)
    // Offset: 0xAB8A50
    void FlushContents(::System::IO::Stream* stream, int contentLength);
  }; // System.Net.WebConnectionTunnel
  #pragma pack(pop)
  static check_size<sizeof(WebConnectionTunnel), 88 + sizeof(::ArrayW<uint8_t>)> __System_Net_WebConnectionTunnelSizeCheck;
  static_assert(sizeof(WebConnectionTunnel) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebConnectionTunnel::NtlmAuthState, "System.Net", "WebConnectionTunnel/NtlmAuthState");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::get_Request
// Il2CppName: get_Request
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpWebRequest* (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_Request)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "get_Request", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::get_ConnectUri
// Il2CppName: get_ConnectUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_ConnectUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "get_ConnectUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::get_Success
// Il2CppName: get_Success
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_Success)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "get_Success", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::set_Success
// Il2CppName: set_Success
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(bool)>(&System::Net::WebConnectionTunnel::set_Success)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "set_Success", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::get_CloseConnection
// Il2CppName: get_CloseConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_CloseConnection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "get_CloseConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::set_CloseConnection
// Il2CppName: set_CloseConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(bool)>(&System::Net::WebConnectionTunnel::set_CloseConnection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "set_CloseConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::get_StatusCode
// Il2CppName: get_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_StatusCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "get_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::set_StatusCode
// Il2CppName: set_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(int)>(&System::Net::WebConnectionTunnel::set_StatusCode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "set_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::set_StatusDescription
// Il2CppName: set_StatusDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(::StringW)>(&System::Net::WebConnectionTunnel::set_StatusDescription)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "set_StatusDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::get_Challenge
// Il2CppName: get_Challenge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_Challenge)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "get_Challenge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::set_Challenge
// Il2CppName: set_Challenge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(::ArrayW<::StringW>)>(&System::Net::WebConnectionTunnel::set_Challenge)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "set_Challenge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::set_Headers
// Il2CppName: set_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(::System::Net::WebHeaderCollection*)>(&System::Net::WebConnectionTunnel::set_Headers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "WebHeaderCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "set_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::get_ProxyVersion
// Il2CppName: get_ProxyVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_ProxyVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "get_ProxyVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::set_ProxyVersion
// Il2CppName: set_ProxyVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(::System::Version*)>(&System::Net::WebConnectionTunnel::set_ProxyVersion)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Version")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "set_ProxyVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Net::WebConnectionTunnel::*)()>(&System::Net::WebConnectionTunnel::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::set_Data
// Il2CppName: set_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(::ArrayW<uint8_t>)>(&System::Net::WebConnectionTunnel::set_Data)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "set_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Net::WebConnectionTunnel::*)(::System::IO::Stream*, ::System::Threading::CancellationToken)>(&System::Net::WebConnectionTunnel::Initialize)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::ReadHeaders
// Il2CppName: ReadHeaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::System::Net::WebHeaderCollection*, ::ArrayW<uint8_t>, int>>* (System::Net::WebConnectionTunnel::*)(::System::IO::Stream*, ::System::Threading::CancellationToken)>(&System::Net::WebConnectionTunnel::ReadHeaders)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "ReadHeaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Net::WebConnectionTunnel::FlushContents
// Il2CppName: FlushContents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebConnectionTunnel::*)(::System::IO::Stream*, int)>(&System::Net::WebConnectionTunnel::FlushContents)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* contentLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebConnectionTunnel*), "FlushContents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, contentLength});
  }
};
