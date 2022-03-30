// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem::ShapeModule, "UnityEngine", "ParticleSystem/ShapeModule");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ParticleSystem/UnityEngine.ShapeModule
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystem::ShapeModule/*, public ::System::ValueType*/ {
    public:
    public:
    // UnityEngine.ParticleSystem m_ParticleSystem
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::ParticleSystem* m_ParticleSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    public:
    // Creating value type constructor for type: ShapeModule
    constexpr ShapeModule(::UnityEngine::ParticleSystem* m_ParticleSystem_ = {}) noexcept : m_ParticleSystem{m_ParticleSystem_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::ParticleSystem*
    constexpr operator ::UnityEngine::ParticleSystem*() const noexcept {
      return m_ParticleSystem;
    }
    // Get instance field reference: UnityEngine.ParticleSystem m_ParticleSystem
    ::UnityEngine::ParticleSystem*& dyn_m_ParticleSystem();
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0x12FB494
    void set_enabled(bool value);
    // System.Void .ctor(UnityEngine.ParticleSystem particleSystem)
    // Offset: 0x12FAD48
    // ABORTED: conflicts with another method.  ShapeModule(::UnityEngine::ParticleSystem* particleSystem);
    // static private System.Void set_enabled_Injected(ref UnityEngine.ParticleSystem/UnityEngine.ShapeModule _unity_self, System.Boolean value)
    // Offset: 0x12FB4E4
    static void set_enabled_Injected(ByRef<::UnityEngine::ParticleSystem::ShapeModule> _unity_self, bool value);
  }; // UnityEngine.ParticleSystem/UnityEngine.ShapeModule
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystem::ShapeModule), 0 + sizeof(::UnityEngine::ParticleSystem*)> __UnityEngine_ParticleSystem_ShapeModuleSizeCheck;
  static_assert(sizeof(ParticleSystem::ShapeModule) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::ShapeModule::set_enabled
// Il2CppName: set_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::ShapeModule::*)(bool)>(&UnityEngine::ParticleSystem::ShapeModule::set_enabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::ShapeModule), "set_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::ShapeModule::ShapeModule
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::ShapeModule::set_enabled_Injected
// Il2CppName: set_enabled_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::ParticleSystem::ShapeModule>, bool)>(&UnityEngine::ParticleSystem::ShapeModule::set_enabled_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/ShapeModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::ShapeModule), "set_enabled_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};