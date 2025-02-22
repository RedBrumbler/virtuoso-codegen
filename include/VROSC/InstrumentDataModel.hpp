// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.BaseDataModel
#include "VROSC/BaseDataModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: TransformData
  class TransformData;
  // Forward declaring type: MidiData
  class MidiData;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: InstrumentDataModel
  class InstrumentDataModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::InstrumentDataModel);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentDataModel*, "VROSC", "InstrumentDataModel");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.InstrumentDataModel
  // [TokenAttribute] Offset: FFFFFFFF
  class InstrumentDataModel : public ::VROSC::BaseDataModel {
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
    // public System.String Id
    // Size: 0x8
    // Offset: 0x18
    ::StringW Id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public VROSC.TransformData TransformData
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::TransformData* TransformData;
    // Field size check
    static_assert(sizeof(::VROSC::TransformData*) == 0x8);
    // public VROSC.MidiData MidiData
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::MidiData* MidiData;
    // Field size check
    static_assert(sizeof(::VROSC::MidiData*) == 0x8);
    public:
    // Get instance field reference: public System.String Id
    ::StringW& dyn_Id();
    // Get instance field reference: public VROSC.TransformData TransformData
    ::VROSC::TransformData*& dyn_TransformData();
    // Get instance field reference: public VROSC.MidiData MidiData
    ::VROSC::MidiData*& dyn_MidiData();
    // public System.Void .ctor()
    // Offset: 0x1384724
    // Implemented from: VROSC.BaseDataModel
    // Base method: System.Void BaseDataModel::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstrumentDataModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::InstrumentDataModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstrumentDataModel*, creationType>()));
    }
  }; // VROSC.InstrumentDataModel
  #pragma pack(pop)
  static check_size<sizeof(InstrumentDataModel), 40 + sizeof(::VROSC::MidiData*)> __VROSC_InstrumentDataModelSizeCheck;
  static_assert(sizeof(InstrumentDataModel) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::InstrumentDataModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
