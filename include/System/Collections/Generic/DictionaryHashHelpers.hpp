// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: ConditionalWeakTable`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ConditionalWeakTable_2;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: DictionaryHashHelpers
  class DictionaryHashHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Generic::DictionaryHashHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::DictionaryHashHelpers*, "System.Collections.Generic", "DictionaryHashHelpers");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Generic.DictionaryHashHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class DictionaryHashHelpers : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> <SerializationInfoTable>k__BackingField
    static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, ::System::Runtime::Serialization::SerializationInfo*>* _get_$SerializationInfoTable$k__BackingField();
    // Set static field: static private readonly System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> <SerializationInfoTable>k__BackingField
    static void _set_$SerializationInfoTable$k__BackingField(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, ::System::Runtime::Serialization::SerializationInfo*>* value);
    // static System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> get_SerializationInfoTable()
    // Offset: 0xCB0FDC
    static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, ::System::Runtime::Serialization::SerializationInfo*>* get_SerializationInfoTable();
    // static private System.Void .cctor()
    // Offset: 0xCB1040
    static void _cctor();
  }; // System.Collections.Generic.DictionaryHashHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Generic::DictionaryHashHelpers::get_SerializationInfoTable
// Il2CppName: get_SerializationInfoTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, ::System::Runtime::Serialization::SerializationInfo*>* (*)()>(&System::Collections::Generic::DictionaryHashHelpers::get_SerializationInfoTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::DictionaryHashHelpers*), "get_SerializationInfoTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Generic::DictionaryHashHelpers::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Collections::Generic::DictionaryHashHelpers::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Generic::DictionaryHashHelpers*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};