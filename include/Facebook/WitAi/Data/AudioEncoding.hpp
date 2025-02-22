// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Facebook.WitAi.Data
namespace Facebook::WitAi::Data {
  // Forward declaring type: AudioEncoding
  class AudioEncoding;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Data::AudioEncoding);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Data::AudioEncoding*, "Facebook.WitAi.Data", "AudioEncoding");
// Type namespace: Facebook.WitAi.Data
namespace Facebook::WitAi::Data {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Data.AudioEncoding
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioEncoding : public ::Il2CppObject {
    public:
    // Nested type: ::Facebook::WitAi::Data::AudioEncoding::Endian
    struct Endian;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Facebook.WitAi.Data.AudioEncoding/Facebook.WitAi.Data.Endian
    // [TokenAttribute] Offset: FFFFFFFF
    struct Endian/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Endian
      constexpr Endian(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Facebook.WitAi.Data.AudioEncoding/Facebook.WitAi.Data.Endian Big
      static constexpr const int Big = 0;
      // Get static field: static public Facebook.WitAi.Data.AudioEncoding/Facebook.WitAi.Data.Endian Big
      static ::Facebook::WitAi::Data::AudioEncoding::Endian _get_Big();
      // Set static field: static public Facebook.WitAi.Data.AudioEncoding/Facebook.WitAi.Data.Endian Big
      static void _set_Big(::Facebook::WitAi::Data::AudioEncoding::Endian value);
      // static field const value: static public Facebook.WitAi.Data.AudioEncoding/Facebook.WitAi.Data.Endian Little
      static constexpr const int Little = 1;
      // Get static field: static public Facebook.WitAi.Data.AudioEncoding/Facebook.WitAi.Data.Endian Little
      static ::Facebook::WitAi::Data::AudioEncoding::Endian _get_Little();
      // Set static field: static public Facebook.WitAi.Data.AudioEncoding/Facebook.WitAi.Data.Endian Little
      static void _set_Little(::Facebook::WitAi::Data::AudioEncoding::Endian value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // Facebook.WitAi.Data.AudioEncoding/Facebook.WitAi.Data.Endian
    #pragma pack(pop)
    static check_size<sizeof(AudioEncoding::Endian), 0 + sizeof(int)> __Facebook_WitAi_Data_AudioEncoding_EndianSizeCheck;
    static_assert(sizeof(AudioEncoding::Endian) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.String encoding
    // Size: 0x8
    // Offset: 0x10
    ::StringW encoding;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 bits
    // Size: 0x4
    // Offset: 0x18
    int bits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 samplerate
    // Size: 0x4
    // Offset: 0x1C
    int samplerate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Facebook.WitAi.Data.AudioEncoding/Facebook.WitAi.Data.Endian endian
    // Size: 0x4
    // Offset: 0x20
    ::Facebook::WitAi::Data::AudioEncoding::Endian endian;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Data::AudioEncoding::Endian) == 0x4);
    public:
    // Get instance field reference: public System.String encoding
    ::StringW& dyn_encoding();
    // Get instance field reference: public System.Int32 bits
    int& dyn_bits();
    // Get instance field reference: public System.Int32 samplerate
    int& dyn_samplerate();
    // Get instance field reference: public Facebook.WitAi.Data.AudioEncoding/Facebook.WitAi.Data.Endian endian
    ::Facebook::WitAi::Data::AudioEncoding::Endian& dyn_endian();
    // public System.Void .ctor()
    // Offset: 0x10F8094
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioEncoding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Data::AudioEncoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioEncoding*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x10F7E90
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Facebook.WitAi.Data.AudioEncoding
  #pragma pack(pop)
  static check_size<sizeof(AudioEncoding), 32 + sizeof(::Facebook::WitAi::Data::AudioEncoding::Endian)> __Facebook_WitAi_Data_AudioEncodingSizeCheck;
  static_assert(sizeof(AudioEncoding) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Data::AudioEncoding::Endian, "Facebook.WitAi.Data", "AudioEncoding/Endian");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Data::AudioEncoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Facebook::WitAi::Data::AudioEncoding::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Facebook::WitAi::Data::AudioEncoding::*)()>(&Facebook::WitAi::Data::AudioEncoding::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Data::AudioEncoding*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
