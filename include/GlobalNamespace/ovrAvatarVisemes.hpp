// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarVisemes
  struct ovrAvatarVisemes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarVisemes, "", "ovrAvatarVisemes");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarVisemes
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarVisemes/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 visemeParamCount
    // Size: 0x4
    // Offset: 0x0
    uint visemeParamCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: visemeParamCount and: visemeParams
    char __padding0[0x4] = {};
    // public System.Single[] visemeParams
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<float> visemeParams;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    public:
    // Creating value type constructor for type: ovrAvatarVisemes
    constexpr ovrAvatarVisemes(uint visemeParamCount_ = {}, ::ArrayW<float> visemeParams_ = ::ArrayW<float>(static_cast<void*>(nullptr))) noexcept : visemeParamCount{visemeParamCount_}, visemeParams{visemeParams_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 visemeParamCount
    uint& dyn_visemeParamCount();
    // Get instance field reference: public System.Single[] visemeParams
    ::ArrayW<float>& dyn_visemeParams();
  }; // ovrAvatarVisemes
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarVisemes), 8 + sizeof(::ArrayW<float>)> __GlobalNamespace_ovrAvatarVisemesSizeCheck;
  static_assert(sizeof(ovrAvatarVisemes) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
