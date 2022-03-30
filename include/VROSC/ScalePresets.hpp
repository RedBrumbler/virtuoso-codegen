// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: VROSC.Note
#include "VROSC/Note.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: ScalePreset
  class ScalePreset;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ScalePresets
  class ScalePresets;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ScalePresets);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScalePresets*, "VROSC", "ScalePresets");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ScalePresets
  // [TokenAttribute] Offset: FFFFFFFF
  class ScalePresets : public ::UnityEngine::ScriptableObject {
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
    // public System.Int32 SelectedScaleIndex
    // Size: 0x4
    // Offset: 0x18
    int SelectedScaleIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public VROSC.Note SelectedStartNote
    // Size: 0x14
    // Offset: 0x1C
    ::VROSC::Note SelectedStartNote;
    // Field size check
    static_assert(sizeof(::VROSC::Note) == 0x14);
    // public VROSC.ScalePreset[] Presets
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::VROSC::ScalePreset*> Presets;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::ScalePreset*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Int32 SelectedScaleIndex
    int& dyn_SelectedScaleIndex();
    // Get instance field reference: public VROSC.Note SelectedStartNote
    ::VROSC::Note& dyn_SelectedStartNote();
    // Get instance field reference: public VROSC.ScalePreset[] Presets
    ::ArrayW<::VROSC::ScalePreset*>& dyn_Presets();
    // protected System.Void OnValidate()
    // Offset: 0x13DFCB0
    void OnValidate();
    // public System.Void .ctor()
    // Offset: 0x13DFD18
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScalePresets* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ScalePresets::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScalePresets*, creationType>()));
    }
  }; // VROSC.ScalePresets
  #pragma pack(pop)
  static check_size<sizeof(ScalePresets), 32 + sizeof(::ArrayW<::VROSC::ScalePreset*>)> __VROSC_ScalePresetsSizeCheck;
  static_assert(sizeof(ScalePresets) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ScalePresets::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::ScalePresets::*)()>(&VROSC::ScalePresets::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::ScalePresets*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::ScalePresets::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!