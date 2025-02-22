// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OvrAvatarComponent
#include "GlobalNamespace/OvrAvatarComponent.hpp"
// Including type: ovrAvatarBaseComponent
#include "GlobalNamespace/ovrAvatarBaseComponent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarBase
  class OvrAvatarBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarBase*, "", "OvrAvatarBase");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarBase
  // [TokenAttribute] Offset: FFFFFFFF
  class OvrAvatarBase : public ::GlobalNamespace::OvrAvatarComponent {
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
    // private ovrAvatarBaseComponent component
    // Size: 0x18
    // Offset: 0x70
    ::GlobalNamespace::ovrAvatarBaseComponent component;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarBaseComponent) == 0x18);
    public:
    // Get instance field reference: private ovrAvatarBaseComponent component
    ::GlobalNamespace::ovrAvatarBaseComponent& dyn_component();
    // private System.Void Update()
    // Offset: 0x927F64
    void Update();
    // public System.Void .ctor()
    // Offset: 0x9283B8
    // Implemented from: OvrAvatarComponent
    // Base method: System.Void OvrAvatarComponent::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarBase*, creationType>()));
    }
  }; // OvrAvatarBase
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarBase), 112 + sizeof(::GlobalNamespace::ovrAvatarBaseComponent)> __GlobalNamespace_OvrAvatarBaseSizeCheck;
  static_assert(sizeof(OvrAvatarBase) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarBase::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarBase::*)()>(&GlobalNamespace::OvrAvatarBase::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarBase*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
