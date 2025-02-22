// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexCharClass
  class RegexCharClass;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexFC
  class RegexFC;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::RegexFC);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexFC*, "System.Text.RegularExpressions", "RegexFC");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x1A
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexFC
  // [TokenAttribute] Offset: FFFFFFFF
  class RegexFC : public ::Il2CppObject {
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
    // System.Text.RegularExpressions.RegexCharClass _cc
    // Size: 0x8
    // Offset: 0x10
    ::System::Text::RegularExpressions::RegexCharClass* cc;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::RegexCharClass*) == 0x8);
    // System.Boolean _nullable
    // Size: 0x1
    // Offset: 0x18
    bool nullable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _caseInsensitive
    // Size: 0x1
    // Offset: 0x19
    bool caseInsensitive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: System.Text.RegularExpressions.RegexCharClass _cc
    ::System::Text::RegularExpressions::RegexCharClass*& dyn__cc();
    // Get instance field reference: System.Boolean _nullable
    bool& dyn__nullable();
    // Get instance field reference: System.Boolean _caseInsensitive
    bool& dyn__caseInsensitive();
    // System.Void .ctor(System.Boolean nullable)
    // Offset: 0x1250D64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexFC* New_ctor(bool nullable) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::RegexFC::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexFC*, creationType>(nullable)));
    }
    // System.Void .ctor(System.Char ch, System.Boolean not, System.Boolean nullable, System.Boolean caseInsensitive)
    // Offset: 0x1250DE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexFC* New_ctor(::Il2CppChar ch, bool _not, bool nullable, bool caseInsensitive) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::RegexFC::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexFC*, creationType>(ch, _not, nullable, caseInsensitive)));
    }
    // System.Void .ctor(System.String charClass, System.Boolean nullable, System.Boolean caseInsensitive)
    // Offset: 0x1250EDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexFC* New_ctor(::StringW charClass, bool nullable, bool caseInsensitive) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::RegexFC::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexFC*, creationType>(charClass, nullable, caseInsensitive)));
    }
    // System.Boolean AddFC(System.Text.RegularExpressions.RegexFC fc, System.Boolean concatenate)
    // Offset: 0x1250F80
    bool AddFC(::System::Text::RegularExpressions::RegexFC* fc, bool concatenate);
    // System.String GetFirstChars(System.Globalization.CultureInfo culture)
    // Offset: 0x1251038
    ::StringW GetFirstChars(::System::Globalization::CultureInfo* culture);
    // System.Boolean IsCaseInsensitive()
    // Offset: 0x125107C
    bool IsCaseInsensitive();
  }; // System.Text.RegularExpressions.RegexFC
  #pragma pack(pop)
  static check_size<sizeof(RegexFC), 25 + sizeof(bool)> __System_Text_RegularExpressions_RegexFCSizeCheck;
  static_assert(sizeof(RegexFC) == 0x1A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFC::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFC::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFC::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFC::AddFC
// Il2CppName: AddFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexFC::*)(::System::Text::RegularExpressions::RegexFC*, bool)>(&System::Text::RegularExpressions::RegexFC::AddFC)> {
  static const MethodInfo* get() {
    static auto* fc = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexFC")->byval_arg;
    static auto* concatenate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFC*), "AddFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fc, concatenate});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFC::GetFirstChars
// Il2CppName: GetFirstChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::RegularExpressions::RegexFC::*)(::System::Globalization::CultureInfo*)>(&System::Text::RegularExpressions::RegexFC::GetFirstChars)> {
  static const MethodInfo* get() {
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFC*), "GetFirstChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{culture});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFC::IsCaseInsensitive
// Il2CppName: IsCaseInsensitive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexFC::*)()>(&System::Text::RegularExpressions::RegexFC::IsCaseInsensitive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFC*), "IsCaseInsensitive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
