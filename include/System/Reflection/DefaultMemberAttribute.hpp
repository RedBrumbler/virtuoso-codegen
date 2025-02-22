// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: DefaultMemberAttribute
  class DefaultMemberAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::DefaultMemberAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::DefaultMemberAttribute*, "System.Reflection", "DefaultMemberAttribute");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.DefaultMemberAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 579A14
  // [ComVisibleAttribute] Offset: 579A14
  class DefaultMemberAttribute : public ::System::Attribute {
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
    // private System.String m_memberName
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_memberName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return m_memberName;
    }
    // Get instance field reference: private System.String m_memberName
    ::StringW& dyn_m_memberName();
    // public System.String get_MemberName()
    // Offset: 0xCAE9C4
    ::StringW get_MemberName();
    // public System.Void .ctor(System.String memberName)
    // Offset: 0xCAE998
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultMemberAttribute* New_ctor(::StringW memberName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::DefaultMemberAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultMemberAttribute*, creationType>(memberName)));
    }
  }; // System.Reflection.DefaultMemberAttribute
  #pragma pack(pop)
  static check_size<sizeof(DefaultMemberAttribute), 16 + sizeof(::StringW)> __System_Reflection_DefaultMemberAttributeSizeCheck;
  static_assert(sizeof(DefaultMemberAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::DefaultMemberAttribute::get_MemberName
// Il2CppName: get_MemberName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::DefaultMemberAttribute::*)()>(&System::Reflection::DefaultMemberAttribute::get_MemberName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::DefaultMemberAttribute*), "get_MemberName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::DefaultMemberAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
