// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: TextActivationBehaviour
  class TextActivationBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TextActivationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TextActivationBehaviour*, "VROSC", "TextActivationBehaviour");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TextActivationBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class TextActivationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
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
    // private TMPro.TextMeshPro _textMesh
    // Size: 0x8
    // Offset: 0x10
    ::TMPro::TextMeshPro* textMesh;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // [RangeAttribute] Offset: 0x6738A0
    // public System.Single Activation
    // Size: 0x4
    // Offset: 0x18
    float Activation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: Activation and: vertices
    char __padding1[0x4] = {};
    // private UnityEngine.Vector3[] _vertices
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Vector3> vertices;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Vector3[] _endVertices
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Vector3> endVertices;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Vector3[] _posOffset
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Vector3> posOffset;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // public System.Single Deviation
    // Size: 0x4
    // Offset: 0x38
    float Deviation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: Deviation and: DeviationCurve
    char __padding5[0x4] = {};
    // public UnityEngine.AnimationCurve DeviationCurve
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AnimationCurve* DeviationCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    public:
    // Get instance field reference: private TMPro.TextMeshPro _textMesh
    ::TMPro::TextMeshPro*& dyn__textMesh();
    // Get instance field reference: public System.Single Activation
    float& dyn_Activation();
    // Get instance field reference: private UnityEngine.Vector3[] _vertices
    ::ArrayW<::UnityEngine::Vector3>& dyn__vertices();
    // Get instance field reference: private UnityEngine.Vector3[] _endVertices
    ::ArrayW<::UnityEngine::Vector3>& dyn__endVertices();
    // Get instance field reference: private UnityEngine.Vector3[] _posOffset
    ::ArrayW<::UnityEngine::Vector3>& dyn__posOffset();
    // Get instance field reference: public System.Single Deviation
    float& dyn_Deviation();
    // Get instance field reference: public UnityEngine.AnimationCurve DeviationCurve
    ::UnityEngine::AnimationCurve*& dyn_DeviationCurve();
    // public System.Void Setup(TMPro.TextMeshPro textMesh, System.String text)
    // Offset: 0x13FC7CC
    void Setup(::TMPro::TextMeshPro* textMesh, ::StringW text);
    // public System.Void .ctor()
    // Offset: 0x13FCC24
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextActivationBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TextActivationBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextActivationBehaviour*, creationType>()));
    }
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x13FC944
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
  }; // VROSC.TextActivationBehaviour
  #pragma pack(pop)
  static check_size<sizeof(TextActivationBehaviour), 64 + sizeof(::UnityEngine::AnimationCurve*)> __VROSC_TextActivationBehaviourSizeCheck;
  static_assert(sizeof(TextActivationBehaviour) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TextActivationBehaviour::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TextActivationBehaviour::*)(::TMPro::TextMeshPro*, ::StringW)>(&VROSC::TextActivationBehaviour::Setup)> {
  static const MethodInfo* get() {
    static auto* textMesh = &::il2cpp_utils::GetClassFromName("TMPro", "TextMeshPro")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TextActivationBehaviour*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textMesh, text});
  }
};
// Writing MetadataGetter for method: VROSC::TextActivationBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::TextActivationBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TextActivationBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&VROSC::TextActivationBehaviour::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TextActivationBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
