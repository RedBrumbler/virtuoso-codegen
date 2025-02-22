// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.CharUnicodeInfo
#include "System/Globalization/CharUnicodeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Globalization::CharUnicodeInfo::Debug);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CharUnicodeInfo::Debug*, "System.Globalization", "CharUnicodeInfo/Debug");
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.CharUnicodeInfo/System.Globalization.Debug
  // [TokenAttribute] Offset: FFFFFFFF
  class CharUnicodeInfo::Debug : public ::Il2CppObject {
    public:
    // static System.Void Assert(System.Boolean condition, System.String message)
    // Offset: 0xDCEE24
    static void Assert_(bool condition, ::StringW message);
  }; // System.Globalization.CharUnicodeInfo/System.Globalization.Debug
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Globalization::CharUnicodeInfo::Debug::Assert_
// Il2CppName: Assert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::StringW)>(&System::Globalization::CharUnicodeInfo::Debug::Assert_)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Globalization::CharUnicodeInfo::Debug*), "Assert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition, message});
  }
};
