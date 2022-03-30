// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.LaunchType
#include "Oculus/Platform/LaunchType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserList
  class UserList;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LaunchDetails
  class LaunchDetails;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::LaunchDetails);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchDetails*, "Oculus.Platform.Models", "LaunchDetails");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.LaunchDetails
  // [TokenAttribute] Offset: FFFFFFFF
  class LaunchDetails : public ::Il2CppObject {
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
    // public readonly System.String DeeplinkMessage
    // Size: 0x8
    // Offset: 0x10
    ::StringW DeeplinkMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String DestinationApiName
    // Size: 0x8
    // Offset: 0x18
    ::StringW DestinationApiName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String LaunchSource
    // Size: 0x8
    // Offset: 0x20
    ::StringW LaunchSource;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly Oculus.Platform.LaunchType LaunchType
    // Size: 0x14
    // Offset: 0x28
    ::Oculus::Platform::LaunchType LaunchType;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::LaunchType) == 0x14);
    // public readonly System.UInt64 RoomID
    // Size: 0x8
    // Offset: 0x30
    uint64_t RoomID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public readonly System.String TrackingID
    // Size: 0x8
    // Offset: 0x38
    ::StringW TrackingID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly Oculus.Platform.Models.UserList UsersOptional
    // Size: 0x8
    // Offset: 0x40
    ::Oculus::Platform::Models::UserList* UsersOptional;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::UserList*) == 0x8);
    // [ObsoleteAttribute] Offset: 0x5A51B4
    // public readonly Oculus.Platform.Models.UserList Users
    // Size: 0x8
    // Offset: 0x48
    ::Oculus::Platform::Models::UserList* Users;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::UserList*) == 0x8);
    public:
    // Get instance field reference: public readonly System.String DeeplinkMessage
    ::StringW& dyn_DeeplinkMessage();
    // Get instance field reference: public readonly System.String DestinationApiName
    ::StringW& dyn_DestinationApiName();
    // Get instance field reference: public readonly System.String LaunchSource
    ::StringW& dyn_LaunchSource();
    // Get instance field reference: public readonly Oculus.Platform.LaunchType LaunchType
    ::Oculus::Platform::LaunchType& dyn_LaunchType();
    // Get instance field reference: public readonly System.UInt64 RoomID
    uint64_t& dyn_RoomID();
    // Get instance field reference: public readonly System.String TrackingID
    ::StringW& dyn_TrackingID();
    // Get instance field reference: public readonly Oculus.Platform.Models.UserList UsersOptional
    ::Oculus::Platform::Models::UserList*& dyn_UsersOptional();
    // Get instance field reference: public readonly Oculus.Platform.Models.UserList Users
    ::Oculus::Platform::Models::UserList*& dyn_Users();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x968AE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LaunchDetails* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::LaunchDetails::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LaunchDetails*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LaunchDetails
  #pragma pack(pop)
  static check_size<sizeof(LaunchDetails), 72 + sizeof(::Oculus::Platform::Models::UserList*)> __Oculus_Platform_Models_LaunchDetailsSizeCheck;
  static_assert(sizeof(LaunchDetails) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::LaunchDetails::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!