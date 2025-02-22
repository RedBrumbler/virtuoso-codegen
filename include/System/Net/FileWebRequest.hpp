// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebRequest
#include "System/Net/WebRequest.hpp"
// Including type: System.IO.FileAccess
#include "System/IO/FileAccess.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ICredentials
  class ICredentials;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: IWebProxy
  class IWebProxy;
  // Forward declaring type: WebResponse
  class WebResponse;
  // Forward declaring type: LazyAsyncResult
  class LazyAsyncResult;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitCallback
  class WaitCallback;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: FileWebRequest
  class FileWebRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::FileWebRequest);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FileWebRequest*, "System.Net", "FileWebRequest");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0xBC
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FileWebRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class FileWebRequest : public ::System::Net::WebRequest {
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
    // private System.String m_connectionGroupName
    // Size: 0x8
    // Offset: 0x38
    ::StringW m_connectionGroupName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int64 m_contentLength
    // Size: 0x8
    // Offset: 0x40
    int64_t m_contentLength;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Net.ICredentials m_credentials
    // Size: 0x8
    // Offset: 0x48
    ::System::Net::ICredentials* m_credentials;
    // Field size check
    static_assert(sizeof(::System::Net::ICredentials*) == 0x8);
    // private System.IO.FileAccess m_fileAccess
    // Size: 0x4
    // Offset: 0x50
    ::System::IO::FileAccess m_fileAccess;
    // Field size check
    static_assert(sizeof(::System::IO::FileAccess) == 0x4);
    // Padding between fields: m_fileAccess and: m_headers
    char __padding3[0x4] = {};
    // private System.Net.WebHeaderCollection m_headers
    // Size: 0x8
    // Offset: 0x58
    ::System::Net::WebHeaderCollection* m_headers;
    // Field size check
    static_assert(sizeof(::System::Net::WebHeaderCollection*) == 0x8);
    // private System.String m_method
    // Size: 0x8
    // Offset: 0x60
    ::StringW m_method;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Net.IWebProxy m_proxy
    // Size: 0x8
    // Offset: 0x68
    ::System::Net::IWebProxy* m_proxy;
    // Field size check
    static_assert(sizeof(::System::Net::IWebProxy*) == 0x8);
    // private System.Threading.ManualResetEvent m_readerEvent
    // Size: 0x8
    // Offset: 0x70
    ::System::Threading::ManualResetEvent* m_readerEvent;
    // Field size check
    static_assert(sizeof(::System::Threading::ManualResetEvent*) == 0x8);
    // private System.Boolean m_readPending
    // Size: 0x1
    // Offset: 0x78
    bool m_readPending;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_readPending and: m_response
    char __padding8[0x7] = {};
    // private System.Net.WebResponse m_response
    // Size: 0x8
    // Offset: 0x80
    ::System::Net::WebResponse* m_response;
    // Field size check
    static_assert(sizeof(::System::Net::WebResponse*) == 0x8);
    // private System.IO.Stream m_stream
    // Size: 0x8
    // Offset: 0x88
    ::System::IO::Stream* m_stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Boolean m_syncHint
    // Size: 0x1
    // Offset: 0x90
    bool m_syncHint;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_syncHint and: m_timeout
    char __padding11[0x3] = {};
    // private System.Int32 m_timeout
    // Size: 0x4
    // Offset: 0x94
    int m_timeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Uri m_uri
    // Size: 0x8
    // Offset: 0x98
    ::System::Uri* m_uri;
    // Field size check
    static_assert(sizeof(::System::Uri*) == 0x8);
    // private System.Boolean m_writePending
    // Size: 0x1
    // Offset: 0xA0
    bool m_writePending;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_writing
    // Size: 0x1
    // Offset: 0xA1
    bool m_writing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_writing and: m_WriteAResult
    char __padding15[0x6] = {};
    // private System.Net.LazyAsyncResult m_WriteAResult
    // Size: 0x8
    // Offset: 0xA8
    ::System::Net::LazyAsyncResult* m_WriteAResult;
    // Field size check
    static_assert(sizeof(::System::Net::LazyAsyncResult*) == 0x8);
    // private System.Net.LazyAsyncResult m_ReadAResult
    // Size: 0x8
    // Offset: 0xB0
    ::System::Net::LazyAsyncResult* m_ReadAResult;
    // Field size check
    static_assert(sizeof(::System::Net::LazyAsyncResult*) == 0x8);
    // private System.Int32 m_Aborted
    // Size: 0x4
    // Offset: 0xB8
    int m_Aborted;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static private System.Threading.WaitCallback s_GetRequestStreamCallback
    static ::System::Threading::WaitCallback* _get_s_GetRequestStreamCallback();
    // Set static field: static private System.Threading.WaitCallback s_GetRequestStreamCallback
    static void _set_s_GetRequestStreamCallback(::System::Threading::WaitCallback* value);
    // Get static field: static private System.Threading.WaitCallback s_GetResponseCallback
    static ::System::Threading::WaitCallback* _get_s_GetResponseCallback();
    // Set static field: static private System.Threading.WaitCallback s_GetResponseCallback
    static void _set_s_GetResponseCallback(::System::Threading::WaitCallback* value);
    // Get instance field reference: private System.String m_connectionGroupName
    ::StringW& dyn_m_connectionGroupName();
    // Get instance field reference: private System.Int64 m_contentLength
    int64_t& dyn_m_contentLength();
    // Get instance field reference: private System.Net.ICredentials m_credentials
    ::System::Net::ICredentials*& dyn_m_credentials();
    // Get instance field reference: private System.IO.FileAccess m_fileAccess
    ::System::IO::FileAccess& dyn_m_fileAccess();
    // Get instance field reference: private System.Net.WebHeaderCollection m_headers
    ::System::Net::WebHeaderCollection*& dyn_m_headers();
    // Get instance field reference: private System.String m_method
    ::StringW& dyn_m_method();
    // Get instance field reference: private System.Net.IWebProxy m_proxy
    ::System::Net::IWebProxy*& dyn_m_proxy();
    // Get instance field reference: private System.Threading.ManualResetEvent m_readerEvent
    ::System::Threading::ManualResetEvent*& dyn_m_readerEvent();
    // Get instance field reference: private System.Boolean m_readPending
    bool& dyn_m_readPending();
    // Get instance field reference: private System.Net.WebResponse m_response
    ::System::Net::WebResponse*& dyn_m_response();
    // Get instance field reference: private System.IO.Stream m_stream
    ::System::IO::Stream*& dyn_m_stream();
    // Get instance field reference: private System.Boolean m_syncHint
    bool& dyn_m_syncHint();
    // Get instance field reference: private System.Int32 m_timeout
    int& dyn_m_timeout();
    // Get instance field reference: private System.Uri m_uri
    ::System::Uri*& dyn_m_uri();
    // Get instance field reference: private System.Boolean m_writePending
    bool& dyn_m_writePending();
    // Get instance field reference: private System.Boolean m_writing
    bool& dyn_m_writing();
    // Get instance field reference: private System.Net.LazyAsyncResult m_WriteAResult
    ::System::Net::LazyAsyncResult*& dyn_m_WriteAResult();
    // Get instance field reference: private System.Net.LazyAsyncResult m_ReadAResult
    ::System::Net::LazyAsyncResult*& dyn_m_ReadAResult();
    // Get instance field reference: private System.Int32 m_Aborted
    int& dyn_m_Aborted();
    // System.Boolean get_Aborted()
    // Offset: 0xD7F734
    bool get_Aborted();
    // System.Void .ctor(System.Uri uri)
    // Offset: 0xD7EFA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileWebRequest* New_ctor(::System::Uri* uri) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::FileWebRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileWebRequest*, creationType>(uri)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0xD7F47C
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);
    // private System.Boolean CanGetRequestStream()
    // Offset: 0xD7FD4C
    bool CanGetRequestStream();
    // static private System.Void GetRequestStreamCallback(System.Object state)
    // Offset: 0xD80A80
    static void GetRequestStreamCallback(::Il2CppObject* state);
    // static private System.Void GetResponseCallback(System.Object state)
    // Offset: 0xD80D48
    static void GetResponseCallback(::Il2CppObject* state);
    // System.Void UnblockReader()
    // Offset: 0xD81320
    void UnblockReader();
    // public override System.Int64 get_ContentLength()
    // Offset: 0xD7F744
    // Implemented from: System.Net.WebRequest
    // Base method: System.Int64 WebRequest::get_ContentLength()
    int64_t get_ContentLength();
    // public override System.Void set_ContentLength(System.Int64 value)
    // Offset: 0xD7F74C
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_ContentLength(System.Int64 value)
    void set_ContentLength(int64_t value);
    // public override System.Void set_ContentType(System.String value)
    // Offset: 0xD7F7C8
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_ContentType(System.String value)
    void set_ContentType(::StringW value);
    // public override System.Net.ICredentials get_Credentials()
    // Offset: 0xD7F830
    // Implemented from: System.Net.WebRequest
    // Base method: System.Net.ICredentials WebRequest::get_Credentials()
    ::System::Net::ICredentials* get_Credentials();
    // public override System.Void set_Credentials(System.Net.ICredentials value)
    // Offset: 0xD7F838
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_Credentials(System.Net.ICredentials value)
    void set_Credentials(::System::Net::ICredentials* value);
    // public override System.Net.WebHeaderCollection get_Headers()
    // Offset: 0xD7F840
    // Implemented from: System.Net.WebRequest
    // Base method: System.Net.WebHeaderCollection WebRequest::get_Headers()
    ::System::Net::WebHeaderCollection* get_Headers();
    // public override System.String get_Method()
    // Offset: 0xD7F848
    // Implemented from: System.Net.WebRequest
    // Base method: System.String WebRequest::get_Method()
    ::StringW get_Method();
    // public override System.Void set_Method(System.String value)
    // Offset: 0xD7F850
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::set_Method(System.String value)
    void set_Method(::StringW value);
    // public override System.Net.IWebProxy get_Proxy()
    // Offset: 0xD7F930
    // Implemented from: System.Net.WebRequest
    // Base method: System.Net.IWebProxy WebRequest::get_Proxy()
    ::System::Net::IWebProxy* get_Proxy();
    // public override System.Int32 get_Timeout()
    // Offset: 0xD7F938
    // Implemented from: System.Net.WebRequest
    // Base method: System.Int32 WebRequest::get_Timeout()
    int get_Timeout();
    // public override System.Uri get_RequestUri()
    // Offset: 0xD7F940
    // Implemented from: System.Net.WebRequest
    // Base method: System.Uri WebRequest::get_RequestUri()
    ::System::Uri* get_RequestUri();
    // public override System.Boolean get_UseDefaultCredentials()
    // Offset: 0xD813EC
    // Implemented from: System.Net.WebRequest
    // Base method: System.Boolean WebRequest::get_UseDefaultCredentials()
    bool get_UseDefaultCredentials();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0xD7F11C
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileWebRequest* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::FileWebRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileWebRequest*, creationType>(serializationInfo, streamingContext)));
    }
    // static private System.Void .cctor()
    // Offset: 0xD817C0
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::.cctor()
    static void _cctor();
    // protected override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0xD7F488
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.IAsyncResult BeginGetRequestStream(System.AsyncCallback callback, System.Object state)
    // Offset: 0xD7F948
    // Implemented from: System.Net.WebRequest
    // Base method: System.IAsyncResult WebRequest::BeginGetRequestStream(System.AsyncCallback callback, System.Object state)
    ::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.IAsyncResult BeginGetResponse(System.AsyncCallback callback, System.Object state)
    // Offset: 0xD7FDCC
    // Implemented from: System.Net.WebRequest
    // Base method: System.IAsyncResult WebRequest::BeginGetResponse(System.AsyncCallback callback, System.Object state)
    ::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.IO.Stream EndGetRequestStream(System.IAsyncResult asyncResult)
    // Offset: 0xD80108
    // Implemented from: System.Net.WebRequest
    // Base method: System.IO.Stream WebRequest::EndGetRequestStream(System.IAsyncResult asyncResult)
    ::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* asyncResult);
    // public override System.Net.WebResponse EndGetResponse(System.IAsyncResult asyncResult)
    // Offset: 0xD80404
    // Implemented from: System.Net.WebRequest
    // Base method: System.Net.WebResponse WebRequest::EndGetResponse(System.IAsyncResult asyncResult)
    ::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* asyncResult);
    // public override System.Net.WebResponse GetResponse()
    // Offset: 0xD80700
    // Implemented from: System.Net.WebRequest
    // Base method: System.Net.WebResponse WebRequest::GetResponse()
    ::System::Net::WebResponse* GetResponse();
    // public override System.Void Abort()
    // Offset: 0xD81418
    // Implemented from: System.Net.WebRequest
    // Base method: System.Void WebRequest::Abort()
    void Abort();
  }; // System.Net.FileWebRequest
  #pragma pack(pop)
  static check_size<sizeof(FileWebRequest), 184 + sizeof(int)> __System_Net_FileWebRequestSizeCheck;
  static_assert(sizeof(FileWebRequest) == 0xBC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_Aborted
// Il2CppName: get_Aborted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_Aborted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "get_Aborted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::FileWebRequest::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Net::FileWebRequest::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::CanGetRequestStream
// Il2CppName: CanGetRequestStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::CanGetRequestStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "CanGetRequestStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::GetRequestStreamCallback
// Il2CppName: GetRequestStreamCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Net::FileWebRequest::GetRequestStreamCallback)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "GetRequestStreamCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::GetResponseCallback
// Il2CppName: GetResponseCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Net::FileWebRequest::GetResponseCallback)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "GetResponseCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::UnblockReader
// Il2CppName: UnblockReader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::UnblockReader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "UnblockReader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_ContentLength
// Il2CppName: get_ContentLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_ContentLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "get_ContentLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::set_ContentLength
// Il2CppName: set_ContentLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)(int64_t)>(&System::Net::FileWebRequest::set_ContentLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "set_ContentLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::set_ContentType
// Il2CppName: set_ContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)(::StringW)>(&System::Net::FileWebRequest::set_ContentType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "set_ContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_Credentials
// Il2CppName: get_Credentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ICredentials* (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_Credentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "get_Credentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::set_Credentials
// Il2CppName: set_Credentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)(::System::Net::ICredentials*)>(&System::Net::FileWebRequest::set_Credentials)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "set_Credentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_Method
// Il2CppName: get_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_Method)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "get_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::set_Method
// Il2CppName: set_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)(::StringW)>(&System::Net::FileWebRequest::set_Method)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "set_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_Proxy
// Il2CppName: get_Proxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_Proxy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "get_Proxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_Timeout
// Il2CppName: get_Timeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_Timeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "get_Timeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_RequestUri
// Il2CppName: get_RequestUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_RequestUri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "get_RequestUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::get_UseDefaultCredentials
// Il2CppName: get_UseDefaultCredentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::get_UseDefaultCredentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "get_UseDefaultCredentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::FileWebRequest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::FileWebRequest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Net::FileWebRequest::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::BeginGetRequestStream
// Il2CppName: BeginGetRequestStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::FileWebRequest::*)(::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::FileWebRequest::BeginGetRequestStream)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "BeginGetRequestStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, state});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::BeginGetResponse
// Il2CppName: BeginGetResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::FileWebRequest::*)(::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::FileWebRequest::BeginGetResponse)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "BeginGetResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, state});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::EndGetRequestStream
// Il2CppName: EndGetRequestStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (System::Net::FileWebRequest::*)(::System::IAsyncResult*)>(&System::Net::FileWebRequest::EndGetRequestStream)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "EndGetRequestStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::EndGetResponse
// Il2CppName: EndGetResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse* (System::Net::FileWebRequest::*)(::System::IAsyncResult*)>(&System::Net::FileWebRequest::EndGetResponse)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "EndGetResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::GetResponse
// Il2CppName: GetResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse* (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::GetResponse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "GetResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebRequest::Abort
// Il2CppName: Abort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebRequest::*)()>(&System::Net::FileWebRequest::Abort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebRequest*), "Abort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
