// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RSG
namespace RSG {
  // Forward declaring type: Tuple`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Tuple_3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RSG::Tuple_3, "RSG", "Tuple`3");
// Type namespace: RSG
namespace RSG {
  // WARNING Size may be invalid!
  // Autogenerated type: RSG.Tuple`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1, typename T2, typename T3>
  class Tuple_3 : public ::Il2CppObject {
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
    // private T1 <Item1>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T1 Item1;
    // private T2 <Item2>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T2 Item2;
    // private T3 <Item3>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T3 Item3;
    public:
    // Autogenerated instance field getter
    // Get instance field: private T1 <Item1>k__BackingField
    T1& dyn_$Item1$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Tuple_3::dyn_$Item1$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Item1>k__BackingField"))->offset;
      return *reinterpret_cast<T1*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private T2 <Item2>k__BackingField
    T2& dyn_$Item2$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Tuple_3::dyn_$Item2$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Item2>k__BackingField"))->offset;
      return *reinterpret_cast<T2*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private T3 <Item3>k__BackingField
    T3& dyn_$Item3$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Tuple_3::dyn_$Item3$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Item3>k__BackingField"))->offset;
      return *reinterpret_cast<T3*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T1 get_Item1()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T1 get_Item1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Tuple_3::get_Item1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T1, false>(this, ___internal__method);
    }
    // private System.Void set_Item1(T1 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item1(T1 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Tuple_3::set_Item1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Item1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public T2 get_Item2()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T2 get_Item2() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Tuple_3::get_Item2");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item2", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T2, false>(this, ___internal__method);
    }
    // private System.Void set_Item2(T2 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item2(T2 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Tuple_3::set_Item2");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Item2", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public T3 get_Item3()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T3 get_Item3() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Tuple_3::get_Item3");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item3", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T3, false>(this, ___internal__method);
    }
    // private System.Void set_Item3(T3 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item3(T3 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Tuple_3::set_Item3");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Item3", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // System.Void .ctor(T1 item1, T2 item2, T3 item3)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tuple_3<T1, T2, T3>* New_ctor(T1 item1, T2 item2, T3 item3) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RSG::Tuple_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tuple_3<T1, T2, T3>*, creationType>(item1, item2, item3)));
    }
  }; // RSG.Tuple`3
  // Could not write size check! Type: RSG.Tuple`3 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"