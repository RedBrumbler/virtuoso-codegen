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
  // Forward declaring type: BooleanConverter
  class BooleanConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Firebase::Firestore::Converters::BooleanConverter);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Converters::BooleanConverter*, "Firebase.Firestore.Converters", "BooleanConverter");
// Type namespace: Firebase.Firestore.Converters
namespace Firebase::Firestore::Converters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Firebase.Firestore.Converters.BooleanConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class BooleanConverter : public ::Firebase::Firestore::Converters::ConverterBase {
    public:
    // System.Void .ctor()
    // Offset: 0xC29308
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BooleanConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Converters::BooleanConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BooleanConverter*, creationType>()));
    }
    // public override Firebase.Firestore.FieldValueProxy Serialize(Firebase.Firestore.SerializationContext context, System.Object value)
    // Offset: 0xC2939C
    // Implemented from: Firebase.Firestore.Converters.ConverterBase
    // Base method: Firebase.Firestore.FieldValueProxy ConverterBase::Serialize(Firebase.Firestore.SerializationContext context, System.Object value)
    ::Firebase::Firestore::FieldValueProxy* Serialize(::Firebase::Firestore::SerializationContext* context, ::Il2CppObject* value);
    // protected override System.Object DeserializeBoolean(Firebase.Firestore.DeserializationContext context, System.Boolean value)
    // Offset: 0xC294DC
    // Implemented from: Firebase.Firestore.Converters.ConverterBase
    // Base method: System.Object ConverterBase::DeserializeBoolean(Firebase.Firestore.DeserializationContext context, System.Boolean value)
    ::Il2CppObject* DeserializeBoolean(::Firebase::Firestore::DeserializationContext* context, bool value);
  }; // Firebase.Firestore.Converters.BooleanConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Firebase::Firestore::Converters::BooleanConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Firebase::Firestore::Converters::BooleanConverter::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::FieldValueProxy* (Firebase::Firestore::Converters::BooleanConverter::*)(::Firebase::Firestore::SerializationContext*, ::Il2CppObject*)>(&Firebase::Firestore::Converters::BooleanConverter::Serialize)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "SerializationContext")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Converters::BooleanConverter*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, value});
  }
};
// Writing MetadataGetter for method: Firebase::Firestore::Converters::BooleanConverter::DeserializeBoolean
// Il2CppName: DeserializeBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Firebase::Firestore::Converters::BooleanConverter::*)(::Firebase::Firestore::DeserializationContext*, bool)>(&Firebase::Firestore::Converters::BooleanConverter::DeserializeBoolean)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Firebase.Firestore", "DeserializationContext")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Firebase::Firestore::Converters::BooleanConverter*), "DeserializeBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, value});
  }
};