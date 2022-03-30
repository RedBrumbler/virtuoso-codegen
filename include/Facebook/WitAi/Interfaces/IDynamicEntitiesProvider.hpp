// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Facebook.WitAi.Interfaces
namespace Facebook::WitAi::Interfaces {
  // Forward declaring type: IDynamicEntitiesProvider
  class IDynamicEntitiesProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Interfaces::IDynamicEntitiesProvider);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Interfaces::IDynamicEntitiesProvider*, "Facebook.WitAi.Interfaces", "IDynamicEntitiesProvider");
// Type namespace: Facebook.WitAi.Interfaces
namespace Facebook::WitAi::Interfaces {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Interfaces.IDynamicEntitiesProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class IDynamicEntitiesProvider {
    public:
    // public System.String ToJSON()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW ToJSON();
  }; // Facebook.WitAi.Interfaces.IDynamicEntitiesProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Interfaces::IDynamicEntitiesProvider::ToJSON
// Il2CppName: ToJSON
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Facebook::WitAi::Interfaces::IDynamicEntitiesProvider::*)()>(&Facebook::WitAi::Interfaces::IDynamicEntitiesProvider::ToJSON)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Interfaces::IDynamicEntitiesProvider*), "ToJSON", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};