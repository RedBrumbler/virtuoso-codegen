// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Platform.FirebaseHandler
#include "Firebase/Platform/FirebaseHandler.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Platform::FirebaseHandler::ApplicationFocusChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Platform::FirebaseHandler::ApplicationFocusChangedEventArgs*, "Firebase.Platform", "FirebaseHandler/ApplicationFocusChangedEventArgs");
// Type namespace: Firebase.Platform
namespace Firebase::Platform {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Platform.FirebaseHandler/Firebase.Platform.ApplicationFocusChangedEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class FirebaseHandler::ApplicationFocusChangedEventArgs : public ::System::EventArgs {
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
    // [DebuggerBrowsableAttribute] Offset: 0x5DFF80
    // private System.Boolean <HasFocus>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool HasFocus;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return HasFocus;
    }
    // Get instance field reference: private System.Boolean <HasFocus>k__BackingField
    bool& dyn_$HasFocus$k__BackingField();
    // public System.Void set_HasFocus(System.Boolean value)
    // Offset: 0x12CC32C
    void set_HasFocus(bool value);
    // public System.Void .ctor()
    // Offset: 0x12CA718
    // Implemented from: System.EventArgs
    // Base method: System.Void EventArgs::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirebaseHandler::ApplicationFocusChangedEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Platform::FirebaseHandler::ApplicationFocusChangedEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirebaseHandler::ApplicationFocusChangedEventArgs*, creationType>()));
    }
  }; // Firebase.Platform.FirebaseHandler/Firebase.Platform.ApplicationFocusChangedEventArgs
  #pragma pack(pop)
  static check_size<sizeof(FirebaseHandler::ApplicationFocusChangedEventArgs), 16 + sizeof(bool)> __Firebase_Platform_FirebaseHandler_ApplicationFocusChangedEventArgsSizeCheck;
  static_assert(sizeof(FirebaseHandler::ApplicationFocusChangedEventArgs) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Platform::FirebaseHandler::ApplicationFocusChangedEventArgs::set_HasFocus
// Il2CppName: set_HasFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Firebase::Platform::FirebaseHandler::ApplicationFocusChangedEventArgs::*)(bool)>(&Firebase::Platform::FirebaseHandler::ApplicationFocusChangedEventArgs::set_HasFocus)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Platform::FirebaseHandler::ApplicationFocusChangedEventArgs*), "set_HasFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Firebase::Platform::FirebaseHandler::ApplicationFocusChangedEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
