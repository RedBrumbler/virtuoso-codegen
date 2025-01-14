// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.AudioReactive.CoroutineDrivenEffect
#include "VROSC/AudioReactive/CoroutineDrivenEffect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC::AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: TranslateEffectData
  class TranslateEffectData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: TranslateEffect
  class TranslateEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::TranslateEffect);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::TranslateEffect*, "VROSC.AudioReactive", "TranslateEffect");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.TranslateEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class TranslateEffect : public ::VROSC::AudioReactive::CoroutineDrivenEffect {
    public:
    // Nested type: ::VROSC::AudioReactive::TranslateEffect::TranslateData
    class TranslateData;
    // Nested type: ::VROSC::AudioReactive::TranslateEffect::$SpecificFlow$d__6
    class $SpecificFlow$d__6;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.AudioReactive.TranslateEffectData _data
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::AudioReactive::TranslateEffectData* data;
    // Field size check
    static_assert(sizeof(::VROSC::AudioReactive::TranslateEffectData*) == 0x8);
    // private UnityEngine.Transform[] _transforms
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::Transform*> transforms;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    public:
    // Get instance field reference: private VROSC.AudioReactive.TranslateEffectData _data
    ::VROSC::AudioReactive::TranslateEffectData*& dyn__data();
    // Get instance field reference: private UnityEngine.Transform[] _transforms
    ::ArrayW<::UnityEngine::Transform*>& dyn__transforms();
    // public VROSC.AudioReactive.TranslateEffectData get_Data()
    // Offset: 0x140524C
    ::VROSC::AudioReactive::TranslateEffectData* get_Data();
    // public UnityEngine.Transform[] get_Transforms()
    // Offset: 0x1405254
    ::ArrayW<::UnityEngine::Transform*> get_Transforms();
    // private VROSC.AudioReactive.TranslateEffect/VROSC.AudioReactive.TranslateData[] GetTranslationDatas()
    // Offset: 0x14052C8
    ::ArrayW<::VROSC::AudioReactive::TranslateEffect::TranslateData*> GetTranslationDatas();
    // public System.Void .ctor()
    // Offset: 0x14053FC
    // Implemented from: VROSC.AudioReactive.CoroutineDrivenEffect
    // Base method: System.Void CoroutineDrivenEffect::.ctor()
    // Base method: System.Void ReactiveEffect::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TranslateEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::TranslateEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TranslateEffect*, creationType>()));
    }
    // protected override System.Collections.IEnumerator SpecificFlow()
    // Offset: 0x140525C
    // Implemented from: VROSC.AudioReactive.CoroutineDrivenEffect
    // Base method: System.Collections.IEnumerator CoroutineDrivenEffect::SpecificFlow()
    ::System::Collections::IEnumerator* SpecificFlow();
  }; // VROSC.AudioReactive.TranslateEffect
  #pragma pack(pop)
  static check_size<sizeof(TranslateEffect), 56 + sizeof(::ArrayW<::UnityEngine::Transform*>)> __VROSC_AudioReactive_TranslateEffectSizeCheck;
  static_assert(sizeof(TranslateEffect) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::TranslateEffect::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::AudioReactive::TranslateEffectData* (VROSC::AudioReactive::TranslateEffect::*)()>(&VROSC::AudioReactive::TranslateEffect::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::TranslateEffect*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::TranslateEffect::get_Transforms
// Il2CppName: get_Transforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform*> (VROSC::AudioReactive::TranslateEffect::*)()>(&VROSC::AudioReactive::TranslateEffect::get_Transforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::TranslateEffect*), "get_Transforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::TranslateEffect::GetTranslationDatas
// Il2CppName: GetTranslationDatas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::VROSC::AudioReactive::TranslateEffect::TranslateData*> (VROSC::AudioReactive::TranslateEffect::*)()>(&VROSC::AudioReactive::TranslateEffect::GetTranslationDatas)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::TranslateEffect*), "GetTranslationDatas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::TranslateEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::AudioReactive::TranslateEffect::SpecificFlow
// Il2CppName: SpecificFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VROSC::AudioReactive::TranslateEffect::*)()>(&VROSC::AudioReactive::TranslateEffect::SpecificFlow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::TranslateEffect*), "SpecificFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
