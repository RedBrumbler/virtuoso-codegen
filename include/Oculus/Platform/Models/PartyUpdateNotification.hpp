// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.PartyUpdateAction
#include "Oculus/Platform/PartyUpdateAction.hpp"
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
  // Forward declaring type: PartyUpdateNotification
  class PartyUpdateNotification;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::PartyUpdateNotification);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::PartyUpdateNotification*, "Oculus.Platform.Models", "PartyUpdateNotification");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.PartyUpdateNotification
  // [TokenAttribute] Offset: FFFFFFFF
  class PartyUpdateNotification : public ::Il2CppObject {
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
    // public readonly Oculus.Platform.PartyUpdateAction Action
    // Size: 0x4
    // Offset: 0x10
    ::Oculus::Platform::PartyUpdateAction Action;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::PartyUpdateAction) == 0x4);
    // Padding between fields: Action and: PartyId
    char __padding0[0x4] = {};
    // public readonly System.UInt64 PartyId
    // Size: 0x8
    // Offset: 0x18
    uint64_t PartyId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.UInt64 SenderId
    // Size: 0x8
    // Offset: 0x20
    uint64_t SenderId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String UpdateTimestamp
    // Size: 0x8
    // Offset: 0x28
    ::StringW UpdateTimestamp;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String UserAlias
    // Size: 0x8
    // Offset: 0x30
    ::StringW UserAlias;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.UInt64 UserId
    // Size: 0x8
    // Offset: 0x38
    uint64_t UserId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String UserName
    // Size: 0x8
    // Offset: 0x40
    ::StringW UserName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly Oculus.Platform.PartyUpdateAction Action
    ::Oculus::Platform::PartyUpdateAction& dyn_Action();
    // Get instance field reference: public readonly System.UInt64 PartyId
    uint64_t& dyn_PartyId();
    // Get instance field reference: public readonly System.UInt64 SenderId
    uint64_t& dyn_SenderId();
    // Get instance field reference: public readonly System.String UpdateTimestamp
    ::StringW& dyn_UpdateTimestamp();
    // Get instance field reference: public readonly System.String UserAlias
    ::StringW& dyn_UserAlias();
    // Get instance field reference: public readonly System.UInt64 UserId
    uint64_t& dyn_UserId();
    // Get instance field reference: public readonly System.String UserName
    ::StringW& dyn_UserName();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x97CEC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PartyUpdateNotification* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::PartyUpdateNotification::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PartyUpdateNotification*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.PartyUpdateNotification
  #pragma pack(pop)
  static check_size<sizeof(PartyUpdateNotification), 64 + sizeof(::StringW)> __Oculus_Platform_Models_PartyUpdateNotificationSizeCheck;
  static_assert(sizeof(PartyUpdateNotification) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::PartyUpdateNotification::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
