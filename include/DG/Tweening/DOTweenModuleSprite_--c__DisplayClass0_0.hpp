// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.DOTweenModuleSprite
#include "DG/Tweening/DOTweenModuleSprite.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::DOTweenModuleSprite::$$c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::DOTweenModuleSprite::$$c__DisplayClass0_0*, "DG.Tweening", "DOTweenModuleSprite/<>c__DisplayClass0_0");
// Type namespace: DG.Tweening
namespace DG::Tweening {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.DOTweenModuleSprite/DG.Tweening.<>c__DisplayClass0_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DOTweenModuleSprite::$$c__DisplayClass0_0 : public ::Il2CppObject {
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
    // public UnityEngine.SpriteRenderer target
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::SpriteRenderer* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::SpriteRenderer*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::SpriteRenderer*
    constexpr operator ::UnityEngine::SpriteRenderer*() const noexcept {
      return target;
    }
    // Get instance field reference: public UnityEngine.SpriteRenderer target
    ::UnityEngine::SpriteRenderer*& dyn_target();
    // UnityEngine.Color <DOColor>b__0()
    // Offset: 0x1264B8C
    ::UnityEngine::Color $DOColor$b__0();
    // System.Void <DOColor>b__1(UnityEngine.Color x)
    // Offset: 0x1264BA8
    void $DOColor$b__1(::UnityEngine::Color x);
    // public System.Void .ctor()
    // Offset: 0x1264B84
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DOTweenModuleSprite::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::DOTweenModuleSprite::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DOTweenModuleSprite::$$c__DisplayClass0_0*, creationType>()));
    }
  }; // DG.Tweening.DOTweenModuleSprite/DG.Tweening.<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(DOTweenModuleSprite::$$c__DisplayClass0_0), 16 + sizeof(::UnityEngine::SpriteRenderer*)> __DG_Tweening_DOTweenModuleSprite_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(DOTweenModuleSprite::$$c__DisplayClass0_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleSprite::$$c__DisplayClass0_0::$DOColor$b__0
// Il2CppName: <DOColor>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (DG::Tweening::DOTweenModuleSprite::$$c__DisplayClass0_0::*)()>(&DG::Tweening::DOTweenModuleSprite::$$c__DisplayClass0_0::$DOColor$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleSprite::$$c__DisplayClass0_0*), "<DOColor>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleSprite::$$c__DisplayClass0_0::$DOColor$b__1
// Il2CppName: <DOColor>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::DOTweenModuleSprite::$$c__DisplayClass0_0::*)(::UnityEngine::Color)>(&DG::Tweening::DOTweenModuleSprite::$$c__DisplayClass0_0::$DOColor$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::DOTweenModuleSprite::$$c__DisplayClass0_0*), "<DOColor>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: DG::Tweening::DOTweenModuleSprite::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
