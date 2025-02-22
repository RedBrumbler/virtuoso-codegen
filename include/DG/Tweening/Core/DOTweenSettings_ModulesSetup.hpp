// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.Core.DOTweenSettings
#include "DG/Tweening/Core/DOTweenSettings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::Core::DOTweenSettings::ModulesSetup);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::DOTweenSettings::ModulesSetup*, "DG.Tweening.Core", "DOTweenSettings/ModulesSetup");
// Type namespace: DG.Tweening.Core
namespace DG::Tweening::Core {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.Core.DOTweenSettings/DG.Tweening.Core.ModulesSetup
  // [TokenAttribute] Offset: FFFFFFFF
  class DOTweenSettings::ModulesSetup : public ::Il2CppObject {
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
    // public System.Boolean showPanel
    // Size: 0x1
    // Offset: 0x10
    bool showPanel;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean audioEnabled
    // Size: 0x1
    // Offset: 0x11
    bool audioEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean physicsEnabled
    // Size: 0x1
    // Offset: 0x12
    bool physicsEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean physics2DEnabled
    // Size: 0x1
    // Offset: 0x13
    bool physics2DEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean spriteEnabled
    // Size: 0x1
    // Offset: 0x14
    bool spriteEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean uiEnabled
    // Size: 0x1
    // Offset: 0x15
    bool uiEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean textMeshProEnabled
    // Size: 0x1
    // Offset: 0x16
    bool textMeshProEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean tk2DEnabled
    // Size: 0x1
    // Offset: 0x17
    bool tk2DEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Boolean showPanel
    bool& dyn_showPanel();
    // Get instance field reference: public System.Boolean audioEnabled
    bool& dyn_audioEnabled();
    // Get instance field reference: public System.Boolean physicsEnabled
    bool& dyn_physicsEnabled();
    // Get instance field reference: public System.Boolean physics2DEnabled
    bool& dyn_physics2DEnabled();
    // Get instance field reference: public System.Boolean spriteEnabled
    bool& dyn_spriteEnabled();
    // Get instance field reference: public System.Boolean uiEnabled
    bool& dyn_uiEnabled();
    // Get instance field reference: public System.Boolean textMeshProEnabled
    bool& dyn_textMeshProEnabled();
    // Get instance field reference: public System.Boolean tk2DEnabled
    bool& dyn_tk2DEnabled();
    // public System.Void .ctor()
    // Offset: 0x126B074
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DOTweenSettings::ModulesSetup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::Core::DOTweenSettings::ModulesSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DOTweenSettings::ModulesSetup*, creationType>()));
    }
  }; // DG.Tweening.Core.DOTweenSettings/DG.Tweening.Core.ModulesSetup
  #pragma pack(pop)
  static check_size<sizeof(DOTweenSettings::ModulesSetup), 23 + sizeof(bool)> __DG_Tweening_Core_DOTweenSettings_ModulesSetupSizeCheck;
  static_assert(sizeof(DOTweenSettings::ModulesSetup) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Core::DOTweenSettings::ModulesSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
