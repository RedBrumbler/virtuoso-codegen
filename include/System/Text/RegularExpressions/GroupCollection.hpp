// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Match
  class Match;
  // Forward declaring type: Group
  class Group;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: GroupCollection
  class GroupCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::GroupCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::GroupCollection*, "System.Text.RegularExpressions", "GroupCollection");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.GroupCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 591CD8
  class GroupCollection : public ::Il2CppObject/*, public ::System::Collections::ICollection*/ {
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
    // System.Text.RegularExpressions.Match _match
    // Size: 0x8
    // Offset: 0x10
    ::System::Text::RegularExpressions::Match* match;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::Match*) == 0x8);
    // System.Collections.Hashtable _captureMap
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Hashtable* captureMap;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // System.Text.RegularExpressions.Group[] _groups
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::System::Text::RegularExpressions::Group*> groups;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Text::RegularExpressions::Group*>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Get instance field reference: System.Text.RegularExpressions.Match _match
    ::System::Text::RegularExpressions::Match*& dyn__match();
    // Get instance field reference: System.Collections.Hashtable _captureMap
    ::System::Collections::Hashtable*& dyn__captureMap();
    // Get instance field reference: System.Text.RegularExpressions.Group[] _groups
    ::ArrayW<::System::Text::RegularExpressions::Group*>& dyn__groups();
    // public System.Object get_SyncRoot()
    // Offset: 0xD8A1DC
    ::Il2CppObject* get_SyncRoot();
    // public System.Int32 get_Count()
    // Offset: 0xD8A1E4
    int get_Count();
    // public System.Text.RegularExpressions.Group get_Item(System.Int32 groupnum)
    // Offset: 0xD8A20C
    ::System::Text::RegularExpressions::Group* get_Item(int groupnum);
    // System.Void .ctor(System.Text.RegularExpressions.Match match, System.Collections.Hashtable caps)
    // Offset: 0xD8A1A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GroupCollection* New_ctor(::System::Text::RegularExpressions::Match* match, ::System::Collections::Hashtable* caps) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::GroupCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GroupCollection*, creationType>(match, caps)));
    }
    // System.Text.RegularExpressions.Group GetGroup(System.Int32 groupnum)
    // Offset: 0xD8A210
    ::System::Text::RegularExpressions::Group* GetGroup(int groupnum);
    // System.Text.RegularExpressions.Group GetGroupImpl(System.Int32 groupnum)
    // Offset: 0xD8A344
    ::System::Text::RegularExpressions::Group* GetGroupImpl(int groupnum);
    // public System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0xD8A530
    void CopyTo(::System::Array* array, int arrayIndex);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0xD8A5F8
    ::System::Collections::IEnumerator* GetEnumerator();
    // System.Void .ctor()
    // Offset: 0xD8A694
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GroupCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::GroupCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GroupCollection*, creationType>()));
    }
  }; // System.Text.RegularExpressions.GroupCollection
  #pragma pack(pop)
  static check_size<sizeof(GroupCollection), 32 + sizeof(::ArrayW<::System::Text::RegularExpressions::Group*>)> __System_Text_RegularExpressions_GroupCollectionSizeCheck;
  static_assert(sizeof(GroupCollection) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::GroupCollection::get_SyncRoot
// Il2CppName: get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Text::RegularExpressions::GroupCollection::*)()>(&System::Text::RegularExpressions::GroupCollection::get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::GroupCollection*), "get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::GroupCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::GroupCollection::*)()>(&System::Text::RegularExpressions::GroupCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::GroupCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::GroupCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::Group* (System::Text::RegularExpressions::GroupCollection::*)(int)>(&System::Text::RegularExpressions::GroupCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* groupnum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::GroupCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupnum});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::GroupCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::GroupCollection::GetGroup
// Il2CppName: GetGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::Group* (System::Text::RegularExpressions::GroupCollection::*)(int)>(&System::Text::RegularExpressions::GroupCollection::GetGroup)> {
  static const MethodInfo* get() {
    static auto* groupnum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::GroupCollection*), "GetGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupnum});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::GroupCollection::GetGroupImpl
// Il2CppName: GetGroupImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::Group* (System::Text::RegularExpressions::GroupCollection::*)(int)>(&System::Text::RegularExpressions::GroupCollection::GetGroupImpl)> {
  static const MethodInfo* get() {
    static auto* groupnum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::GroupCollection*), "GetGroupImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupnum});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::GroupCollection::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::GroupCollection::*)(::System::Array*, int)>(&System::Text::RegularExpressions::GroupCollection::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* arrayIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::GroupCollection*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, arrayIndex});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::GroupCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Text::RegularExpressions::GroupCollection::*)()>(&System::Text::RegularExpressions::GroupCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::GroupCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::GroupCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!