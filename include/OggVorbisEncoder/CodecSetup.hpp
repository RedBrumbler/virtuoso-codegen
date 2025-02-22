// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OggVorbisEncoder.Setup.Mode
#include "OggVorbisEncoder/Setup/Mode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OggVorbisEncoder
namespace OggVorbisEncoder {
  // Forward declaring type: EncodeSetup
  class EncodeSetup;
}
// Forward declaring namespace: OggVorbisEncoder::Setup
namespace OggVorbisEncoder::Setup {
  // Forward declaring type: CodeBook
  class CodeBook;
  // Forward declaring type: IStaticCodeBook
  class IStaticCodeBook;
  // Forward declaring type: Mapping
  class Mapping;
  // Forward declaring type: Floor
  class Floor;
  // Forward declaring type: Residue
  class Residue;
  // Forward declaring type: PsyInfo
  class PsyInfo;
  // Forward declaring type: PsyGlobal
  class PsyGlobal;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: OggVorbisEncoder
namespace OggVorbisEncoder {
  // Forward declaring type: CodecSetup
  class CodecSetup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OggVorbisEncoder::CodecSetup);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbisEncoder::CodecSetup*, "OggVorbisEncoder", "CodecSetup");
// Type namespace: OggVorbisEncoder
namespace OggVorbisEncoder {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbisEncoder.CodecSetup
  // [TokenAttribute] Offset: FFFFFFFF
  class CodecSetup : public ::Il2CppObject {
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
    // private readonly OggVorbisEncoder.EncodeSetup <EncodeSetup>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::OggVorbisEncoder::EncodeSetup* EncodeSetup;
    // Field size check
    static_assert(sizeof(::OggVorbisEncoder::EncodeSetup*) == 0x8);
    // private readonly System.Int32[] <BlockSizes>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int> BlockSizes;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private OggVorbisEncoder.Setup.CodeBook[] <FullBooks>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::OggVorbisEncoder::Setup::CodeBook*> FullBooks;
    // Field size check
    static_assert(sizeof(::ArrayW<::OggVorbisEncoder::Setup::CodeBook*>) == 0x8);
    // private readonly System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.IStaticCodeBook> <BookParams>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::IStaticCodeBook*>* BookParams;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::IStaticCodeBook*>*) == 0x8);
    // private readonly System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.Mode> <ModeParams>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Mode>* ModeParams;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Mode>*) == 0x8);
    // private readonly System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.Mapping> <MapParams>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Mapping*>* MapParams;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Mapping*>*) == 0x8);
    // private readonly System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.Floor> <FloorParams>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Floor*>* FloorParams;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Floor*>*) == 0x8);
    // private readonly System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.Residue> <ResidueParams>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Residue*>* ResidueParams;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Residue*>*) == 0x8);
    // private readonly System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.PsyInfo> <PsyParams>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::PsyInfo*>* PsyParams;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::PsyInfo*>*) == 0x8);
    // private OggVorbisEncoder.Setup.PsyGlobal <PsyGlobalParam>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    ::OggVorbisEncoder::Setup::PsyGlobal* PsyGlobalParam;
    // Field size check
    static_assert(sizeof(::OggVorbisEncoder::Setup::PsyGlobal*) == 0x8);
    public:
    // Get instance field reference: private readonly OggVorbisEncoder.EncodeSetup <EncodeSetup>k__BackingField
    ::OggVorbisEncoder::EncodeSetup*& dyn_$EncodeSetup$k__BackingField();
    // Get instance field reference: private readonly System.Int32[] <BlockSizes>k__BackingField
    ::ArrayW<int>& dyn_$BlockSizes$k__BackingField();
    // Get instance field reference: private OggVorbisEncoder.Setup.CodeBook[] <FullBooks>k__BackingField
    ::ArrayW<::OggVorbisEncoder::Setup::CodeBook*>& dyn_$FullBooks$k__BackingField();
    // Get instance field reference: private readonly System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.IStaticCodeBook> <BookParams>k__BackingField
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::IStaticCodeBook*>*& dyn_$BookParams$k__BackingField();
    // Get instance field reference: private readonly System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.Mode> <ModeParams>k__BackingField
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Mode>*& dyn_$ModeParams$k__BackingField();
    // Get instance field reference: private readonly System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.Mapping> <MapParams>k__BackingField
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Mapping*>*& dyn_$MapParams$k__BackingField();
    // Get instance field reference: private readonly System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.Floor> <FloorParams>k__BackingField
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Floor*>*& dyn_$FloorParams$k__BackingField();
    // Get instance field reference: private readonly System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.Residue> <ResidueParams>k__BackingField
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Residue*>*& dyn_$ResidueParams$k__BackingField();
    // Get instance field reference: private readonly System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.PsyInfo> <PsyParams>k__BackingField
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::PsyInfo*>*& dyn_$PsyParams$k__BackingField();
    // Get instance field reference: private OggVorbisEncoder.Setup.PsyGlobal <PsyGlobalParam>k__BackingField
    ::OggVorbisEncoder::Setup::PsyGlobal*& dyn_$PsyGlobalParam$k__BackingField();
    // public OggVorbisEncoder.EncodeSetup get_EncodeSetup()
    // Offset: 0x74AA00
    ::OggVorbisEncoder::EncodeSetup* get_EncodeSetup();
    // public System.Int32[] get_BlockSizes()
    // Offset: 0x74AA08
    ::ArrayW<int> get_BlockSizes();
    // public OggVorbisEncoder.Setup.CodeBook[] get_FullBooks()
    // Offset: 0x74AA10
    ::ArrayW<::OggVorbisEncoder::Setup::CodeBook*> get_FullBooks();
    // public System.Void set_FullBooks(OggVorbisEncoder.Setup.CodeBook[] value)
    // Offset: 0x74AA18
    void set_FullBooks(::ArrayW<::OggVorbisEncoder::Setup::CodeBook*> value);
    // public System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.IStaticCodeBook> get_BookParams()
    // Offset: 0x74AA20
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::IStaticCodeBook*>* get_BookParams();
    // public System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.Mode> get_ModeParams()
    // Offset: 0x74AA28
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Mode>* get_ModeParams();
    // public System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.Mapping> get_MapParams()
    // Offset: 0x74AA30
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Mapping*>* get_MapParams();
    // public System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.Floor> get_FloorParams()
    // Offset: 0x74AA38
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Floor*>* get_FloorParams();
    // public System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.Residue> get_ResidueParams()
    // Offset: 0x74AA40
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Residue*>* get_ResidueParams();
    // public System.Collections.Generic.IList`1<OggVorbisEncoder.Setup.PsyInfo> get_PsyParams()
    // Offset: 0x74AA48
    ::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::PsyInfo*>* get_PsyParams();
    // public OggVorbisEncoder.Setup.PsyGlobal get_PsyGlobalParam()
    // Offset: 0x74AA50
    ::OggVorbisEncoder::Setup::PsyGlobal* get_PsyGlobalParam();
    // public System.Void set_PsyGlobalParam(OggVorbisEncoder.Setup.PsyGlobal value)
    // Offset: 0x74AA58
    void set_PsyGlobalParam(::OggVorbisEncoder::Setup::PsyGlobal* value);
    // public System.Void .ctor(OggVorbisEncoder.EncodeSetup encodeSetup)
    // Offset: 0x74A810
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CodecSetup* New_ctor(::OggVorbisEncoder::EncodeSetup* encodeSetup) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OggVorbisEncoder::CodecSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CodecSetup*, creationType>(encodeSetup)));
    }
  }; // OggVorbisEncoder.CodecSetup
  #pragma pack(pop)
  static check_size<sizeof(CodecSetup), 88 + sizeof(::OggVorbisEncoder::Setup::PsyGlobal*)> __OggVorbisEncoder_CodecSetupSizeCheck;
  static_assert(sizeof(CodecSetup) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OggVorbisEncoder::CodecSetup::get_EncodeSetup
// Il2CppName: get_EncodeSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::EncodeSetup* (OggVorbisEncoder::CodecSetup::*)()>(&OggVorbisEncoder::CodecSetup::get_EncodeSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::CodecSetup*), "get_EncodeSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::CodecSetup::get_BlockSizes
// Il2CppName: get_BlockSizes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (OggVorbisEncoder::CodecSetup::*)()>(&OggVorbisEncoder::CodecSetup::get_BlockSizes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::CodecSetup*), "get_BlockSizes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::CodecSetup::get_FullBooks
// Il2CppName: get_FullBooks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::OggVorbisEncoder::Setup::CodeBook*> (OggVorbisEncoder::CodecSetup::*)()>(&OggVorbisEncoder::CodecSetup::get_FullBooks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::CodecSetup*), "get_FullBooks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::CodecSetup::set_FullBooks
// Il2CppName: set_FullBooks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OggVorbisEncoder::CodecSetup::*)(::ArrayW<::OggVorbisEncoder::Setup::CodeBook*>)>(&OggVorbisEncoder::CodecSetup::set_FullBooks)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "CodeBook"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::CodecSetup*), "set_FullBooks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::CodecSetup::get_BookParams
// Il2CppName: get_BookParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::IStaticCodeBook*>* (OggVorbisEncoder::CodecSetup::*)()>(&OggVorbisEncoder::CodecSetup::get_BookParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::CodecSetup*), "get_BookParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::CodecSetup::get_ModeParams
// Il2CppName: get_ModeParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Mode>* (OggVorbisEncoder::CodecSetup::*)()>(&OggVorbisEncoder::CodecSetup::get_ModeParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::CodecSetup*), "get_ModeParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::CodecSetup::get_MapParams
// Il2CppName: get_MapParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Mapping*>* (OggVorbisEncoder::CodecSetup::*)()>(&OggVorbisEncoder::CodecSetup::get_MapParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::CodecSetup*), "get_MapParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::CodecSetup::get_FloorParams
// Il2CppName: get_FloorParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Floor*>* (OggVorbisEncoder::CodecSetup::*)()>(&OggVorbisEncoder::CodecSetup::get_FloorParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::CodecSetup*), "get_FloorParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::CodecSetup::get_ResidueParams
// Il2CppName: get_ResidueParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::Residue*>* (OggVorbisEncoder::CodecSetup::*)()>(&OggVorbisEncoder::CodecSetup::get_ResidueParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::CodecSetup*), "get_ResidueParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::CodecSetup::get_PsyParams
// Il2CppName: get_PsyParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::OggVorbisEncoder::Setup::PsyInfo*>* (OggVorbisEncoder::CodecSetup::*)()>(&OggVorbisEncoder::CodecSetup::get_PsyParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::CodecSetup*), "get_PsyParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::CodecSetup::get_PsyGlobalParam
// Il2CppName: get_PsyGlobalParam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::Setup::PsyGlobal* (OggVorbisEncoder::CodecSetup::*)()>(&OggVorbisEncoder::CodecSetup::get_PsyGlobalParam)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::CodecSetup*), "get_PsyGlobalParam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::CodecSetup::set_PsyGlobalParam
// Il2CppName: set_PsyGlobalParam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OggVorbisEncoder::CodecSetup::*)(::OggVorbisEncoder::Setup::PsyGlobal*)>(&OggVorbisEncoder::CodecSetup::set_PsyGlobalParam)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("OggVorbisEncoder.Setup", "PsyGlobal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::CodecSetup*), "set_PsyGlobalParam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::CodecSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
