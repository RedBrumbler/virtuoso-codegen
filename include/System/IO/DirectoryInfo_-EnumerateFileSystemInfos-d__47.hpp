// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.DirectoryInfo
#include "System/IO/DirectoryInfo.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.IO.FileAttributes
#include "System/IO/FileAttributes.hpp"
// Including type: System.IO.SearchOption
#include "System/IO/SearchOption.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileSystemInfo
  class FileSystemInfo;
}
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeFindHandle
  class SafeFindHandle;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47*, "System.IO", "DirectoryInfo/<EnumerateFileSystemInfos>d__47");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.DirectoryInfo/System.IO.<EnumerateFileSystemInfos>d__47
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: 57A850
  class DirectoryInfo::$EnumerateFileSystemInfos$d__47 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>, public ::System::Collections::Generic::IEnumerator_1<::System::IO::FileSystemInfo*>*/ {
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
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.IO.FileSystemInfo <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::System::IO::FileSystemInfo* $$2__current;
    // Field size check
    static_assert(sizeof(::System::IO::FileSystemInfo*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: basePath
    char __padding2[0x4] = {};
    // private System.String basePath
    // Size: 0x8
    // Offset: 0x28
    ::StringW basePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String <>3__basePath
    // Size: 0x8
    // Offset: 0x30
    ::StringW $$3__basePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String searchPattern
    // Size: 0x8
    // Offset: 0x38
    ::StringW searchPattern;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String <>3__searchPattern
    // Size: 0x8
    // Offset: 0x40
    ::StringW $$3__searchPattern;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <fullPath>5__1
    // Size: 0x8
    // Offset: 0x48
    ::StringW $fullPath$5__1;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.IO.FileAttributes <attrs>5__2
    // Size: 0x4
    // Offset: 0x50
    ::System::IO::FileAttributes $attrs$5__2;
    // Field size check
    static_assert(sizeof(::System::IO::FileAttributes) == 0x4);
    // private System.IO.SearchOption searchOption
    // Size: 0x4
    // Offset: 0x54
    ::System::IO::SearchOption searchOption;
    // Field size check
    static_assert(sizeof(::System::IO::SearchOption) == 0x4);
    // public System.IO.SearchOption <>3__searchOption
    // Size: 0x4
    // Offset: 0x58
    ::System::IO::SearchOption $$3__searchOption;
    // Field size check
    static_assert(sizeof(::System::IO::SearchOption) == 0x4);
    // Padding between fields: $$3__searchOption and: $findHandle$5__3
    char __padding10[0x4] = {};
    // private Microsoft.Win32.SafeHandles.SafeFindHandle <findHandle>5__3
    // Size: 0x8
    // Offset: 0x60
    ::Microsoft::Win32::SafeHandles::SafeFindHandle* $findHandle$5__3;
    // Field size check
    static_assert(sizeof(::Microsoft::Win32::SafeHandles::SafeFindHandle*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<System.IO.FileSystemInfo> <>7__wrap1
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::IEnumerator_1<::System::IO::FileSystemInfo*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<::System::IO::FileSystemInfo*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>
    operator ::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::IO::FileSystemInfo*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::System::IO::FileSystemInfo*>
    operator ::System::Collections::Generic::IEnumerator_1<::System::IO::FileSystemInfo*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::System::IO::FileSystemInfo*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.IO.FileSystemInfo <>2__current
    ::System::IO::FileSystemInfo*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    int& dyn_$$l__initialThreadId();
    // Get instance field reference: private System.String basePath
    ::StringW& dyn_basePath();
    // Get instance field reference: public System.String <>3__basePath
    ::StringW& dyn_$$3__basePath();
    // Get instance field reference: private System.String searchPattern
    ::StringW& dyn_searchPattern();
    // Get instance field reference: public System.String <>3__searchPattern
    ::StringW& dyn_$$3__searchPattern();
    // Get instance field reference: private System.String <fullPath>5__1
    ::StringW& dyn_$fullPath$5__1();
    // Get instance field reference: private System.IO.FileAttributes <attrs>5__2
    ::System::IO::FileAttributes& dyn_$attrs$5__2();
    // Get instance field reference: private System.IO.SearchOption searchOption
    ::System::IO::SearchOption& dyn_searchOption();
    // Get instance field reference: public System.IO.SearchOption <>3__searchOption
    ::System::IO::SearchOption& dyn_$$3__searchOption();
    // Get instance field reference: private Microsoft.Win32.SafeHandles.SafeFindHandle <findHandle>5__3
    ::Microsoft::Win32::SafeHandles::SafeFindHandle*& dyn_$findHandle$5__3();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<System.IO.FileSystemInfo> <>7__wrap1
    ::System::Collections::Generic::IEnumerator_1<::System::IO::FileSystemInfo*>*& dyn_$$7__wrap1();
    // private System.IO.FileSystemInfo System.Collections.Generic.IEnumerator<System.IO.FileSystemInfo>.get_Current()
    // Offset: 0xDD2850
    ::System::IO::FileSystemInfo* System_Collections_Generic_IEnumerator$System_IO_FileSystemInfo$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xDD2898
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xDD204C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectoryInfo::$EnumerateFileSystemInfos$d__47* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectoryInfo::$EnumerateFileSystemInfos$d__47*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xDD2084
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xDD21FC
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0xDD21DC
    void $$m__Finally1();
    // private System.Void <>m__Finally2()
    // Offset: 0xDD2120
    void $$m__Finally2();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xDD2858
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<System.IO.FileSystemInfo> System.Collections.Generic.IEnumerable<System.IO.FileSystemInfo>.GetEnumerator()
    // Offset: 0xDD28A0
    ::System::Collections::Generic::IEnumerator_1<::System::IO::FileSystemInfo*>* System_Collections_Generic_IEnumerable$System_IO_FileSystemInfo$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xDD2958
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.IO.DirectoryInfo/System.IO.<EnumerateFileSystemInfos>d__47
  #pragma pack(pop)
  static check_size<sizeof(DirectoryInfo::$EnumerateFileSystemInfos$d__47), 104 + sizeof(::System::Collections::Generic::IEnumerator_1<::System::IO::FileSystemInfo*>*)> __System_IO_DirectoryInfo_$EnumerateFileSystemInfos$d__47SizeCheck;
  static_assert(sizeof(DirectoryInfo::$EnumerateFileSystemInfos$d__47) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::System_Collections_Generic_IEnumerator$System_IO_FileSystemInfo$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.IO.FileSystemInfo>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileSystemInfo* (System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::*)()>(&System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::System_Collections_Generic_IEnumerator$System_IO_FileSystemInfo$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47*), "System.Collections.Generic.IEnumerator<System.IO.FileSystemInfo>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::*)()>(&System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::*)()>(&System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::*)()>(&System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::*)()>(&System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::$$m__Finally2
// Il2CppName: <>m__Finally2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::*)()>(&System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::$$m__Finally2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47*), "<>m__Finally2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::*)()>(&System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::System_Collections_Generic_IEnumerable$System_IO_FileSystemInfo$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.IO.FileSystemInfo>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::IO::FileSystemInfo*>* (System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::*)()>(&System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::System_Collections_Generic_IEnumerable$System_IO_FileSystemInfo$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47*), "System.Collections.Generic.IEnumerable<System.IO.FileSystemInfo>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::*)()>(&System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::DirectoryInfo::$EnumerateFileSystemInfos$d__47*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
