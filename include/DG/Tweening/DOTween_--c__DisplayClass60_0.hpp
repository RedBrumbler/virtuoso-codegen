// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.DOTween
#include "DG/Tweening/DOTween.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening::Core
namespace DG::Tweening::Core {
  // Forward declaring type: DOSetter`1<T>
  template<typename T>
  class DOSetter_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::DOTween::$$c__DisplayClass60_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTween::$$c__DisplayClass60_0*, "DG.Tweening", "DOTween/<>c__DisplayClass60_0");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.DOTween/DG.Tweening.<>c__DisplayClass60_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DOTween::$$c__DisplayClass60_0 : public ::Il2CppObject {
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
    // public System.Single v
    // Size: 0x4
    // Offset: 0x10
    float v;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: v and: setter
    char __padding0[0x4] = {};
    // public DG.Tweening.Core.DOSetter`1<System.Single> setter
    // Size: 0x8
    // Offset: 0x18
    ::DG::Tweening::Core::DOSetter_1<float>* setter;
    // Field size check
    static_assert(sizeof(::DG::Tweening::Core::DOSetter_1<float>*) == 0x8);
    public:
    // Get instance field reference: public System.Single v
    float& dyn_v();
    // Get instance field reference: public DG.Tweening.Core.DOSetter`1<System.Single> setter
    ::DG::Tweening::Core::DOSetter_1<float>*& dyn_setter();
    // System.Single <To>b__0()
    // Offset: 0x126AAD8
    float $To$b__0();
    // System.Void <To>b__1(System.Single x)
    // Offset: 0x126AAE0
    void $To$b__1(float x);
    // public System.Void .ctor()
    // Offset: 0x126AAD0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DOTween::$$c__DisplayClass60_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::DOTween::$$c__DisplayClass60_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DOTween::$$c__DisplayClass60_0*, creationType>()));
    }
  }; // DG.Tweening.DOTween/DG.Tweening.<>c__DisplayClass60_0
  #pragma pack(pop)
  static check_size<sizeof(DOTween::$$c__DisplayClass60_0), 24 + sizeof(::DG::Tweening::Core::DOSetter_1<float>*)> __DG_Tweening_DOTween_$$c__DisplayClass60_0SizeCheck;
  static_assert(sizeof(DOTween::$$c__DisplayClass60_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::DOTween::$$c__DisplayClass60_0::$To$b__0
// Il2CppName: <To>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DG::Tweening::DOTween::$$c__DisplayClass60_0::*)()>(&DG::Tweening::DOTween::$$c__DisplayClass60_0::$To$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTween::$$c__DisplayClass60_0*), "<To>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTween::$$c__DisplayClass60_0::$To$b__1
// Il2CppName: <To>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::DOTween::$$c__DisplayClass60_0::*)(float)>(&DG::Tweening::DOTween::$$c__DisplayClass60_0::$To$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTween::$$c__DisplayClass60_0*), "<To>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTween::$$c__DisplayClass60_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!