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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Concurrent
namespace System::Collections::Concurrent {
  // Forward declaring type: ConcurrentQueue`1<T>
  template<typename T>
  class ConcurrentQueue_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FixedSizedQueue`1<T>
  template<typename T>
  class FixedSizedQueue_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::FixedSizedQueue_1, "", "FixedSizedQueue`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: FixedSizedQueue`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class FixedSizedQueue_1 : public ::Il2CppObject {
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
    // private System.Collections.Concurrent.ConcurrentQueue`1<T> q
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Concurrent::ConcurrentQueue_1<T>* q;
    // Field size check
    static_assert(sizeof(::System::Collections::Concurrent::ConcurrentQueue_1<T>*) == 0x8);
    // private System.Object lockObject
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* lockObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 <Limit>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    int Limit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Concurrent.ConcurrentQueue`1<T> q
    ::System::Collections::Concurrent::ConcurrentQueue_1<T>*& dyn_q() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FixedSizedQueue_1::dyn_q");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "q"))->offset;
      return *reinterpret_cast<::System::Collections::Concurrent::ConcurrentQueue_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Object lockObject
    ::Il2CppObject*& dyn_lockObject() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FixedSizedQueue_1::dyn_lockObject");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "lockObject"))->offset;
      return *reinterpret_cast<::Il2CppObject**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <Limit>k__BackingField
    int& dyn_$Limit$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FixedSizedQueue_1::dyn_$Limit$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Limit>k__BackingField"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Limit()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Limit() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FixedSizedQueue_1::get_Limit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Limit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Void set_Limit(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Limit(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FixedSizedQueue_1::set_Limit");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Limit", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FixedSizedQueue_1::get_Count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public T Get(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Get(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FixedSizedQueue_1::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public T[] ToArray()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<T> ToArray() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FixedSizedQueue_1::ToArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ToArray", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FixedSizedQueue_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void Enqueue(T obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Enqueue(T obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FixedSizedQueue_1::Enqueue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Enqueue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, obj);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FixedSizedQueue_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FixedSizedQueue_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FixedSizedQueue_1<T>*, creationType>()));
    }
  }; // FixedSizedQueue`1
  // Could not write size check! Type: FixedSizedQueue`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
