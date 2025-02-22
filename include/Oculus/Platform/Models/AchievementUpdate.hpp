// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AchievementUpdate
  class AchievementUpdate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::AchievementUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AchievementUpdate*, "Oculus.Platform.Models", "AchievementUpdate");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.AchievementUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  class AchievementUpdate : public ::Il2CppObject {
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
    // public readonly System.Boolean JustUnlocked
    // Size: 0x1
    // Offset: 0x10
    bool JustUnlocked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: JustUnlocked and: Name
    char __padding0[0x7] = {};
    // public readonly System.String Name
    // Size: 0x8
    // Offset: 0x18
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.Boolean JustUnlocked
    bool& dyn_JustUnlocked();
    // Get instance field reference: public readonly System.String Name
    ::StringW& dyn_Name();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x7AFD50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AchievementUpdate* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::AchievementUpdate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AchievementUpdate*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.AchievementUpdate
  #pragma pack(pop)
  static check_size<sizeof(AchievementUpdate), 24 + sizeof(::StringW)> __Oculus_Platform_Models_AchievementUpdateSizeCheck;
  static_assert(sizeof(AchievementUpdate) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::AchievementUpdate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
