// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebResponse
#include "System/Net/WebResponse.hpp"
// Including type: System.Net.ICloseEx
#include "System/Net/ICloseEx.hpp"
// Including type: System.IO.FileAccess
#include "System/IO/FileAccess.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: FileWebRequest
  class FileWebRequest;
  // Forward declaring type: CloseExState
  struct CloseExState;
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
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: FileWebResponse
  class FileWebResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::FileWebResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FileWebResponse*, "System.Net", "FileWebResponse");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FileWebResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class FileWebResponse : public ::System::Net::WebResponse/*, public ::System::Net::ICloseEx*/ {
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
    // private System.Boolean m_closed
    // Size: 0x1
    // Offset: 0x1A
    bool m_closed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_closed and: m_contentLength
    char __padding0[0x5] = {};
    // private System.Int64 m_contentLength
    // Size: 0x8
    // Offset: 0x20
    int64_t m_contentLength;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.IO.FileAccess m_fileAccess
    // Size: 0x4
    // Offset: 0x28
    ::System::IO::FileAccess m_fileAccess;
    // Field size check
    static_assert(sizeof(::System::IO::FileAccess) == 0x4);
    // Padding between fields: m_fileAccess and: m_headers
    char __padding2[0x4] = {};
    // private System.Net.WebHeaderCollection m_headers
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::WebHeaderCollection* m_headers;
    // Field size check
    static_assert(sizeof(::System::Net::WebHeaderCollection*) == 0x8);
    // private System.IO.Stream m_stream
    // Size: 0x8
    // Offset: 0x38
    ::System::IO::Stream* m_stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Uri m_uri
    // Size: 0x8
    // Offset: 0x40
    ::System::Uri* m_uri;
    // Field size check
    static_assert(sizeof(::System::Uri*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Net::ICloseEx
    operator ::System::Net::ICloseEx() noexcept {
      return *reinterpret_cast<::System::Net::ICloseEx*>(this);
    }
    // Get instance field reference: private System.Boolean m_closed
    bool& dyn_m_closed();
    // Get instance field reference: private System.Int64 m_contentLength
    int64_t& dyn_m_contentLength();
    // Get instance field reference: private System.IO.FileAccess m_fileAccess
    ::System::IO::FileAccess& dyn_m_fileAccess();
    // Get instance field reference: private System.Net.WebHeaderCollection m_headers
    ::System::Net::WebHeaderCollection*& dyn_m_headers();
    // Get instance field reference: private System.IO.Stream m_stream
    ::System::IO::Stream*& dyn_m_stream();
    // Get instance field reference: private System.Uri m_uri
    ::System::Uri*& dyn_m_uri();
    // System.Void .ctor(System.Net.FileWebRequest request, System.Uri uri, System.IO.FileAccess access, System.Boolean asyncHint)
    // Offset: 0xD81044
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileWebResponse* New_ctor(::System::Net::FileWebRequest* request, ::System::Uri* uri, ::System::IO::FileAccess access, bool asyncHint) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::FileWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileWebResponse*, creationType>(request, uri, access, asyncHint)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0xD81BC8
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);
    // private System.Void CheckDisposed()
    // Offset: 0xD81DB4
    void CheckDisposed();
    // private System.Void System.Net.ICloseEx.CloseEx(System.Net.CloseExState closeState)
    // Offset: 0xD81ED0
    void System_Net_ICloseEx_CloseEx(::System::Net::CloseExState closeState);
    // public override System.Net.WebHeaderCollection get_Headers()
    // Offset: 0xD81D90
    // Implemented from: System.Net.WebResponse
    // Base method: System.Net.WebHeaderCollection WebResponse::get_Headers()
    ::System::Net::WebHeaderCollection* get_Headers();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0xD819B8
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileWebResponse* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::FileWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileWebResponse*, creationType>(serializationInfo, streamingContext)));
    }
    // protected override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0xD81BD4
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.Void Close()
    // Offset: 0xD81E2C
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::Close()
    void Close();
    // public override System.IO.Stream GetResponseStream()
    // Offset: 0xD82044
    // Implemented from: System.Net.WebResponse
    // Base method: System.IO.Stream WebResponse::GetResponseStream()
    ::System::IO::Stream* GetResponseStream();
  }; // System.Net.FileWebResponse
  #pragma pack(pop)
  static check_size<sizeof(FileWebResponse), 64 + sizeof(::System::Uri*)> __System_Net_FileWebResponseSizeCheck;
  static_assert(sizeof(FileWebResponse) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::FileWebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::FileWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Net::FileWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebResponse*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebResponse::CheckDisposed
// Il2CppName: CheckDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebResponse::*)()>(&System::Net::FileWebResponse::CheckDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebResponse*), "CheckDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebResponse::System_Net_ICloseEx_CloseEx
// Il2CppName: System.Net.ICloseEx.CloseEx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebResponse::*)(::System::Net::CloseExState)>(&System::Net::FileWebResponse::System_Net_ICloseEx_CloseEx)> {
  static const MethodInfo* get() {
    static auto* closeState = &::il2cpp_utils::GetClassFromName("System.Net", "CloseExState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebResponse*), "System.Net.ICloseEx.CloseEx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{closeState});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebResponse::get_Headers
// Il2CppName: get_Headers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (System::Net::FileWebResponse::*)()>(&System::Net::FileWebResponse::get_Headers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebResponse*), "get_Headers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::FileWebResponse::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Net::FileWebResponse::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebResponse*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebResponse::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebResponse::*)()>(&System::Net::FileWebResponse::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebResponse*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebResponse::GetResponseStream
// Il2CppName: GetResponseStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (System::Net::FileWebResponse::*)()>(&System::Net::FileWebResponse::GetResponseStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebResponse*), "GetResponseStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
