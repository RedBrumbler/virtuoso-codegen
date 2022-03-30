// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Unity.UnitySynchronizationContext
#include "Firebase/Unity/UnitySynchronizationContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Unity::UnitySynchronizationContext::$Send$c__AnonStorey3);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Unity::UnitySynchronizationContext::$Send$c__AnonStorey3*, "Firebase.Unity", "UnitySynchronizationContext/<Send>c__AnonStorey3");
// Type namespace: Firebase.Unity
namespace Firebase::Unity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Unity.UnitySynchronizationContext/Firebase.Unity.<Send>c__AnonStorey3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UnitySynchronizationContext::$Send$c__AnonStorey3 : public ::Il2CppObject {
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
    // System.Threading.SendOrPostCallback d
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::SendOrPostCallback* d;
    // Field size check
    static_assert(sizeof(::System::Threading::SendOrPostCallback*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Threading::SendOrPostCallback*
    constexpr operator ::System::Threading::SendOrPostCallback*() const noexcept {
      return d;
    }
    // Get instance field reference: System.Threading.SendOrPostCallback d
    ::System::Threading::SendOrPostCallback*& dyn_d();
    // public System.Void .ctor()
    // Offset: 0x12CBFF4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnitySynchronizationContext::$Send$c__AnonStorey3* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Unity::UnitySynchronizationContext::$Send$c__AnonStorey3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnitySynchronizationContext::$Send$c__AnonStorey3*, creationType>()));
    }
  }; // Firebase.Unity.UnitySynchronizationContext/Firebase.Unity.<Send>c__AnonStorey3
  #pragma pack(pop)
  static check_size<sizeof(UnitySynchronizationContext::$Send$c__AnonStorey3), 16 + sizeof(::System::Threading::SendOrPostCallback*)> __Firebase_Unity_UnitySynchronizationContext_$Send$c__AnonStorey3SizeCheck;
  static_assert(sizeof(UnitySynchronizationContext::$Send$c__AnonStorey3) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Unity::UnitySynchronizationContext::$Send$c__AnonStorey3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!