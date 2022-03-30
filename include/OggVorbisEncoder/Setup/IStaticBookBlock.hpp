// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OggVorbisEncoder::Setup
namespace OggVorbisEncoder::Setup {
  // Forward declaring type: IStaticCodeBook
  class IStaticCodeBook;
}
// Completed forward declares
// Type namespace: OggVorbisEncoder.Setup
namespace OggVorbisEncoder::Setup {
  // Forward declaring type: IStaticBookBlock
  class IStaticBookBlock;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OggVorbisEncoder::Setup::IStaticBookBlock);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbisEncoder::Setup::IStaticBookBlock*, "OggVorbisEncoder.Setup", "IStaticBookBlock");
// Type namespace: OggVorbisEncoder.Setup
namespace OggVorbisEncoder::Setup {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbisEncoder.Setup.IStaticBookBlock
  // [TokenAttribute] Offset: FFFFFFFF
  class IStaticBookBlock {
    public:
    // public OggVorbisEncoder.Setup.IStaticCodeBook[][] get_Books()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::ArrayW<::OggVorbisEncoder::Setup::IStaticCodeBook*>> get_Books();
  }; // OggVorbisEncoder.Setup.IStaticBookBlock
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::IStaticBookBlock::get_Books
// Il2CppName: get_Books
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<::OggVorbisEncoder::Setup::IStaticCodeBook*>> (OggVorbisEncoder::Setup::IStaticBookBlock::*)()>(&OggVorbisEncoder::Setup::IStaticBookBlock::get_Books)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::IStaticBookBlock*), "get_Books", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};