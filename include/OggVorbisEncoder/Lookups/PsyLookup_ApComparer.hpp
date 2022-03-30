// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OggVorbisEncoder.Lookups.PsyLookup
#include "OggVorbisEncoder/Lookups/PsyLookup.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OggVorbisEncoder
namespace OggVorbisEncoder {
  // Forward declaring type: OffsetArray`1<T>
  template<typename T>
  class OffsetArray_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OggVorbisEncoder::Lookups::PsyLookup::ApComparer);
DEFINE_IL2CPP_ARG_TYPE(::OggVorbisEncoder::Lookups::PsyLookup::ApComparer*, "OggVorbisEncoder.Lookups", "PsyLookup/ApComparer");
// Type namespace: OggVorbisEncoder.Lookups
namespace OggVorbisEncoder::Lookups {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OggVorbisEncoder.Lookups.PsyLookup/OggVorbisEncoder.Lookups.ApComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class PsyLookup::ApComparer : public ::Il2CppObject/*, public ::System::Collections::Generic::IComparer_1<::OggVorbisEncoder::OffsetArray_1<float>*>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IComparer_1<::OggVorbisEncoder::OffsetArray_1<float>*>
    operator ::System::Collections::Generic::IComparer_1<::OggVorbisEncoder::OffsetArray_1<float>*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<::OggVorbisEncoder::OffsetArray_1<float>*>*>(this);
    }
    // public System.Int32 Compare(OggVorbisEncoder.OffsetArray`1<System.Single> x, OggVorbisEncoder.OffsetArray`1<System.Single> y)
    // Offset: 0x12667D4
    int Compare(::OggVorbisEncoder::OffsetArray_1<float>* x, ::OggVorbisEncoder::OffsetArray_1<float>* y);
    // public System.Void .ctor()
    // Offset: 0x126686C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PsyLookup::ApComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OggVorbisEncoder::Lookups::PsyLookup::ApComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PsyLookup::ApComparer*, creationType>()));
    }
  }; // OggVorbisEncoder.Lookups.PsyLookup/OggVorbisEncoder.Lookups.ApComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OggVorbisEncoder::Lookups::PsyLookup::ApComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OggVorbisEncoder::Lookups::PsyLookup::ApComparer::*)(::OggVorbisEncoder::OffsetArray_1<float>*, ::OggVorbisEncoder::OffsetArray_1<float>*)>(&OggVorbisEncoder::Lookups::PsyLookup::ApComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "OffsetArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    static auto* y = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("OggVorbisEncoder", "OffsetArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OggVorbisEncoder::Lookups::PsyLookup::ApComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: OggVorbisEncoder::Lookups::PsyLookup::ApComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!