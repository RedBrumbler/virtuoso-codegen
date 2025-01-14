// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: MinMaxVector4
  class MinMaxVector4;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::MinMaxVector4);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MinMaxVector4*, "VROSC", "MinMaxVector4");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.MinMaxVector4
  // [TokenAttribute] Offset: FFFFFFFF
  class MinMaxVector4 : public ::Il2CppObject {
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
    // private UnityEngine.Vector4 _min
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Vector4 min;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // private UnityEngine.Vector4 _max
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Vector4 max;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    public:
    // Get instance field reference: private UnityEngine.Vector4 _min
    ::UnityEngine::Vector4& dyn__min();
    // Get instance field reference: private UnityEngine.Vector4 _max
    ::UnityEngine::Vector4& dyn__max();
    // public UnityEngine.Vector4 get_Min()
    // Offset: 0x8B52F0
    ::UnityEngine::Vector4 get_Min();
    // public UnityEngine.Vector4 get_Max()
    // Offset: 0x8B52FC
    ::UnityEngine::Vector4 get_Max();
    // public System.Void .ctor(UnityEngine.Vector4 min, UnityEngine.Vector4 max)
    // Offset: 0x8B5308
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MinMaxVector4* New_ctor(::UnityEngine::Vector4 min, ::UnityEngine::Vector4 max) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::MinMaxVector4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MinMaxVector4*, creationType>(min, max)));
    }
    // public UnityEngine.Vector4 Random(System.Boolean uniform)
    // Offset: 0x8B537C
    ::UnityEngine::Vector4 Random(bool uniform);
    // public UnityEngine.Vector4 Lerp(System.Single amount, System.Boolean clamp)
    // Offset: 0x8B5458
    ::UnityEngine::Vector4 Lerp(float amount, bool clamp);
  }; // VROSC.MinMaxVector4
  #pragma pack(pop)
  static check_size<sizeof(MinMaxVector4), 32 + sizeof(::UnityEngine::Vector4)> __VROSC_MinMaxVector4SizeCheck;
  static_assert(sizeof(MinMaxVector4) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::MinMaxVector4::get_Min
// Il2CppName: get_Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (VROSC::MinMaxVector4::*)()>(&VROSC::MinMaxVector4::get_Min)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MinMaxVector4*), "get_Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MinMaxVector4::get_Max
// Il2CppName: get_Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (VROSC::MinMaxVector4::*)()>(&VROSC::MinMaxVector4::get_Max)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::MinMaxVector4*), "get_Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::MinMaxVector4::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::MinMaxVector4::Random
// Il2CppName: Random
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (VROSC::MinMaxVector4::*)(bool)>(&VROSC::MinMaxVector4::Random)> {
  static const MethodInfo* get() {
    static auto* uniform = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MinMaxVector4*), "Random", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uniform});
  }
};
// Writing MetadataGetter for method: VROSC::MinMaxVector4::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (VROSC::MinMaxVector4::*)(float, bool)>(&VROSC::MinMaxVector4::Lerp)> {
  static const MethodInfo* get() {
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* clamp = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MinMaxVector4*), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{amount, clamp});
  }
};
