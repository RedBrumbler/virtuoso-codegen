// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.FormatterServices
#include "System/Runtime/Serialization/FormatterServices.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: MemberHolder
  class MemberHolder;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::FormatterServices::$$c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::FormatterServices::$$c__DisplayClass9_0*, "System.Runtime.Serialization", "FormatterServices/<>c__DisplayClass9_0");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.FormatterServices/System.Runtime.Serialization.<>c__DisplayClass9_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: 57BA80
  class FormatterServices::$$c__DisplayClass9_0 : public ::Il2CppObject {
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
    // public System.Type type
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return type;
    }
    // Get instance field reference: public System.Type type
    ::System::Type*& dyn_type();
    // System.Reflection.MemberInfo[] <GetSerializableMembers>b__0(System.Runtime.Serialization.MemberHolder _)
    // Offset: 0xDD4FB4
    ::ArrayW<::System::Reflection::MemberInfo*> $GetSerializableMembers$b__0(::System::Runtime::Serialization::MemberHolder* _);
    // public System.Void .ctor()
    // Offset: 0xDD4FAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FormatterServices::$$c__DisplayClass9_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::FormatterServices::$$c__DisplayClass9_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FormatterServices::$$c__DisplayClass9_0*, creationType>()));
    }
  }; // System.Runtime.Serialization.FormatterServices/System.Runtime.Serialization.<>c__DisplayClass9_0
  #pragma pack(pop)
  static check_size<sizeof(FormatterServices::$$c__DisplayClass9_0), 16 + sizeof(::System::Type*)> __System_Runtime_Serialization_FormatterServices_$$c__DisplayClass9_0SizeCheck;
  static_assert(sizeof(FormatterServices::$$c__DisplayClass9_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::$$c__DisplayClass9_0::$GetSerializableMembers$b__0
// Il2CppName: <GetSerializableMembers>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::MemberInfo*> (System::Runtime::Serialization::FormatterServices::$$c__DisplayClass9_0::*)(::System::Runtime::Serialization::MemberHolder*)>(&System::Runtime::Serialization::FormatterServices::$$c__DisplayClass9_0::$GetSerializableMembers$b__0)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "MemberHolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::FormatterServices::$$c__DisplayClass9_0*), "<GetSerializableMembers>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::FormatterServices::$$c__DisplayClass9_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
