// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.NoteBoardPlayer
#include "VROSC/NoteBoardPlayer.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardPlayer::PlayBehaviour, "VROSC", "NoteBoardPlayer/PlayBehaviour");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteBoardPlayer/VROSC.PlayBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  struct NoteBoardPlayer::PlayBehaviour/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PlayBehaviour
    constexpr PlayBehaviour(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public VROSC.NoteBoardPlayer/VROSC.PlayBehaviour Slide
    static constexpr const int Slide = 0;
    // Get static field: static public VROSC.NoteBoardPlayer/VROSC.PlayBehaviour Slide
    static ::VROSC::NoteBoardPlayer::PlayBehaviour _get_Slide();
    // Set static field: static public VROSC.NoteBoardPlayer/VROSC.PlayBehaviour Slide
    static void _set_Slide(::VROSC::NoteBoardPlayer::PlayBehaviour value);
    // static field const value: static public VROSC.NoteBoardPlayer/VROSC.PlayBehaviour Hold
    static constexpr const int Hold = 1;
    // Get static field: static public VROSC.NoteBoardPlayer/VROSC.PlayBehaviour Hold
    static ::VROSC::NoteBoardPlayer::PlayBehaviour _get_Hold();
    // Set static field: static public VROSC.NoteBoardPlayer/VROSC.PlayBehaviour Hold
    static void _set_Hold(::VROSC::NoteBoardPlayer::PlayBehaviour value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // VROSC.NoteBoardPlayer/VROSC.PlayBehaviour
  #pragma pack(pop)
  static check_size<sizeof(NoteBoardPlayer::PlayBehaviour), 0 + sizeof(int)> __VROSC_NoteBoardPlayer_PlayBehaviourSizeCheck;
  static_assert(sizeof(NoteBoardPlayer::PlayBehaviour) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
