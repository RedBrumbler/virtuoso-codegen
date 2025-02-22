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
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Forward declaring type: PathMode
  struct PathMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::PathMode, "DG.Tweening", "PathMode");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.PathMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct PathMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PathMode
    constexpr PathMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DG.Tweening.PathMode Ignore
    static constexpr const int Ignore = 0;
    // Get static field: static public DG.Tweening.PathMode Ignore
    static ::DG::Tweening::PathMode _get_Ignore();
    // Set static field: static public DG.Tweening.PathMode Ignore
    static void _set_Ignore(::DG::Tweening::PathMode value);
    // static field const value: static public DG.Tweening.PathMode Full3D
    static constexpr const int Full3D = 1;
    // Get static field: static public DG.Tweening.PathMode Full3D
    static ::DG::Tweening::PathMode _get_Full3D();
    // Set static field: static public DG.Tweening.PathMode Full3D
    static void _set_Full3D(::DG::Tweening::PathMode value);
    // static field const value: static public DG.Tweening.PathMode TopDown2D
    static constexpr const int TopDown2D = 2;
    // Get static field: static public DG.Tweening.PathMode TopDown2D
    static ::DG::Tweening::PathMode _get_TopDown2D();
    // Set static field: static public DG.Tweening.PathMode TopDown2D
    static void _set_TopDown2D(::DG::Tweening::PathMode value);
    // static field const value: static public DG.Tweening.PathMode Sidescroller2D
    static constexpr const int Sidescroller2D = 3;
    // Get static field: static public DG.Tweening.PathMode Sidescroller2D
    static ::DG::Tweening::PathMode _get_Sidescroller2D();
    // Set static field: static public DG.Tweening.PathMode Sidescroller2D
    static void _set_Sidescroller2D(::DG::Tweening::PathMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // DG.Tweening.PathMode
  #pragma pack(pop)
  static check_size<sizeof(PathMode), 0 + sizeof(int)> __DG_Tweening_PathModeSizeCheck;
  static_assert(sizeof(PathMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
