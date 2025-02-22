// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UIHelperPositioning
#include "VROSC/UIHelperPositioning.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UIHelperPositioning::$MoveOutObject$d__8);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIHelperPositioning::$MoveOutObject$d__8*, "VROSC", "UIHelperPositioning/<MoveOutObject>d__8");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UIHelperPositioning/VROSC.<MoveOutObject>d__8
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UIHelperPositioning::$MoveOutObject$d__8 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public VROSC.UIHelperPositioning <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UIHelperPositioning* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::UIHelperPositioning*) == 0x8);
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Vector3 size
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 size;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 endPosition
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 endPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single <time>5__2
    // Size: 0x4
    // Offset: 0x48
    float $time$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public VROSC.UIHelperPositioning <>4__this
    ::VROSC::UIHelperPositioning*& dyn_$$4__this();
    // Get instance field reference: public UnityEngine.Transform target
    ::UnityEngine::Transform*& dyn_target();
    // Get instance field reference: public UnityEngine.Vector3 size
    ::UnityEngine::Vector3& dyn_size();
    // Get instance field reference: public UnityEngine.Vector3 endPosition
    ::UnityEngine::Vector3& dyn_endPosition();
    // Get instance field reference: private System.Single <time>5__2
    float& dyn_$time$5__2();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x140E6AC
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x140E6F4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x140E4F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIHelperPositioning::$MoveOutObject$d__8* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UIHelperPositioning::$MoveOutObject$d__8::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIHelperPositioning::$MoveOutObject$d__8*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x140E51C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x140E520
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x140E6B4
    void System_Collections_IEnumerator_Reset();
  }; // VROSC.UIHelperPositioning/VROSC.<MoveOutObject>d__8
  #pragma pack(pop)
  static check_size<sizeof(UIHelperPositioning::$MoveOutObject$d__8), 72 + sizeof(float)> __VROSC_UIHelperPositioning_$MoveOutObject$d__8SizeCheck;
  static_assert(sizeof(UIHelperPositioning::$MoveOutObject$d__8) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UIHelperPositioning::$MoveOutObject$d__8::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (VROSC::UIHelperPositioning::$MoveOutObject$d__8::*)()>(&VROSC::UIHelperPositioning::$MoveOutObject$d__8::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIHelperPositioning::$MoveOutObject$d__8*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIHelperPositioning::$MoveOutObject$d__8::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (VROSC::UIHelperPositioning::$MoveOutObject$d__8::*)()>(&VROSC::UIHelperPositioning::$MoveOutObject$d__8::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIHelperPositioning::$MoveOutObject$d__8*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIHelperPositioning::$MoveOutObject$d__8::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::UIHelperPositioning::$MoveOutObject$d__8::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIHelperPositioning::$MoveOutObject$d__8::*)()>(&VROSC::UIHelperPositioning::$MoveOutObject$d__8::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIHelperPositioning::$MoveOutObject$d__8*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIHelperPositioning::$MoveOutObject$d__8::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UIHelperPositioning::$MoveOutObject$d__8::*)()>(&VROSC::UIHelperPositioning::$MoveOutObject$d__8::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIHelperPositioning::$MoveOutObject$d__8*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIHelperPositioning::$MoveOutObject$d__8::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIHelperPositioning::$MoveOutObject$d__8::*)()>(&VROSC::UIHelperPositioning::$MoveOutObject$d__8::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIHelperPositioning::$MoveOutObject$d__8*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
