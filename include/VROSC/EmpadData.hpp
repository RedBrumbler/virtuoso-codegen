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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: EmpadData
  class EmpadData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::EmpadData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EmpadData*, "VROSC", "EmpadData");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.EmpadData
  // [TokenAttribute] Offset: FFFFFFFF
  class EmpadData : public ::Il2CppObject {
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
    // public System.Int32 Id
    // Size: 0x4
    // Offset: 0x10
    int Id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 GroupId
    // Size: 0x4
    // Offset: 0x14
    int GroupId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 SampleId
    // Size: 0x4
    // Offset: 0x18
    int SampleId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 SelectedIndex
    // Size: 0x4
    // Offset: 0x1C
    int SelectedIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 MidiNote
    // Size: 0x4
    // Offset: 0x20
    int MidiNote;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean IsPressureSensitive
    // Size: 0x1
    // Offset: 0x24
    bool IsPressureSensitive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsPressureSensitive and: Pitch
    char __padding5[0x3] = {};
    // public System.Int32 Pitch
    // Size: 0x4
    // Offset: 0x28
    int Pitch;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single Size
    // Size: 0x4
    // Offset: 0x2C
    float Size;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single[] Position
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<float> Position;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] Rotation
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<float> Rotation;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    public:
    // Get instance field reference: public System.Int32 Id
    int& dyn_Id();
    // Get instance field reference: public System.Int32 GroupId
    int& dyn_GroupId();
    // Get instance field reference: public System.Int32 SampleId
    int& dyn_SampleId();
    // Get instance field reference: public System.Int32 SelectedIndex
    int& dyn_SelectedIndex();
    // Get instance field reference: public System.Int32 MidiNote
    int& dyn_MidiNote();
    // Get instance field reference: public System.Boolean IsPressureSensitive
    bool& dyn_IsPressureSensitive();
    // Get instance field reference: public System.Int32 Pitch
    int& dyn_Pitch();
    // Get instance field reference: public System.Single Size
    float& dyn_Size();
    // Get instance field reference: public System.Single[] Position
    ::ArrayW<float>& dyn_Position();
    // Get instance field reference: public System.Single[] Rotation
    ::ArrayW<float>& dyn_Rotation();
    // public System.Void .ctor()
    // Offset: 0x131198C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmpadData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::EmpadData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmpadData*, creationType>()));
    }
  }; // VROSC.EmpadData
  #pragma pack(pop)
  static check_size<sizeof(EmpadData), 56 + sizeof(::ArrayW<float>)> __VROSC_EmpadDataSizeCheck;
  static_assert(sizeof(EmpadData) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::EmpadData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
