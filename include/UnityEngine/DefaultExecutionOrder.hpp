// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: DefaultExecutionOrder
  class DefaultExecutionOrder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::DefaultExecutionOrder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DefaultExecutionOrder*, "UnityEngine", "DefaultExecutionOrder");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.DefaultExecutionOrder
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 567000
  // [AttributeUsageAttribute] Offset: 567000
  class DefaultExecutionOrder : public ::System::Attribute {
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
    // private System.Int32 m_Order
    // Size: 0x4
    // Offset: 0x10
    int m_Order;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Order;
    }
    // Get instance field reference: private System.Int32 m_Order
    int& dyn_m_Order();
    // public System.Int32 get_order()
    // Offset: 0xE31660
    int get_order();
    // public System.Void .ctor(System.Int32 order)
    // Offset: 0xE39FFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultExecutionOrder* New_ctor(int order) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::DefaultExecutionOrder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultExecutionOrder*, creationType>(order)));
    }
  }; // UnityEngine.DefaultExecutionOrder
  #pragma pack(pop)
  static check_size<sizeof(DefaultExecutionOrder), 16 + sizeof(int)> __UnityEngine_DefaultExecutionOrderSizeCheck;
  static_assert(sizeof(DefaultExecutionOrder) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::DefaultExecutionOrder::get_order
// Il2CppName: get_order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::DefaultExecutionOrder::*)()>(&UnityEngine::DefaultExecutionOrder::get_order)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::DefaultExecutionOrder*), "get_order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::DefaultExecutionOrder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
