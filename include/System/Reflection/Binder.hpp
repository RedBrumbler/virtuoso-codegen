// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.ParameterModifier
#include "System/Reflection/ParameterModifier.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: Binder
  class Binder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::Binder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Binder*, "System.Reflection", "Binder");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Binder
  // [TokenAttribute] Offset: FFFFFFFF
  // [ClassInterfaceAttribute] Offset: 57995C
  // [ComVisibleAttribute] Offset: 57995C
  class Binder : public ::Il2CppObject {
    public:
    // public System.Reflection.MethodBase BindToMethod(System.Reflection.BindingFlags bindingAttr, System.Reflection.MethodBase[] match, ref System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo culture, System.String[] names, out System.Object state)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Reflection::MethodBase* BindToMethod(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::MethodBase*> match, ByRef<::ArrayW<::Il2CppObject*>> args, ::ArrayW<::System::Reflection::ParameterModifier> modifiers, ::System::Globalization::CultureInfo* culture, ::ArrayW<::StringW> names, ByRef<::Il2CppObject*> state);
    // public System.Reflection.FieldInfo BindToField(System.Reflection.BindingFlags bindingAttr, System.Reflection.FieldInfo[] match, System.Object value, System.Globalization.CultureInfo culture)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Reflection::FieldInfo* BindToField(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::FieldInfo*> match, ::Il2CppObject* value, ::System::Globalization::CultureInfo* culture);
    // public System.Reflection.MethodBase SelectMethod(System.Reflection.BindingFlags bindingAttr, System.Reflection.MethodBase[] match, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Reflection::MethodBase* SelectMethod(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::MethodBase*> match, ::ArrayW<::System::Type*> types, ::ArrayW<::System::Reflection::ParameterModifier> modifiers);
    // public System.Reflection.PropertyInfo SelectProperty(System.Reflection.BindingFlags bindingAttr, System.Reflection.PropertyInfo[] match, System.Type returnType, System.Type[] indexes, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Reflection::PropertyInfo* SelectProperty(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::PropertyInfo*> match, ::System::Type* returnType, ::ArrayW<::System::Type*> indexes, ::ArrayW<::System::Reflection::ParameterModifier> modifiers);
    // public System.Object ChangeType(System.Object value, System.Type type, System.Globalization.CultureInfo culture)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* ChangeType(::Il2CppObject* value, ::System::Type* type, ::System::Globalization::CultureInfo* culture);
    // public System.Void ReorderArgumentArray(ref System.Object[] args, System.Object state)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ReorderArgumentArray(ByRef<::ArrayW<::Il2CppObject*>> args, ::Il2CppObject* state);
    // protected System.Void .ctor()
    // Offset: 0xCCA340
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Binder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::Binder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Binder*, creationType>()));
    }
  }; // System.Reflection.Binder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::Binder::BindToMethod
// Il2CppName: BindToMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (System::Reflection::Binder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::MethodBase*>, ByRef<::ArrayW<::Il2CppObject*>>, ::ArrayW<::System::Reflection::ParameterModifier>, ::System::Globalization::CultureInfo*, ::ArrayW<::StringW>, ByRef<::Il2CppObject*>)>(&System::Reflection::Binder::BindToMethod)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* match = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase"), 1)->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->this_arg;
    static auto* modifiers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterModifier"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* names = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Binder*), "BindToMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr, match, args, modifiers, culture, names, state});
  }
};
// Writing MetadataGetter for method: System::Reflection::Binder::BindToField
// Il2CppName: BindToField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldInfo* (System::Reflection::Binder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::FieldInfo*>, ::Il2CppObject*, ::System::Globalization::CultureInfo*)>(&System::Reflection::Binder::BindToField)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* match = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo"), 1)->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Binder*), "BindToField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr, match, value, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::Binder::SelectMethod
// Il2CppName: SelectMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (System::Reflection::Binder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::MethodBase*>, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&System::Reflection::Binder::SelectMethod)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* match = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase"), 1)->byval_arg;
    static auto* types = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* modifiers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterModifier"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Binder*), "SelectMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr, match, types, modifiers});
  }
};
// Writing MetadataGetter for method: System::Reflection::Binder::SelectProperty
// Il2CppName: SelectProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::PropertyInfo* (System::Reflection::Binder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::PropertyInfo*>, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&System::Reflection::Binder::SelectProperty)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* match = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "PropertyInfo"), 1)->byval_arg;
    static auto* returnType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* indexes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* modifiers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterModifier"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Binder*), "SelectProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr, match, returnType, indexes, modifiers});
  }
};
// Writing MetadataGetter for method: System::Reflection::Binder::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::Binder::*)(::Il2CppObject*, ::System::Type*, ::System::Globalization::CultureInfo*)>(&System::Reflection::Binder::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Binder*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, type, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::Binder::ReorderArgumentArray
// Il2CppName: ReorderArgumentArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Binder::*)(ByRef<::ArrayW<::Il2CppObject*>>, ::Il2CppObject*)>(&System::Reflection::Binder::ReorderArgumentArray)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->this_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Binder*), "ReorderArgumentArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args, state});
  }
};
// Writing MetadataGetter for method: System::Reflection::Binder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
