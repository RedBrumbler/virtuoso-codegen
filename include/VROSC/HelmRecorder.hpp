// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SourceRecorder
#include "VROSC/SourceRecorder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: HelmRecorder
  class HelmRecorder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::HelmRecorder);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HelmRecorder*, "VROSC", "HelmRecorder");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.HelmRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  class HelmRecorder : public ::VROSC::SourceRecorder {
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
    // private System.Single[] _secondaryHelmData
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<float> secondaryHelmData;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    public:
    // Get instance field reference: private System.Single[] _secondaryHelmData
    ::ArrayW<float>& dyn__secondaryHelmData();
    // protected System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0x89D7F0
    void OnAudioFilterRead(::ArrayW<float> data, int channels);
    // public System.Void .ctor()
    // Offset: 0x89D8EC
    // Implemented from: VROSC.SourceRecorder
    // Base method: System.Void SourceRecorder::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelmRecorder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::HelmRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelmRecorder*, creationType>()));
    }
  }; // VROSC.HelmRecorder
  #pragma pack(pop)
  static check_size<sizeof(HelmRecorder), 72 + sizeof(::ArrayW<float>)> __VROSC_HelmRecorderSizeCheck;
  static_assert(sizeof(HelmRecorder) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::HelmRecorder::OnAudioFilterRead
// Il2CppName: OnAudioFilterRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::HelmRecorder::*)(::ArrayW<float>, int)>(&VROSC::HelmRecorder::OnAudioFilterRead)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::HelmRecorder*), "OnAudioFilterRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, channels});
  }
};
// Writing MetadataGetter for method: VROSC::HelmRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!