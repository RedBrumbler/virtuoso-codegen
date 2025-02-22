// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Unity.IO.LowLevel.Unsafe
namespace Unity::IO::LowLevel::Unsafe {
  // Forward declaring type: FileReadType
  struct FileReadType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::FileReadType, "Unity.IO.LowLevel.Unsafe", "FileReadType");
// Type namespace: Unity.IO.LowLevel.Unsafe
namespace Unity::IO::LowLevel::Unsafe {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Unity.IO.LowLevel.Unsafe.FileReadType
  // [TokenAttribute] Offset: FFFFFFFF
  struct FileReadType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FileReadType
    constexpr FileReadType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Unity.IO.LowLevel.Unsafe.FileReadType Sync
    static constexpr const int Sync = 0;
    // Get static field: static public Unity.IO.LowLevel.Unsafe.FileReadType Sync
    static ::Unity::IO::LowLevel::Unsafe::FileReadType _get_Sync();
    // Set static field: static public Unity.IO.LowLevel.Unsafe.FileReadType Sync
    static void _set_Sync(::Unity::IO::LowLevel::Unsafe::FileReadType value);
    // static field const value: static public Unity.IO.LowLevel.Unsafe.FileReadType Async
    static constexpr const int Async = 1;
    // Get static field: static public Unity.IO.LowLevel.Unsafe.FileReadType Async
    static ::Unity::IO::LowLevel::Unsafe::FileReadType _get_Async();
    // Set static field: static public Unity.IO.LowLevel.Unsafe.FileReadType Async
    static void _set_Async(::Unity::IO::LowLevel::Unsafe::FileReadType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Unity.IO.LowLevel.Unsafe.FileReadType
  #pragma pack(pop)
  static check_size<sizeof(FileReadType), 0 + sizeof(int)> __Unity_IO_LowLevel_Unsafe_FileReadTypeSizeCheck;
  static_assert(sizeof(FileReadType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
