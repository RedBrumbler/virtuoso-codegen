// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Firestore.Converters.ConverterBase
#include "Firebase/Firestore/Converters/ConverterBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: FieldValueProxy
  class FieldValueProxy;
  // Forward declaring type: SerializationContext
  class SerializationContext;
  // Forward declaring type: DeserializationContext
  class DeserializationContext;
  // Forward declaring type: Timestamp
  struct Timestamp;
}
// Completed forward declares
// Type namespace: Firebase.Firestore.Converters
namespace Firebase::Firestore::Converters {
  // Forward declaring type: DateTimeConverter
  class DateTimeConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::Converters::DateTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::DateTimeConverter*, "Firebase.Firestore.Converters", "DateTimeConverter");
// Type namespace: Firebase.Firestore.Converters
namespace Firebase::Firestore::Converters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.Converters.DateTimeConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class DateTimeConverter : public ::Firebase::Firestore::Converters::ConverterBase {
    public:
    // System.Void .ctor()
    // Offset: 0xC2EFBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DateTimeConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Converters::DateTimeConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DateTimeConverter*, creationType>()));
    }
    // public override Firebase.Firestore.FieldValueProxy Serialize(Firebase.Firestore.SerializationContext context, System.Object value)
    // Offset: 0xC2F2C4
    // Implemented from: Firebase.Firestore.Converters.ConverterBase
    // Base method: Firebase.Firestore.FieldValueProxy ConverterBase::Serialize(Firebase.Firestore.SerializationContext context, System.Object value)
    ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext* context, ::Il2CppObject* value);
    // protected override System.Object DeserializeTimestamp(Firebase.Firestore.DeserializationContext context, Firebase.Firestore.Timestamp value)
    // Offset: 0xC2F55C
    // Implemented from: Firebase.Firestore.Converters.ConverterBase
    // Base method: System.Object ConverterBase::DeserializeTimestamp(Firebase.Firestore.DeserializationContext context, Firebase.Firestore.Timestamp value)
    ::Il2CppObject* DeserializeTimestamp(::Firebase::Firestore::DeserializationContext* context, ::Firebase::Firestore::Timestamp value);
  }; // Firebase.Firestore.Converters.DateTimeConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::Converters::DateTimeConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::Converters::DateTimeConverter::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (Firebase::Firestore::Converters::DateTimeConverter::*)(::Firebase::Firestore::SerializationContext*, ::Il2CppObject*)>(&Firebase::Firestore::Converters::DateTimeConverter::Serialize)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "SerializationContext")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Converters::DateTimeConverter*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, value});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Converters::DateTimeConverter::DeserializeTimestamp
// Il2CppName: DeserializeTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Firebase::Firestore::Converters::DateTimeConverter::*)(::Firebase::Firestore::DeserializationContext*, ::Firebase::Firestore::Timestamp)>(&Firebase::Firestore::Converters::DateTimeConverter::DeserializeTimestamp)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "DeserializationContext")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "Timestamp")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Converters::DateTimeConverter*), "DeserializeTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, value});
  }
};
