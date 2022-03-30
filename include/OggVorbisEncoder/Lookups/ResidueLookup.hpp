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
// Begin forward declares
// Forward declaring namespace: OggVorbisEncoder::Setup
namespace OggVorbisEncoder::Setup {
  // Forward declaring type: CodeBook
  class CodeBook;
  // Forward declaring type: Residue
  class Residue;
}
// Forward declaring namespace: OggVorbisEncoder
namespace OggVorbisEncoder {
  // Forward declaring type: EncodeBuffer
  class EncodeBuffer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: OggVorbisEncoder.Lookups
namespace OggVorbisEncoder::Lookups {
  // Forward declaring type: ResidueLookup
  class ResidueLookup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OggVorbisEncoder::Lookups::ResidueLookup);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbisEncoder::Lookups::ResidueLookup*, "OggVorbisEncoder.Lookups", "ResidueLookup");
// Type namespace: OggVorbisEncoder.Lookups
namespace OggVorbisEncoder::Lookups {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbisEncoder.Lookups.ResidueLookup
  // [TokenAttribute] Offset: FFFFFFFF
  class ResidueLookup : public ::Il2CppObject {
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
    // private readonly OggVorbisEncoder.Setup.CodeBook[][] _partitionBooks
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::ArrayW<::OggVorbisEncoder::Setup::CodeBook*>> partitionBooks;
    // Field size check
    static_assert(sizeof(::ArrayW<::ArrayW<::OggVorbisEncoder::Setup::CodeBook*>>) == 0x8);
    // private readonly OggVorbisEncoder.Setup.CodeBook _phraseBook
    // Size: 0x8
    // Offset: 0x18
    ::OggVorbisEncoder::Setup::CodeBook* phraseBook;
    // Field size check
    static_assert(sizeof(::OggVorbisEncoder::Setup::CodeBook*) == 0x8);
    // private readonly OggVorbisEncoder.Setup.Residue _residue
    // Size: 0x8
    // Offset: 0x20
    ::OggVorbisEncoder::Setup::Residue* residue;
    // Field size check
    static_assert(sizeof(::OggVorbisEncoder::Setup::Residue*) == 0x8);
    // private readonly System.Int32 _stages
    // Size: 0x4
    // Offset: 0x28
    int stages;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly OggVorbisEncoder.Setup.CodeBook[][] _partitionBooks
    ::ArrayW<::ArrayW<::OggVorbisEncoder::Setup::CodeBook*>>& dyn__partitionBooks();
    // Get instance field reference: private readonly OggVorbisEncoder.Setup.CodeBook _phraseBook
    ::OggVorbisEncoder::Setup::CodeBook*& dyn__phraseBook();
    // Get instance field reference: private readonly OggVorbisEncoder.Setup.Residue _residue
    ::OggVorbisEncoder::Setup::Residue*& dyn__residue();
    // Get instance field reference: private readonly System.Int32 _stages
    int& dyn__stages();
    // public System.Void .ctor(OggVorbisEncoder.Setup.Residue residue, OggVorbisEncoder.Setup.CodeBook[] fullBooks)
    // Offset: 0x7A7740
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResidueLookup* New_ctor(::OggVorbisEncoder::Setup::Residue* residue, ::ArrayW<::OggVorbisEncoder::Setup::CodeBook*> fullBooks) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OggVorbisEncoder::Lookups::ResidueLookup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResidueLookup*, creationType>(residue, fullBooks)));
    }
    // public System.Int32 Forward(OggVorbisEncoder.EncodeBuffer buffer, System.Int32 pcmend, System.Int32[][] couples, System.Boolean[] nonzero, System.Int32 channels, System.Int32[][] partword)
    // Offset: 0x7A79F0
    int Forward(::OggVorbisEncoder::EncodeBuffer* buffer, int pcmend, ::ArrayW<::ArrayW<int>> couples, ::ArrayW<bool> nonzero, int channels, ::ArrayW<::ArrayW<int>> partword);
    // private System.Int32 Res2Forward(OggVorbisEncoder.EncodeBuffer buffer, System.Int32 pcmend, System.Int32[][] couples, System.Boolean[] nonzero, System.Int32 channels, System.Int32[][] partword)
    // Offset: 0x7A7A08
    int Res2Forward(::OggVorbisEncoder::EncodeBuffer* buffer, int pcmend, ::ArrayW<::ArrayW<int>> couples, ::ArrayW<bool> nonzero, int channels, ::ArrayW<::ArrayW<int>> partword);
    // private System.Int32 Res1Forward(OggVorbisEncoder.EncodeBuffer buffer, System.Int32[] work, System.Int32 channels, System.Int32[][] partword)
    // Offset: 0x7A7B7C
    int Res1Forward(::OggVorbisEncoder::EncodeBuffer* buffer, ::ArrayW<int> work, int channels, ::ArrayW<::ArrayW<int>> partword);
    // private System.Void EncodePart(OggVorbisEncoder.EncodeBuffer buffer, System.Int32[] vec, System.Int32 offset, System.Int32 n, OggVorbisEncoder.Setup.CodeBook book)
    // Offset: 0x7A7E34
    void EncodePart(::OggVorbisEncoder::EncodeBuffer* buffer, ::ArrayW<int> vec, int offset, int n, ::OggVorbisEncoder::Setup::CodeBook* book);
    // static private System.Int32 LocalBookBestError(OggVorbisEncoder.Setup.CodeBook book, System.Int32[] vec, System.Int32 offset)
    // Offset: 0x7A7ED8
    static int LocalBookBestError(::OggVorbisEncoder::Setup::CodeBook* book, ::ArrayW<int> vec, int offset);
    // public System.Int32[][] Class(System.Int32[][] couples, System.Collections.Generic.IList`1<System.Boolean> nonzero, System.Int32 channels)
    // Offset: 0x7A842C
    ::ArrayW<::ArrayW<int>> Class(::ArrayW<::ArrayW<int>> couples, ::System::Collections::Generic::IList_1<bool>* nonzero, int channels);
    // private System.Int32[][] ResTwoClass(System.Int32[][] couples, System.Int32 channels)
    // Offset: 0x7A8538
    ::ArrayW<::ArrayW<int>> ResTwoClass(::ArrayW<::ArrayW<int>> couples, int channels);
  }; // OggVorbisEncoder.Lookups.ResidueLookup
  #pragma pack(pop)
  static check_size<sizeof(ResidueLookup), 40 + sizeof(int)> __OggVorbisEncoder_Lookups_ResidueLookupSizeCheck;
  static_assert(sizeof(ResidueLookup) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OggVorbisEncoder::Lookups::ResidueLookup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OggVorbisEncoder::Lookups::ResidueLookup::Forward
// Il2CppName: Forward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OggVorbisEncoder::Lookups::ResidueLookup::*)(::OggVorbisEncoder::EncodeBuffer*, int, ::ArrayW<::ArrayW<int>>, ::ArrayW<bool>, int, ::ArrayW<::ArrayW<int>>)>(&OggVorbisEncoder::Lookups::ResidueLookup::Forward)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "EncodeBuffer")->byval_arg;
    static auto* pcmend = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* couples = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1), 1)->byval_arg;
    static auto* nonzero = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Boolean"), 1)->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partword = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Lookups::ResidueLookup*), "Forward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, pcmend, couples, nonzero, channels, partword});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Lookups::ResidueLookup::Res2Forward
