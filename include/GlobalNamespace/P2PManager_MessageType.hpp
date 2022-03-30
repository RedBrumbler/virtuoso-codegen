// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: P2PManager
#include "GlobalNamespace/P2PManager.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::P2PManager::MessageType, "", "P2PManager/MessageType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: P2PManager/MessageType
  // [TokenAttribute] Offset: FFFFFFFF
  struct P2PManager::MessageType/*, public ::System::Enum*/ {
    public:
    // Writing base type padding for base size: 0x0 to desired offset: 0x10
    char ___base_padding[0x10] = {};
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x10
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: MessageType
    constexpr MessageType(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public P2PManager/MessageType Update
    static constexpr const uint8_t Update = 1u;
    // Get static field: static public P2PManager/MessageType Update
    static ::GlobalNamespace::P2PManager::MessageType _get_Update();
    // Set static field: static public P2PManager/MessageType Update
    static void _set_Update(::GlobalNamespace::P2PManager::MessageType value);
    // Get instance field reference: public System.Byte value__
    uint8_t& dyn_value__();
  }; // P2PManager/MessageType
  #pragma pack(pop)
  static check_size<sizeof(P2PManager::MessageType), 16 + sizeof(uint8_t)> __GlobalNamespace_P2PManager_MessageTypeSizeCheck;
  static_assert(sizeof(P2PManager::MessageType) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"