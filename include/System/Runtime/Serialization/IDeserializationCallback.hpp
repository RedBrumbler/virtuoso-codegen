// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: IDeserializationCallback
  class IDeserializationCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::IDeserializationCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::IDeserializationCallback*, "System.Runtime.Serialization", "IDeserializationCallback");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.IDeserializationCallback
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57BA90
  class IDeserializationCallback {
    public:
    // public System.Void OnDeserialization(System.Object sender)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnDeserialization(::Il2CppObject* sender);
  }; // System.Runtime.Serialization.IDeserializationCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::IDeserializationCallback::OnDeserialization
// Il2CppName: OnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::IDeserializationCallback::*)(::Il2CppObject*)>(&System::Runtime::Serialization::IDeserializationCallback::OnDeserialization)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::IDeserializationCallback*), "OnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
