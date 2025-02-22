// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileStream
  class FileStream;
  // Forward declaring type: StreamWriter
  class StreamWriter;
  // Forward declaring type: FileAttributes
  struct FileAttributes;
  // Forward declaring type: FileMode
  struct FileMode;
  // Forward declaring type: StreamReader
  class StreamReader;
  // Forward declaring type: MonoIOStat
  struct MonoIOStat;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: File
  class File;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::File);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::File*, "System.IO", "File");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.File
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57A860
  class File : public ::Il2CppObject {
    public:
    // Get static field: static private System.Nullable`1<System.DateTime> defaultLocalFileTime
    static ::System::Nullable_1<::System::DateTime> _get_defaultLocalFileTime();
    // Set static field: static private System.Nullable`1<System.DateTime> defaultLocalFileTime
    static void _set_defaultLocalFileTime(::System::Nullable_1<::System::DateTime> value);
    // static private System.DateTime get_DefaultLocalFileTime()
    // Offset: 0xC15368
    static ::System::DateTime get_DefaultLocalFileTime();
    // static public System.Void Copy(System.String sourceFileName, System.String destFileName)
    // Offset: 0xC14650
    static void Copy(::StringW sourceFileName, ::StringW destFileName);
    // static public System.Void Copy(System.String sourceFileName, System.String destFileName, System.Boolean overwrite)
    // Offset: 0xC14658
    static void Copy(::StringW sourceFileName, ::StringW destFileName, bool overwrite);
    // static public System.IO.FileStream Create(System.String path)
    // Offset: 0xC14E4C
    static ::System::IO::FileStream* Create(::StringW path);
    // static public System.IO.FileStream Create(System.String path, System.Int32 bufferSize)
    // Offset: 0xC14E54
    static ::System::IO::FileStream* Create(::StringW path, int bufferSize);
    // static public System.IO.StreamWriter CreateText(System.String path)
    // Offset: 0xC14F00
    static ::System::IO::StreamWriter* CreateText(::StringW path);
    // static public System.Void Delete(System.String path)
    // Offset: 0xC14F64
    static void Delete(::StringW path);
    // static public System.Boolean Exists(System.String path)
    // Offset: 0xC0EB94
    static bool Exists(::StringW path);
    // static public System.IO.FileAttributes GetAttributes(System.String path)
    // Offset: 0xC14D24
    static ::System::IO::FileAttributes GetAttributes(::StringW path);
    // static public System.DateTime GetLastWriteTime(System.String path)
    // Offset: 0xC1520C
    static ::System::DateTime GetLastWriteTime(::StringW path);
    // static public System.Void Move(System.String sourceFileName, System.String destFileName)
    // Offset: 0xC1545C
    static void Move(::StringW sourceFileName, ::StringW destFileName);
    // static public System.IO.FileStream Open(System.String path, System.IO.FileMode mode)
    // Offset: 0xC15914
    static ::System::IO::FileStream* Open(::StringW path, ::System::IO::FileMode mode);
    // static public System.IO.FileStream OpenRead(System.String path)
    // Offset: 0xC159D0
    static ::System::IO::FileStream* OpenRead(::StringW path);
    // static public System.IO.StreamReader OpenText(System.String path)
    // Offset: 0xC15A4C
    static ::System::IO::StreamReader* OpenText(::StringW path);
    // static public System.IO.FileStream OpenWrite(System.String path)
    // Offset: 0xC15AAC
    static ::System::IO::FileStream* OpenWrite(::StringW path);
    // static public System.Void SetLastWriteTime(System.String path, System.DateTime lastWriteTime)
    // Offset: 0xC15B28
    static void SetLastWriteTime(::StringW path, ::System::DateTime lastWriteTime);
    // static public System.Byte[] ReadAllBytes(System.String path)
    // Offset: 0xC15C78
    static ::ArrayW<uint8_t> ReadAllBytes(::StringW path);
    // static public System.String ReadAllText(System.String path)
    // Offset: 0xC15F00
    static ::StringW ReadAllText(::StringW path);
    // static public System.Void WriteAllBytes(System.String path, System.Byte[] bytes)
    // Offset: 0xC16070
    static void WriteAllBytes(::StringW path, ::ArrayW<uint8_t> bytes);
    // static public System.Void WriteAllText(System.String path, System.String contents)
    // Offset: 0xC161C8
    static void WriteAllText(::StringW path, ::StringW contents);
    // static public System.Void WriteAllText(System.String path, System.String contents, System.Text.Encoding encoding)
    // Offset: 0xC16244
    static void WriteAllText(::StringW path, ::StringW contents, ::System::Text::Encoding* encoding);
    // static System.Int32 FillAttributeInfo(System.String path, ref System.IO.MonoIOStat data, System.Boolean tryagain, System.Boolean returnErrorOnNotFound)
    // Offset: 0xC163BC
    static int FillAttributeInfo(::StringW path, ByRef<::System::IO::MonoIOStat> data, bool tryagain, bool returnErrorOnNotFound);
  }; // System.IO.File
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::File::get_DefaultLocalFileTime
// Il2CppName: get_DefaultLocalFileTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)()>(&System::IO::File::get_DefaultLocalFileTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "get_DefaultLocalFileTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::File::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&System::IO::File::Copy)> {
  static const MethodInfo* get() {
    static auto* sourceFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceFileName, destFileName});
  }
};
// Writing MetadataGetter for method: System::IO::File::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, bool)>(&System::IO::File::Copy)> {
  static const MethodInfo* get() {
    static auto* sourceFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* overwrite = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceFileName, destFileName, overwrite});
  }
};
// Writing MetadataGetter for method: System::IO::File::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileStream* (*)(::StringW)>(&System::IO::File::Create)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileStream* (*)(::StringW, int)>(&System::IO::File::Create)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, bufferSize});
  }
};
// Writing MetadataGetter for method: System::IO::File::CreateText
// Il2CppName: CreateText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::StreamWriter* (*)(::StringW)>(&System::IO::File::CreateText)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "CreateText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::IO::File::Delete)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::Exists
// Il2CppName: Exists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::IO::File::Exists)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Exists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::GetAttributes
// Il2CppName: GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileAttributes (*)(::StringW)>(&System::IO::File::GetAttributes)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::GetLastWriteTime
// Il2CppName: GetLastWriteTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::StringW)>(&System::IO::File::GetLastWriteTime)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "GetLastWriteTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::Move
// Il2CppName: Move
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&System::IO::File::Move)> {
  static const MethodInfo* get() {
    static auto* sourceFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Move", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceFileName, destFileName});
  }
};
// Writing MetadataGetter for method: System::IO::File::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileStream* (*)(::StringW, ::System::IO::FileMode)>(&System::IO::File::Open)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("System.IO", "FileMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, mode});
  }
};
// Writing MetadataGetter for method: System::IO::File::OpenRead
// Il2CppName: OpenRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileStream* (*)(::StringW)>(&System::IO::File::OpenRead)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "OpenRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::OpenText
// Il2CppName: OpenText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::StreamReader* (*)(::StringW)>(&System::IO::File::OpenText)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "OpenText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::OpenWrite
// Il2CppName: OpenWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileStream* (*)(::StringW)>(&System::IO::File::OpenWrite)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "OpenWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::SetLastWriteTime
// Il2CppName: SetLastWriteTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::DateTime)>(&System::IO::File::SetLastWriteTime)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lastWriteTime = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "SetLastWriteTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, lastWriteTime});
  }
};
// Writing MetadataGetter for method: System::IO::File::ReadAllBytes
// Il2CppName: ReadAllBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&System::IO::File::ReadAllBytes)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "ReadAllBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::ReadAllText
// Il2CppName: ReadAllText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::File::ReadAllText)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "ReadAllText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::File::WriteAllBytes
// Il2CppName: WriteAllBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>)>(&System::IO::File::WriteAllBytes)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "WriteAllBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, bytes});
  }
};
// Writing MetadataGetter for method: System::IO::File::WriteAllText
// Il2CppName: WriteAllText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&System::IO::File::WriteAllText)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* contents = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "WriteAllText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, contents});
  }
};
// Writing MetadataGetter for method: System::IO::File::WriteAllText
// Il2CppName: WriteAllText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::System::Text::Encoding*)>(&System::IO::File::WriteAllText)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* contents = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* encoding = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "WriteAllText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, contents, encoding});
  }
};
// Writing MetadataGetter for method: System::IO::File::FillAttributeInfo
// Il2CppName: FillAttributeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, ByRef<::System::IO::MonoIOStat>, bool, bool)>(&System::IO::File::FillAttributeInfo)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System.IO", "MonoIOStat")->this_arg;
    static auto* tryagain = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* returnErrorOnNotFound = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::File*), "FillAttributeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, data, tryagain, returnErrorOnNotFound});
  }
};
