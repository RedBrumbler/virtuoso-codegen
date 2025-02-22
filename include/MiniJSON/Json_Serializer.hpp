// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MiniJSON.Json
#include "MiniJSON/Json.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MiniJSON::Json::Serializer);
DEFINE_IL2CPP_ARG_TYPE(::MiniJSON::Json::Serializer*, "MiniJSON", "Json/Serializer");
// Type namespace: MiniJSON
namespace MiniJSON {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MiniJSON.Json/MiniJSON.Serializer
  // [TokenAttribute] Offset: FFFFFFFF
  class Json::Serializer : public ::Il2CppObject {
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
    // private System.Text.StringBuilder builder
    // Size: 0x8
    // Offset: 0x10
    ::System::Text::StringBuilder* builder;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Text::StringBuilder*
    constexpr operator ::System::Text::StringBuilder*() const noexcept {
      return builder;
    }
    // Get instance field reference: private System.Text.StringBuilder builder
    ::System::Text::StringBuilder*& dyn_builder();
    // static public System.String Serialize(System.Object obj)
    // Offset: 0x13D2A8C
    static ::StringW Serialize(::Il2CppObject* obj);
    // private System.Void SerializeValue(System.Object value)
    // Offset: 0x13D2B04
    void SerializeValue(::Il2CppObject* value);
    // private System.Void SerializeObject(System.Collections.IDictionary obj)
    // Offset: 0x13D32C0
    void SerializeObject(::System::Collections::IDictionary* obj);
    // private System.Void SerializeArray(System.Collections.IList anArray)
    // Offset: 0x13D2FB8
    void SerializeArray(::System::Collections::IList* anArray);
    // private System.Void SerializeString(System.String str)
    // Offset: 0x13D2CF0
    void SerializeString(::StringW str);
    // private System.Void SerializeOther(System.Object value)
    // Offset: 0x13D3700
    void SerializeOther(::Il2CppObject* value);
    // private System.Void .ctor()
    // Offset: 0x13D2A24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Json::Serializer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MiniJSON::Json::Serializer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Json::Serializer*, creationType>()));
    }
  }; // MiniJSON.Json/MiniJSON.Serializer
  #pragma pack(pop)
  static check_size<sizeof(Json::Serializer), 16 + sizeof(::System::Text::StringBuilder*)> __MiniJSON_Json_SerializerSizeCheck;
  static_assert(sizeof(Json::Serializer) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MiniJSON::Json::Serializer::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Il2CppObject*)>(&MiniJSON::Json::Serializer::Serialize)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MiniJSON::Json::Serializer*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: MiniJSON::Json::Serializer::SerializeValue
// Il2CppName: SerializeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MiniJSON::Json::Serializer::*)(::Il2CppObject*)>(&MiniJSON::Json::Serializer::SerializeValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MiniJSON::Json::Serializer*), "SerializeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MiniJSON::Json::Serializer::SerializeObject
// Il2CppName: SerializeObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MiniJSON::Json::Serializer::*)(::System::Collections::IDictionary*)>(&MiniJSON::Json::Serializer::SerializeObject)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MiniJSON::Json::Serializer*), "SerializeObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: MiniJSON::Json::Serializer::SerializeArray
// Il2CppName: SerializeArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MiniJSON::Json::Serializer::*)(::System::Collections::IList*)>(&MiniJSON::Json::Serializer::SerializeArray)> {
  static const MethodInfo* get() {
    static auto* anArray = &::il2cpp_utils::GetClassFromName("System.Collections", "IList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MiniJSON::Json::Serializer*), "SerializeArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anArray});
  }
};
// Writing MetadataGetter for method: MiniJSON::Json::Serializer::SerializeString
// Il2CppName: SerializeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MiniJSON::Json::Serializer::*)(::StringW)>(&MiniJSON::Json::Serializer::SerializeString)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MiniJSON::Json::Serializer*), "SerializeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: MiniJSON::Json::Serializer::SerializeOther
// Il2CppName: SerializeOther
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MiniJSON::Json::Serializer::*)(::Il2CppObject*)>(&MiniJSON::Json::Serializer::SerializeOther)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MiniJSON::Json::Serializer*), "SerializeOther", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MiniJSON::Json::Serializer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
