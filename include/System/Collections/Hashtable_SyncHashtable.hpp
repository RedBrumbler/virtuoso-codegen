// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: ICollection
  class ICollection;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Hashtable::SyncHashtable);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Hashtable::SyncHashtable*, "System.Collections", "Hashtable/SyncHashtable");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Hashtable/System.Collections.SyncHashtable
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 57DAC4
  class Hashtable::SyncHashtable : public ::System::Collections::Hashtable {
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
    // protected System.Collections.Hashtable _table
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Hashtable* table;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Hashtable*
    constexpr operator ::System::Collections::Hashtable*() const noexcept {
      return table;
    }
    // Get instance field reference: protected System.Collections.Hashtable _table
    ::System::Collections::Hashtable*& dyn__table();
    // System.Void .ctor(System.Collections.Hashtable table)
    // Offset: 0xDD5A10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hashtable::SyncHashtable* New_ctor(::System::Collections::Hashtable* table) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Hashtable::SyncHashtable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hashtable::SyncHashtable*, creationType>(table)));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xDD6430
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public override System.Int32 get_Count()
    // Offset: 0xDD5D88
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Int32 Hashtable::get_Count()
    int get_Count();
    // public override System.Object get_Item(System.Object key)
    // Offset: 0xDD5DAC
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Object Hashtable::get_Item(System.Object key)
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // public override System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0xDD5DD0
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::set_Item(System.Object key, System.Object value)
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public override System.Object get_SyncRoot()
    // Offset: 0xDD5ED8
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Object Hashtable::get_SyncRoot()
    ::Il2CppObject* get_SyncRoot();
    // public override System.Collections.ICollection get_Keys()
    // Offset: 0xDD6478
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Collections.ICollection Hashtable::get_Keys()
    ::System::Collections::ICollection* get_Keys();
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xDD5A40
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hashtable::SyncHashtable* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Hashtable::SyncHashtable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hashtable::SyncHashtable*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xDD5BC4
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public override System.Void Add(System.Object key, System.Object value)
    // Offset: 0xDD5EFC
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::Add(System.Object key, System.Object value)
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public override System.Void Clear()
    // Offset: 0xDD6004
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::Clear()
    void Clear();
    // public override System.Boolean Contains(System.Object key)
    // Offset: 0xDD60FC
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Boolean Hashtable::Contains(System.Object key)
    bool Contains(::Il2CppObject* key);
    // public override System.Boolean ContainsKey(System.Object key)
    // Offset: 0xDD6120
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Boolean Hashtable::ContainsKey(System.Object key)
    bool ContainsKey(::Il2CppObject* key);
    // public override System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0xDD61B8
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::CopyTo(System.Array array, System.Int32 arrayIndex)
    void CopyTo(::System::Array* array, int arrayIndex);
    // public override System.Object Clone()
    // Offset: 0xDD62C0
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Object Hashtable::Clone()
    ::Il2CppObject* Clone();
    // public override System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0xDD6454
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Collections.IDictionaryEnumerator Hashtable::GetEnumerator()
    ::System::Collections::IDictionaryEnumerator* GetEnumerator();
    // public override System.Void Remove(System.Object key)
    // Offset: 0xDD6580
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::Remove(System.Object key)
    void Remove(::Il2CppObject* key);
    // public override System.Void OnDeserialization(System.Object sender)
    // Offset: 0xDD6680
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::OnDeserialization(System.Object sender)
    void OnDeserialization(::Il2CppObject* sender);
  }; // System.Collections.Hashtable/System.Collections.SyncHashtable
  #pragma pack(pop)
  static check_size<sizeof(Hashtable::SyncHashtable), 80 + sizeof(::System::Collections::Hashtable*)> __System_Collections_Hashtable_SyncHashtableSizeCheck;
  static_assert(sizeof(Hashtable::SyncHashtable) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Collections::Hashtable::SyncHashtable::*)()>(&System::Collections::Hashtable::SyncHashtable::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::SyncHashtable*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Hashtable::SyncHashtable::*)()>(&System::Collections::Hashtable::SyncHashtable::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::SyncHashtable*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Hashtable::SyncHashtable::*)(::Il2CppObject*)>(&System::Collections::Hashtable::SyncHashtable::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::SyncHashtable*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::SyncHashtable::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::Hashtable::SyncHashtable::set_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::SyncHashtable*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Hashtable::SyncHashtable::*)()>(&System::Collections::Hashtable::SyncHashtable::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::SyncHashtable*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (System::Collections::Hashtable::SyncHashtable::*)()>(&System::Collections::Hashtable::SyncHashtable::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::SyncHashtable*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::SyncHashtable::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Collections::Hashtable::SyncHashtable::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::SyncHashtable*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::SyncHashtable::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::Hashtable::SyncHashtable::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::SyncHashtable*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::SyncHashtable::*)()>(&System::Collections::Hashtable::SyncHashtable::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::SyncHashtable*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Hashtable::SyncHashtable::*)(::Il2CppObject*)>(&System::Collections::Hashtable::SyncHashtable::Contains)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::SyncHashtable*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::ContainsKey
// Il2CppName: ContainsKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Hashtable::SyncHashtable::*)(::Il2CppObject*)>(&System::Collections::Hashtable::SyncHashtable::ContainsKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::SyncHashtable*), "ContainsKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::SyncHashtable::*)(::System::Array*, int)>(&System::Collections::Hashtable::SyncHashtable::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::SyncHashtable*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, arrayIndex});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Hashtable::SyncHashtable::*)()>(&System::Collections::Hashtable::SyncHashtable::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::SyncHashtable*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionaryEnumerator* (System::Collections::Hashtable::SyncHashtable::*)()>(&System::Collections::Hashtable::SyncHashtable::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::SyncHashtable*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::SyncHashtable::*)(::Il2CppObject*)>(&System::Collections::Hashtable::SyncHashtable::Remove)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::SyncHashtable*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::Hashtable::SyncHashtable::OnDeserialization
// Il2CppName: OnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Hashtable::SyncHashtable::*)(::Il2CppObject*)>(&System::Collections::Hashtable::SyncHashtable::OnDeserialization)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Hashtable::SyncHashtable*), "OnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
