// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebResponse
#include "System/Net/WebResponse.hpp"
// Including type: System.Net.HttpStatusCode
#include "System/Net/HttpStatusCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: Version
  class Version;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: CookieCollection
  class CookieCollection;
  // Forward declaring type: CookieContainer
  class CookieContainer;
  // Forward declaring type: WebResponseStream
  class WebResponseStream;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: HttpWebResponse
  class HttpWebResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::HttpWebResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpWebResponse*, "System.Net", "HttpWebResponse");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpWebResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpWebResponse : public ::System::Net::WebResponse {
    public:
    // Writing base type padding for base size: 0x1A to desired offset: 0x20
    char ___base_padding[0x6] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Uri uri
    // Size: 0x8
    // Offset: 0x20
    ::System::Uri* uri;
    // Field size check
    static_assert(sizeof(::System::Uri*) == 0x8);
    // private System.Net.WebHeaderCollection webHeaders
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::WebHeaderCollection* webHeaders;
    // Field size check
    static_assert(sizeof(::System::Net::WebHeaderCollection*) == 0x8);
    // private System.Net.CookieCollection cookieCollection
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::CookieCollection* cookieCollection;
    // Field size check
    static_assert(sizeof(::System::Net::CookieCollection*) == 0x8);
    // private System.String method
    // Size: 0x8
    // Offset: 0x38
    ::StringW method;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Version version
    // Size: 0x8
    // Offset: 0x40
    ::System::Version* version;
    // Field size check
    static_assert(sizeof(::System::Version*) == 0x8);
    // private System.Net.HttpStatusCode statusCode
    // Size: 0x14
    // Offset: 0x48
    ::System::Net::HttpStatusCode statusCode;
    // Field size check
    static_assert(sizeof(::System::Net::HttpStatusCode) == 0x14);
    // private System.String statusDescription
    // Size: 0x8
    // Offset: 0x50
    ::StringW statusDescription;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int64 contentLength
    // Size: 0x8
    // Offset: 0x58
    int64_t contentLength;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.String contentType
    // Size: 0x8
    // Offset: 0x60
    ::StringW contentType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Net.CookieContainer cookie_container
    // Size: 0x8
    // Offset: 0x68
    ::System::Net::CookieContainer* cookie_container;
    // Field size check
    static_assert(sizeof(::System::Net::CookieContainer*) == 0x8);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x70
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: stream
    char __padding10[0x7] = {};
    // private System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x78
    ::System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    public:
    // Get instance field reference: private System.Uri uri
    ::System::Uri*& dyn_uri();
    // Get instance field reference: private System.Net.WebHeaderCollection webHeaders
    ::System::Net::WebHeaderCollection*& dyn_webHeaders();
    // Get instance field reference: private System.Net.CookieCollection cookieCollection
    ::System::Net::CookieCollection*& dyn_cookieCollection();
    // Get instance field reference: private System.String method
    ::StringW& dyn_method();
    // Get instance field reference: private System.Version version
    ::System::Version*& dyn_version();
    // Get instance field reference: private System.Net.HttpStatusCode statusCode
    ::System::Net::HttpStatusCode& dyn_statusCode();
    // Get instance field reference: private System.String statusDescription
    ::StringW& dyn_statusDescription();
    // Get instance field reference: private System.Int64 contentLength
    int64_t& dyn_contentLength();
    // Get instance field reference: private System.String contentType
    ::StringW& dyn_contentType();
    // Get instance field reference: private System.Net.CookieContainer cookie_container
    ::System::Net::CookieContainer*& dyn_cookie_container();
    // Get instance field reference: private System.Boolean disposed
    bool& dyn_disposed();
    // Get instance field reference: private System.IO.Stream stream
    ::System::IO::Stream*& dyn_stream();
    // public System.Net.HttpStatusCode get_StatusCode()
    // Offset: 0xD92100
    ::System::Net::HttpStatusCode get_StatusCode();
    // public System.String get_StatusDescription()
    // Offset: 0xD92108
    ::StringW get_StatusDescription();
    // System.Void .ctor(System.Uri uri, System.String method, System.Net.HttpStatusCode status, System.Net.WebHeaderCollection headers)
    // Offset: 0xD91800
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpWebResponse* New_ctor(::System::Uri* uri, ::StringW method, ::System::Net::HttpStatusCode status, ::System::Net::WebHeaderCollection* headers) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpWebResponse*, creationType>(uri, method, status, headers)));
    }
    // System.Void .ctor(System.Uri uri, System.String method, System.Net.WebResponseStream stream, System.Net.CookieContainer container)
    // Offset: 0xD918BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpWebResponse* New_ctor(::System::Uri* uri, ::StringW method, ::System::Net::WebResponseStream* stream, ::System::Net::CookieContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpWebResponse*, creationType>(uri, method, stream, container)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0xD9224C
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xD92438
    void System_IDisposable_Dispose();
    // private System.Void CheckDisposed()
    // Offset: 0xD9212C
    void CheckDisposed();
    // private System.Void FillCookies()
    // Offset: 0xD91B9C
    void FillCookies();
    // public override System.Net.WebHeaderCollection get_Headers()
    // Offset: 0xD920F8
    // Implemented from: System.Net.WebResponse
    // Base method: System.Net.WebHeaderCollection WebResponse::get_Headers()
    ::System::Net::WebHeaderCollection* get_Headers();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0xD91DBC
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpWebResponse* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpWebResponse*, creationType>(serializationInfo, streamingContext)));
    }
    // public System.Void .ctor()
    // Offset: 0xD9245C
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpWebResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpWebResponse*, creationType>()));
    }
    // public override System.IO.Stream GetResponseStream()
    // Offset: 0xD921A4
    // Implemented from: System.Net.WebResponse
    // Base method: System.IO.Stream WebResponse::GetResponseStream()
    ::System::IO::Stream* GetResponseStream();
    // protected override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0xD92258
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.Void Close()
    // Offset: 0xD92404
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0xD92448
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Net.HttpWebResponse
  #pragma pack(pop)
  static check_size<sizeof(HttpWebResponse), 120 + sizeof(::System::IO::Stream*)> __System_Net_HttpWebResponseSizeCheck;
  static_assert(sizeof(HttpWebResponse) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_StatusCode
// Il2CppName: get_StatusCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpStatusCode (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_StatusCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_StatusCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_StatusDescription
// Il2CppName: get_StatusDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_StatusDescription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_StatusDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpWebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Net::HttpWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::CheckDisposed
// Il2CppName: CheckDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::CheckDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "CheckDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::FillCookies
// Il2CppName: FillCookies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::FillCookies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "FillCookies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpWebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpWebResponse::GetResponseStream
// Il2CppName: GetResponseStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::GetResponseStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "GetResponseStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Net::HttpWebResponse::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)()>(&System::Net::HttpWebResponse::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpWebResponse::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebResponse::*)(bool)>(&System::Net::HttpWebResponse::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebResponse*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};