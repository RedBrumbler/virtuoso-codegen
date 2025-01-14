// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SignalNode
#include "VROSC/SignalNode.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopStationInitializer
  class LoopStationInitializer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopStationInitializer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationInitializer*, "VROSC", "LoopStationInitializer");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopStationInitializer
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopStationInitializer : public ::VROSC::SignalNode {
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
    // private UnityEngine.Collider _collider
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Collider* collider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    public:
    // static field const value: static private System.Int32 MaxLoopStations
    static constexpr const int MaxLoopStations = 8;
    // Get static field: static private System.Int32 MaxLoopStations
    static int _get_MaxLoopStations();
    // Set static field: static private System.Int32 MaxLoopStations
    static void _set_MaxLoopStations(int value);
    // Get instance field reference: private UnityEngine.Collider _collider
    ::UnityEngine::Collider*& dyn__collider();
    // private System.Void MoveBackRecursive()
    // Offset: 0x9162A4
    void MoveBackRecursive();
    // private System.Boolean GetLoopStationParentRecursive(UnityEngine.Transform t)
    // Offset: 0x9163DC
    bool GetLoopStationParentRecursive(::UnityEngine::Transform* t);
    // public System.Void .ctor()
    // Offset: 0x91651C
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::.ctor()
    // Base method: System.Void Node::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopStationInitializer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopStationInitializer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopStationInitializer*, creationType>()));
    }
    // protected override System.Void NodeBegin(VROSC.Signal signal)
    // Offset: 0x9161DC
    // Implemented from: VROSC.SignalNode
    // Base method: System.Void SignalNode::NodeBegin(VROSC.Signal signal)
    void NodeBegin(::VROSC::Signal* signal);
  }; // VROSC.LoopStationInitializer
  #pragma pack(pop)
  static check_size<sizeof(LoopStationInitializer), 64 + sizeof(::UnityEngine::Collider*)> __VROSC_LoopStationInitializerSizeCheck;
  static_assert(sizeof(LoopStationInitializer) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopStationInitializer::MoveBackRecursive
// Il2CppName: MoveBackRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationInitializer::*)()>(&VROSC::LoopStationInitializer::MoveBackRecursive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationInitializer*), "MoveBackRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationInitializer::GetLoopStationParentRecursive
// Il2CppName: GetLoopStationParentRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::LoopStationInitializer::*)(::UnityEngine::Transform*)>(&VROSC::LoopStationInitializer::GetLoopStationParentRecursive)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationInitializer*), "GetLoopStationParentRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationInitializer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::LoopStationInitializer::NodeBegin
// Il2CppName: NodeBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationInitializer::*)(::VROSC::Signal*)>(&VROSC::LoopStationInitializer::NodeBegin)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("VROSC", "Signal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationInitializer*), "NodeBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
