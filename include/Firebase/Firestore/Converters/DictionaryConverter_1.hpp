// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firebase.Firestore.Converters.MapConverterBase
#include "Firebase/Firestore/Converters/MapConverterBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: DeserializationContext
  class DeserializationContext;
  // Forward declaring type: FieldValueProxy
  class FieldValueProxy;
  // Forward declaring type: SerializationContext
  class SerializationContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Completed forward declares
// Type namespace: Firebase.Firestore.Converters
namespace Firebase::Firestore::Converters {
  // Forward declaring type: DictionaryConverter`1<TValue>
  template<typename TValue>
  class DictionaryConverter_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Firestore::Converters::DictionaryConverter_1, "Firebase.Firestore.Converters", "DictionaryConverter`1");
// Type namespace: Firebase.Firestore.Converters
namespace Firebase::Firestore::Converters {
  // WARNING Size may be invalid!
  // Autogenerated type: Firebase.Firestore.Converters.DictionaryConverter`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TValue>
  class DictionaryConverter_1 : public ::Firebase::Firestore::Converters::MapConverterBase {
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
    // private readonly System.Type _concreteType
    // Size: 0x8
    // Offset: 0x0
    ::System::Type* concreteType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept = delete;
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Type _concreteType
    ::System::Type*& dyn__concreteType() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Converters::DictionaryConverter_1::dyn__concreteType");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_concreteType"))->offset;
      return *reinterpret_cast<::System::Type**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Void .ctor(System.Type targetType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Firebase.Firestore.Converters.MapConverterBase
    // Base method: System.Void MapConverterBase::.ctor(System.Type targetType)
    // Base method: System.Void ConverterBase::.ctor(System.Type targetType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DictionaryConverter_1<TValue>* New_ctor(::System::Type* targetType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Converters::DictionaryConverter_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DictionaryConverter_1<TValue>*, creationType>(targetType)));
    }
    // public override System.Object DeserializeMap(Firebase.Firestore.DeserializationContext context, Firebase.Firestore.FieldValueProxy mapValue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Firebase.Firestore.Converters.ConverterBase
    // Base method: System.Object ConverterBase::DeserializeMap(Firebase.Firestore.DeserializationContext context, Firebase.Firestore.FieldValueProxy mapValue)
    ::Il2CppObject* DeserializeMap(::Firebase::Firestore::DeserializationContext* context, ::Firebase::Firestore::FieldValueProxy* mapValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Converters::DictionaryConverter_1::DeserializeMap");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "DeserializeMap", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context), ::il2cpp_utils::ExtractType(mapValue)})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(this, ___internal__method, context, mapValue);
    }
    // public override System.Void SerializeMap(Firebase.Firestore.SerializationContext context, System.Object value, System.Collections.Generic.IDictionary`2<System.String,Firebase.Firestore.FieldValueProxy> map)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Firebase.Firestore.Converters.ConverterBase
    // Base method: System.Void ConverterBase::SerializeMap(Firebase.Firestore.SerializationContext context, System.Object value, System.Collections.Generic.IDictionary`2<System.String,Firebase.Firestore.FieldValueProxy> map)
    void SerializeMap(::Firebase::Firestore::SerializationContext* context, ::Il2CppObject* value, ::System::Collections::Generic::IDictionary_2<::StringW, ::Firebase::Firestore::FieldValueProxy*>* map) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Firebase::Firestore::Converters::DictionaryConverter_1::SerializeMap");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SerializeMap", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context), ::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(map)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, context, value, map);
    }
  }; // Firebase.Firestore.Converters.DictionaryConverter`1
  // Could not write size check! Type: Firebase.Firestore.Converters.DictionaryConverter`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
