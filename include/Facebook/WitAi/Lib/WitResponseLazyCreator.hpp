// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Facebook.WitAi.Lib.WitResponseNode
#include "Facebook/WitAi/Lib/WitResponseNode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi::Lib
namespace Facebook::WitAi::Lib {
  // Forward declaring type: WitResponseArray
  class WitResponseArray;
  // Forward declaring type: WitResponseClass
  class WitResponseClass;
}
// Completed forward declares
// Type namespace: Facebook.WitAi.Lib
namespace Facebook::WitAi::Lib {
  // Forward declaring type: WitResponseLazyCreator
  class WitResponseLazyCreator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Lib::WitResponseLazyCreator);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Lib::WitResponseLazyCreator*, "Facebook.WitAi.Lib", "WitResponseLazyCreator");
// Type namespace: Facebook.WitAi.Lib
namespace Facebook::WitAi::Lib {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Lib.WitResponseLazyCreator
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 5B13B8
  class WitResponseLazyCreator : public ::Facebook::WitAi::Lib::WitResponseNode {
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
    // private Facebook.WitAi.Lib.WitResponseNode m_Node
    // Size: 0x8
    // Offset: 0x10
    ::Facebook::WitAi::Lib::WitResponseNode* m_Node;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Lib::WitResponseNode*) == 0x8);
    // private System.String m_Key
    // Size: 0x8
    // Offset: 0x18
    ::StringW m_Key;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private Facebook.WitAi.Lib.WitResponseNode m_Node
    ::Facebook::WitAi::Lib::WitResponseNode*& dyn_m_Node();
    // Get instance field reference: private System.String m_Key
    ::StringW& dyn_m_Key();
    // public System.Void .ctor(Facebook.WitAi.Lib.WitResponseNode aNode)
    // Offset: 0x11006C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitResponseLazyCreator* New_ctor(::Facebook::WitAi::Lib::WitResponseNode* aNode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Lib::WitResponseLazyCreator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitResponseLazyCreator*, creationType>(aNode)));
    }
    // public System.Void .ctor(Facebook.WitAi.Lib.WitResponseNode aNode, System.String aKey)
    // Offset: 0x11011FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitResponseLazyCreator* New_ctor(::Facebook::WitAi::Lib::WitResponseNode* aNode, ::StringW aKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Lib::WitResponseLazyCreator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitResponseLazyCreator*, creationType>(aNode, aKey)));
    }
    // private System.Void Set(Facebook.WitAi.Lib.WitResponseNode aVal)
    // Offset: 0x110366C
    void Set(::Facebook::WitAi::Lib::WitResponseNode* aVal);
    // public override Facebook.WitAi.Lib.WitResponseNode get_Item(System.Int32 aIndex)
    // Offset: 0x11036CC
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: Facebook.WitAi.Lib.WitResponseNode WitResponseNode::get_Item(System.Int32 aIndex)
    ::Facebook::WitAi::Lib::WitResponseNode* get_Item(int aIndex);
    // public override System.Void set_Item(System.Int32 aIndex, Facebook.WitAi.Lib.WitResponseNode value)
    // Offset: 0x110372C
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Void WitResponseNode::set_Item(System.Int32 aIndex, Facebook.WitAi.Lib.WitResponseNode value)
    void set_Item(int aIndex, ::Facebook::WitAi::Lib::WitResponseNode* value);
    // public override Facebook.WitAi.Lib.WitResponseNode get_Item(System.String aKey)
    // Offset: 0x11037B0
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: Facebook.WitAi.Lib.WitResponseNode WitResponseNode::get_Item(System.String aKey)
    ::Facebook::WitAi::Lib::WitResponseNode* get_Item(::StringW aKey);
    // public override System.Void set_Item(System.String aKey, Facebook.WitAi.Lib.WitResponseNode value)
    // Offset: 0x110381C
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Void WitResponseNode::set_Item(System.String aKey, Facebook.WitAi.Lib.WitResponseNode value)
    void set_Item(::StringW aKey, ::Facebook::WitAi::Lib::WitResponseNode* value);
    // public override System.Int32 get_AsInt()
    // Offset: 0x1103A98
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Int32 WitResponseNode::get_AsInt()
    int get_AsInt();
    // public override System.Void set_AsInt(System.Int32 value)
    // Offset: 0x1103B18
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Void WitResponseNode::set_AsInt(System.Int32 value)
    void set_AsInt(int value);
    // public override System.Single get_AsFloat()
    // Offset: 0x1103B9C
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Single WitResponseNode::get_AsFloat()
    float get_AsFloat();
    // public override System.Void set_AsFloat(System.Single value)
    // Offset: 0x1103C1C
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Void WitResponseNode::set_AsFloat(System.Single value)
    void set_AsFloat(float value);
    // public override System.Double get_AsDouble()
    // Offset: 0x1103CA0
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Double WitResponseNode::get_AsDouble()
    double get_AsDouble();
    // public override System.Void set_AsDouble(System.Double value)
    // Offset: 0x1103D20
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Void WitResponseNode::set_AsDouble(System.Double value)
    void set_AsDouble(double value);
    // public override System.Boolean get_AsBool()
    // Offset: 0x1103DA4
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Boolean WitResponseNode::get_AsBool()
    bool get_AsBool();
    // public override System.Void set_AsBool(System.Boolean value)
    // Offset: 0x1103E24
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Void WitResponseNode::set_AsBool(System.Boolean value)
    void set_AsBool(bool value);
    // public override Facebook.WitAi.Lib.WitResponseArray get_AsArray()
    // Offset: 0x1103EA8
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: Facebook.WitAi.Lib.WitResponseArray WitResponseNode::get_AsArray()
    ::Facebook::WitAi::Lib::WitResponseArray* get_AsArray();
    // public override Facebook.WitAi.Lib.WitResponseClass get_AsObject()
    // Offset: 0x1103F0C
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: Facebook.WitAi.Lib.WitResponseClass WitResponseNode::get_AsObject()
    ::Facebook::WitAi::Lib::WitResponseClass* get_AsObject();
    // public override System.Void Add(Facebook.WitAi.Lib.WitResponseNode aItem)
    // Offset: 0x11038A8
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Void WitResponseNode::Add(Facebook.WitAi.Lib.WitResponseNode aItem)
    void Add(::Facebook::WitAi::Lib::WitResponseNode* aItem);
    // public override System.Void Add(System.String aKey, Facebook.WitAi.Lib.WitResponseNode aItem)
    // Offset: 0x110392C
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Void WitResponseNode::Add(System.String aKey, Facebook.WitAi.Lib.WitResponseNode aItem)
    void Add(::StringW aKey, ::Facebook::WitAi::Lib::WitResponseNode* aItem);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x11039E8
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Boolean WitResponseNode::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1103A00
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.Int32 WitResponseNode::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1103A10
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.String WitResponseNode::ToString()
    ::StringW ToString();
    // public override System.String ToString(System.String aPrefix)
    // Offset: 0x1103A54
    // Implemented from: Facebook.WitAi.Lib.WitResponseNode
    // Base method: System.String WitResponseNode::ToString(System.String aPrefix)
    ::StringW ToString(::StringW aPrefix);
  }; // Facebook.WitAi.Lib.WitResponseLazyCreator
  #pragma pack(pop)
  static check_size<sizeof(WitResponseLazyCreator), 24 + sizeof(::StringW)> __Facebook_WitAi_Lib_WitResponseLazyCreatorSizeCheck;
  static_assert(sizeof(WitResponseLazyCreator) == 0x20);
  // static public System.Boolean op_Equality(Facebook.WitAi.Lib.WitResponseLazyCreator a, System.Object b)
  // Offset: 0x11039B8
  bool operator ==(::Facebook::WitAi::Lib::WitResponseLazyCreator* a, ::Il2CppObject& b);
  // static public System.Boolean op_Inequality(Facebook.WitAi.Lib.WitResponseLazyCreator a, System.Object b)
  // Offset: 0x11039D0
  bool operator !=(::Facebook::WitAi::Lib::WitResponseLazyCreator* a, ::Il2CppObject& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Lib::WitResponseLazyCreator::*)(::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::Lib::WitResponseLazyCreator::Set)> {
  static const MethodInfo* get() {
    static auto* aVal = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aVal});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Lib::WitResponseNode* (Facebook::WitAi::Lib::WitResponseLazyCreator::*)(int)>(&Facebook::WitAi::Lib::WitResponseLazyCreator::get_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Lib::WitResponseLazyCreator::*)(int, ::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::Lib::WitResponseLazyCreator::set_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex, value});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Lib::WitResponseNode* (Facebook::WitAi::Lib::WitResponseLazyCreator::*)(::StringW)>(&Facebook::WitAi::Lib::WitResponseLazyCreator::get_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Lib::WitResponseLazyCreator::*)(::StringW, ::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::Lib::WitResponseLazyCreator::set_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, value});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::get_AsInt
