// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::Credits
namespace VROSC::Credits {
  // Forward declaring type: CreditsObject
  class CreditsObject;
  // Forward declaring type: CreditsNameListData
  class CreditsNameListData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: VROSC.Credits
namespace VROSC::Credits {
  // Forward declaring type: CreditsSectionData
  class CreditsSectionData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::Credits::CreditsSectionData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Credits::CreditsSectionData*, "VROSC.Credits", "CreditsSectionData");
// Type namespace: VROSC.Credits
namespace VROSC::Credits {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.Credits.CreditsSectionData
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: 66AF60
  class CreditsSectionData : public ::UnityEngine::ScriptableObject {
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
    // private VROSC.Credits.CreditsObject _headerObject
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::Credits::CreditsObject* headerObject;
    // Field size check
    static_assert(sizeof(::VROSC::Credits::CreditsObject*) == 0x8);
    // private System.String _sectionHeader
    // Size: 0x8
    // Offset: 0x20
    ::StringW sectionHeader;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Single _paddingFromHeaderToSections
    // Size: 0x4
    // Offset: 0x28
    float paddingFromHeaderToSections;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: paddingFromHeaderToSections and: footerObject
    char __padding2[0x4] = {};
    // private VROSC.Credits.CreditsObject _footerObject
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::Credits::CreditsObject* footerObject;
    // Field size check
    static_assert(sizeof(::VROSC::Credits::CreditsObject*) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.Credits.CreditsNameListData> _nameLists
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameListData*>* nameLists;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameListData*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.Credits.CreditsObject _headerObject
    ::VROSC::Credits::CreditsObject*& dyn__headerObject();
    // Get instance field reference: private System.String _sectionHeader
    ::StringW& dyn__sectionHeader();
    // Get instance field reference: private System.Single _paddingFromHeaderToSections
    float& dyn__paddingFromHeaderToSections();
    // Get instance field reference: private VROSC.Credits.CreditsObject _footerObject
    ::VROSC::Credits::CreditsObject*& dyn__footerObject();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.Credits.CreditsNameListData> _nameLists
    ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameListData*>*& dyn__nameLists();
    // public VROSC.Credits.CreditsObject get_HeaderObject()
    // Offset: 0x13075A0
    ::VROSC::Credits::CreditsObject* get_HeaderObject();
    // public System.String get_SectionHeader()
    // Offset: 0x13075A8
    ::StringW get_SectionHeader();
    // public System.Single get_PaddingFromHeaderToSections()
    // Offset: 0x13075B0
    float get_PaddingFromHeaderToSections();
    // public VROSC.Credits.CreditsObject get_FooterObject()
    // Offset: 0x13075B8
    ::VROSC::Credits::CreditsObject* get_FooterObject();
    // public System.Collections.Generic.List`1<VROSC.Credits.CreditsNameListData> get_NameLists()
    // Offset: 0x13075C0
    ::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameListData*>* get_NameLists();
    // public System.Void .ctor()
    // Offset: 0x13075C8
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreditsSectionData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::Credits::CreditsSectionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreditsSectionData*, creationType>()));
    }
  }; // VROSC.Credits.CreditsSectionData
  #pragma pack(pop)
  static check_size<sizeof(CreditsSectionData), 56 + sizeof(::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameListData*>*)> __VROSC_Credits_CreditsSectionDataSizeCheck;
  static_assert(sizeof(CreditsSectionData) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::Credits::CreditsSectionData::get_HeaderObject
// Il2CppName: get_HeaderObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Credits::CreditsObject* (VROSC::Credits::CreditsSectionData::*)()>(&VROSC::Credits::CreditsSectionData::get_HeaderObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsSectionData*), "get_HeaderObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsSectionData::get_SectionHeader
// Il2CppName: get_SectionHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::Credits::CreditsSectionData::*)()>(&VROSC::Credits::CreditsSectionData::get_SectionHeader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsSectionData*), "get_SectionHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsSectionData::get_PaddingFromHeaderToSections
// Il2CppName: get_PaddingFromHeaderToSections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::Credits::CreditsSectionData::*)()>(&VROSC::Credits::CreditsSectionData::get_PaddingFromHeaderToSections)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsSectionData*), "get_PaddingFromHeaderToSections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsSectionData::get_FooterObject
// Il2CppName: get_FooterObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::Credits::CreditsObject* (VROSC::Credits::CreditsSectionData::*)()>(&VROSC::Credits::CreditsSectionData::get_FooterObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsSectionData*), "get_FooterObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsSectionData::get_NameLists
// Il2CppName: get_NameLists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::Credits::CreditsNameListData*>* (VROSC::Credits::CreditsSectionData::*)()>(&VROSC::Credits::CreditsSectionData::get_NameLists)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Credits::CreditsSectionData*), "get_NameLists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Credits::CreditsSectionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
