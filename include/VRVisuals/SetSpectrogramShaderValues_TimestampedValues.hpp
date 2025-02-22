// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRVisuals.SetSpectrogramShaderValues
#include "VRVisuals/SetSpectrogramShaderValues.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VRVisuals::SetSpectrogramShaderValues::TimestampedValues);
DEFINE_IL2CPP_ARG_TYPE(::VRVisuals::SetSpectrogramShaderValues::TimestampedValues*, "VRVisuals", "SetSpectrogramShaderValues/TimestampedValues");
// Type namespace: VRVisuals
namespace VRVisuals {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VRVisuals.SetSpectrogramShaderValues/VRVisuals.TimestampedValues
  // [TokenAttribute] Offset: FFFFFFFF
  class SetSpectrogramShaderValues::TimestampedValues : public ::Il2CppObject {
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
    // private System.Single <Life>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float Life;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: Life and: Values
    char __padding0[0x4] = {};
    // private System.Collections.Generic.List`1<System.Single> <Values>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<float>* Values;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<float>*) == 0x8);
    public:
    // Get instance field reference: private System.Single <Life>k__BackingField
    float& dyn_$Life$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Single> <Values>k__BackingField
    ::System::Collections::Generic::List_1<float>*& dyn_$Values$k__BackingField();
    // public System.Single get_Life()
    // Offset: 0x134D6D8
    float get_Life();
    // private System.Void set_Life(System.Single value)
    // Offset: 0x134D6D0
    void set_Life(float value);
    // public System.Collections.Generic.List`1<System.Single> get_Values()
    // Offset: 0x134D6E8
    ::System::Collections::Generic::List_1<float>* get_Values();
    // private System.Void set_Values(System.Collections.Generic.List`1<System.Single> value)
    // Offset: 0x134D6E0
    void set_Values(::System::Collections::Generic::List_1<float>* value);
    // public System.Void .ctor(System.Collections.Generic.List`1<System.Single> values)
    // Offset: 0x134D6F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetSpectrogramShaderValues::TimestampedValues* New_ctor(::System::Collections::Generic::List_1<float>* values) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VRVisuals::SetSpectrogramShaderValues::TimestampedValues::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetSpectrogramShaderValues::TimestampedValues*, creationType>(values)));
    }
    // public System.Void Age(System.Single decay)
    // Offset: 0x134D724
    void Age(float decay);
    // public System.Collections.Generic.List`1<UnityEngine.Vector3> GetAsCircle(System.Single minRange, System.Single maxRange, System.Single scale)
    // Offset: 0x134D734
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetAsCircle(float minRange, float maxRange, float scale);
    // private UnityEngine.Vector3 ArcVector(System.Single yaw, System.Single radius)
    // Offset: 0x134D91C
    ::UnityEngine::Vector3 ArcVector(float yaw, float radius);
  }; // VRVisuals.SetSpectrogramShaderValues/VRVisuals.TimestampedValues
  #pragma pack(pop)
  static check_size<sizeof(SetSpectrogramShaderValues::TimestampedValues), 24 + sizeof(::System::Collections::Generic::List_1<float>*)> __VRVisuals_SetSpectrogramShaderValues_TimestampedValuesSizeCheck;
  static_assert(sizeof(SetSpectrogramShaderValues::TimestampedValues) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VRVisuals::SetSpectrogramShaderValues::TimestampedValues::get_Life
// Il2CppName: get_Life
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VRVisuals::SetSpectrogramShaderValues::TimestampedValues::*)()>(&VRVisuals::SetSpectrogramShaderValues::TimestampedValues::get_Life)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRVisuals::SetSpectrogramShaderValues::TimestampedValues*), "get_Life", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRVisuals::SetSpectrogramShaderValues::TimestampedValues::set_Life
// Il2CppName: set_Life
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRVisuals::SetSpectrogramShaderValues::TimestampedValues::*)(float)>(&VRVisuals::SetSpectrogramShaderValues::TimestampedValues::set_Life)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRVisuals::SetSpectrogramShaderValues::TimestampedValues*), "set_Life", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VRVisuals::SetSpectrogramShaderValues::TimestampedValues::get_Values
// Il2CppName: get_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<float>* (VRVisuals::SetSpectrogramShaderValues::TimestampedValues::*)()>(&VRVisuals::SetSpectrogramShaderValues::TimestampedValues::get_Values)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRVisuals::SetSpectrogramShaderValues::TimestampedValues*), "get_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRVisuals::SetSpectrogramShaderValues::TimestampedValues::set_Values
// Il2CppName: set_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRVisuals::SetSpectrogramShaderValues::TimestampedValues::*)(::System::Collections::Generic::List_1<float>*)>(&VRVisuals::SetSpectrogramShaderValues::TimestampedValues::set_Values)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRVisuals::SetSpectrogramShaderValues::TimestampedValues*), "set_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VRVisuals::SetSpectrogramShaderValues::TimestampedValues::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VRVisuals::SetSpectrogramShaderValues::TimestampedValues::Age
// Il2CppName: Age
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRVisuals::SetSpectrogramShaderValues::TimestampedValues::*)(float)>(&VRVisuals::SetSpectrogramShaderValues::TimestampedValues::Age)> {
  static const MethodInfo* get() {
    static auto* decay = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRVisuals::SetSpectrogramShaderValues::TimestampedValues*), "Age", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decay});
  }
};
// Writing MetadataGetter for method: VRVisuals::SetSpectrogramShaderValues::TimestampedValues::GetAsCircle
// Il2CppName: GetAsCircle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (VRVisuals::SetSpectrogramShaderValues::TimestampedValues::*)(float, float, float)>(&VRVisuals::SetSpectrogramShaderValues::TimestampedValues::GetAsCircle)> {
  static const MethodInfo* get() {
    static auto* minRange = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxRange = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRVisuals::SetSpectrogramShaderValues::TimestampedValues*), "GetAsCircle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minRange, maxRange, scale});
  }
};
// Writing MetadataGetter for method: VRVisuals::SetSpectrogramShaderValues::TimestampedValues::ArcVector
// Il2CppName: ArcVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VRVisuals::SetSpectrogramShaderValues::TimestampedValues::*)(float, float)>(&VRVisuals::SetSpectrogramShaderValues::TimestampedValues::ArcVector)> {
  static const MethodInfo* get() {
    static auto* yaw = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRVisuals::SetSpectrogramShaderValues::TimestampedValues*), "ArcVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{yaw, radius});
  }
};