// Il2CppName: get_AsInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Facebook::WitAi::Lib::WitResponseLazyCreator::*)()>(&Facebook::WitAi::Lib::WitResponseLazyCreator::get_AsInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "get_AsInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::set_AsInt
// Il2CppName: set_AsInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Lib::WitResponseLazyCreator::*)(int)>(&Facebook::WitAi::Lib::WitResponseLazyCreator::set_AsInt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "set_AsInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::get_AsFloat
// Il2CppName: get_AsFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Facebook::WitAi::Lib::WitResponseLazyCreator::*)()>(&Facebook::WitAi::Lib::WitResponseLazyCreator::get_AsFloat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "get_AsFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::set_AsFloat
// Il2CppName: set_AsFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Lib::WitResponseLazyCreator::*)(float)>(&Facebook::WitAi::Lib::WitResponseLazyCreator::set_AsFloat)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "set_AsFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::get_AsDouble
// Il2CppName: get_AsDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Facebook::WitAi::Lib::WitResponseLazyCreator::*)()>(&Facebook::WitAi::Lib::WitResponseLazyCreator::get_AsDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "get_AsDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::set_AsDouble
// Il2CppName: set_AsDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Lib::WitResponseLazyCreator::*)(double)>(&Facebook::WitAi::Lib::WitResponseLazyCreator::set_AsDouble)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "set_AsDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::get_AsBool
// Il2CppName: get_AsBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::Lib::WitResponseLazyCreator::*)()>(&Facebook::WitAi::Lib::WitResponseLazyCreator::get_AsBool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "get_AsBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::set_AsBool
// Il2CppName: set_AsBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Lib::WitResponseLazyCreator::*)(bool)>(&Facebook::WitAi::Lib::WitResponseLazyCreator::set_AsBool)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "set_AsBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::get_AsArray
// Il2CppName: get_AsArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Lib::WitResponseArray* (Facebook::WitAi::Lib::WitResponseLazyCreator::*)()>(&Facebook::WitAi::Lib::WitResponseLazyCreator::get_AsArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "get_AsArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::get_AsObject
// Il2CppName: get_AsObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Lib::WitResponseClass* (Facebook::WitAi::Lib::WitResponseLazyCreator::*)()>(&Facebook::WitAi::Lib::WitResponseLazyCreator::get_AsObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "get_AsObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Lib::WitResponseLazyCreator::*)(::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::Lib::WitResponseLazyCreator::Add)> {
  static const MethodInfo* get() {
    static auto* aItem = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aItem});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Lib::WitResponseLazyCreator::*)(::StringW, ::Facebook::WitAi::Lib::WitResponseNode*)>(&Facebook::WitAi::Lib::WitResponseLazyCreator::Add)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* aItem = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Lib", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, aItem});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::Lib::WitResponseLazyCreator::*)(::Il2CppObject*)>(&Facebook::WitAi::Lib::WitResponseLazyCreator::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Facebook::WitAi::Lib::WitResponseLazyCreator::*)()>(&Facebook::WitAi::Lib::WitResponseLazyCreator::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Facebook::WitAi::Lib::WitResponseLazyCreator::*)()>(&Facebook::WitAi::Lib::WitResponseLazyCreator::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Facebook::WitAi::Lib::WitResponseLazyCreator::*)(::StringW)>(&Facebook::WitAi::Lib::WitResponseLazyCreator::ToString)> {
  static const MethodInfo* get() {
    static auto* aPrefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Lib::WitResponseLazyCreator*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aPrefix});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Facebook::WitAi::Lib::WitResponseLazyCreator::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
