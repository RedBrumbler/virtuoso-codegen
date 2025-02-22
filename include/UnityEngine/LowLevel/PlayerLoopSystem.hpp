// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::LowLevel
namespace UnityEngine::LowLevel {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.LowLevel
namespace UnityEngine::LowLevel {
  // Forward declaring type: PlayerLoopSystem
  struct PlayerLoopSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevel::PlayerLoopSystem, "UnityEngine.LowLevel", "PlayerLoopSystem");
// Type namespace: UnityEngine.LowLevel
namespace UnityEngine::LowLevel {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.LowLevel.PlayerLoopSystem
  // [TokenAttribute] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: 5680A0
  struct PlayerLoopSystem/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction
    class UpdateFunction;
    public:
    // public System.Type type
    // Size: 0x8
    // Offset: 0x0
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public UnityEngine.LowLevel.PlayerLoopSystem[] subSystemList
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> subSystemList;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>) == 0x8);
    // public UnityEngine.LowLevel.PlayerLoopSystem/UnityEngine.LowLevel.UpdateFunction updateDelegate
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction* updateDelegate;
    // Field size check
    static_assert(sizeof(::UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction*) == 0x8);
    // public System.IntPtr updateFunction
    // Size: 0x8
    // Offset: 0x18
    ::System::IntPtr updateFunction;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.IntPtr loopConditionFunction
    // Size: 0x8
    // Offset: 0x20
    ::System::IntPtr loopConditionFunction;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: PlayerLoopSystem
    constexpr PlayerLoopSystem(::System::Type* type_ = {}, ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> subSystemList_ = ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>(static_cast<void*>(nullptr)), ::UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction* updateDelegate_ = {}, ::System::IntPtr updateFunction_ = {}, ::System::IntPtr loopConditionFunction_ = {}) noexcept : type{type_}, subSystemList{subSystemList_}, updateDelegate{updateDelegate_}, updateFunction{updateFunction_}, loopConditionFunction{loopConditionFunction_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Type type
    ::System::Type*& dyn_type();
    // Get instance field reference: public UnityEngine.LowLevel.PlayerLoopSystem[] subSystemList
    ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>& dyn_subSystemList();
    // Get instance field reference: public UnityEngine.LowLevel.PlayerLoopSystem/UnityEngine.LowLevel.UpdateFunction updateDelegate
    ::UnityEngine::LowLevel::PlayerLoopSystem::UpdateFunction*& dyn_updateDelegate();
    // Get instance field reference: public System.IntPtr updateFunction
    ::System::IntPtr& dyn_updateFunction();
    // Get instance field reference: public System.IntPtr loopConditionFunction
    ::System::IntPtr& dyn_loopConditionFunction();
    // public override System.String ToString()
    // Offset: 0x9D2968
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.LowLevel.PlayerLoopSystem
  #pragma pack(pop)
  static check_size<sizeof(PlayerLoopSystem), 32 + sizeof(::System::IntPtr)> __UnityEngine_LowLevel_PlayerLoopSystemSizeCheck;
  static_assert(sizeof(PlayerLoopSystem) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::LowLevel::PlayerLoopSystem::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::LowLevel::PlayerLoopSystem::*)()>(&UnityEngine::LowLevel::PlayerLoopSystem::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LowLevel::PlayerLoopSystem), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
