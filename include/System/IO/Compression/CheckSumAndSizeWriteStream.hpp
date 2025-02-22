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
// Forward declaring namespace: System::IO::Compression
namespace System::IO::Compression {
  // Forward declaring type: ZipArchiveEntry
  class ZipArchiveEntry;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: Action`6<T1, T2, T3, T4, T5, T6>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
  class Action_6;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Forward declaring type: CheckSumAndSizeWriteStream
  class CheckSumAndSizeWriteStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Compression::CheckSumAndSizeWriteStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::CheckSumAndSizeWriteStream*, "System.IO.Compression", "CheckSumAndSizeWriteStream");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.CheckSumAndSizeWriteStream
  // [TokenAttribute] Offset: FFFFFFFF
  class CheckSumAndSizeWriteStream : public ::System::IO::Stream {
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
    // private readonly System.IO.Stream _baseStream
    // Size: 0x8
    // Offset: 0x28
    ::System::IO::Stream* baseStream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private readonly System.IO.Stream _baseBaseStream
    // Size: 0x8
    // Offset: 0x30
    ::System::IO::Stream* baseBaseStream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Int64 _position
    // Size: 0x8
    // Offset: 0x38
    int64_t position;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.UInt32 _checksum
    // Size: 0x4
    // Offset: 0x40
    uint checksum;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private readonly System.Boolean _leaveOpenOnClose
    // Size: 0x1
    // Offset: 0x44
    bool leaveOpenOnClose;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _canWrite
    // Size: 0x1
    // Offset: 0x45
    bool canWrite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isDisposed
    // Size: 0x1
    // Offset: 0x46
    bool isDisposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _everWritten
    // Size: 0x1
    // Offset: 0x47
    bool everWritten;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Int64 _initialPosition
    // Size: 0x8
    // Offset: 0x48
    int64_t initialPosition;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private readonly System.IO.Compression.ZipArchiveEntry _zipArchiveEntry
    // Size: 0x8
    // Offset: 0x50
    ::System::IO::Compression::ZipArchiveEntry* zipArchiveEntry;
    // Field size check
    static_assert(sizeof(::System::IO::Compression::ZipArchiveEntry*) == 0x8);
    // private readonly System.EventHandler _onClose
    // Size: 0x8
    // Offset: 0x58
    ::System::EventHandler* onClose;
    // Field size check
    static_assert(sizeof(::System::EventHandler*) == 0x8);
    // private readonly System.Action`6<System.Int64,System.Int64,System.UInt32,System.IO.Stream,System.IO.Compression.ZipArchiveEntry,System.EventHandler> _saveCrcAndSizes
    // Size: 0x8
    // Offset: 0x60
    ::System::Action_6<int64_t, int64_t, uint, ::System::IO::Stream*, ::System::IO::Compression::ZipArchiveEntry*, ::System::EventHandler*>* saveCrcAndSizes;
    // Field size check
    static_assert(sizeof(::System::Action_6<int64_t, int64_t, uint, ::System::IO::Stream*, ::System::IO::Compression::ZipArchiveEntry*, ::System::EventHandler*>*) == 0x8);
    public:
    // Get instance field reference: private readonly System.IO.Stream _baseStream
    ::System::IO::Stream*& dyn__baseStream();
    // Get instance field reference: private readonly System.IO.Stream _baseBaseStream
    ::System::IO::Stream*& dyn__baseBaseStream();
    // Get instance field reference: private System.Int64 _position
    int64_t& dyn__position();
    // Get instance field reference: private System.UInt32 _checksum
    uint& dyn__checksum();
    // Get instance field reference: private readonly System.Boolean _leaveOpenOnClose
    bool& dyn__leaveOpenOnClose();
    // Get instance field reference: private System.Boolean _canWrite
    bool& dyn__canWrite();
    // Get instance field reference: private System.Boolean _isDisposed
    bool& dyn__isDisposed();
    // Get instance field reference: private System.Boolean _everWritten
    bool& dyn__everWritten();
    // Get instance field reference: private System.Int64 _initialPosition
    int64_t& dyn__initialPosition();
    // Get instance field reference: private readonly System.IO.Compression.ZipArchiveEntry _zipArchiveEntry
    ::System::IO::Compression::ZipArchiveEntry*& dyn__zipArchiveEntry();
    // Get instance field reference: private readonly System.EventHandler _onClose
    ::System::EventHandler*& dyn__onClose();
    // Get instance field reference: private readonly System.Action`6<System.Int64,System.Int64,System.UInt32,System.IO.Stream,System.IO.Compression.ZipArchiveEntry,System.EventHandler> _saveCrcAndSizes
    ::System::Action_6<int64_t, int64_t, uint, ::System::IO::Stream*, ::System::IO::Compression::ZipArchiveEntry*, ::System::EventHandler*>*& dyn__saveCrcAndSizes();
    // public System.Void .ctor(System.IO.Stream baseStream, System.IO.Stream baseBaseStream, System.Boolean leaveOpenOnClose, System.IO.Compression.ZipArchiveEntry entry, System.EventHandler onClose, System.Action`6<System.Int64,System.Int64,System.UInt32,System.IO.Stream,System.IO.Compression.ZipArchiveEntry,System.EventHandler> saveCrcAndSizes)
    // Offset: 0x111A7E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CheckSumAndSizeWriteStream* New_ctor(::System::IO::Stream* baseStream, ::System::IO::Stream* baseBaseStream, bool leaveOpenOnClose, ::System::IO::Compression::ZipArchiveEntry* entry, ::System::EventHandler* onClose, ::System::Action_6<int64_t, int64_t, uint, ::System::IO::Stream*, ::System::IO::Compression::ZipArchiveEntry*, ::System::EventHandler*>* saveCrcAndSizes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Compression::CheckSumAndSizeWriteStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CheckSumAndSizeWriteStream*, creationType>(baseStream, baseBaseStream, leaveOpenOnClose, entry, onClose, saveCrcAndSizes)));
    }
    // private System.Void ThrowIfDisposed()
    // Offset: 0x111A8F8
    void ThrowIfDisposed();
    // public override System.Int64 get_Length()
    // Offset: 0x111A8A0
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x111A980
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x111A9A4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Boolean get_CanRead()
    // Offset: 0x111A9FC
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x111AA04
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x111AA0C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x111AA14
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x111AA6C
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x111AAC4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x111AB1C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Void Flush()
    // Offset: 0x111ADA4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x111ADDC
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.IO.Compression.CheckSumAndSizeWriteStream
  #pragma pack(pop)
  static check_size<sizeof(CheckSumAndSizeWriteStream), 96 + sizeof(::System::Action_6<int64_t, int64_t, uint, ::System::IO::Stream*, ::System::IO::Compression::ZipArchiveEntry*, ::System::EventHandler*>*)> __System_IO_Compression_CheckSumAndSizeWriteStreamSizeCheck;
  static_assert(sizeof(CheckSumAndSizeWriteStream) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::CheckSumAndSizeWriteStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::CheckSumAndSizeWriteStream::ThrowIfDisposed
// Il2CppName: ThrowIfDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::CheckSumAndSizeWriteStream::*)()>(&System::IO::Compression::CheckSumAndSizeWriteStream::ThrowIfDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::CheckSumAndSizeWriteStream*), "ThrowIfDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::CheckSumAndSizeWriteStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::CheckSumAndSizeWriteStream::*)()>(&System::IO::Compression::CheckSumAndSizeWriteStream::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::CheckSumAndSizeWriteStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::CheckSumAndSizeWriteStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::CheckSumAndSizeWriteStream::*)()>(&System::IO::Compression::CheckSumAndSizeWriteStream::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::CheckSumAndSizeWriteStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::CheckSumAndSizeWriteStream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::CheckSumAndSizeWriteStream::*)(int64_t)>(&System::IO::Compression::CheckSumAndSizeWriteStream::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::CheckSumAndSizeWriteStream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::CheckSumAndSizeWriteStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::CheckSumAndSizeWriteStream::*)()>(&System::IO::Compression::CheckSumAndSizeWriteStream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::CheckSumAndSizeWriteStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::CheckSumAndSizeWriteStream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::CheckSumAndSizeWriteStream::*)()>(&System::IO::Compression::CheckSumAndSizeWriteStream::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::CheckSumAndSizeWriteStream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::CheckSumAndSizeWriteStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::CheckSumAndSizeWriteStream::*)()>(&System::IO::Compression::CheckSumAndSizeWriteStream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::CheckSumAndSizeWriteStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::CheckSumAndSizeWriteStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::CheckSumAndSizeWriteStream::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Compression::CheckSumAndSizeWriteStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::CheckSumAndSizeWriteStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::CheckSumAndSizeWriteStream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::CheckSumAndSizeWriteStream::*)(int64_t, ::System::IO::SeekOrigin)>(&System::IO::Compression::CheckSumAndSizeWriteStream::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::CheckSumAndSizeWriteStream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::CheckSumAndSizeWriteStream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::CheckSumAndSizeWriteStream::*)(int64_t)>(&System::IO::Compression::CheckSumAndSizeWriteStream::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::CheckSumAndSizeWriteStream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::CheckSumAndSizeWriteStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::CheckSumAndSizeWriteStream::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Compression::CheckSumAndSizeWriteStream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::CheckSumAndSizeWriteStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::CheckSumAndSizeWriteStream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::CheckSumAndSizeWriteStream::*)()>(&System::IO::Compression::CheckSumAndSizeWriteStream::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::CheckSumAndSizeWriteStream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::CheckSumAndSizeWriteStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::CheckSumAndSizeWriteStream::*)(bool)>(&System::IO::Compression::CheckSumAndSizeWriteStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::CheckSumAndSizeWriteStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
