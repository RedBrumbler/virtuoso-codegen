// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: Comparer
  class Comparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Comparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Comparer*, "System.Net", "Comparer");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Comparer
  // [TokenAttribute] Offset: FFFFFFFF
  class Comparer : public ::Il2CppObject/*, public ::System::Collections::IComparer*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::IComparer
    operator ::System::Collections::IComparer() noexcept {
      return *reinterpret_cast<::System::Collections::IComparer*>(this);
    }
    // private System.Int32 System.Collections.IComparer.Compare(System.Object ol, System.Object or)
    // Offset: 0xE704B0
    int System_Collections_IComparer_Compare(::Il2CppObject* ol, ::Il2CppObject* _or);
    // public System.Void .ctor()
    // Offset: 0xE70590
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Comparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Comparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Comparer*, creationType>()));
    }
  }; // System.Net.Comparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Comparer::System_Collections_IComparer_Compare
// Il2CppName: System.Collections.IComparer.Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Comparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Net::Comparer::System_Collections_IComparer_Compare)> {
  static const MethodInfo* get() {
    static auto* ol = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* _or = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Comparer*), "System.Collections.IComparer.Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ol, _or});
  }
};
// Writing MetadataGetter for method: System::Net::Comparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
