// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Facebook.WitAi.Wit
#include "Facebook/WitAi/Wit.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi
namespace Facebook::WitAi {
  // Forward declaring type: WitRequest
  class WitRequest;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Wit::$$c__DisplayClass55_0);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Wit::$$c__DisplayClass55_0*, "Facebook.WitAi", "Wit/<>c__DisplayClass55_0");
// Type namespace: Facebook.WitAi
namespace Facebook::WitAi {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Wit/Facebook.WitAi.<>c__DisplayClass55_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Wit::$$c__DisplayClass55_0 : public ::Il2CppObject {
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
    // public Facebook.WitAi.Wit <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::Facebook::WitAi::Wit* $$4__this;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Wit*) == 0x8);
    // public Facebook.WitAi.WitRequest request
    // Size: 0x8
    // Offset: 0x18
    ::Facebook::WitAi::WitRequest* request;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::WitRequest*) == 0x8);
    public:
    // Get instance field reference: public Facebook.WitAi.Wit <>4__this
    ::Facebook::WitAi::Wit*& dyn_$$4__this();
    // Get instance field reference: public Facebook.WitAi.WitRequest request
    ::Facebook::WitAi::WitRequest*& dyn_request();
    // System.Void <QueueResult>b__0()
    // Offset: 0x11071B8
    void $QueueResult$b__0();
    // public System.Void .ctor()
    // Offset: 0x10FD45C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Wit::$$c__DisplayClass55_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Wit::$$c__DisplayClass55_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Wit::$$c__DisplayClass55_0*, creationType>()));
    }
  }; // Facebook.WitAi.Wit/Facebook.WitAi.<>c__DisplayClass55_0
  #pragma pack(pop)
  static check_size<sizeof(Wit::$$c__DisplayClass55_0), 24 + sizeof(::Facebook::WitAi::WitRequest*)> __Facebook_WitAi_Wit_$$c__DisplayClass55_0SizeCheck;
  static_assert(sizeof(Wit::$$c__DisplayClass55_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Wit::$$c__DisplayClass55_0::$QueueResult$b__0
// Il2CppName: <QueueResult>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::$$c__DisplayClass55_0::*)()>(&Facebook::WitAi::Wit::$$c__DisplayClass55_0::$QueueResult$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit::$$c__DisplayClass55_0*), "<QueueResult>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::$$c__DisplayClass55_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
