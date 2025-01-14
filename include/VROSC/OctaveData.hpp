// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: OctaveData
  class OctaveData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::OctaveData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OctaveData*, "VROSC", "OctaveData");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.OctaveData
  // [TokenAttribute] Offset: FFFFFFFF
  class OctaveData : public ::Il2CppObject {
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
    // public System.Int32 SelectedOctave
    // Size: 0x4
    // Offset: 0x10
    int SelectedOctave;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 MinOctave
    // Size: 0x4
    // Offset: 0x14
    int MinOctave;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 MaxOctave
    // Size: 0x4
    // Offset: 0x18
    int MaxOctave;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 SelectedOctave
    int& dyn_SelectedOctave();
    // Get instance field reference: public System.Int32 MinOctave
    int& dyn_MinOctave();
    // Get instance field reference: public System.Int32 MaxOctave
    int& dyn_MaxOctave();
    // public System.Void .ctor()
    // Offset: 0x91AF90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OctaveData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::OctaveData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OctaveData*, creationType>()));
    }
  }; // VROSC.OctaveData
  #pragma pack(pop)
  static check_size<sizeof(OctaveData), 24 + sizeof(int)> __VROSC_OctaveDataSizeCheck;
  static_assert(sizeof(OctaveData) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::OctaveData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
