// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.Core.DOTweenComponent
#include "DG/Tweening/Core/DOTweenComponent.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening
namespace DG::Tweening {
  // Forward declaring type: Tween
  class Tween;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19*, "DG.Tweening.Core", "DOTweenComponent/<WaitForPosition>d__19");
// Type namespace: DG.Tweening.Core
namespace DG::Tweening::Core {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.Core.DOTweenComponent/DG.Tweening.Core.<WaitForPosition>d__19
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DOTweenComponent::$WaitForPosition$d__19 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public DG.Tweening.Tween t
    // Size: 0x8
    // Offset: 0x20
    ::DG::Tweening::Tween* t;
    // Field size check
    static_assert(sizeof(::DG::Tweening::Tween*) == 0x8);
    // public System.Single position
    // Size: 0x4
    // Offset: 0x28
    float position;
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
    // Get instance field reference: public DG.Tweening.Tween t
    ::DG::Tweening::Tween*& dyn_t();
    // Get instance field reference: public System.Single position
    float& dyn_position();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x126AE60
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x126AEA8
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x126ADC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DOTweenComponent::$WaitForPosition$d__19* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DOTweenComponent::$WaitForPosition$d__19*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x126ADF0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x126ADF4
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x126AE68
    void System_Collections_IEnumerator_Reset();
  }; // DG.Tweening.Core.DOTweenComponent/DG.Tweening.Core.<WaitForPosition>d__19
  #pragma pack(pop)
  static check_size<sizeof(DOTweenComponent::$WaitForPosition$d__19), 40 + sizeof(float)> __DG_Tweening_Core_DOTweenComponent_$WaitForPosition$d__19SizeCheck;
  static_assert(sizeof(DOTweenComponent::$WaitForPosition$d__19) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19::*)()>(&DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19::*)()>(&DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19::*)()>(&DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19::*)()>(&DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19::*)()>(&DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Core::DOTweenComponent::$WaitForPosition$d__19*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};