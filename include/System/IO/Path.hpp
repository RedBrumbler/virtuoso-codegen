// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: Path
  class Path;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Path);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Path*, "System.IO", "Path");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Path
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57A98C
  class Path : public ::Il2CppObject {
    public:
    // [ObsoleteAttribute] Offset: 0x57F1A0
    // Get static field: static public readonly System.Char[] InvalidPathChars
    static ::ArrayW<::Il2CppChar> _get_InvalidPathChars();
    // Set static field: static public readonly System.Char[] InvalidPathChars
    static void _set_InvalidPathChars(::ArrayW<::Il2CppChar> value);
    // Get static field: static public readonly System.Char AltDirectorySeparatorChar
    static ::Il2CppChar _get_AltDirectorySeparatorChar();
    // Set static field: static public readonly System.Char AltDirectorySeparatorChar
    static void _set_AltDirectorySeparatorChar(::Il2CppChar value);
    // Get static field: static public readonly System.Char DirectorySeparatorChar
    static ::Il2CppChar _get_DirectorySeparatorChar();
    // Set static field: static public readonly System.Char DirectorySeparatorChar
    static void _set_DirectorySeparatorChar(::Il2CppChar value);
    // Get static field: static public readonly System.Char PathSeparator
    static ::Il2CppChar _get_PathSeparator();
    // Set static field: static public readonly System.Char PathSeparator
    static void _set_PathSeparator(::Il2CppChar value);
    // Get static field: static readonly System.String DirectorySeparatorStr
    static ::StringW _get_DirectorySeparatorStr();
    // Set static field: static readonly System.String DirectorySeparatorStr
    static void _set_DirectorySeparatorStr(::StringW value);
    // Get static field: static public readonly System.Char VolumeSeparatorChar
    static ::Il2CppChar _get_VolumeSeparatorChar();
    // Set static field: static public readonly System.Char VolumeSeparatorChar
    static void _set_VolumeSeparatorChar(::Il2CppChar value);
    // Get static field: static readonly System.Char[] PathSeparatorChars
    static ::ArrayW<::Il2CppChar> _get_PathSeparatorChars();
    // Set static field: static readonly System.Char[] PathSeparatorChars
    static void _set_PathSeparatorChars(::ArrayW<::Il2CppChar> value);
    // Get static field: static private readonly System.Boolean dirEqualsVolume
    static bool _get_dirEqualsVolume();
    // Set static field: static private readonly System.Boolean dirEqualsVolume
    static void _set_dirEqualsVolume(bool value);
    // Get static field: static readonly System.Char[] trimEndCharsWindows
    static ::ArrayW<::Il2CppChar> _get_trimEndCharsWindows();
    // Set static field: static readonly System.Char[] trimEndCharsWindows
    static void _set_trimEndCharsWindows(::ArrayW<::Il2CppChar> value);
    // Get static field: static readonly System.Char[] trimEndCharsUnix
    static ::ArrayW<::Il2CppChar> _get_trimEndCharsUnix();
    // Set static field: static readonly System.Char[] trimEndCharsUnix
    static void _set_trimEndCharsUnix(::ArrayW<::Il2CppChar> value);
    // static System.String get_DirectorySeparatorCharAsString()
    // Offset: 0x1130820
    static ::StringW get_DirectorySeparatorCharAsString();
    // static System.Char[] get_TrimEndChars()
    // Offset: 0x1130884
    static ::ArrayW<::Il2CppChar> get_TrimEndChars();
    // static private System.Void .cctor()
    // Offset: 0x112F8F4
    static void _cctor();
    // static public System.String ChangeExtension(System.String path, System.String extension)
    // Offset: 0x112C8C8
    static ::StringW ChangeExtension(::StringW path, ::StringW extension);
    // static public System.String Combine(System.String path1, System.String path2)
    // Offset: 0x112CB84
    static ::StringW Combine(::StringW path1, ::StringW path2);
    // static System.String CleanPath(System.String s)
    // Offset: 0x112D008
    static ::StringW CleanPath(::StringW s);
    // static public System.String GetDirectoryName(System.String path)
    // Offset: 0x112D4FC
    static ::StringW GetDirectoryName(::StringW path);
    // static public System.String GetExtension(System.String path)
    // Offset: 0x112DD4C
    static ::StringW GetExtension(::StringW path);
    // static public System.String GetFileName(System.String path)
    // Offset: 0x112DE88
    static ::StringW GetFileName(::StringW path);
    // static public System.String GetFileNameWithoutExtension(System.String path)
    // Offset: 0x112DFA8
    static ::StringW GetFileNameWithoutExtension(::StringW path);
    // static public System.String GetFullPath(System.String path)
    // Offset: 0x112E010
    static ::StringW GetFullPath(::StringW path);
    // static System.String GetFullPathInternal(System.String path)
    // Offset: 0x112E7E8
    static ::StringW GetFullPathInternal(::StringW path);
    // static private System.Int32 GetFullPathName(System.String path, System.Int32 numBufferChars, System.Text.StringBuilder buffer, ref System.IntPtr lpFilePartOrNull)
    // Offset: 0x112E848
    static int GetFullPathName(::StringW path, int numBufferChars, ::System::Text::StringBuilder* buffer, ByRef<::System::IntPtr> lpFilePartOrNull);
    // static System.String GetFullPathName(System.String path)
    // Offset: 0x112E928
    static ::StringW GetFullPathName(::StringW path);
    // static System.String WindowsDriveAdjustment(System.String path)
    // Offset: 0x112EB08
    static ::StringW WindowsDriveAdjustment(::StringW path);
    // static System.String InsecureGetFullPath(System.String path)
    // Offset: 0x112E084
    static ::StringW InsecureGetFullPath(::StringW path);
    // static System.Boolean IsDirectorySeparator(System.Char c)
    // Offset: 0x112EDF8
    static bool IsDirectorySeparator(::Il2CppChar c);
    // static public System.String GetPathRoot(System.String path)
    // Offset: 0x112D8B0
    static ::StringW GetPathRoot(::StringW path);
    // static public System.String GetTempPath()
    // Offset: 0x112F680
    static ::StringW GetTempPath();
    // static private System.String get_temp_path()
    // Offset: 0x112F798
    static ::StringW get_temp_path();
    // static public System.Boolean IsPathRooted(System.String path)
    // Offset: 0x112CE2C
    static bool IsPathRooted(::StringW path);
    // static public System.Char[] GetInvalidFileNameChars()
    // Offset: 0x112F79C
    static ::ArrayW<::Il2CppChar> GetInvalidFileNameChars();
    // static public System.Char[] GetInvalidPathChars()
    // Offset: 0x112F85C
    static ::ArrayW<::Il2CppChar> GetInvalidPathChars();
    // static private System.Int32 findExtension(System.String path)
    // Offset: 0x112CADC
    static int findExtension(::StringW path);
    // static private System.String GetServerAndShare(System.String path)
    // Offset: 0x112FADC
    static ::StringW GetServerAndShare(::StringW path);
    // static private System.Boolean SameRoot(System.String root, System.String path)
    // Offset: 0x112FC54
    static bool SameRoot(::StringW root, ::StringW path);
    // static private System.String CanonicalizePath(System.String path)
    // Offset: 0x112EE98
    static ::StringW CanonicalizePath(::StringW path);
    // static public System.String Combine(params System.String[] paths)
    // Offset: 0x112FF78
    static ::StringW Combine(::ArrayW<::StringW> paths);
    // static public System.String Combine(System.String path1, System.String path2, System.String path3)
    // Offset: 0x11302B0
    static ::StringW Combine(::StringW path1, ::StringW path2, ::StringW path3);
    // static public System.String Combine(System.String path1, System.String path2, System.String path3, System.String path4)
    // Offset: 0x1130460
    static ::StringW Combine(::StringW path1, ::StringW path2, ::StringW path3, ::StringW path4);
    // static System.Void Validate(System.String path)
    // Offset: 0x1130664
    static void Validate(::StringW path);
    // static System.Void Validate(System.String path, System.String parameterName)
    // Offset: 0x11306DC
    static void Validate(::StringW path, ::StringW parameterName);
    // static System.Void CheckSearchPattern(System.String searchPattern)
    // Offset: 0x1130920
    static void CheckSearchPattern(::StringW searchPattern);
    // static System.Void CheckInvalidPathChars(System.String path, System.Boolean checkAdditional)
    // Offset: 0x1130AB4
    static void CheckInvalidPathChars(::StringW path, bool checkAdditional);
    // static System.String InternalCombine(System.String path1, System.String path2)
    // Offset: 0x1130BF8
    static ::StringW InternalCombine(::StringW path1, ::StringW path2);
  }; // System.IO.Path
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Path::get_DirectorySeparatorCharAsString
// Il2CppName: get_DirectorySeparatorCharAsString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::IO::Path::get_DirectorySeparatorCharAsString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "get_DirectorySeparatorCharAsString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Path::get_TrimEndChars
// Il2CppName: get_TrimEndChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppChar> (*)()>(&System::IO::Path::get_TrimEndChars)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "get_TrimEndChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Path::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::Path::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Path::ChangeExtension
// Il2CppName: ChangeExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&System::IO::Path::ChangeExtension)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* extension = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "ChangeExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, extension});
  }
};
// Writing MetadataGetter for method: System::IO::Path::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&System::IO::Path::Combine)> {
  static const MethodInfo* get() {
    static auto* path1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* path2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path1, path2});
  }
};
// Writing MetadataGetter for method: System::IO::Path::CleanPath
// Il2CppName: CleanPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::Path::CleanPath)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "CleanPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetDirectoryName
// Il2CppName: GetDirectoryName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::Path::GetDirectoryName)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetDirectoryName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetExtension
// Il2CppName: GetExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::Path::GetExtension)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetFileName
// Il2CppName: GetFileName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::Path::GetFileName)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetFileName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetFileNameWithoutExtension
// Il2CppName: GetFileNameWithoutExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::Path::GetFileNameWithoutExtension)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetFileNameWithoutExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetFullPath
// Il2CppName: GetFullPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::Path::GetFullPath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetFullPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetFullPathInternal
// Il2CppName: GetFullPathInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::Path::GetFullPathInternal)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetFullPathInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetFullPathName
// Il2CppName: GetFullPathName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, int, ::System::Text::StringBuilder*, ByRef<::System::IntPtr>)>(&System::IO::Path::GetFullPathName)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* numBufferChars = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* lpFilePartOrNull = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetFullPathName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, numBufferChars, buffer, lpFilePartOrNull});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetFullPathName
// Il2CppName: GetFullPathName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::Path::GetFullPathName)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetFullPathName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::WindowsDriveAdjustment
// Il2CppName: WindowsDriveAdjustment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::Path::WindowsDriveAdjustment)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "WindowsDriveAdjustment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::InsecureGetFullPath
// Il2CppName: InsecureGetFullPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::Path::InsecureGetFullPath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "InsecureGetFullPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::IsDirectorySeparator
// Il2CppName: IsDirectorySeparator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&System::IO::Path::IsDirectorySeparator)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "IsDirectorySeparator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetPathRoot
// Il2CppName: GetPathRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::Path::GetPathRoot)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetPathRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetTempPath
// Il2CppName: GetTempPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::IO::Path::GetTempPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetTempPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Path::get_temp_path
// Il2CppName: get_temp_path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::IO::Path::get_temp_path)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "get_temp_path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Path::IsPathRooted
// Il2CppName: IsPathRooted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::IO::Path::IsPathRooted)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "IsPathRooted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetInvalidFileNameChars
// Il2CppName: GetInvalidFileNameChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppChar> (*)()>(&System::IO::Path::GetInvalidFileNameChars)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetInvalidFileNameChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetInvalidPathChars
// Il2CppName: GetInvalidPathChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppChar> (*)()>(&System::IO::Path::GetInvalidPathChars)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetInvalidPathChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Path::findExtension
// Il2CppName: findExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&System::IO::Path::findExtension)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "findExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::GetServerAndShare
// Il2CppName: GetServerAndShare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::Path::GetServerAndShare)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "GetServerAndShare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::SameRoot
// Il2CppName: SameRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&System::IO::Path::SameRoot)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "SameRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root, path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::CanonicalizePath
// Il2CppName: CanonicalizePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::Path::CanonicalizePath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "CanonicalizePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<::StringW>)>(&System::IO::Path::Combine)> {
  static const MethodInfo* get() {
    static auto* paths = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{paths});
  }
};
// Writing MetadataGetter for method: System::IO::Path::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&System::IO::Path::Combine)> {
  static const MethodInfo* get() {
    static auto* path1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* path2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* path3 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path1, path2, path3});
  }
};
// Writing MetadataGetter for method: System::IO::Path::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::StringW)>(&System::IO::Path::Combine)> {
  static const MethodInfo* get() {
    static auto* path1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* path2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* path3 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* path4 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path1, path2, path3, path4});
  }
};
// Writing MetadataGetter for method: System::IO::Path::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::IO::Path::Validate)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::Path::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&System::IO::Path::Validate)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parameterName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, parameterName});
  }
};
// Writing MetadataGetter for method: System::IO::Path::CheckSearchPattern
// Il2CppName: CheckSearchPattern
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::IO::Path::CheckSearchPattern)> {
  static const MethodInfo* get() {
    static auto* searchPattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "CheckSearchPattern", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{searchPattern});
  }
};
// Writing MetadataGetter for method: System::IO::Path::CheckInvalidPathChars
// Il2CppName: CheckInvalidPathChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool)>(&System::IO::Path::CheckInvalidPathChars)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* checkAdditional = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "CheckInvalidPathChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, checkAdditional});
  }
};
// Writing MetadataGetter for method: System::IO::Path::InternalCombine
// Il2CppName: InternalCombine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&System::IO::Path::InternalCombine)> {
  static const MethodInfo* get() {
    static auto* path1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* path2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Path*), "InternalCombine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path1, path2});
  }
};