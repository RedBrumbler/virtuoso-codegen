// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.IObjectReference
#include "System/Runtime/Serialization/IObjectReference.hpp"
// Including type: System.Reflection.MemberTypes
#include "System/Reflection/MemberTypes.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfoSerializationHolder
  class MemberInfoSerializationHolder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::MemberInfoSerializationHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MemberInfoSerializationHolder*, "System.Reflection", "MemberInfoSerializationHolder");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.MemberInfoSerializationHolder
  // [TokenAttribute] Offset: FFFFFFFF
  class MemberInfoSerializationHolder : public ::Il2CppObject/*, public ::System::Runtime::Serialization::ISerializable, public ::System::Runtime::Serialization::IObjectReference*/ {
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
    // private System.String m_memberName
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_memberName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.RuntimeType m_reflectedType
    // Size: 0x8
    // Offset: 0x18
    ::System::RuntimeType* m_reflectedType;
    // Field size check
    static_assert(sizeof(::System::RuntimeType*) == 0x8);
    // private System.String m_signature
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_signature;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_signature2
    // Size: 0x8
    // Offset: 0x28
    ::StringW m_signature2;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Reflection.MemberTypes m_memberType
    // Size: 0x4
    // Offset: 0x30
    ::System::Reflection::MemberTypes m_memberType;
    // Field size check
    static_assert(sizeof(::System::Reflection::MemberTypes) == 0x4);
    // Padding between fields: m_memberType and: m_info
    char __padding4[0x4] = {};
    // private System.Runtime.Serialization.SerializationInfo m_info
    // Size: 0x8
    // Offset: 0x38
    ::System::Runtime::Serialization::SerializationInfo* m_info;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::SerializationInfo*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::IObjectReference
    operator ::System::Runtime::Serialization::IObjectReference() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::IObjectReference*>(this);
    }
    // Get instance field reference: private System.String m_memberName
    ::StringW& dyn_m_memberName();
    // Get instance field reference: private System.RuntimeType m_reflectedType
    ::System::RuntimeType*& dyn_m_reflectedType();
    // Get instance field reference: private System.String m_signature
    ::StringW& dyn_m_signature();
    // Get instance field reference: private System.String m_signature2
    ::StringW& dyn_m_signature2();
    // Get instance field reference: private System.Reflection.MemberTypes m_memberType
    ::System::Reflection::MemberTypes& dyn_m_memberType();
    // Get instance field reference: private System.Runtime.Serialization.SerializationInfo m_info
    ::System::Runtime::Serialization::SerializationInfo*& dyn_m_info();
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xECF144
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemberInfoSerializationHolder* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::MemberInfoSerializationHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemberInfoSerializationHolder*, creationType>(info, context)));
    }
    // static public System.Void GetSerializationInfo(System.Runtime.Serialization.SerializationInfo info, System.String name, System.RuntimeType reflectedClass, System.String signature, System.Reflection.MemberTypes type)
    // Offset: 0xECEE28
    static void GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, ::StringW name, ::System::RuntimeType* reflectedClass, ::StringW signature, ::System::Reflection::MemberTypes type);
    // static public System.Void GetSerializationInfo(System.Runtime.Serialization.SerializationInfo info, System.String name, System.RuntimeType reflectedClass, System.String signature, System.String signature2, System.Reflection.MemberTypes type, System.Type[] genericArguments)
    // Offset: 0xECEE38
    static void GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, ::StringW name, ::System::RuntimeType* reflectedClass, ::StringW signature, ::StringW signature2, ::System::Reflection::MemberTypes type, ::ArrayW<::System::Type*> genericArguments);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xECF458
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public System.Object GetRealObject(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xECF4B4
    ::Il2CppObject* GetRealObject(::System::Runtime::Serialization::StreamingContext context);
  }; // System.Reflection.MemberInfoSerializationHolder
  #pragma pack(pop)
  static check_size<sizeof(MemberInfoSerializationHolder), 56 + sizeof(::System::Runtime::Serialization::SerializationInfo*)> __System_Reflection_MemberInfoSerializationHolderSizeCheck;
  static_assert(sizeof(MemberInfoSerializationHolder) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::MemberInfoSerializationHolder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::MemberInfoSerializationHolder::GetSerializationInfo
// Il2CppName: GetSerializationInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Serialization::SerializationInfo*, ::StringW, ::System::RuntimeType*, ::StringW, ::System::Reflection::MemberTypes)>(&System::Reflection::MemberInfoSerializationHolder::GetSerializationInfo)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* reflectedClass = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberTypes")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MemberInfoSerializationHolder*), "GetSerializationInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, name, reflectedClass, signature, type});
  }
};
// Writing MetadataGetter for method: System::Reflection::MemberInfoSerializationHolder::GetSerializationInfo
// Il2CppName: GetSerializationInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Serialization::SerializationInfo*, ::StringW, ::System::RuntimeType*, ::StringW, ::StringW, ::System::Reflection::MemberTypes, ::ArrayW<::System::Type*>)>(&System::Reflection::MemberInfoSerializationHolder::GetSerializationInfo)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* reflectedClass = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberTypes")->byval_arg;
    static auto* genericArguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MemberInfoSerializationHolder*), "GetSerializationInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, name, reflectedClass, signature, signature2, type, genericArguments});
  }
};
// Writing MetadataGetter for method: System::Reflection::MemberInfoSerializationHolder::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::MemberInfoSerializationHolder::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Reflection::MemberInfoSerializationHolder::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MemberInfoSerializationHolder*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Reflection::MemberInfoSerializationHolder::GetRealObject
// Il2CppName: GetRealObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MemberInfoSerializationHolder::*)(::System::Runtime::Serialization::StreamingContext)>(&System::Reflection::MemberInfoSerializationHolder::GetRealObject)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MemberInfoSerializationHolder*), "GetRealObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
