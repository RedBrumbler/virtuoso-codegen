// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OggVorbisEncoder::Setup
namespace OggVorbisEncoder::Setup {
  // Forward declaring type: ResidueType
  struct ResidueType;
  // Forward declaring type: ResidueLimitType
  struct ResidueLimitType;
  // Forward declaring type: Residue
  class Residue;
  // Forward declaring type: IStaticCodeBook
  class IStaticCodeBook;
  // Forward declaring type: IStaticBookBlock
  class IStaticBookBlock;
}
// Completed forward declares
// Type namespace: OggVorbisEncoder.Setup
namespace OggVorbisEncoder::Setup {
  // Forward declaring type: IResidueTemplate
  class IResidueTemplate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OggVorbisEncoder::Setup::IResidueTemplate);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbisEncoder::Setup::IResidueTemplate*, "OggVorbisEncoder.Setup", "IResidueTemplate");
// Type namespace: OggVorbisEncoder.Setup
namespace OggVorbisEncoder::Setup {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbisEncoder.Setup.IResidueTemplate
  // [TokenAttribute] Offset: FFFFFFFF
  class IResidueTemplate {
    public:
    // public OggVorbisEncoder.Setup.ResidueType get_ResidueType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::OggVorbisEncoder::Setup::ResidueType get_ResidueType();
    // public OggVorbisEncoder.Setup.ResidueLimitType get_LimitType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::OggVorbisEncoder::Setup::ResidueLimitType get_LimitType();
    // public System.Int32 get_Grouping()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Grouping();
    // public OggVorbisEncoder.Setup.Residue get_Residue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::OggVorbisEncoder::Setup::Residue* get_Residue();
    // public OggVorbisEncoder.Setup.IStaticCodeBook get_BookAux()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::OggVorbisEncoder::Setup::IStaticCodeBook* get_BookAux();
    // public OggVorbisEncoder.Setup.IStaticCodeBook get_BookAuxManaged()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::OggVorbisEncoder::Setup::IStaticCodeBook* get_BookAuxManaged();
    // public OggVorbisEncoder.Setup.IStaticBookBlock get_BooksBase()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::OggVorbisEncoder::Setup::IStaticBookBlock* get_BooksBase();
    // public OggVorbisEncoder.Setup.IStaticBookBlock get_BooksBaseManaged()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::OggVorbisEncoder::Setup::IStaticBookBlock* get_BooksBaseManaged();
  }; // OggVorbisEncoder.Setup.IResidueTemplate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::IResidueTemplate::get_ResidueType
// Il2CppName: get_ResidueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::Setup::ResidueType (OggVorbisEncoder::Setup::IResidueTemplate::*)()>(&OggVorbisEncoder::Setup::IResidueTemplate::get_ResidueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::IResidueTemplate*), "get_ResidueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::IResidueTemplate::get_LimitType
// Il2CppName: get_LimitType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::Setup::ResidueLimitType (OggVorbisEncoder::Setup::IResidueTemplate::*)()>(&OggVorbisEncoder::Setup::IResidueTemplate::get_LimitType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::IResidueTemplate*), "get_LimitType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::IResidueTemplate::get_Grouping
// Il2CppName: get_Grouping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OggVorbisEncoder::Setup::IResidueTemplate::*)()>(&OggVorbisEncoder::Setup::IResidueTemplate::get_Grouping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::IResidueTemplate*), "get_Grouping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::IResidueTemplate::get_Residue
// Il2CppName: get_Residue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::Setup::Residue* (OggVorbisEncoder::Setup::IResidueTemplate::*)()>(&OggVorbisEncoder::Setup::IResidueTemplate::get_Residue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::IResidueTemplate*), "get_Residue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::IResidueTemplate::get_BookAux
// Il2CppName: get_BookAux
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::Setup::IStaticCodeBook* (OggVorbisEncoder::Setup::IResidueTemplate::*)()>(&OggVorbisEncoder::Setup::IResidueTemplate::get_BookAux)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::IResidueTemplate*), "get_BookAux", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::IResidueTemplate::get_BookAuxManaged
// Il2CppName: get_BookAuxManaged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::Setup::IStaticCodeBook* (OggVorbisEncoder::Setup::IResidueTemplate::*)()>(&OggVorbisEncoder::Setup::IResidueTemplate::get_BookAuxManaged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::IResidueTemplate*), "get_BookAuxManaged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::IResidueTemplate::get_BooksBase
// Il2CppName: get_BooksBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::Setup::IStaticBookBlock* (OggVorbisEncoder::Setup::IResidueTemplate::*)()>(&OggVorbisEncoder::Setup::IResidueTemplate::get_BooksBase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::IResidueTemplate*), "get_BooksBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::IResidueTemplate::get_BooksBaseManaged
// Il2CppName: get_BooksBaseManaged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OggVorbisEncoder::Setup::IStaticBookBlock* (OggVorbisEncoder::Setup::IResidueTemplate::*)()>(&OggVorbisEncoder::Setup::IResidueTemplate::get_BooksBaseManaged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::IResidueTemplate*), "get_BooksBaseManaged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
