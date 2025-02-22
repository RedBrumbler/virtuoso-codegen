// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.UIColorPicker
#include "VROSC/UIColorPicker.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: VROSC.TriggerButton
#include "VROSC/TriggerButton.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: InputDevice
  class InputDevice;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UIColorPicker::$GrabPicker$d__23);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIColorPicker::$GrabPicker$d__23*, "VROSC", "UIColorPicker/<GrabPicker>d__23");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x35
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UIColorPicker/VROSC.<GrabPicker>d__23
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UIColorPicker::$GrabPicker$d__23 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public VROSC.UIColorPicker <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UIColorPicker* $$4__this;
    // Field size check
    static_assert(sizeof(::VROSC::UIColorPicker*) == 0x8);
    // public VROSC.InputDevice device
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::InputDevice* device;
    // Field size check
    static_assert(sizeof(::VROSC::InputDevice*) == 0x8);
    // public VROSC.TriggerButton grabbingButton
    // Size: 0x4
    // Offset: 0x30
    ::VROSC::TriggerButton grabbingButton;
    // Field size check
    static_assert(sizeof(::VROSC::TriggerButton) == 0x4);
    // public System.Boolean pointing
    // Size: 0x1
    // Offset: 0x34
    bool pointing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public VROSC.UIColorPicker <>4__this
    ::VROSC::UIColorPicker*& dyn_$$4__this();
    // Get instance field reference: public VROSC.InputDevice device
    ::VROSC::InputDevice*& dyn_device();
    // Get instance field reference: public VROSC.TriggerButton grabbingButton
    ::VROSC::TriggerButton& dyn_grabbingButton();
    // Get instance field reference: public System.Boolean pointing
    bool& dyn_pointing();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x140DDCC
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x140DE14
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x140DB70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIColorPicker::$GrabPicker$d__23* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UIColorPicker::$GrabPicker$d__23::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIColorPicker::$GrabPicker$d__23*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x140DB9C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x140DBA0
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x140DDD4
    void System_Collections_IEnumerator_Reset();
  }; // VROSC.UIColorPicker/VROSC.<GrabPicker>d__23
  #pragma pack(pop)
  static check_size<sizeof(UIColorPicker::$GrabPicker$d__23), 52 + sizeof(bool)> __VROSC_UIColorPicker_$GrabPicker$d__23SizeCheck;
  static_assert(sizeof(UIColorPicker::$GrabPicker$d__23) == 0x35);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UIColorPicker::$GrabPicker$d__23::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (VROSC::UIColorPicker::$GrabPicker$d__23::*)()>(&VROSC::UIColorPicker::$GrabPicker$d__23::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker::$GrabPicker$d__23*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::$GrabPicker$d__23::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (VROSC::UIColorPicker::$GrabPicker$d__23::*)()>(&VROSC::UIColorPicker::$GrabPicker$d__23::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker::$GrabPicker$d__23*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::$GrabPicker$d__23::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::UIColorPicker::$GrabPicker$d__23::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIColorPicker::$GrabPicker$d__23::*)()>(&VROSC::UIColorPicker::$GrabPicker$d__23::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker::$GrabPicker$d__23*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::$GrabPicker$d__23::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UIColorPicker::$GrabPicker$d__23::*)()>(&VROSC::UIColorPicker::$GrabPicker$d__23::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker::$GrabPicker$d__23*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIColorPicker::$GrabPicker$d__23::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIColorPicker::$GrabPicker$d__23::*)()>(&VROSC::UIColorPicker::$GrabPicker$d__23::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIColorPicker::$GrabPicker$d__23*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
