// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: Header
  class Header;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::Header);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::Header*, "System.Runtime.Remoting.Messaging", "Header");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.Header
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57C448
  class Header : public ::Il2CppObject {
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
    // public System.String HeaderNamespace
    // Size: 0x8
    // Offset: 0x10
    ::StringW HeaderNamespace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean MustUnderstand
    // Size: 0x1
    // Offset: 0x18
    bool MustUnderstand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: MustUnderstand and: Name
    char __padding1[0x7] = {};
    // public System.String Name
    // Size: 0x8
    // Offset: 0x20
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Object Value
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* Value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: public System.String HeaderNamespace
    ::StringW& dyn_HeaderNamespace();
    // Get instance field reference: public System.Boolean MustUnderstand
    bool& dyn_MustUnderstand();
    // Get instance field reference: public System.String Name
    ::StringW& dyn_Name();
    // Get instance field reference: public System.Object Value
    ::Il2CppObject*& dyn_Value();
  }; // System.Runtime.Remoting.Messaging.Header
  #pragma pack(pop)
  static check_size<sizeof(Header), 40 + sizeof(::Il2CppObject*)> __System_Runtime_Remoting_Messaging_HeaderSizeCheck;
  static_assert(sizeof(Header) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
