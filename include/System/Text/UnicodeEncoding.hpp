// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderNLS
  class EncoderNLS;
  // Forward declaring type: DecoderNLS
  class DecoderNLS;
  // Forward declaring type: Encoder
  class Encoder;
  // Forward declaring type: Decoder
  class Decoder;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: UnicodeEncoding
  class UnicodeEncoding;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::UnicodeEncoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UnicodeEncoding*, "System.Text", "UnicodeEncoding");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x3B
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.UnicodeEncoding
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 579410
  class UnicodeEncoding : public ::System::Text::Encoding {
    public:
    // Nested type: ::System::Text::UnicodeEncoding::Decoder
    class Decoder;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [OptionalFieldAttribute] Offset: 0x57EFE0
    // System.Boolean isThrowException
    // Size: 0x1
    // Offset: 0x38
    bool isThrowException;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean bigEndian
    // Size: 0x1
    // Offset: 0x39
    bool bigEndian;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean byteOrderMark
    // Size: 0x1
    // Offset: 0x3A
    bool byteOrderMark;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private readonly System.UInt64 highLowPatternMask
    static uint64_t _get_highLowPatternMask();
    // Set static field: static private readonly System.UInt64 highLowPatternMask
    static void _set_highLowPatternMask(uint64_t value);
    // Get instance field reference: System.Boolean isThrowException
    bool& dyn_isThrowException();
    // Get instance field reference: System.Boolean bigEndian
    bool& dyn_bigEndian();
    // Get instance field reference: System.Boolean byteOrderMark
    bool& dyn_byteOrderMark();
    // public System.Void .ctor(System.Boolean bigEndian, System.Boolean byteOrderMark)
    // Offset: 0x107C530
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicodeEncoding* New_ctor(bool bigEndian, bool byteOrderMark) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::UnicodeEncoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicodeEncoding*, creationType>(bigEndian, byteOrderMark)));
    }
    // public System.Void .ctor(System.Boolean bigEndian, System.Boolean byteOrderMark, System.Boolean throwOnInvalidBytes)
    // Offset: 0x107C540
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicodeEncoding* New_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::UnicodeEncoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicodeEncoding*, creationType>(bigEndian, byteOrderMark, throwOnInvalidBytes)));
    }
    // static private System.Void .cctor()
    // Offset: 0x107FC90
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x107C520
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicodeEncoding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::UnicodeEncoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicodeEncoding*, creationType>()));
    }
    // private System.Void OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x107C5CC
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx);
    // override System.Void SetDefaultFallbacks()
    // Offset: 0x107C5D4
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::SetDefaultFallbacks()
    void SetDefaultFallbacks();
    // public override System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0x107C6A4
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    int GetByteCount(::ArrayW<::Il2CppChar> chars, int index, int count);
    // public override System.Int32 GetByteCount(System.String s)
    // Offset: 0x107C844
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.String s)
    int GetByteCount(::StringW s);
    // public override System.Int32 GetByteCount(System.Char* chars, System.Int32 count)
    // Offset: 0x107C8D4
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char* chars, System.Int32 count)
    int GetByteCount(::Il2CppChar* chars, int count);
    // public override System.Int32 GetBytes(System.String s, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x107C9B8
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.String s, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    int GetBytes(::StringW s, int charIndex, int charCount, ::ArrayW<uint8_t> bytes, int byteIndex);
    // public override System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x107CC30
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    int GetBytes(::ArrayW<::Il2CppChar> chars, int charIndex, int charCount, ::ArrayW<uint8_t> bytes, int byteIndex);
    // public override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    // Offset: 0x107CED8
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount);
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x107CFEC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    int GetCharCount(::ArrayW<uint8_t> bytes, int index, int count);
    // public override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count)
    // Offset: 0x107D18C
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte* bytes, System.Int32 count)
    int GetCharCount(uint8_t* bytes, int count);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0x107D270
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    int GetChars(::ArrayW<uint8_t> bytes, int byteIndex, int byteCount, ::ArrayW<::Il2CppChar> chars, int charIndex);
    // public override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    // Offset: 0x107D518
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount);
    // public override System.String GetString(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x107D62C
    // Implemented from: System.Text.Encoding
    // Base method: System.String Encoding::GetString(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    ::StringW GetString(::ArrayW<uint8_t> bytes, int index, int count);
    // override System.Int32 GetByteCount(System.Char* chars, System.Int32 count, System.Text.EncoderNLS encoder)
    // Offset: 0x107D810
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char* chars, System.Int32 count, System.Text.EncoderNLS encoder)
    int GetByteCount(::Il2CppChar* chars, int count, ::System::Text::EncoderNLS* encoder);
    // override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS encoder)
    // Offset: 0x107DE1C
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS encoder)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, ::System::Text::EncoderNLS* encoder);
    // override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS baseDecoder)
    // Offset: 0x107E628
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS baseDecoder)
    int GetCharCount(uint8_t* bytes, int count, ::System::Text::DecoderNLS* baseDecoder);
    // override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS baseDecoder)
    // Offset: 0x107EDA0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS baseDecoder)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, ::System::Text::DecoderNLS* baseDecoder);
    // public override System.Text.Encoder GetEncoder()
    // Offset: 0x107F72C
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Encoder Encoding::GetEncoder()
    ::System::Text::Encoder* GetEncoder();
    // public override System.Text.Decoder GetDecoder()
    // Offset: 0x107F78C
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Decoder Encoding::GetDecoder()
    ::System::Text::Decoder* GetDecoder();
    // public override System.Byte[] GetPreamble()
    // Offset: 0x107F7EC
    // Implemented from: System.Text.Encoding
    // Base method: System.Byte[] Encoding::GetPreamble()
    ::ArrayW<uint8_t> GetPreamble();
    // public override System.Int32 GetMaxByteCount(System.Int32 charCount)
    // Offset: 0x107F8D8
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxByteCount(System.Int32 charCount)
    int GetMaxByteCount(int charCount);
    // public override System.Int32 GetMaxCharCount(System.Int32 byteCount)
    // Offset: 0x107F9C0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxCharCount(System.Int32 byteCount)
    int GetMaxCharCount(int byteCount);
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x107FAAC
    // Implemented from: System.Text.Encoding
    // Base method: System.Boolean Encoding::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x107FBF0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetHashCode()
    int GetHashCode();
  }; // System.Text.UnicodeEncoding
  #pragma pack(pop)
  static check_size<sizeof(UnicodeEncoding), 58 + sizeof(bool)> __System_Text_UnicodeEncodingSizeCheck;
  static_assert(sizeof(UnicodeEncoding) == 0x3B);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Text::UnicodeEncoding::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::OnDeserializing
