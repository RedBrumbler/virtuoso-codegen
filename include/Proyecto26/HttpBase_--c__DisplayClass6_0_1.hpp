// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Proyecto26.HttpBase
#include "Proyecto26/HttpBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Proyecto26
namespace Proyecto26 {
  // Forward declaring type: RequestHelper
  class RequestHelper;
  // Forward declaring type: RequestException
  class RequestException;
  // Forward declaring type: ResponseHelper
  class ResponseHelper;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Proyecto26::HttpBase::$$c__DisplayClass6_0_1, "Proyecto26", "HttpBase/<>c__DisplayClass6_0`1");
// Type namespace: Proyecto26
namespace Proyecto26 {
  // WARNING Size may be invalid!
  // Autogenerated type: Proyecto26.HttpBase/Proyecto26.<>c__DisplayClass6_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TResponse>
  class HttpBase::$$c__DisplayClass6_0_1 : public ::Il2CppObject {
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
    // public Proyecto26.RequestHelper options
    // Size: 0x8
    // Offset: 0x0
    ::Proyecto26::RequestHelper* options;
    // Field size check
    static_assert(sizeof(::Proyecto26::RequestHelper*) == 0x8);
    // public System.Action`3<Proyecto26.RequestException,Proyecto26.ResponseHelper,TResponse[]> callback
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_3<::Proyecto26::RequestException*, ::Proyecto26::ResponseHelper*, ::ArrayW<TResponse>>* callback;
    // Field size check
    static_assert(sizeof(::System::Action_3<::Proyecto26::RequestException*, ::Proyecto26::ResponseHelper*, ::ArrayW<TResponse>>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public Proyecto26.RequestHelper options
    ::Proyecto26::RequestHelper*& dyn_options() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Proyecto26::HttpBase::$$c__DisplayClass6_0_1::dyn_options");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "options"))->offset;
      return *reinterpret_cast<::Proyecto26::RequestHelper**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`3<Proyecto26.RequestException,Proyecto26.ResponseHelper,TResponse[]> callback
    ::System::Action_3<::Proyecto26::RequestException*, ::Proyecto26::ResponseHelper*, ::ArrayW<TResponse>>*& dyn_callback() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Proyecto26::HttpBase::$$c__DisplayClass6_0_1::dyn_callback");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "callback"))->offset;
      return *reinterpret_cast<::System::Action_3<::Proyecto26::RequestException*, ::Proyecto26::ResponseHelper*, ::ArrayW<TResponse>>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Void <DefaultUnityWebRequest>b__0(Proyecto26.RequestException err, Proyecto26.ResponseHelper res)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $DefaultUnityWebRequest$b__0(::Proyecto26::RequestException* err, ::Proyecto26::ResponseHelper* res) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Proyecto26::HttpBase::$$c__DisplayClass6_0_1::<DefaultUnityWebRequest>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<DefaultUnityWebRequest>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(err), ::il2cpp_utils::ExtractType(res)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, err, res);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpBase::$$c__DisplayClass6_0_1<TResponse>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Proyecto26::HttpBase::$$c__DisplayClass6_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpBase::$$c__DisplayClass6_0_1<TResponse>*, creationType>()));
    }
  }; // Proyecto26.HttpBase/Proyecto26.<>c__DisplayClass6_0`1
  // Could not write size check! Type: Proyecto26.HttpBase/Proyecto26.<>c__DisplayClass6_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
