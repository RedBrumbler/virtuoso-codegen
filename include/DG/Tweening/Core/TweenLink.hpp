// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.LinkBehaviour
#include "DG/Tweening/LinkBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: DG.Tweening.Core
namespace DG::Tweening::Core {
  // Forward declaring type: TweenLink
  class TweenLink;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::Core::TweenLink);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::TweenLink*, "DG.Tweening.Core", "TweenLink");
// Type namespace: DG.Tweening.Core
namespace DG::Tweening::Core {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.Core.TweenLink
  // [TokenAttribute] Offset: FFFFFFFF
  class TweenLink : public ::Il2CppObject {
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
    // public readonly UnityEngine.GameObject target
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public readonly DG.Tweening.LinkBehaviour behaviour
    // Size: 0x4
    // Offset: 0x18
    ::DG::Tweening::LinkBehaviour behaviour;
    // Field size check
    static_assert(sizeof(::DG::Tweening::LinkBehaviour) == 0x4);
    // public System.Boolean lastSeenActive
    // Size: 0x1
    // Offset: 0x1C
    bool lastSeenActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly UnityEngine.GameObject target
    ::UnityEngine::GameObject*& dyn_target();
    // Get instance field reference: public readonly DG.Tweening.LinkBehaviour behaviour
    ::DG::Tweening::LinkBehaviour& dyn_behaviour();
    // Get instance field reference: public System.Boolean lastSeenActive
    bool& dyn_lastSeenActive();
    // public System.Void .ctor(UnityEngine.GameObject target, DG.Tweening.LinkBehaviour behaviour)
    // Offset: 0x103AEBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TweenLink* New_ctor(::UnityEngine::GameObject* target, ::DG::Tweening::LinkBehaviour behaviour) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::Core::TweenLink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TweenLink*, creationType>(target, behaviour)));
    }
  }; // DG.Tweening.Core.TweenLink
  #pragma pack(pop)
  static check_size<sizeof(TweenLink), 28 + sizeof(bool)> __DG_Tweening_Core_TweenLinkSizeCheck;
  static_assert(sizeof(TweenLink) == 0x1D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Core::TweenLink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