// Il2CppName: OnDeserializing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UnicodeEncoding::*)(::System::Runtime::Serialization::StreamingContext)>(&System::Text::UnicodeEncoding::OnDeserializing)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "OnDeserializing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::SetDefaultFallbacks
// Il2CppName: SetDefaultFallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UnicodeEncoding::*)()>(&System::Text::UnicodeEncoding::SetDefaultFallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "SetDefaultFallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Text::UnicodeEncoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, index, count});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::StringW)>(&System::Text::UnicodeEncoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::Il2CppChar*, int)>(&System::Text::UnicodeEncoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, count});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::StringW, int, int, ::ArrayW<uint8_t>, int)>(&System::Text::UnicodeEncoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, charIndex, charCount, bytes, byteIndex});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::ArrayW<::Il2CppChar>, int, int, ::ArrayW<uint8_t>, int)>(&System::Text::UnicodeEncoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charIndex, charCount, bytes, byteIndex});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::Il2CppChar*, int, uint8_t*, int)>(&System::Text::UnicodeEncoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charCount, bytes, byteCount});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::ArrayW<uint8_t>, int, int)>(&System::Text::UnicodeEncoding::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, index, count});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(uint8_t*, int)>(&System::Text::UnicodeEncoding::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, count});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<::Il2CppChar>, int)>(&System::Text::UnicodeEncoding::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteIndex, byteCount, chars, charIndex});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(uint8_t*, int, ::Il2CppChar*, int)>(&System::Text::UnicodeEncoding::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteCount, chars, charCount});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::UnicodeEncoding::*)(::ArrayW<uint8_t>, int, int)>(&System::Text::UnicodeEncoding::GetString)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, index, count});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::Il2CppChar*, int, ::System::Text::EncoderNLS*)>(&System::Text::UnicodeEncoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* encoder = &::il2cpp_utils::GetClassFromName("System.Text", "EncoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, count, encoder});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(::Il2CppChar*, int, uint8_t*, int, ::System::Text::EncoderNLS*)>(&System::Text::UnicodeEncoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* encoder = &::il2cpp_utils::GetClassFromName("System.Text", "EncoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charCount, bytes, byteCount, encoder});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(uint8_t*, int, ::System::Text::DecoderNLS*)>(&System::Text::UnicodeEncoding::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* baseDecoder = &::il2cpp_utils::GetClassFromName("System.Text", "DecoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, count, baseDecoder});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(uint8_t*, int, ::Il2CppChar*, int, ::System::Text::DecoderNLS*)>(&System::Text::UnicodeEncoding::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* baseDecoder = &::il2cpp_utils::GetClassFromName("System.Text", "DecoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteCount, chars, charCount, baseDecoder});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetEncoder
// Il2CppName: GetEncoder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoder* (System::Text::UnicodeEncoding::*)()>(&System::Text::UnicodeEncoding::GetEncoder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetEncoder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetDecoder
// Il2CppName: GetDecoder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Decoder* (System::Text::UnicodeEncoding::*)()>(&System::Text::UnicodeEncoding::GetDecoder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetDecoder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetPreamble
// Il2CppName: GetPreamble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Text::UnicodeEncoding::*)()>(&System::Text::UnicodeEncoding::GetPreamble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetPreamble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetMaxByteCount
// Il2CppName: GetMaxByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(int)>(&System::Text::UnicodeEncoding::GetMaxByteCount)> {
  static const MethodInfo* get() {
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetMaxByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charCount});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetMaxCharCount
// Il2CppName: GetMaxCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)(int)>(&System::Text::UnicodeEncoding::GetMaxCharCount)> {
  static const MethodInfo* get() {
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetMaxCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{byteCount});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::UnicodeEncoding::*)(::Il2CppObject*)>(&System::Text::UnicodeEncoding::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UnicodeEncoding::*)()>(&System::Text::UnicodeEncoding::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
