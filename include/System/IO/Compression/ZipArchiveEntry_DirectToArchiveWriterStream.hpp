// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Compression.ZipArchiveEntry
#include "System/IO/Compression/ZipArchiveEntry.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO::Compression
namespace System::IO::Compression {
  // Forward declaring type: CheckSumAndSizeWriteStream
  class CheckSumAndSizeWriteStream;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream*, "System.IO.Compression", "ZipArchiveEntry/DirectToArchiveWriterStream");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x4A
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.ZipArchiveEntry/System.IO.Compression.DirectToArchiveWriterStream
  // [TokenAttribute] Offset: FFFFFFFF
  class ZipArchiveEntry::DirectToArchiveWriterStream : public ::System::IO::Stream {
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
    // private System.Int64 _position
    // Size: 0x8
    // Offset: 0x28
    int64_t position;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.IO.Compression.CheckSumAndSizeWriteStream _crcSizeStream
    // Size: 0x8
    // Offset: 0x30
    ::System::IO::Compression::CheckSumAndSizeWriteStream* crcSizeStream;
    // Field size check
    static_assert(sizeof(::System::IO::Compression::CheckSumAndSizeWriteStream*) == 0x8);
    // private System.Boolean _everWritten
    // Size: 0x1
    // Offset: 0x38
    bool everWritten;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isDisposed
    // Size: 0x1
    // Offset: 0x39
    bool isDisposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isDisposed and: entry
    char __padding3[0x6] = {};
    // private System.IO.Compression.ZipArchiveEntry _entry
    // Size: 0x8
    // Offset: 0x40
    ::System::IO::Compression::ZipArchiveEntry* entry;
    // Field size check
    static_assert(sizeof(::System::IO::Compression::ZipArchiveEntry*) == 0x8);
    // private System.Boolean _usedZip64inLH
    // Size: 0x1
    // Offset: 0x48
    bool usedZip64inLH;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _canWrite
    // Size: 0x1
    // Offset: 0x49
    bool canWrite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Int64 _position
    int64_t& dyn__position();
    // Get instance field reference: private System.IO.Compression.CheckSumAndSizeWriteStream _crcSizeStream
    ::System::IO::Compression::CheckSumAndSizeWriteStream*& dyn__crcSizeStream();
    // Get instance field reference: private System.Boolean _everWritten
    bool& dyn__everWritten();
    // Get instance field reference: private System.Boolean _isDisposed
    bool& dyn__isDisposed();
    // Get instance field reference: private System.IO.Compression.ZipArchiveEntry _entry
    ::System::IO::Compression::ZipArchiveEntry*& dyn__entry();
    // Get instance field reference: private System.Boolean _usedZip64inLH
    bool& dyn__usedZip64inLH();
    // Get instance field reference: private System.Boolean _canWrite
    bool& dyn__canWrite();
    // public System.Void .ctor(System.IO.Compression.CheckSumAndSizeWriteStream crcSizeStream, System.IO.Compression.ZipArchiveEntry entry)
    // Offset: 0x1128BB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZipArchiveEntry::DirectToArchiveWriterStream* New_ctor(::System::IO::Compression::CheckSumAndSizeWriteStream* crcSizeStream, ::System::IO::Compression::ZipArchiveEntry* entry) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZipArchiveEntry::DirectToArchiveWriterStream*, creationType>(crcSizeStream, entry)));
    }
    // private System.Void ThrowIfDisposed()
    // Offset: 0x112A67C
    void ThrowIfDisposed();
    // public override System.Int64 get_Length()
    // Offset: 0x112A624
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x112A704
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x112A728
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Boolean get_CanRead()
    // Offset: 0x112A780
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x112A788
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x112A790
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x112A798
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x112A7F0
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x112A848
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x112A8A0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Void Flush()
    // Offset: 0x112AA34
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x112AA6C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.IO.Compression.ZipArchiveEntry/System.IO.Compression.DirectToArchiveWriterStream
  #pragma pack(pop)
  static check_size<sizeof(ZipArchiveEntry::DirectToArchiveWriterStream), 73 + sizeof(bool)> __System_IO_Compression_ZipArchiveEntry_DirectToArchiveWriterStreamSizeCheck;
  static_assert(sizeof(ZipArchiveEntry::DirectToArchiveWriterStream) == 0x4A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::ThrowIfDisposed
// Il2CppName: ThrowIfDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::*)()>(&System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::ThrowIfDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream*), "ThrowIfDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::*)()>(&System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::*)()>(&System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::*)(int64_t)>(&System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::*)()>(&System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::*)()>(&System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::*)()>(&System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::*)(int64_t, ::System::IO::SeekOrigin)>(&System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::*)(int64_t)>(&System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::*)()>(&System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::*)(bool)>(&System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchiveEntry::DirectToArchiveWriterStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
