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
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
  // Forward declaring type: Missing
  class Missing;
  // Forward declaring type: RuntimeAssembly
  class RuntimeAssembly;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: UnitySerializationHolder
  class UnitySerializationHolder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::UnitySerializationHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::UnitySerializationHolder*, "System", "UnitySerializationHolder");
// Type namespace: System
namespace System {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: System.UnitySerializationHolder
  // [TokenAttribute] Offset: FFFFFFFF
  class UnitySerializationHolder : public ::Il2CppObject/*, public ::System::Runtime::Serialization::ISerializable, public ::System::Runtime::Serialization::IObjectReference*/ {
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
    // private System.Type[] m_instantiation
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::Type*> m_instantiation;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // private System.Int32[] m_elementTypes
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int> m_elementTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32 m_genericParameterPosition
    // Size: 0x4
    // Offset: 0x20
    int m_genericParameterPosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_genericParameterPosition and: m_declaringType
    char __padding2[0x4] = {};
    // private System.Type m_declaringType
    // Size: 0x8
    // Offset: 0x28
    ::System::Type* m_declaringType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Reflection.MethodBase m_declaringMethod
    // Size: 0x8
    // Offset: 0x30
    ::System::Reflection::MethodBase* m_declaringMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodBase*) == 0x8);
    // private System.String m_data
    // Size: 0x8
    // Offset: 0x38
    ::StringW m_data;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_assemblyName
    // Size: 0x8
    // Offset: 0x40
    ::StringW m_assemblyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 m_unityType
    // Size: 0x4
    // Offset: 0x48
    int m_unityType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::IObjectReference
    operator ::System::Runtime::Serialization::IObjectReference() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::IObjectReference*>(this);
    }
    // Get instance field reference: private System.Type[] m_instantiation
    ::ArrayW<::System::Type*>& dyn_m_instantiation();
    // Get instance field reference: private System.Int32[] m_elementTypes
    ::ArrayW<int>& dyn_m_elementTypes();
    // Get instance field reference: private System.Int32 m_genericParameterPosition
    int& dyn_m_genericParameterPosition();
    // Get instance field reference: private System.Type m_declaringType
    ::System::Type*& dyn_m_declaringType();
    // Get instance field reference: private System.Reflection.MethodBase m_declaringMethod
    ::System::Reflection::MethodBase*& dyn_m_declaringMethod();
    // Get instance field reference: private System.String m_data
    ::StringW& dyn_m_data();
    // Get instance field reference: private System.String m_assemblyName
    ::StringW& dyn_m_assemblyName();
    // Get instance field reference: private System.Int32 m_unityType
    int& dyn_m_unityType();
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xCEB3A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnitySerializationHolder* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::UnitySerializationHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnitySerializationHolder*, creationType>(info, context)));
    }
    // static System.Void GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo info, System.Reflection.Missing missing)
    // Offset: 0xCEAA34
    static void GetUnitySerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, ::System::Reflection::Missing* missing);
    // static System.RuntimeType AddElementTypes(System.Runtime.Serialization.SerializationInfo info, System.RuntimeType type)
    // Offset: 0xCEAAF0
    static ::System::RuntimeType* AddElementTypes(::System::Runtime::Serialization::SerializationInfo* info, ::System::RuntimeType* type);
    // System.Type MakeElementTypes(System.Type type)
    // Offset: 0xCEAD70
    ::System::Type* MakeElementTypes(::System::Type* type);
    // static System.Void GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo info, System.RuntimeType type)
    // Offset: 0xCEAE70
    static void GetUnitySerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, ::System::RuntimeType* type);
    // static System.Void GetUnitySerializationInfo(System.Runtime.Serialization.SerializationInfo info, System.Int32 unityType, System.String data, System.Reflection.RuntimeAssembly assembly)
    // Offset: 0xCEB208
    static void GetUnitySerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, int unityType, ::StringW data, ::System::Reflection::RuntimeAssembly* assembly);
    // private System.Void ThrowInsufficientInformation(System.String field)
    // Offset: 0xCEB774
    void ThrowInsufficientInformation(::StringW field);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xCEB810
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public System.Object GetRealObject(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xCEB86C
    ::Il2CppObject* GetRealObject(::System::Runtime::Serialization::StreamingContext context);
  }; // System.UnitySerializationHolder
  #pragma pack(pop)
  static check_size<sizeof(UnitySerializationHolder), 72 + sizeof(int)> __System_UnitySerializationHolderSizeCheck;
  static_assert(sizeof(UnitySerializationHolder) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::UnitySerializationHolder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::UnitySerializationHolder::GetUnitySerializationInfo
// Il2CppName: GetUnitySerializationInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Reflection::Missing*)>(&System::UnitySerializationHolder::GetUnitySerializationInfo)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* missing = &::il2cpp_utils::GetClassFromName("System.Reflection", "Missing")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UnitySerializationHolder*), "GetUnitySerializationInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, missing});
  }
};
// Writing MetadataGetter for method: System::UnitySerializationHolder::AddElementTypes
// Il2CppName: AddElementTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType* (*)(::System::Runtime::Serialization::SerializationInfo*, ::System::RuntimeType*)>(&System::UnitySerializationHolder::AddElementTypes)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UnitySerializationHolder*), "AddElementTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, type});
  }
};
// Writing MetadataGetter for method: System::UnitySerializationHolder::MakeElementTypes
// Il2CppName: MakeElementTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::UnitySerializationHolder::*)(::System::Type*)>(&System::UnitySerializationHolder::MakeElementTypes)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UnitySerializationHolder*), "MakeElementTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::UnitySerializationHolder::GetUnitySerializationInfo
// Il2CppName: GetUnitySerializationInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Serialization::SerializationInfo*, ::System::RuntimeType*)>(&System::UnitySerializationHolder::GetUnitySerializationInfo)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UnitySerializationHolder*), "GetUnitySerializationInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, type});
  }
};
// Writing MetadataGetter for method: System::UnitySerializationHolder::GetUnitySerializationInfo
// Il2CppName: GetUnitySerializationInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Serialization::SerializationInfo*, int, ::StringW, ::System::Reflection::RuntimeAssembly*)>(&System::UnitySerializationHolder::GetUnitySerializationInfo)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* unityType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "RuntimeAssembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UnitySerializationHolder*), "GetUnitySerializationInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, unityType, data, assembly});
  }
};
// Writing MetadataGetter for method: System::UnitySerializationHolder::ThrowInsufficientInformation
// Il2CppName: ThrowInsufficientInformation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::UnitySerializationHolder::*)(::StringW)>(&System::UnitySerializationHolder::ThrowInsufficientInformation)> {
  static const MethodInfo* get() {
    static auto* field = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UnitySerializationHolder*), "ThrowInsufficientInformation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{field});
  }
};
// Writing MetadataGetter for method: System::UnitySerializationHolder::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::UnitySerializationHolder::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::UnitySerializationHolder::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UnitySerializationHolder*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::UnitySerializationHolder::GetRealObject
// Il2CppName: GetRealObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::UnitySerializationHolder::*)(::System::Runtime::Serialization::StreamingContext)>(&System::UnitySerializationHolder::GetRealObject)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::UnitySerializationHolder*), "GetRealObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
