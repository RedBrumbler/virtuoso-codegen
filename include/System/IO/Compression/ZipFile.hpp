// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Compression.CompressionLevel
#include "System/IO/Compression/CompressionLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO::Compression
namespace System::IO::Compression {
  // Forward declaring type: ZipArchive
  class ZipArchive;
  // Forward declaring type: ZipArchiveMode
  struct ZipArchiveMode;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: DirectoryInfo
  class DirectoryInfo;
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Forward declaring type: ZipFile
  class ZipFile;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Compression::ZipFile);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipFile*, "System.IO.Compression", "ZipFile");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.ZipFile
  // [TokenAttribute] Offset: FFFFFFFF
  class ZipFile : public ::Il2CppObject {
    public:
    // static public System.IO.Compression.ZipArchive Open(System.String archiveFileName, System.IO.Compression.ZipArchiveMode mode)
    // Offset: 0x12EE064
    static ::System::IO::Compression::ZipArchive* Open(::StringW archiveFileName, ::System::IO::Compression::ZipArchiveMode mode);
    // static public System.IO.Compression.ZipArchive Open(System.String archiveFileName, System.IO.Compression.ZipArchiveMode mode, System.Text.Encoding entryNameEncoding)
    // Offset: 0x12EE06C
    static ::System::IO::Compression::ZipArchive* Open(::StringW archiveFileName, ::System::IO::Compression::ZipArchiveMode mode, ::System::Text::Encoding* entryNameEncoding);
    // static public System.Void CreateFromDirectory(System.String sourceDirectoryName, System.String destinationArchiveFileName)
    // Offset: 0x12EE240
    static void CreateFromDirectory(::StringW sourceDirectoryName, ::StringW destinationArchiveFileName);
    // static public System.Void ExtractToDirectory(System.String sourceArchiveFileName, System.String destinationDirectoryName)
    // Offset: 0x12EEAA4
    static void ExtractToDirectory(::StringW sourceArchiveFileName, ::StringW destinationDirectoryName);
    // static public System.Void ExtractToDirectory(System.String sourceArchiveFileName, System.String destinationDirectoryName, System.Text.Encoding entryNameEncoding)
    // Offset: 0x12EEAB0
    static void ExtractToDirectory(::StringW sourceArchiveFileName, ::StringW destinationDirectoryName, ::System::Text::Encoding* entryNameEncoding);
    // static public System.Void ExtractToDirectory(System.String sourceArchiveFileName, System.String destinationDirectoryName, System.Text.Encoding entryNameEncoding, System.Boolean overwrite)
    // Offset: 0x12EEAB8
    static void ExtractToDirectory(::StringW sourceArchiveFileName, ::StringW destinationDirectoryName, ::System::Text::Encoding* entryNameEncoding, bool overwrite);
    // static private System.Void DoCreateFromDirectory(System.String sourceDirectoryName, System.String destinationArchiveFileName, System.Nullable`1<System.IO.Compression.CompressionLevel> compressionLevel, System.Boolean includeBaseDirectory, System.Text.Encoding entryNameEncoding)
    // Offset: 0x12EE250
    static void DoCreateFromDirectory(::StringW sourceDirectoryName, ::StringW destinationArchiveFileName, ::System::Nullable_1<::System::IO::Compression::CompressionLevel> compressionLevel, bool includeBaseDirectory, ::System::Text::Encoding* entryNameEncoding);
    // static private System.String EntryFromPath(System.String entry, System.Int32 offset, System.Int32 length, ref System.Char[] buffer, System.Boolean appendPathSeparator)
    // Offset: 0x12EF164
    static ::StringW EntryFromPath(::StringW entry, int offset, int length, ByRef<::ArrayW<::Il2CppChar>> buffer, bool appendPathSeparator);
    // static private System.Void EnsureCapacity(ref System.Char[] buffer, System.Int32 min)
    // Offset: 0x12EFAB4
    static void EnsureCapacity(ByRef<::ArrayW<::Il2CppChar>> buffer, int min);
    // static private System.Boolean IsDirEmpty(System.IO.DirectoryInfo possiblyEmptyDir)
    // Offset: 0x12EF868
    static bool IsDirEmpty(::System::IO::DirectoryInfo* possiblyEmptyDir);
  }; // System.IO.Compression.ZipFile
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::ZipFile::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::ZipArchive* (*)(::StringW, ::System::IO::Compression::ZipArchiveMode)>(&System::IO::Compression::ZipFile::Open)> {
  static const MethodInfo* get() {
    static auto* archiveFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "ZipArchiveMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipFile*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{archiveFileName, mode});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipFile::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::ZipArchive* (*)(::StringW, ::System::IO::Compression::ZipArchiveMode, ::System::Text::Encoding*)>(&System::IO::Compression::ZipFile::Open)> {
  static const MethodInfo* get() {
    static auto* archiveFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "ZipArchiveMode")->byval_arg;
    static auto* entryNameEncoding = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipFile*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{archiveFileName, mode, entryNameEncoding});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipFile::CreateFromDirectory
// Il2CppName: CreateFromDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&System::IO::Compression::ZipFile::CreateFromDirectory)> {
  static const MethodInfo* get() {
    static auto* sourceDirectoryName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationArchiveFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipFile*), "CreateFromDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceDirectoryName, destinationArchiveFileName});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipFile::ExtractToDirectory
// Il2CppName: ExtractToDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&System::IO::Compression::ZipFile::ExtractToDirectory)> {
  static const MethodInfo* get() {
    static auto* sourceArchiveFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationDirectoryName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipFile*), "ExtractToDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceArchiveFileName, destinationDirectoryName});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipFile::ExtractToDirectory
// Il2CppName: ExtractToDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::System::Text::Encoding*)>(&System::IO::Compression::ZipFile::ExtractToDirectory)> {
  static const MethodInfo* get() {
    static auto* sourceArchiveFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationDirectoryName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* entryNameEncoding = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipFile*), "ExtractToDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceArchiveFileName, destinationDirectoryName, entryNameEncoding});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipFile::ExtractToDirectory
// Il2CppName: ExtractToDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::System::Text::Encoding*, bool)>(&System::IO::Compression::ZipFile::ExtractToDirectory)> {
  static const MethodInfo* get() {
    static auto* sourceArchiveFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationDirectoryName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* entryNameEncoding = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    static auto* overwrite = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipFile*), "ExtractToDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceArchiveFileName, destinationDirectoryName, entryNameEncoding, overwrite});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipFile::DoCreateFromDirectory
// Il2CppName: DoCreateFromDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::System::Nullable_1<::System::IO::Compression::CompressionLevel>, bool, ::System::Text::Encoding*)>(&System::IO::Compression::ZipFile::DoCreateFromDirectory)> {
  static const MethodInfo* get() {
    static auto* sourceDirectoryName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destinationArchiveFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* compressionLevel = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.IO.Compression", "CompressionLevel")})->byval_arg;
    static auto* includeBaseDirectory = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* entryNameEncoding = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipFile*), "DoCreateFromDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceDirectoryName, destinationArchiveFileName, compressionLevel, includeBaseDirectory, entryNameEncoding});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipFile::EntryFromPath
// Il2CppName: EntryFromPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int, int, ByRef<::ArrayW<::Il2CppChar>>, bool)>(&System::IO::Compression::ZipFile::EntryFromPath)> {
  static const MethodInfo* get() {
    static auto* entry = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->this_arg;
    static auto* appendPathSeparator = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipFile*), "EntryFromPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entry, offset, length, buffer, appendPathSeparator});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipFile::EnsureCapacity
// Il2CppName: EnsureCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::ArrayW<::Il2CppChar>>, int)>(&System::IO::Compression::ZipFile::EnsureCapacity)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->this_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipFile*), "EnsureCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, min});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipFile::IsDirEmpty
// Il2CppName: IsDirEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IO::DirectoryInfo*)>(&System::IO::Compression::ZipFile::IsDirEmpty)> {
  static const MethodInfo* get() {
    static auto* possiblyEmptyDir = &::il2cpp_utils::GetClassFromName("System.IO", "DirectoryInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipFile*), "IsDirEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{possiblyEmptyDir});
  }
};
