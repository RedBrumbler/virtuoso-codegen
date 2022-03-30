// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
  // Forward declaring type: Encoder
  class Encoder;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: StreamWriter
  class StreamWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::StreamWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StreamWriter*, "System.IO", "StreamWriter");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.StreamWriter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57A79C
  class StreamWriter : public ::System::IO::TextWriter {
    public:
    // Nested type: ::System::IO::StreamWriter::$WriteAsyncInternal$d__54
    struct $WriteAsyncInternal$d__54;
    // Nested type: ::System::IO::StreamWriter::$FlushAsyncInternal$d__67
    struct $FlushAsyncInternal$d__67;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x28
    ::System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Text.Encoding encoding
    // Size: 0x8
    // Offset: 0x30
    ::System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(::System::Text::Encoding*) == 0x8);
    // private System.Text.Encoder encoder
    // Size: 0x8
    // Offset: 0x38
    ::System::Text::Encoder* encoder;
    // Field size check
    static_assert(sizeof(::System::Text::Encoder*) == 0x8);
    // private System.Byte[] byteBuffer
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> byteBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Char[] charBuffer
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::Il2CppChar> charBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // private System.Int32 charPos
    // Size: 0x4
    // Offset: 0x50
    int charPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 charLen
    // Size: 0x4
    // Offset: 0x54
    int charLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean autoFlush
    // Size: 0x1
    // Offset: 0x58
    bool autoFlush;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean haveWrittenPreamble
    // Size: 0x1
    // Offset: 0x59
    bool haveWrittenPreamble;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean closable
    // Size: 0x1
    // Offset: 0x5A
    bool closable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: closable and: asyncWriteTask
    char __padding9[0x5] = {};
    // private System.Threading.Tasks.Task _asyncWriteTask
    // Size: 0x8
    // Offset: 0x60
    ::System::Threading::Tasks::Task* asyncWriteTask;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    public:
    // Get static field: static public readonly System.IO.StreamWriter Null
    static ::System::IO::StreamWriter* _get_Null();
    // Set static field: static public readonly System.IO.StreamWriter Null
    static void _set_Null(::System::IO::StreamWriter* value);
    // Get static field: static private System.Text.Encoding _UTF8NoBOM
    static ::System::Text::Encoding* _get__UTF8NoBOM();
    // Set static field: static private System.Text.Encoding _UTF8NoBOM
    static void _set__UTF8NoBOM(::System::Text::Encoding* value);
    // Get instance field reference: private System.IO.Stream stream
    ::System::IO::Stream*& dyn_stream();
    // Get instance field reference: private System.Text.Encoding encoding
    ::System::Text::Encoding*& dyn_encoding();
    // Get instance field reference: private System.Text.Encoder encoder
    ::System::Text::Encoder*& dyn_encoder();
    // Get instance field reference: private System.Byte[] byteBuffer
    ::ArrayW<uint8_t>& dyn_byteBuffer();
    // Get instance field reference: private System.Char[] charBuffer
    ::ArrayW<::Il2CppChar>& dyn_charBuffer();
    // Get instance field reference: private System.Int32 charPos
    int& dyn_charPos();
    // Get instance field reference: private System.Int32 charLen
    int& dyn_charLen();
    // Get instance field reference: private System.Boolean autoFlush
    bool& dyn_autoFlush();
    // Get instance field reference: private System.Boolean haveWrittenPreamble
    bool& dyn_haveWrittenPreamble();
    // Get instance field reference: private System.Boolean closable
    bool& dyn_closable();
    // Get instance field reference: private System.Threading.Tasks.Task _asyncWriteTask
    ::System::Threading::Tasks::Task*& dyn__asyncWriteTask();
    // static System.Text.Encoding get_UTF8NoBOM()
    // Offset: 0xFF7844
    static ::System::Text::Encoding* get_UTF8NoBOM();
    // public System.Void set_AutoFlush(System.Boolean value)
    // Offset: 0xFF8438
    void set_AutoFlush(bool value);
    // System.Boolean get_LeaveOpen()
    // Offset: 0xFF82A4
    bool get_LeaveOpen();
    // private System.Void set_CharPos_Prop(System.Int32 value)
    // Offset: 0xFF8DBC
    void set_CharPos_Prop(int value);
    // private System.Void set_HaveWrittenPreamble_Prop(System.Boolean value)
    // Offset: 0xFF8DC4
    void set_HaveWrittenPreamble_Prop(bool value);
    // public System.Void .ctor(System.IO.Stream stream)
    // Offset: 0xFF79A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::System::IO::Stream* stream) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(stream)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding)
    // Offset: 0xFF7BD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(stream, encoding)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding, System.Int32 bufferSize, System.Boolean leaveOpen)
    // Offset: 0xFF7A28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, int bufferSize, bool leaveOpen) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(stream, encoding, bufferSize, leaveOpen)));
    }
    // public System.Void .ctor(System.String path, System.Boolean append)
    // Offset: 0xFF7D20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::StringW path, bool append) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(path, append)));
    }
    // public System.Void .ctor(System.String path, System.Boolean append, System.Text.Encoding encoding)
    // Offset: 0xFF7DB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::StringW path, bool append, ::System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(path, append, encoding)));
    }
    // public System.Void .ctor(System.String path, System.Boolean append, System.Text.Encoding encoding, System.Int32 bufferSize)
    // Offset: 0xFF7DA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::StringW path, bool append, ::System::Text::Encoding* encoding, int bufferSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(path, append, encoding, bufferSize)));
    }
    // System.Void .ctor(System.String path, System.Boolean append, System.Text.Encoding encoding, System.Int32 bufferSize, System.Boolean checkHost)
    // Offset: 0xFF7DC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::StringW path, bool append, ::System::Text::Encoding* encoding, int bufferSize, bool checkHost) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(path, append, encoding, bufferSize, checkHost)));
    }
    // private System.Void CheckAsyncTaskInProgress()
    // Offset: 0xFF77C0
    void CheckAsyncTaskInProgress();
    // private System.Void Init(System.IO.Stream streamArg, System.Text.Encoding encodingArg, System.Int32 bufferSize, System.Boolean shouldLeaveOpen)
    // Offset: 0xFF7BE4
    void Init(::System::IO::Stream* streamArg, ::System::Text::Encoding* encodingArg, int bufferSize, bool shouldLeaveOpen);
    // static private System.IO.Stream CreateFile(System.String path, System.Boolean append, System.Boolean checkHost)
    // Offset: 0xFF7FCC
    static ::System::IO::Stream* CreateFile(::StringW path, bool append, bool checkHost);
    // private System.Void Flush(System.Boolean flushStream, System.Boolean flushEncoder)
    // Offset: 0xFF82B4
    void Flush(bool flushStream, bool flushEncoder);
    // static private System.Threading.Tasks.Task WriteAsyncInternal(System.IO.StreamWriter _this, System.String value, System.Char[] charBuffer, System.Int32 charPos, System.Int32 charLen, System.Char[] coreNewLine, System.Boolean autoFlush, System.Boolean appendNewLine)
    // Offset: 0xFF8C5C
    static ::System::Threading::Tasks::Task* WriteAsyncInternal(::System::IO::StreamWriter* _this, ::StringW value, ::ArrayW<::Il2CppChar> charBuffer, int charPos, int charLen, ::ArrayW<::Il2CppChar> coreNewLine, bool autoFlush, bool appendNewLine);
    // private System.Threading.Tasks.Task FlushAsyncInternal(System.Boolean flushStream, System.Boolean flushEncoder, System.Char[] sCharBuffer, System.Int32 sCharPos)
    // Offset: 0xFF8DD0
    ::System::Threading::Tasks::Task* FlushAsyncInternal(bool flushStream, bool flushEncoder, ::ArrayW<::Il2CppChar> sCharBuffer, int sCharPos);
    // static private System.Threading.Tasks.Task FlushAsyncInternal(System.IO.StreamWriter _this, System.Boolean flushStream, System.Boolean flushEncoder, System.Char[] charBuffer, System.Int32 charPos, System.Boolean haveWrittenPreamble, System.Text.Encoding encoding, System.Text.Encoder encoder, System.Byte[] byteBuffer, System.IO.Stream stream)
    // Offset: 0xFF8EFC
    static ::System::Threading::Tasks::Task* FlushAsyncInternal(::System::IO::StreamWriter* _this, bool flushStream, bool flushEncoder, ::ArrayW<::Il2CppChar> charBuffer, int charPos, bool haveWrittenPreamble, ::System::Text::Encoding* encoding, ::System::Text::Encoder* encoder, ::ArrayW<uint8_t> byteBuffer, ::System::IO::Stream* stream);
    // System.Void .ctor()
    // Offset: 0xFF7940
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xFF9074
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.cctor()
    static void _cctor();
    // public override System.Void Close()
    // Offset: 0xFF80C4
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0xFF813C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Void Flush()
    // Offset: 0xFF840C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Flush()
    void Flush();
    // public override System.Void Write(System.Char value)
    // Offset: 0xFF848C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char value)
    void Write(::Il2CppChar value);
    // public override System.Void Write(System.Char[] buffer)
    // Offset: 0xFF8528
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer)
    void Write(::ArrayW<::Il2CppChar> buffer);
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0xFF8600
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Void Write(System.String value)
    // Offset: 0xFF8818
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.String value)
    void Write(::StringW value);
    // public override System.Threading.Tasks.Task WriteAsync(System.String value)
    // Offset: 0xFF8A8C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Threading.Tasks.Task TextWriter::WriteAsync(System.String value)
    ::System::Threading::Tasks::Task* WriteAsync(::StringW value);
  }; // System.IO.StreamWriter
  #pragma pack(pop)
  static check_size<sizeof(StreamWriter), 96 + sizeof(::System::Threading::Tasks::Task*)> __System_IO_StreamWriterSizeCheck;
  static_assert(sizeof(StreamWriter) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::StreamWriter::get_UTF8NoBOM
// Il2CppName: get_UTF8NoBOM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&System::IO::StreamWriter::get_UTF8NoBOM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "get_UTF8NoBOM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::set_AutoFlush
// Il2CppName: set_AutoFlush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(bool)>(&System::IO::StreamWriter::set_AutoFlush)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "set_AutoFlush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::get_LeaveOpen
// Il2CppName: get_LeaveOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::StreamWriter::*)()>(&System::IO::StreamWriter::get_LeaveOpen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "get_LeaveOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::set_CharPos_Prop
// Il2CppName: set_CharPos_Prop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(int)>(&System::IO::StreamWriter::set_CharPos_Prop)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "set_CharPos_Prop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::set_HaveWrittenPreamble_Prop
// Il2CppName: set_HaveWrittenPreamble_Prop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(bool)>(&System::IO::StreamWriter::set_HaveWrittenPreamble_Prop)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "set_HaveWrittenPreamble_Prop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::CheckAsyncTaskInProgress
// Il2CppName: CheckAsyncTaskInProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)()>(&System::IO::StreamWriter::CheckAsyncTaskInProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "CheckAsyncTaskInProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(::System::IO::Stream*, ::System::Text::Encoding*, int, bool)>(&System::IO::StreamWriter::Init)> {
  static const MethodInfo* get() {
    static auto* streamArg = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* encodingArg = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    static auto* bufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* shouldLeaveOpen = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{streamArg, encodingArg, bufferSize, shouldLeaveOpen});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::CreateFile
// Il2CppName: CreateFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)(::StringW, bool, bool)>(&System::IO::StreamWriter::CreateFile)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* append = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* checkHost = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "CreateFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, append, checkHost});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(bool, bool)>(&System::IO::StreamWriter::Flush)> {
  static const MethodInfo* get() {
    static auto* flushStream = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* flushEncoder = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flushStream, flushEncoder});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::WriteAsyncInternal
