// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.FileWriter
#include "VROSC/FileWriter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::FileWriter::$$c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FileWriter::$$c__DisplayClass18_0*, "VROSC", "FileWriter/<>c__DisplayClass18_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.FileWriter/VROSC.<>c__DisplayClass18_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FileWriter::$$c__DisplayClass18_0 : public ::Il2CppObject {
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
    // public System.String filePath
    // Size: 0x8
    // Offset: 0x10
    ::StringW filePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single[] samples
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<float> samples;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Int32 frequency
    // Size: 0x4
    // Offset: 0x20
    int frequency;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 channels
    // Size: 0x4
    // Offset: 0x24
    int channels;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.String filePath
    ::StringW& dyn_filePath();
    // Get instance field reference: public System.Single[] samples
    ::ArrayW<float>& dyn_samples();
    // Get instance field reference: public System.Int32 frequency
    int& dyn_frequency();
    // Get instance field reference: public System.Int32 channels
    int& dyn_channels();
    // System.Void <SaveSampleToFile>b__0()
    // Offset: 0x1362F80
    void $SaveSampleToFile$b__0();
    // public System.Void .ctor()
    // Offset: 0x1362F78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileWriter::$$c__DisplayClass18_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::FileWriter::$$c__DisplayClass18_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileWriter::$$c__DisplayClass18_0*, creationType>()));
    }
  }; // VROSC.FileWriter/VROSC.<>c__DisplayClass18_0
  #pragma pack(pop)
  static check_size<sizeof(FileWriter::$$c__DisplayClass18_0), 36 + sizeof(int)> __VROSC_FileWriter_$$c__DisplayClass18_0SizeCheck;
  static_assert(sizeof(FileWriter::$$c__DisplayClass18_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::FileWriter::$$c__DisplayClass18_0::$SaveSampleToFile$b__0
// Il2CppName: <SaveSampleToFile>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FileWriter::$$c__DisplayClass18_0::*)()>(&VROSC::FileWriter::$$c__DisplayClass18_0::$SaveSampleToFile$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FileWriter::$$c__DisplayClass18_0*), "<SaveSampleToFile>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FileWriter::$$c__DisplayClass18_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!