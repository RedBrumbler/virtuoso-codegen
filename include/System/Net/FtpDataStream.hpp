// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: FtpWebRequest
  class FtpWebRequest;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: FtpDataStream
  class FtpDataStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::FtpDataStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpDataStream*, "System.Net", "FtpDataStream");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FtpDataStream
  // [TokenAttribute] Offset: FFFFFFFF
  class FtpDataStream : public ::System::IO::Stream {
    public:
    // Nested type: ::System::Net::FtpDataStream::WriteDelegate
    class WriteDelegate;
    // Nested type: ::System::Net::FtpDataStream::ReadDelegate
    class ReadDelegate;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Net.FtpWebRequest request
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::FtpWebRequest* request;
    // Field size check
    static_assert(sizeof(::System::Net::FtpWebRequest*) == 0x8);
    // private System.IO.Stream networkStream
    // Size: 0x8
    // Offset: 0x30
    ::System::IO::Stream* networkStream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x38
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isRead
    // Size: 0x1
    // Offset: 0x39
    bool isRead;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isRead and: totalRead
    char __padding3[0x2] = {};
    // private System.Int32 totalRead
    // Size: 0x4
    // Offset: 0x3C
    int totalRead;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Net.FtpWebRequest request
    ::System::Net::FtpWebRequest*& dyn_request();
    // Get instance field reference: private System.IO.Stream networkStream
    ::System::IO::Stream*& dyn_networkStream();
    // Get instance field reference: private System.Boolean disposed
    bool& dyn_disposed();
    // Get instance field reference: private System.Boolean isRead
    bool& dyn_isRead();
    // Get instance field reference: private System.Int32 totalRead
    int& dyn_totalRead();
    // System.Void .ctor(System.Net.FtpWebRequest request, System.IO.Stream stream, System.Boolean isRead)
    // Offset: 0xD82B90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FtpDataStream* New_ctor(::System::Net::FtpWebRequest* request, ::System::IO::Stream* stream, bool isRead) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::FtpDataStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FtpDataStream*, creationType>(request, stream, isRead)));
    }
    // private System.Int32 ReadInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0xD82DE4
    int ReadInternal(::ArrayW<uint8_t> buffer, int offset, int size);
    // private System.Void WriteInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0xD835C4
    void WriteInternal(::ArrayW<uint8_t> buffer, int offset, int size);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xD83C24
    void System_IDisposable_Dispose();
    // private System.Void CheckDisposed()
    // Offset: 0xD8321C
    void CheckDisposed();
    // public override System.Boolean get_CanRead()
    // Offset: 0xD82C6C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanWrite()
    // Offset: 0xD82C74
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Boolean get_CanSeek()
    // Offset: 0xD82C84
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Int64 get_Length()
    // Offset: 0xD82C8C
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0xD82CCC
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0xD82D0C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Void Close()
    // Offset: 0xD82D4C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Close()
    void Close();
    // public override System.Void Flush()
    // Offset: 0xD82D60
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0xD82D64
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0xD82DA4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    // Offset: 0xD8306C
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t> buffer, int offset, int size, ::System::AsyncCallback* cb, ::Il2CppObject* state);
    // public override System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0xD83294
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::EndRead(System.IAsyncResult asyncResult)
    int EndRead(::System::IAsyncResult* asyncResult);
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0xD833D8
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    int Read(::ArrayW<uint8_t> buffer, int offset, int size);
    // public override System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    // Offset: 0xD836CC
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t> buffer, int offset, int size, ::System::AsyncCallback* cb, ::Il2CppObject* state);
    // public override System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0xD8387C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::EndWrite(System.IAsyncResult asyncResult)
    void EndWrite(::System::IAsyncResult* asyncResult);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0xD839C0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    void Write(::ArrayW<uint8_t> buffer, int offset, int size);
    // protected override System.Void Finalize()
    // Offset: 0xD83BAC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0xD83CA0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Net.FtpDataStream
  #pragma pack(pop)
  static check_size<sizeof(FtpDataStream), 60 + sizeof(int)> __System_Net_FtpDataStreamSizeCheck;
  static_assert(sizeof(FtpDataStream) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::FtpDataStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::FtpDataStream::ReadInternal
// Il2CppName: ReadInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::FtpDataStream::*)(::ArrayW<uint8_t>, int, int)>(&System::Net::FtpDataStream::ReadInternal)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "ReadInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::WriteInternal
// Il2CppName: WriteInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpDataStream::*)(::ArrayW<uint8_t>, int, int)>(&System::Net::FtpDataStream::WriteInternal)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "WriteInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpDataStream::*)()>(&System::Net::FtpDataStream::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::CheckDisposed
// Il2CppName: CheckDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpDataStream::*)()>(&System::Net::FtpDataStream::CheckDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "CheckDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FtpDataStream::*)()>(&System::Net::FtpDataStream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FtpDataStream::*)()>(&System::Net::FtpDataStream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::FtpDataStream::*)()>(&System::Net::FtpDataStream::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::FtpDataStream::*)()>(&System::Net::FtpDataStream::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::FtpDataStream::*)()>(&System::Net::FtpDataStream::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpDataStream::*)(int64_t)>(&System::Net::FtpDataStream::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpDataStream::*)()>(&System::Net::FtpDataStream::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpDataStream::*)()>(&System::Net::FtpDataStream::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::FtpDataStream::*)(int64_t, ::System::IO::SeekOrigin)>(&System::Net::FtpDataStream::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpDataStream::*)(int64_t)>(&System::Net::FtpDataStream::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::BeginRead
// Il2CppName: BeginRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::FtpDataStream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::FtpDataStream::BeginRead)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cb = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "BeginRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size, cb, state});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::EndRead
// Il2CppName: EndRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::FtpDataStream::*)(::System::IAsyncResult*)>(&System::Net::FtpDataStream::EndRead)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "EndRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::FtpDataStream::*)(::ArrayW<uint8_t>, int, int)>(&System::Net::FtpDataStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::BeginWrite
// Il2CppName: BeginWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::FtpDataStream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::FtpDataStream::BeginWrite)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cb = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "BeginWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size, cb, state});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::EndWrite
// Il2CppName: EndWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpDataStream::*)(::System::IAsyncResult*)>(&System::Net::FtpDataStream::EndWrite)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "EndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpDataStream::*)(::ArrayW<uint8_t>, int, int)>(&System::Net::FtpDataStream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpDataStream::*)()>(&System::Net::FtpDataStream::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FtpDataStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FtpDataStream::*)(bool)>(&System::Net::FtpDataStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FtpDataStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
