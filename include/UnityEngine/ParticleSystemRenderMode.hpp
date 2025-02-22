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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystemRenderMode
  struct ParticleSystemRenderMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemRenderMode, "UnityEngine", "ParticleSystemRenderMode");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ParticleSystemRenderMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystemRenderMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ParticleSystemRenderMode
    constexpr ParticleSystemRenderMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ParticleSystemRenderMode Billboard
    static constexpr const int Billboard = 0;
    // Get static field: static public UnityEngine.ParticleSystemRenderMode Billboard
    static ::UnityEngine::ParticleSystemRenderMode _get_Billboard();
    // Set static field: static public UnityEngine.ParticleSystemRenderMode Billboard
    static void _set_Billboard(::UnityEngine::ParticleSystemRenderMode value);
    // static field const value: static public UnityEngine.ParticleSystemRenderMode Stretch
    static constexpr const int Stretch = 1;
    // Get static field: static public UnityEngine.ParticleSystemRenderMode Stretch
    static ::UnityEngine::ParticleSystemRenderMode _get_Stretch();
    // Set static field: static public UnityEngine.ParticleSystemRenderMode Stretch
    static void _set_Stretch(::UnityEngine::ParticleSystemRenderMode value);
    // static field const value: static public UnityEngine.ParticleSystemRenderMode HorizontalBillboard
    static constexpr const int HorizontalBillboard = 2;
    // Get static field: static public UnityEngine.ParticleSystemRenderMode HorizontalBillboard
    static ::UnityEngine::ParticleSystemRenderMode _get_HorizontalBillboard();
    // Set static field: static public UnityEngine.ParticleSystemRenderMode HorizontalBillboard
    static void _set_HorizontalBillboard(::UnityEngine::ParticleSystemRenderMode value);
    // static field const value: static public UnityEngine.ParticleSystemRenderMode VerticalBillboard
    static constexpr const int VerticalBillboard = 3;
    // Get static field: static public UnityEngine.ParticleSystemRenderMode VerticalBillboard
    static ::UnityEngine::ParticleSystemRenderMode _get_VerticalBillboard();
    // Set static field: static public UnityEngine.ParticleSystemRenderMode VerticalBillboard
    static void _set_VerticalBillboard(::UnityEngine::ParticleSystemRenderMode value);
    // static field const value: static public UnityEngine.ParticleSystemRenderMode Mesh
    static constexpr const int Mesh = 4;
    // Get static field: static public UnityEngine.ParticleSystemRenderMode Mesh
    static ::UnityEngine::ParticleSystemRenderMode _get_Mesh();
    // Set static field: static public UnityEngine.ParticleSystemRenderMode Mesh
    static void _set_Mesh(::UnityEngine::ParticleSystemRenderMode value);
    // static field const value: static public UnityEngine.ParticleSystemRenderMode None
    static constexpr const int None = 5;
    // Get static field: static public UnityEngine.ParticleSystemRenderMode None
    static ::UnityEngine::ParticleSystemRenderMode _get_None();
    // Set static field: static public UnityEngine.ParticleSystemRenderMode None
    static void _set_None(::UnityEngine::ParticleSystemRenderMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ParticleSystemRenderMode
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystemRenderMode), 0 + sizeof(int)> __UnityEngine_ParticleSystemRenderModeSizeCheck;
  static_assert(sizeof(ParticleSystemRenderMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
