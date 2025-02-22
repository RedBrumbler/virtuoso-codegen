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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OverrideStartPosition
  class OverrideStartPosition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OverrideStartPosition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OverrideStartPosition*, "", "OverrideStartPosition");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: OverrideStartPosition
  // [TokenAttribute] Offset: FFFFFFFF
  class OverrideStartPosition : public ::UnityEngine::MonoBehaviour {
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
    // private UnityEngine.Vector3 _startPosition
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 startPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _startRotation
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 startRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Vector3 _startPosition
    ::UnityEngine::Vector3& dyn__startPosition();
    // Get instance field reference: private UnityEngine.Vector3 _startRotation
    ::UnityEngine::Vector3& dyn__startRotation();
    // protected System.Void Start()
    // Offset: 0x920744
    void Start();
    // public System.Void .ctor()
    // Offset: 0x9207AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OverrideStartPosition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OverrideStartPosition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OverrideStartPosition*, creationType>()));
    }
  }; // OverrideStartPosition
  #pragma pack(pop)
  static check_size<sizeof(OverrideStartPosition), 36 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_OverrideStartPositionSizeCheck;
  static_assert(sizeof(OverrideStartPosition) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OverrideStartPosition::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OverrideStartPosition::*)()>(&GlobalNamespace::OverrideStartPosition::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OverrideStartPosition*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OverrideStartPosition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
