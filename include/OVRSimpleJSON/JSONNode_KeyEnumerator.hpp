// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator
#include "OVRSimpleJSON/JSONNode_Enumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONNode::KeyEnumerator, "OVRSimpleJSON", "JSONNode/KeyEnumerator");
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRSimpleJSON.JSONNode/OVRSimpleJSON.KeyEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  struct JSONNode::KeyEnumerator/*, public ::System::ValueType*/ {
    public:
    public:
    // private OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator m_Enumerator
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::OVRSimpleJSON::JSONNode::Enumerator m_Enumerator;
    public:
    // Creating value type constructor for type: KeyEnumerator
    constexpr KeyEnumerator(::OVRSimpleJSON::JSONNode::Enumerator m_Enumerator_ = {}) noexcept : m_Enumerator{m_Enumerator_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::OVRSimpleJSON::JSONNode::Enumerator
    constexpr operator ::OVRSimpleJSON::JSONNode::Enumerator() const noexcept {
      return m_Enumerator;
    }
    // Get instance field reference: private OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator m_Enumerator
    ::OVRSimpleJSON::JSONNode::Enumerator& dyn_m_Enumerator();
    // public System.String get_Current()
    // Offset: 0x734EDC
    ::StringW get_Current();
    // public System.Void .ctor(System.Collections.Generic.List`1/System.Collections.Generic.Enumerator<OVRSimpleJSON.JSONNode> aArrayEnum)
    // Offset: 0x734E30
    KeyEnumerator(typename ::System::Collections::Generic::List_1<::OVRSimpleJSON::JSONNode*>::Enumerator aArrayEnum);
    // public System.Void .ctor(System.Collections.Generic.Dictionary`2/System.Collections.Generic.Enumerator<System.String,OVRSimpleJSON.JSONNode> aDictEnum)
    // Offset: 0x734E78
    KeyEnumerator(typename ::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>::Enumerator aDictEnum);
    // public System.Void .ctor(OVRSimpleJSON.JSONNode/OVRSimpleJSON.Enumerator aEnumerator)
    // Offset: 0x734EC4
    // ABORTED: conflicts with another method.  KeyEnumerator(::OVRSimpleJSON::JSONNode::Enumerator aEnumerator);
    // public System.Boolean MoveNext()
    // Offset: 0x734F1C
    bool MoveNext();
    // public OVRSimpleJSON.JSONNode/OVRSimpleJSON.KeyEnumerator GetEnumerator()
    // Offset: 0x734F20
    ::OVRSimpleJSON::JSONNode::KeyEnumerator GetEnumerator();
  }; // OVRSimpleJSON.JSONNode/OVRSimpleJSON.KeyEnumerator
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::KeyEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OVRSimpleJSON::JSONNode::KeyEnumerator::*)()>(&OVRSimpleJSON::JSONNode::KeyEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::KeyEnumerator), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::KeyEnumerator::KeyEnumerator
// Il2CppName: .ctor
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::KeyEnumerator::KeyEnumerator
// Il2CppName: .ctor
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::KeyEnumerator::KeyEnumerator
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::KeyEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNode::KeyEnumerator::*)()>(&OVRSimpleJSON::JSONNode::KeyEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::KeyEnumerator), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRSimpleJSON::JSONNode::KeyEnumerator::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode::KeyEnumerator (OVRSimpleJSON::JSONNode::KeyEnumerator::*)()>(&OVRSimpleJSON::JSONNode::KeyEnumerator::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRSimpleJSON::JSONNode::KeyEnumerator), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
