// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.ShortcutExtensions
#include "DG/Tweening/ShortcutExtensions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::ShortcutExtensions::$$c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::ShortcutExtensions::$$c__DisplayClass25_0*, "DG.Tweening", "ShortcutExtensions/<>c__DisplayClass25_0");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.ShortcutExtensions/DG.Tweening.<>c__DisplayClass25_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ShortcutExtensions::$$c__DisplayClass25_0 : public ::Il2CppObject {
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
    // public UnityEngine.Material target
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Material* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public System.String property
    // Size: 0x8
    // Offset: 0x18
    ::StringW property;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Material target
    ::UnityEngine::Material*& dyn_target();
    // Get instance field reference: public System.String property
    ::StringW& dyn_property();
    // UnityEngine.Vector2 <DOOffset>b__0()
    // Offset: 0x126C52C
    ::UnityEngine::Vector2 $DOOffset$b__0();
    // System.Void <DOOffset>b__1(UnityEngine.Vector2 x)
    // Offset: 0x126C550
    void $DOOffset$b__1(::UnityEngine::Vector2 x);
    // public System.Void .ctor()
    // Offset: 0x126C524
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShortcutExtensions::$$c__DisplayClass25_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::ShortcutExtensions::$$c__DisplayClass25_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShortcutExtensions::$$c__DisplayClass25_0*, creationType>()));
    }
  }; // DG.Tweening.ShortcutExtensions/DG.Tweening.<>c__DisplayClass25_0
  #pragma pack(pop)
  static check_size<sizeof(ShortcutExtensions::$$c__DisplayClass25_0), 24 + sizeof(::StringW)> __DG_Tweening_ShortcutExtensions_$$c__DisplayClass25_0SizeCheck;
  static_assert(sizeof(ShortcutExtensions::$$c__DisplayClass25_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::ShortcutExtensions::$$c__DisplayClass25_0::$DOOffset$b__0
// Il2CppName: <DOOffset>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (DG::Tweening::ShortcutExtensions::$$c__DisplayClass25_0::*)()>(&DG::Tweening::ShortcutExtensions::$$c__DisplayClass25_0::$DOOffset$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::ShortcutExtensions::$$c__DisplayClass25_0*), "<DOOffset>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::ShortcutExtensions::$$c__DisplayClass25_0::$DOOffset$b__1
// Il2CppName: <DOOffset>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::ShortcutExtensions::$$c__DisplayClass25_0::*)(::UnityEngine::Vector2)>(&DG::Tweening::ShortcutExtensions::$$c__DisplayClass25_0::$DOOffset$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::ShortcutExtensions::$$c__DisplayClass25_0*), "<DOOffset>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: DG::Tweening::ShortcutExtensions::$$c__DisplayClass25_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
