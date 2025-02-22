// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimationHumanStream
  struct AnimationHumanStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationHumanStream, "UnityEngine.Animations", "AnimationHumanStream");
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.AnimationHumanStream
  // [TokenAttribute] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: 5A6440
  // [NativeHeaderAttribute] Offset: 5A6440
  // [NativeHeaderAttribute] Offset: 5A6440
  // [RequiredByNativeCodeAttribute] Offset: 5A6440
  struct AnimationHumanStream/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.IntPtr stream
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr stream;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: AnimationHumanStream
    constexpr AnimationHumanStream(::System::IntPtr stream_ = {}) noexcept : stream{stream_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return stream;
    }
    // Get instance field reference: private System.IntPtr stream
    ::System::IntPtr& dyn_stream();
  }; // UnityEngine.Animations.AnimationHumanStream
  #pragma pack(pop)
  static check_size<sizeof(AnimationHumanStream), 0 + sizeof(::System::IntPtr)> __UnityEngine_Animations_AnimationHumanStreamSizeCheck;
  static_assert(sizeof(AnimationHumanStream) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
