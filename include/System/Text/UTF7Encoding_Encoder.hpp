// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.UTF7Encoding
#include "System/Text/UTF7Encoding.hpp"
// Including type: System.Text.EncoderNLS
#include "System/Text/EncoderNLS.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::UTF7Encoding::Encoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UTF7Encoding::Encoder*, "System.Text", "UTF7Encoding/Encoder");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.UTF7Encoding/System.Text.Encoder
  // [TokenAttribute] Offset: FFFFFFFF
  class UTF7Encoding::Encoder : public ::System::Text::EncoderNLS {
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
    // System.Int32 bits
    // Size: 0x4
    // Offset: 0x38
    int bits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 bitCount
    // Size: 0x4
    // Offset: 0x3C
    int bitCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Int32 bits
    int& dyn_bits();
    // Get instance field reference: System.Int32 bitCount
    int& dyn_bitCount();
    // public System.Void .ctor(System.Text.UTF7Encoding encoding)
    // Offset: 0x108E70C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF7Encoding::Encoder* New_ctor(::System::Text::UTF7Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::UTF7Encoding::Encoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF7Encoding::Encoder*, creationType>(encoding)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x108E950
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x108E714
    // Implemented from: System.Text.EncoderNLS
    // Base method: System.Void EncoderNLS::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF7Encoding::Encoder* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::UTF7Encoding::Encoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF7Encoding::Encoder*, creationType>(info, context)));
    }
    // public override System.Void Reset()
    // Offset: 0x108EA4C
    // Implemented from: System.Text.EncoderNLS
    // Base method: System.Void EncoderNLS::Reset()
    void Reset();
  }; // System.Text.UTF7Encoding/System.Text.Encoder
  #pragma pack(pop)
  static check_size<sizeof(UTF7Encoding::Encoder), 60 + sizeof(int)> __System_Text_UTF7Encoding_EncoderSizeCheck;
  static_assert(sizeof(UTF7Encoding::Encoder) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::UTF7Encoding::Encoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UTF7Encoding::Encoder::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF7Encoding::Encoder::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Text::UTF7Encoding::Encoder::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF7Encoding::Encoder*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Text::UTF7Encoding::Encoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UTF7Encoding::Encoder::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF7Encoding::Encoder::*)()>(&System::Text::UTF7Encoding::Encoder::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF7Encoding::Encoder*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
