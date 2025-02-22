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
// Type namespace: OggVorbisEncoder.Setup
namespace OggVorbisEncoder::Setup {
  // Forward declaring type: AdjBlock
  class AdjBlock;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OggVorbisEncoder::Setup::AdjBlock);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbisEncoder::Setup::AdjBlock*, "OggVorbisEncoder.Setup", "AdjBlock");
// Type namespace: OggVorbisEncoder.Setup
namespace OggVorbisEncoder::Setup {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbisEncoder.Setup.AdjBlock
  // [TokenAttribute] Offset: FFFFFFFF
  class AdjBlock : public ::Il2CppObject {
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
    // private readonly System.Int32[] <Block>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> Block;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<int>
    constexpr operator ::ArrayW<int>() const noexcept {
      return Block;
    }
    // Get instance field reference: private readonly System.Int32[] <Block>k__BackingField
    ::ArrayW<int>& dyn_$Block$k__BackingField();
    // public System.Int32[] get_Block()
    // Offset: 0x7435EC
    ::ArrayW<int> get_Block();
    // public System.Void .ctor(System.Int32[] block)
    // Offset: 0x7435C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdjBlock* New_ctor(::ArrayW<int> block) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OggVorbisEncoder::Setup::AdjBlock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdjBlock*, creationType>(block)));
    }
  }; // OggVorbisEncoder.Setup.AdjBlock
  #pragma pack(pop)
  static check_size<sizeof(AdjBlock), 16 + sizeof(::ArrayW<int>)> __OggVorbisEncoder_Setup_AdjBlockSizeCheck;
  static_assert(sizeof(AdjBlock) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::AdjBlock::get_Block
// Il2CppName: get_Block
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (OggVorbisEncoder::Setup::AdjBlock::*)()>(&OggVorbisEncoder::Setup::AdjBlock::get_Block)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Setup::AdjBlock*), "get_Block", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Setup::AdjBlock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
