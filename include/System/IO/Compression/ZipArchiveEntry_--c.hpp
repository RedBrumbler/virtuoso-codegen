// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Compression.ZipArchiveEntry
#include "System/IO/Compression/ZipArchiveEntry.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`6<T1, T2, T3, T4, T5, T6>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
  class Action_6;
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: EventArgs
  class EventArgs;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Compression::ZipArchiveEntry::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipArchiveEntry::$$c*, "System.IO.Compression", "ZipArchiveEntry/<>c");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.ZipArchiveEntry/System.IO.Compression.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ZipArchiveEntry::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.IO.Compression.ZipArchiveEntry/System.IO.Compression.<>c <>9
    static ::System::IO::Compression::ZipArchiveEntry::$$c* _get_$$9();
    // Set static field: static public readonly System.IO.Compression.ZipArchiveEntry/System.IO.Compression.<>c <>9
    static void _set_$$9(::System::IO::Compression::ZipArchiveEntry::$$c* value);
    // Get static field: static public System.Action`6<System.Int64,System.Int64,System.UInt32,System.IO.Stream,System.IO.Compression.ZipArchiveEntry,System.EventHandler> <>9__67_0
    static ::System::Action_6<int64_t, int64_t, uint, ::System::IO::Stream*, ::System::IO::Compression::ZipArchiveEntry*, ::System::EventHandler*>* _get_$$9__67_0();
    // Set static field: static public System.Action`6<System.Int64,System.Int64,System.UInt32,System.IO.Stream,System.IO.Compression.ZipArchiveEntry,System.EventHandler> <>9__67_0
    static void _set_$$9__67_0(::System::Action_6<int64_t, int64_t, uint, ::System::IO::Stream*, ::System::IO::Compression::ZipArchiveEntry*, ::System::EventHandler*>* value);
    // Get static field: static public System.EventHandler <>9__70_0
    static ::System::EventHandler* _get_$$9__70_0();
    // Set static field: static public System.EventHandler <>9__70_0
    static void _set_$$9__70_0(::System::EventHandler* value);
    // Get static field: static public System.Action`1<System.IO.Compression.ZipArchiveEntry> <>9__71_0
    static ::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>* _get_$$9__71_0();
    // Set static field: static public System.Action`1<System.IO.Compression.ZipArchiveEntry> <>9__71_0
    static void _set_$$9__71_0(::System::Action_1<::System::IO::Compression::ZipArchiveEntry*>* value);
    // static private System.Void .cctor()
    // Offset: 0x112A42C
    static void _cctor();
    // System.Void <GetDataCompressor>b__67_0(System.Int64 initialPosition, System.Int64 currentPosition, System.UInt32 checkSum, System.IO.Stream backing, System.IO.Compression.ZipArchiveEntry thisRef, System.EventHandler closeHandler)
    // Offset: 0x112A494
    void $GetDataCompressor$b__67_0(int64_t initialPosition, int64_t currentPosition, uint checkSum, ::System::IO::Stream* backing, ::System::IO::Compression::ZipArchiveEntry* thisRef, ::System::EventHandler* closeHandler);
    // System.Void <OpenInWriteMode>b__70_0(System.Object o, System.EventArgs e)
    // Offset: 0x112A57C
    void $OpenInWriteMode$b__70_0(::Il2CppObject* o, ::System::EventArgs* e);
    // System.Void <OpenInUpdateMode>b__71_0(System.IO.Compression.ZipArchiveEntry thisRef)
    // Offset: 0x112A60C
    void $OpenInUpdateMode$b__71_0(::System::IO::Compression::ZipArchiveEntry* thisRef);
    // public System.Void .ctor()
    // Offset: 0x112A48C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZipArchiveEntry::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Compression::ZipArchiveEntry::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZipArchiveEntry::$$c*, creationType>()));
    }
  }; // System.IO.Compression.ZipArchiveEntry/System.IO.Compression.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::Compression::ZipArchiveEntry::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchiveEntry::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::$$c::$GetDataCompressor$b__67_0
// Il2CppName: <GetDataCompressor>b__67_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchiveEntry::$$c::*)(int64_t, int64_t, uint, ::System::IO::Stream*, ::System::IO::Compression::ZipArchiveEntry*, ::System::EventHandler*)>(&System::IO::Compression::ZipArchiveEntry::$$c::$GetDataCompressor$b__67_0)> {
  static const MethodInfo* get() {
    static auto* initialPosition = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* currentPosition = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* checkSum = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* backing = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* thisRef = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "ZipArchiveEntry")->byval_arg;
    static auto* closeHandler = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchiveEntry::$$c*), "<GetDataCompressor>b__67_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initialPosition, currentPosition, checkSum, backing, thisRef, closeHandler});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::$$c::$OpenInWriteMode$b__70_0
// Il2CppName: <OpenInWriteMode>b__70_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchiveEntry::$$c::*)(::Il2CppObject*, ::System::EventArgs*)>(&System::IO::Compression::ZipArchiveEntry::$$c::$OpenInWriteMode$b__70_0)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "EventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchiveEntry::$$c*), "<OpenInWriteMode>b__70_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, e});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::$$c::$OpenInUpdateMode$b__71_0
// Il2CppName: <OpenInUpdateMode>b__71_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::ZipArchiveEntry::$$c::*)(::System::IO::Compression::ZipArchiveEntry*)>(&System::IO::Compression::ZipArchiveEntry::$$c::$OpenInUpdateMode$b__71_0)> {
  static const MethodInfo* get() {
    static auto* thisRef = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "ZipArchiveEntry")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::ZipArchiveEntry::$$c*), "<OpenInUpdateMode>b__71_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{thisRef});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::ZipArchiveEntry::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!