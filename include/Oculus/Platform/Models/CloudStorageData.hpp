// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: CloudStorageData
  class CloudStorageData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::CloudStorageData);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::CloudStorageData*, "Oculus.Platform.Models", "CloudStorageData");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.CloudStorageData
  // [TokenAttribute] Offset: FFFFFFFF
  class CloudStorageData : public ::Il2CppObject {
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
    // public readonly System.String Bucket
    // Size: 0x8
    // Offset: 0x10
    ::StringW Bucket;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.Byte[] Data
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> Data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public readonly System.UInt32 DataSize
    // Size: 0x4
    // Offset: 0x20
    uint DataSize;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: DataSize and: Key
    char __padding2[0x4] = {};
    // public readonly System.String Key
    // Size: 0x8
    // Offset: 0x28
    ::StringW Key;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.String Bucket
    ::StringW& dyn_Bucket();
    // Get instance field reference: public readonly System.Byte[] Data
    ::ArrayW<uint8_t>& dyn_Data();
    // Get instance field reference: public readonly System.UInt32 DataSize
    uint& dyn_DataSize();
    // Get instance field reference: public readonly System.String Key
    ::StringW& dyn_Key();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x7DEEF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloudStorageData* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::CloudStorageData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloudStorageData*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.CloudStorageData
  #pragma pack(pop)
  static check_size<sizeof(CloudStorageData), 40 + sizeof(::StringW)> __Oculus_Platform_Models_CloudStorageDataSizeCheck;
  static_assert(sizeof(CloudStorageData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::CloudStorageData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
