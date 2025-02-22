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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRChunkType
  struct OVRChunkType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRChunkType, "", "OVRChunkType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRChunkType
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRChunkType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OVRChunkType
    constexpr OVRChunkType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRChunkType JSON
    static constexpr const int JSON = 1313821514;
    // Get static field: static public OVRChunkType JSON
    static ::GlobalNamespace::OVRChunkType _get_JSON();
    // Set static field: static public OVRChunkType JSON
    static void _set_JSON(::GlobalNamespace::OVRChunkType value);
    // static field const value: static public OVRChunkType BIN
    static constexpr const int BIN = 5130562;
    // Get static field: static public OVRChunkType BIN
    static ::GlobalNamespace::OVRChunkType _get_BIN();
    // Set static field: static public OVRChunkType BIN
    static void _set_BIN(::GlobalNamespace::OVRChunkType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVRChunkType
  #pragma pack(pop)
  static check_size<sizeof(OVRChunkType), 0 + sizeof(int)> __GlobalNamespace_OVRChunkTypeSizeCheck;
  static_assert(sizeof(OVRChunkType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
