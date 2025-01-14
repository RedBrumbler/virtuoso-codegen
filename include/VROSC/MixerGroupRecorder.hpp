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
  // Forward declaring type: MixerGroupRecorder
  class MixerGroupRecorder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::MixerGroupRecorder);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MixerGroupRecorder*, "VROSC", "MixerGroupRecorder");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.MixerGroupRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  class MixerGroupRecorder : public ::VROSC::SourceRecorder {
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
    // protected System.Single[] _mixerGroupData
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<float> mixerGroupData;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // protected System.Int32 _routingChannel
    // Size: 0x4
    // Offset: 0x50
    int routingChannel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: protected System.Single[] _mixerGroupData
    ::ArrayW<float>& dyn__mixerGroupData();
    // Get instance field reference: protected System.Int32 _routingChannel
    int& dyn__routingChannel();
    // public System.Void Setup(System.Int32 channel)
    // Offset: 0x8B6624
    void Setup(int channel);
    // protected System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0x8AD5A8
    void OnAudioFilterRead(::ArrayW<float> data, int channels);
    // public System.Void .ctor()
    // Offset: 0x8AD68C
    // Implemented from: VROSC.SourceRecorder
    // Base method: System.Void SourceRecorder::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MixerGroupRecorder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::MixerGroupRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MixerGroupRecorder*, creationType>()));
    }
  }; // VROSC.MixerGroupRecorder
  #pragma pack(pop)
  static check_size<sizeof(MixerGroupRecorder), 80 + sizeof(int)> __VROSC_MixerGroupRecorderSizeCheck;
  static_assert(sizeof(MixerGroupRecorder) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::MixerGroupRecorder::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MixerGroupRecorder::*)(int)>(&VROSC::MixerGroupRecorder::Setup)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MixerGroupRecorder*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel});
  }
};
// Writing MetadataGetter for method: VROSC::MixerGroupRecorder::OnAudioFilterRead
// Il2CppName: OnAudioFilterRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::MixerGroupRecorder::*)(::ArrayW<float>, int)>(&VROSC::MixerGroupRecorder::OnAudioFilterRead)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::MixerGroupRecorder*), "OnAudioFilterRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, channels});
  }
};
// Writing MetadataGetter for method: VROSC::MixerGroupRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
