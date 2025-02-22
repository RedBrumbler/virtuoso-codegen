// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.IObjectReference
#include "System/Runtime/Serialization/IObjectReference.hpp"
// Including type: System.Reflection.ICustomAttributeProvider
#include "System/Reflection/ICustomAttributeProvider.hpp"
// Including type: System.Runtime.InteropServices._ParameterInfo
#include "System/Runtime/InteropServices/_ParameterInfo.hpp"
// Including type: System.Reflection.ParameterAttributes
#include "System/Reflection/ParameterAttributes.hpp"
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
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
  // Forward declaring type: CallingConventions
  struct CallingConventions;
}
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: MarshalAsAttribute
  class MarshalAsAttribute;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::ParameterInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ParameterInfo*, "System.Reflection", "ParameterInfo");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.ParameterInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57A4BC
  // [ComDefaultInterfaceAttribute] Offset: 57A4BC
  // [ClassInterfaceAttribute] Offset: 57A4BC
  class ParameterInfo : public ::Il2CppObject/*, public ::System::Runtime::Serialization::IObjectReference, public ::System::Reflection::ICustomAttributeProvider, public ::System::Runtime::InteropServices::_ParameterInfo*/ {
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
    // protected System.Type ClassImpl
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* ClassImpl;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // protected System.Object DefaultValueImpl
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* DefaultValueImpl;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // protected System.Reflection.MemberInfo MemberImpl
    // Size: 0x8
    // Offset: 0x20
    ::System::Reflection::MemberInfo* MemberImpl;
    // Field size check
    static_assert(sizeof(::System::Reflection::MemberInfo*) == 0x8);
    // protected System.String NameImpl
    // Size: 0x8
    // Offset: 0x28
    ::StringW NameImpl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected System.Int32 PositionImpl
    // Size: 0x4
    // Offset: 0x30
    int PositionImpl;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Reflection.ParameterAttributes AttrsImpl
    // Size: 0x4
    // Offset: 0x34
    ::System::Reflection::ParameterAttributes AttrsImpl;
    // Field size check
    static_assert(sizeof(::System::Reflection::ParameterAttributes) == 0x4);
    // System.Runtime.InteropServices.MarshalAsAttribute marshalAs
    // Size: 0x8
    // Offset: 0x38
    ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::MarshalAsAttribute*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::IObjectReference
    operator ::System::Runtime::Serialization::IObjectReference() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::IObjectReference*>(this);
    }
    // Creating interface conversion operator: operator ::System::Reflection::ICustomAttributeProvider
    operator ::System::Reflection::ICustomAttributeProvider() noexcept {
      return *reinterpret_cast<::System::Reflection::ICustomAttributeProvider*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::InteropServices::_ParameterInfo
    operator ::System::Runtime::InteropServices::_ParameterInfo() noexcept {
      return *reinterpret_cast<::System::Runtime::InteropServices::_ParameterInfo*>(this);
    }
    // Get instance field reference: protected System.Type ClassImpl
    ::System::Type*& dyn_ClassImpl();
    // Get instance field reference: protected System.Object DefaultValueImpl
    ::Il2CppObject*& dyn_DefaultValueImpl();
    // Get instance field reference: protected System.Reflection.MemberInfo MemberImpl
    ::System::Reflection::MemberInfo*& dyn_MemberImpl();
    // Get instance field reference: protected System.String NameImpl
    ::StringW& dyn_NameImpl();
    // Get instance field reference: protected System.Int32 PositionImpl
    int& dyn_PositionImpl();
    // Get instance field reference: protected System.Reflection.ParameterAttributes AttrsImpl
    ::System::Reflection::ParameterAttributes& dyn_AttrsImpl();
    // Get instance field reference: System.Runtime.InteropServices.MarshalAsAttribute marshalAs
    ::System::Runtime::InteropServices::MarshalAsAttribute*& dyn_marshalAs();
    // public System.Type get_ParameterType()
    // Offset: 0xEC51E8
    ::System::Type* get_ParameterType();
    // public System.Reflection.ParameterAttributes get_Attributes()
    // Offset: 0xEC51F0
    ::System::Reflection::ParameterAttributes get_Attributes();
    // public System.Boolean get_IsIn()
    // Offset: 0xEC51F8
    bool get_IsIn();
    // public System.Boolean get_IsOptional()
    // Offset: 0xEC5218
    bool get_IsOptional();
    // public System.Boolean get_IsOut()
    // Offset: 0xEC5238
    bool get_IsOut();
    // public System.Boolean get_IsRetval()
    // Offset: 0xEC4FA8
    bool get_IsRetval();
    // public System.String get_Name()
    // Offset: 0xEC5258
    ::StringW get_Name();
    // public System.Int32 get_Position()
    // Offset: 0xEC5260
    int get_Position();
    // public System.Object get_DefaultValue()
    // Offset: 0xEC54D8
    ::Il2CppObject* get_DefaultValue();
    // static System.Void FormatParameters(System.Text.StringBuilder sb, System.Reflection.ParameterInfo[] p, System.Reflection.CallingConventions callingConvention, System.Boolean serialization)
    // Offset: 0xEC4FC8
    static void FormatParameters(::System::Text::StringBuilder* sb, ::ArrayW<::System::Reflection::ParameterInfo*> p, ::System::Reflection::CallingConventions callingConvention, bool serialization);
    // System.Object[] GetPseudoCustomAttributes()
    // Offset: 0xEC5268
    ::ArrayW<::Il2CppObject*> GetPseudoCustomAttributes();
    // System.Object GetDefaultValueImpl()
    // Offset: 0xEC54D0
    ::Il2CppObject* GetDefaultValueImpl();
    // public System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0xEC5518
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(::System::Type* attributeType, bool inherit);
    // public System.Object GetRealObject(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xEC5560
    ::Il2CppObject* GetRealObject(::System::Runtime::Serialization::StreamingContext context);
    // public System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0xEC55A0
    bool IsDefined(::System::Type* attributeType, bool inherit);
    // static System.Reflection.ParameterInfo New(System.Reflection.ParameterInfo pinfo, System.Reflection.MemberInfo member)
    // Offset: 0xEC55A8
    static ::System::Reflection::ParameterInfo* New(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member);
    // protected System.Void .ctor()
    // Offset: 0xEC4DD8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParameterInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::ParameterInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParameterInfo*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0xEC4DE0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Reflection.ParameterInfo
  #pragma pack(pop)
  static check_size<sizeof(ParameterInfo), 56 + sizeof(::System::Runtime::InteropServices::MarshalAsAttribute*)> __System_Reflection_ParameterInfoSizeCheck;
  static_assert(sizeof(ParameterInfo) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::get_ParameterType
// Il2CppName: get_ParameterType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::ParameterInfo::*)()>(&System::Reflection::ParameterInfo::get_ParameterType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ParameterInfo*), "get_ParameterType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ParameterAttributes (System::Reflection::ParameterInfo::*)()>(&System::Reflection::ParameterInfo::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ParameterInfo*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::get_IsIn
// Il2CppName: get_IsIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::ParameterInfo::*)()>(&System::Reflection::ParameterInfo::get_IsIn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ParameterInfo*), "get_IsIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::get_IsOptional
// Il2CppName: get_IsOptional
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::ParameterInfo::*)()>(&System::Reflection::ParameterInfo::get_IsOptional)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ParameterInfo*), "get_IsOptional", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::get_IsOut
// Il2CppName: get_IsOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::ParameterInfo::*)()>(&System::Reflection::ParameterInfo::get_IsOut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ParameterInfo*), "get_IsOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::get_IsRetval
// Il2CppName: get_IsRetval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::ParameterInfo::*)()>(&System::Reflection::ParameterInfo::get_IsRetval)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ParameterInfo*), "get_IsRetval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::ParameterInfo::*)()>(&System::Reflection::ParameterInfo::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ParameterInfo*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::ParameterInfo::*)()>(&System::Reflection::ParameterInfo::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ParameterInfo*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::get_DefaultValue
// Il2CppName: get_DefaultValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::ParameterInfo::*)()>(&System::Reflection::ParameterInfo::get_DefaultValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ParameterInfo*), "get_DefaultValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::FormatParameters
// Il2CppName: FormatParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, ::ArrayW<::System::Reflection::ParameterInfo*>, ::System::Reflection::CallingConventions, bool)>(&System::Reflection::ParameterInfo::FormatParameters)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* p = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo"), 1)->byval_arg;
    static auto* callingConvention = &::il2cpp_utils::GetClassFromName("System.Reflection", "CallingConventions")->byval_arg;
    static auto* serialization = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ParameterInfo*), "FormatParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, p, callingConvention, serialization});
  }
};
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::GetPseudoCustomAttributes
// Il2CppName: GetPseudoCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::ParameterInfo::*)()>(&System::Reflection::ParameterInfo::GetPseudoCustomAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ParameterInfo*), "GetPseudoCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::GetDefaultValueImpl
// Il2CppName: GetDefaultValueImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::ParameterInfo::*)()>(&System::Reflection::ParameterInfo::GetDefaultValueImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ParameterInfo*), "GetDefaultValueImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::ParameterInfo::*)(::System::Type*, bool)>(&System::Reflection::ParameterInfo::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ParameterInfo*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::GetRealObject
// Il2CppName: GetRealObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::ParameterInfo::*)(::System::Runtime::Serialization::StreamingContext)>(&System::Reflection::ParameterInfo::GetRealObject)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ParameterInfo*), "GetRealObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::ParameterInfo::*)(::System::Type*, bool)>(&System::Reflection::ParameterInfo::IsDefined)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ParameterInfo*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::New
// Il2CppName: New
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ParameterInfo* (*)(::System::Reflection::ParameterInfo*, ::System::Reflection::MemberInfo*)>(&System::Reflection::ParameterInfo::New)> {
  static const MethodInfo* get() {
    static auto* pinfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo")->byval_arg;
    static auto* member = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ParameterInfo*), "New", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pinfo, member});
  }
};
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::ParameterInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::ParameterInfo::*)()>(&System::Reflection::ParameterInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ParameterInfo*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
