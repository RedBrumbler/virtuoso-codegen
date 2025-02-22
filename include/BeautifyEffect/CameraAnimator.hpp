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
  // Forward declaring type: CameraAnimator
  class CameraAnimator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeautifyEffect::CameraAnimator);
DEFINE_IL2CPP_ARG_TYPE(::BeautifyEffect::CameraAnimator*, "BeautifyEffect", "CameraAnimator");
// Type namespace: BeautifyEffect
namespace BeautifyEffect {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeautifyEffect.CameraAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class CameraAnimator : public ::UnityEngine::MonoBehaviour {
    public:
    // private System.Void Update()
    // Offset: 0x132FCDC
    void Update();
    // public System.Void .ctor()
    // Offset: 0x132FD2C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CameraAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeautifyEffect::CameraAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CameraAnimator*, creationType>()));
    }
  }; // BeautifyEffect.CameraAnimator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeautifyEffect::CameraAnimator::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeautifyEffect::CameraAnimator::*)()>(&BeautifyEffect::CameraAnimator::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeautifyEffect::CameraAnimator*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeautifyEffect::CameraAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
