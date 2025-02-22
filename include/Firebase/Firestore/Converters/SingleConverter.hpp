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
}
// Completed forward declares
// Type namespace: Firebase.Firestore.Converters
namespace Firebase::Firestore::Converters {
  // Forward declaring type: SingleConverter
  class SingleConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::Converters::SingleConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::SingleConverter*, "Firebase.Firestore.Converters", "SingleConverter");
// Type namespace: Firebase.Firestore.Converters
namespace Firebase::Firestore::Converters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.Converters.SingleConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class SingleConverter : public ::Firebase::Firestore::Converters::ConverterBase {
    public:
    // System.Void .ctor()
    // Offset: 0xC2ECD8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SingleConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Converters::SingleConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SingleConverter*, creationType>()));
    }
    // public override Firebase.Firestore.FieldValueProxy Serialize(Firebase.Firestore.SerializationContext context, System.Object value)
    // Offset: 0xC400D4
    // Implemented from: Firebase.Firestore.Converters.ConverterBase
    // Base method: Firebase.Firestore.FieldValueProxy ConverterBase::Serialize(Firebase.Firestore.SerializationContext context, System.Object value)
    ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext* context, ::Il2CppObject* value);
    // protected override System.Object DeserializeDouble(Firebase.Firestore.DeserializationContext context, System.Double value)
    // Offset: 0xC4014C
    // Implemented from: Firebase.Firestore.Converters.ConverterBase
    // Base method: System.Object ConverterBase::DeserializeDouble(Firebase.Firestore.DeserializationContext context, System.Double value)
    ::Il2CppObject* DeserializeDouble(::Firebase::Firestore::DeserializationContext* context, double value);
    // protected override System.Object DeserializeInteger(Firebase.Firestore.DeserializationContext context, System.Int64 value)
    // Offset: 0xC401B4
    // Implemented from: Firebase.Firestore.Converters.ConverterBase
    // Base method: System.Object ConverterBase::DeserializeInteger(Firebase.Firestore.DeserializationContext context, System.Int64 value)
    ::Il2CppObject* DeserializeInteger(::Firebase::Firestore::DeserializationContext* context, int64_t value);
  }; // Firebase.Firestore.Converters.SingleConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::Converters::SingleConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::Converters::SingleConverter::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (Firebase::Firestore::Converters::SingleConverter::*)(::Firebase::Firestore::SerializationContext*, ::Il2CppObject*)>(&Firebase::Firestore::Converters::SingleConverter::Serialize)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "SerializationContext")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Converters::SingleConverter*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, value});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Converters::SingleConverter::DeserializeDouble
// Il2CppName: DeserializeDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Firebase::Firestore::Converters::SingleConverter::*)(::Firebase::Firestore::DeserializationContext*, double)>(&Firebase::Firestore::Converters::SingleConverter::DeserializeDouble)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "DeserializationContext")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Converters::SingleConverter*), "DeserializeDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, value});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Converters::SingleConverter::DeserializeInteger
// Il2CppName: DeserializeInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Firebase::Firestore::Converters::SingleConverter::*)(::Firebase::Firestore::DeserializationContext*, int64_t)>(&Firebase::Firestore::Converters::SingleConverter::DeserializeInteger)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "DeserializationContext")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Converters::SingleConverter*), "DeserializeInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, value});
  }
};
