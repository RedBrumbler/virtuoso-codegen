// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.Serialization.StreamingContextStates
#include "System/Runtime/Serialization/StreamingContextStates.hpp"
// Completed includes
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::StreamingContext, "System.Runtime.Serialization", "StreamingContext");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.Serialization.StreamingContext
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57BD34
  struct StreamingContext/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Object m_additionalContext
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* m_additionalContext;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Runtime.Serialization.StreamingContextStates m_state
    // Size: 0x4
    // Offset: 0x8
    ::System::Runtime::Serialization::StreamingContextStates m_state;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::StreamingContextStates) == 0x4);
    public:
    // Creating value type constructor for type: StreamingContext
    constexpr StreamingContext(::Il2CppObject* m_additionalContext_ = {}, ::System::Runtime::Serialization::StreamingContextStates m_state_ = {}) noexcept : m_additionalContext{m_additionalContext_}, m_state{m_state_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.Object m_additionalContext
    ::Il2CppObject*& dyn_m_additionalContext();
    // Get instance field reference: System.Runtime.Serialization.StreamingContextStates m_state
    ::System::Runtime::Serialization::StreamingContextStates& dyn_m_state();
    // public System.Runtime.Serialization.StreamingContextStates get_State()
    // Offset: 0xFF922C
    ::System::Runtime::Serialization::StreamingContextStates get_State();
    // public System.Void .ctor(System.Runtime.Serialization.StreamingContextStates state)
    // Offset: 0xFF9150
    StreamingContext(::System::Runtime::Serialization::StreamingContextStates state);
    // public System.Void .ctor(System.Runtime.Serialization.StreamingContextStates state, System.Object additional)
    // Offset: 0xFF915C
    StreamingContext(::System::Runtime::Serialization::StreamingContextStates state, ::Il2CppObject* additional);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFF9168
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xFF9224
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Runtime.Serialization.StreamingContext
  #pragma pack(pop)
  static check_size<sizeof(StreamingContext), 8 + sizeof(::System::Runtime::Serialization::StreamingContextStates)> __System_Runtime_Serialization_StreamingContextSizeCheck;
  static_assert(sizeof(StreamingContext) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::StreamingContext::get_State
// Il2CppName: get_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::StreamingContextStates (System::Runtime::Serialization::StreamingContext::*)()>(&System::Runtime::Serialization::StreamingContext::get_State)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::StreamingContext), "get_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::StreamingContext::StreamingContext
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::StreamingContext::StreamingContext
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::StreamingContext::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::StreamingContext::*)(::Il2CppObject*)>(&System::Runtime::Serialization::StreamingContext::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::StreamingContext), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::StreamingContext::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Serialization::StreamingContext::*)()>(&System::Runtime::Serialization::StreamingContext::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::StreamingContext), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
