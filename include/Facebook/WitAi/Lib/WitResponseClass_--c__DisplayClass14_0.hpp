// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Facebook.WitAi.Lib.WitResponseClass
#include "Facebook/WitAi/Lib/WitResponseClass.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::Lib
namespace Facebook::WitAi::Lib {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Lib::WitResponseClass::$$c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Lib::WitResponseClass::$$c__DisplayClass14_0*, "Facebook.WitAi.Lib", "WitResponseClass/<>c__DisplayClass14_0");
// Type namespace: Facebook.WitAi.Lib
namespace Facebook::WitAi::Lib {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Lib.WitResponseClass/Facebook.WitAi.Lib.<>c__DisplayClass14_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class WitResponseClass::$$c__DisplayClass14_0 : public ::Il2CppObject {
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
    // public Facebook.WitAi.Lib.WitResponseNode aNode
    // Size: 0x8
    // Offset: 0x10
    ::Facebook::WitAi::Lib::WitResponseNode* aNode;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Lib::WitResponseNode*) == 0x8);
    public:
    // Creating conversion operator: operator ::Facebook::WitAi::Lib::WitResponseNode*
    constexpr operator ::Facebook::WitAi::Lib::WitResponseNode*() const noexcept {
      return aNode;
    }
    // Get instance field reference: public Facebook.WitAi.Lib.WitResponseNode aNode
    ::Facebook::WitAi::Lib::WitResponseNode*& dyn_aNode();
    // System.Boolean <Remove>b__0(System.Collections.Generic.KeyValuePair`2<System.String,Facebook.WitAi.Lib.WitResponseNode> k)
    // Offset: 0x11079A4
    bool $Remove$b__0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Facebook::WitAi::Lib::WitResponseNode*> k);
    // public System.Void .ctor()
    // Offset: 0x11019B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitResponseClass::$$c__DisplayClass14_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Lib::WitResponseClass::$$c__DisplayClass14_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitResponseClass::$$c__DisplayClass14_0*, creationType>()));
    }
  }; // Facebook.WitAi.Lib.WitResponseClass/Facebook.WitAi.Lib.<>c__DisplayClass14_0
  #pragma pack(pop)
  static check_size<sizeof(WitResponseClass::$$c__DisplayClass14_0), 16 + sizeof(::Facebook::WitAi::Lib::WitResponseNode*)> __Facebook_WitAi_Lib_WitResponseClass_$$c__DisplayClass14_0SizeCheck;
  static_assert(sizeof(WitResponseClass::$$c__DisplayClass14_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::$$c__DisplayClass14_0::$Remove$b__0
// Il2CppName: <Remove>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::Lib::WitResponseClass::$$c__DisplayClass14_0::*)(::System::Collections::Generic::KeyValuePair_2<::StringW, ::Facebook::WitAi::Lib::WitResponseNode*>)>(&Facebook::WitAi::Lib::WitResponseClass::$$c__DisplayClass14_0::$Remove$b__0)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseClass::$$c__DisplayClass14_0*), "<Remove>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseClass::$$c__DisplayClass14_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