// Il2CppName: Res2Forward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OggVorbisEncoder::Lookups::ResidueLookup::*)(::OggVorbisEncoder::EncodeBuffer*, int, ::ArrayW<::ArrayW<int>>, ::ArrayW<bool>, int, ::ArrayW<::ArrayW<int>>)>(&OggVorbisEncoder::Lookups::ResidueLookup::Res2Forward)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "EncodeBuffer")->byval_arg;
    static auto* pcmend = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* couples = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1), 1)->byval_arg;
    static auto* nonzero = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Boolean"), 1)->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partword = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Lookups::ResidueLookup*), "Res2Forward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, pcmend, couples, nonzero, channels, partword});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Lookups::ResidueLookup::Res1Forward
// Il2CppName: Res1Forward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OggVorbisEncoder::Lookups::ResidueLookup::*)(::OggVorbisEncoder::EncodeBuffer*, ::ArrayW<int>, int, ::ArrayW<::ArrayW<int>>)>(&OggVorbisEncoder::Lookups::ResidueLookup::Res1Forward)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "EncodeBuffer")->byval_arg;
    static auto* work = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* partword = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Lookups::ResidueLookup*), "Res1Forward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, work, channels, partword});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Lookups::ResidueLookup::EncodePart
// Il2CppName: EncodePart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OggVorbisEncoder::Lookups::ResidueLookup::*)(::OggVorbisEncoder::EncodeBuffer*, ::ArrayW<int>, int, int, ::OggVorbisEncoder::Setup::CodeBook*)>(&OggVorbisEncoder::Lookups::ResidueLookup::EncodePart)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "EncodeBuffer")->byval_arg;
    static auto* vec = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* book = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "CodeBook")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Lookups::ResidueLookup*), "EncodePart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, vec, offset, n, book});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Lookups::ResidueLookup::LocalBookBestError
// Il2CppName: LocalBookBestError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::OggVorbisEncoder::Setup::CodeBook*, ::ArrayW<int>, int)>(&OggVorbisEncoder::Lookups::ResidueLookup::LocalBookBestError)> {
  static const MethodInfo* get() {
    static auto* book = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "CodeBook")->byval_arg;
    static auto* vec = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Lookups::ResidueLookup*), "LocalBookBestError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{book, vec, offset});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Lookups::ResidueLookup::Class
// Il2CppName: Class
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<int>> (OggVorbisEncoder::Lookups::ResidueLookup::*)(::ArrayW<::ArrayW<int>>, ::System::Collections::Generic::IList_1<bool>*, int)>(&OggVorbisEncoder::Lookups::ResidueLookup::Class)> {
  static const MethodInfo* get() {
    static auto* couples = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1), 1)->byval_arg;
    static auto* nonzero = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Lookups::ResidueLookup*), "Class", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{couples, nonzero, channels});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Lookups::ResidueLookup::ResTwoClass
// Il2CppName: ResTwoClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<int>> (OggVorbisEncoder::Lookups::ResidueLookup::*)(::ArrayW<::ArrayW<int>>, int)>(&OggVorbisEncoder::Lookups::ResidueLookup::ResTwoClass)> {
  static const MethodInfo* get() {
    static auto* couples = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1), 1)->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Lookups::ResidueLookup*), "ResTwoClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{couples, channels});
  }
};