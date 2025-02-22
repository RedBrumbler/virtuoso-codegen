// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.Scale
#include "VROSC/Scale.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: ScaleData
  class ScaleData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::ScaleData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScaleData*, "VROSC", "ScaleData");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x1A
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.ScaleData
  // [TokenAttribute] Offset: FFFFFFFF
  class ScaleData : public ::Il2CppObject {
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
    // public System.Int32 StartNoteOffset
    // Size: 0x4
    // Offset: 0x10
    int StartNoteOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public VROSC.Scale Scale
    // Size: 0x4
    // Offset: 0x14
    ::VROSC::Scale Scale;
    // Field size check
    static_assert(sizeof(::VROSC::Scale) == 0x4);
    // public System.Boolean Locked
    // Size: 0x1
    // Offset: 0x18
    bool Locked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean Customized
    // Size: 0x1
    // Offset: 0x19
    bool Customized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Int32 StartNoteOffset
    int& dyn_StartNoteOffset();
    // Get instance field reference: public VROSC.Scale Scale
    ::VROSC::Scale& dyn_Scale();
    // Get instance field reference: public System.Boolean Locked
    bool& dyn_Locked();
    // Get instance field reference: public System.Boolean Customized
    bool& dyn_Customized();
    // public System.Void .ctor()
    // Offset: 0xB10B18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScaleData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::ScaleData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScaleData*, creationType>()));
    }
  }; // VROSC.ScaleData
  #pragma pack(pop)
  static check_size<sizeof(ScaleData), 25 + sizeof(bool)> __VROSC_ScaleDataSizeCheck;
  static_assert(sizeof(ScaleData) == 0x1A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::ScaleData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
