// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ISubsystem
#include "UnityEngine/ISubsystem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Subsystem
  class Subsystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Subsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Subsystem*, "UnityEngine", "Subsystem");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Subsystem
  // [TokenAttribute] Offset: FFFFFFFF
  class Subsystem : public ::Il2CppObject/*, public ::UnityEngine::ISubsystem*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ISubsystem
    operator ::UnityEngine::ISubsystem() noexcept {
      return *reinterpret_cast<::UnityEngine::ISubsystem*>(this);
    }
    // public System.Void Start()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Start();
    // public System.Void Stop()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Stop();
    // public System.Void Destroy()
    // Offset: 0x12FE18C
    void Destroy();
    // protected System.Void OnDestroy()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnDestroy();
    // protected System.Void .ctor()
    // Offset: 0x12FE298
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Subsystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Subsystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Subsystem*, creationType>()));
    }
  }; // UnityEngine.Subsystem
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Subsystem::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Subsystem::*)()>(&UnityEngine::Subsystem::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Subsystem*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Subsystem::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Subsystem::*)()>(&UnityEngine::Subsystem::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Subsystem*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Subsystem::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Subsystem::*)()>(&UnityEngine::Subsystem::Destroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Subsystem*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Subsystem::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Subsystem::*)()>(&UnityEngine::Subsystem::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Subsystem*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Subsystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
