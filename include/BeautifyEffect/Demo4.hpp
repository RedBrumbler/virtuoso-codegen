// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: BeautifyEffect
namespace BeautifyEffect {
  // Forward declaring type: Demo4
  class Demo4;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeautifyEffect::Demo4);
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::Demo4*, "BeautifyEffect", "Demo4");
// Type namespace: BeautifyEffect
namespace BeautifyEffect {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeautifyEffect.Demo4
  // [TokenAttribute] Offset: FFFFFFFF
  class Demo4 : public ::UnityEngine::MonoBehaviour {
    public:
    // private System.Void Update()
    // Offset: 0x130B3A0
    void Update();
    // public System.Void .ctor()
    // Offset: 0x130B4BC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Demo4* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeautifyEffect::Demo4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Demo4*, creationType>()));
    }
  }; // BeautifyEffect.Demo4
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeautifyEffect::Demo4::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeautifyEffect::Demo4::*)()>(&BeautifyEffect::Demo4::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeautifyEffect::Demo4*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeautifyEffect::Demo4::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