// Il2CppName: WriteAsyncInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::StreamWriter*, ::StringW, ::ArrayW<::Il2CppChar>, int, int, ::ArrayW<::Il2CppChar>, bool, bool)>(&System::IO::StreamWriter::WriteAsyncInternal)> {
  static const MethodInfo* get() {
    static auto* _this = &::il2cpp_utils::GetClassFromName("System.IO", "StreamWriter")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* charBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* coreNewLine = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* autoFlush = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* appendNewLine = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "WriteAsyncInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_this, value, charBuffer, charPos, charLen, coreNewLine, autoFlush, appendNewLine});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::FlushAsyncInternal
// Il2CppName: FlushAsyncInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::StreamWriter::*)(bool, bool, ::ArrayW<::Il2CppChar>, int)>(&System::IO::StreamWriter::FlushAsyncInternal)> {
  static const MethodInfo* get() {
    static auto* flushStream = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* flushEncoder = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* sCharBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* sCharPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "FlushAsyncInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flushStream, flushEncoder, sCharBuffer, sCharPos});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::FlushAsyncInternal
// Il2CppName: FlushAsyncInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::System::IO::StreamWriter*, bool, bool, ::ArrayW<::Il2CppChar>, int, bool, ::System::Text::Encoding*, ::System::Text::Encoder*, ::ArrayW<uint8_t>, ::System::IO::Stream*)>(&System::IO::StreamWriter::FlushAsyncInternal)> {
  static const MethodInfo* get() {
    static auto* _this = &::il2cpp_utils::GetClassFromName("System.IO", "StreamWriter")->byval_arg;
    static auto* flushStream = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* flushEncoder = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* charBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charPos = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* haveWrittenPreamble = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    static auto* encoder = &::il2cpp_utils::GetClassFromName("System.Text", "Encoder")->byval_arg;
    static auto* byteBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "FlushAsyncInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_this, flushStream, flushEncoder, charBuffer, charPos, haveWrittenPreamble, encoding, encoder, byteBuffer, stream});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::StreamWriter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)()>(&System::IO::StreamWriter::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(bool)>(&System::IO::StreamWriter::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)()>(&System::IO::StreamWriter::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(::Il2CppChar)>(&System::IO::StreamWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(::ArrayW<::Il2CppChar>)>(&System::IO::StreamWriter::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::IO::StreamWriter::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(::StringW)>(&System::IO::StreamWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::IO::StreamWriter::*)(::StringW)>(&System::IO::StreamWriter::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};