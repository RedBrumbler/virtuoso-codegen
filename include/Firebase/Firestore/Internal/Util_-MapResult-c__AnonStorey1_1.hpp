// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Firestore.Internal.Util
#include "Firebase/Firestore/Internal/Util.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Firestore::Internal::Util::$MapResult$c__AnonStorey1_1, "Firebase.Firestore.Internal", "Util/<MapResult>c__AnonStorey1`1");
// Type namespace: Firebase.Firestore.Internal
namespace Firebase::Firestore::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: Firebase.Firestore.Internal.Util/Firebase.Firestore.Internal.<MapResult>c__AnonStorey1`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename U>
  class Util::$MapResult$c__AnonStorey1_1 : public ::Il2CppObject {
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
    // U result
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    U result;
    public:
    // Autogenerated instance field getter
    // Get instance field: U result
    U& dyn_result() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Internal::Util::$MapResult$c__AnonStorey1_1::dyn_result");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "result"))->offset;
      return *reinterpret_cast<U*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // U <>m__0(System.Threading.Tasks.Task completedTask)
    // Offset: 0xFFFFFFFFFFFFFFFF
    U $$m__0(::System::Threading::Tasks::Task* completedTask) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Internal::Util::$MapResult$c__AnonStorey1_1::<>m__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<>m__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(completedTask)})));
      return ::il2cpp_utils::RunMethodRethrow<U, false>(this, ___internal__method, completedTask);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Util::$MapResult$c__AnonStorey1_1<U>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Internal::Util::$MapResult$c__AnonStorey1_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Util::$MapResult$c__AnonStorey1_1<U>*, creationType>()));
    }
  }; // Firebase.Firestore.Internal.Util/Firebase.Firestore.Internal.<MapResult>c__AnonStorey1`1
  // Could not write size check! Type: Firebase.Firestore.Internal.Util/Firebase.Firestore.Internal.<MapResult>c__AnonStorey1`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
