// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
  // Skipping declaration: ICollection because it is already included!
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: ListDictionary
  class ListDictionary;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Specialized::ListDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::ListDictionary*, "System.Collections.Specialized", "ListDictionary");
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Specialized.ListDictionary
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 592030
  class ListDictionary : public ::Il2CppObject/*, public ::System::Collections::IDictionary*/ {
    public:
    // Nested type: ::System::Collections::Specialized::ListDictionary::NodeEnumerator
    class NodeEnumerator;
    // Nested type: ::System::Collections::Specialized::ListDictionary::NodeKeyValueCollection
    class NodeKeyValueCollection;
    // Nested type: ::System::Collections::Specialized::ListDictionary::DictionaryNode
    class DictionaryNode;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.Specialized.ListDictionary/System.Collections.Specialized.DictionaryNode head
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Specialized::ListDictionary::DictionaryNode* head;
    // Field size check
    static_assert(sizeof(::System::Collections::Specialized::ListDictionary::DictionaryNode*) == 0x8);
    // private System.Int32 version
    // Size: 0x4
    // Offset: 0x18
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 count
    // Size: 0x4
    // Offset: 0x1C
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.IComparer comparer
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::IComparer* comparer;
    // Field size check
    static_assert(sizeof(::System::Collections::IComparer*) == 0x8);
    // private System.Object _syncRoot
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* syncRoot;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IDictionary
    operator ::System::Collections::IDictionary() noexcept {
      return *reinterpret_cast<::System::Collections::IDictionary*>(this);
    }
    // Get instance field reference: private System.Collections.Specialized.ListDictionary/System.Collections.Specialized.DictionaryNode head
    ::System::Collections::Specialized::ListDictionary::DictionaryNode*& dyn_head();
    // Get instance field reference: private System.Int32 version
    int& dyn_version();
    // Get instance field reference: private System.Int32 count
    int& dyn_count();
    // Get instance field reference: private System.Collections.IComparer comparer
    ::System::Collections::IComparer*& dyn_comparer();
    // Get instance field reference: private System.Object _syncRoot
    ::Il2CppObject*& dyn__syncRoot();
    // public System.Object get_Item(System.Object key)
    // Offset: 0xBED05C
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0xBECDA8
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Int32 get_Count()
    // Offset: 0xBEDD80
    int get_Count();
    // public System.Collections.ICollection get_Keys()
    // Offset: 0xBEDD88
    ::System::Collections::ICollection* get_Keys();
    // public System.Object get_SyncRoot()
    // Offset: 0xBEDDEC
    ::Il2CppObject* get_SyncRoot();
    // public System.Void .ctor(System.Collections.IComparer comparer)
    // Offset: 0xBECD7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListDictionary* New_ctor(::System::Collections::IComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::ListDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListDictionary*, creationType>(comparer)));
    }
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0xBEDE64
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Boolean Contains(System.Object key)
    // Offset: 0xBEE080
    bool Contains(::Il2CppObject* key);
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0xBEE1F8
    void CopyTo(::System::Array* array, int index);
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0xBEE3B0
    ::System::Collections::IDictionaryEnumerator* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xBEE410
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void .ctor()
    // Offset: 0xBEDD78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListDictionary* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Specialized::ListDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListDictionary*, creationType>()));
    }
  }; // System.Collections.Specialized.ListDictionary
  #pragma pack(pop)
  static check_size<sizeof(ListDictionary), 40 + sizeof(::Il2CppObject*)> __System_Collections_Specialized_ListDictionarySizeCheck;
  static_assert(sizeof(ListDictionary) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Specialized::ListDictionary::*)(::Il2CppObject*)>(&System::Collections::Specialized::ListDictionary::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::ListDictionary::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::Specialized::ListDictionary::set_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Specialized::ListDictionary::*)()>(&System::Collections::Specialized::ListDictionary::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (System::Collections::Specialized::ListDictionary::*)()>(&System::Collections::Specialized::ListDictionary::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Specialized::ListDictionary::*)()>(&System::Collections::Specialized::ListDictionary::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::ListDictionary::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::Specialized::ListDictionary::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Specialized::ListDictionary::*)(::Il2CppObject*)>(&System::Collections::Specialized::ListDictionary::Contains)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::ListDictionary::*)(::System::Array*, int)>(&System::Collections::Specialized::ListDictionary::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionaryEnumerator* (System::Collections::Specialized::ListDictionary::*)()>(&System::Collections::Specialized::ListDictionary::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Collections::Specialized::ListDictionary::*)()>(&System::Collections::Specialized::ListDictionary::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::ListDictionary*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::ListDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!