// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DG.Tweening.Plugins.Core.ABSTweenPlugin`3
#include "DG/Tweening/Plugins/Core/ABSTweenPlugin_3.hpp"
// Including type: DG.Tweening.Color2
#include "DG/Tweening/Color2.hpp"
// Including type: DG.Tweening.Plugins.Options.ColorOptions
#include "DG/Tweening/Plugins/Options/ColorOptions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening::Core
namespace DG::Tweening::Core {
  // Forward declaring type: TweenerCore`3<T1, T2, TPlugOptions>
  template<typename T1, typename T2, typename TPlugOptions>
  class TweenerCore_3;
  // Forward declaring type: DOGetter`1<T>
  template<typename T>
  class DOGetter_1;
  // Forward declaring type: DOSetter`1<T>
  template<typename T>
  class DOSetter_1;
}
// Forward declaring namespace: DG::Tweening
namespace DG::Tweening {
  // Forward declaring type: Tween
  class Tween;
}
// Forward declaring namespace: DG::Tweening::Core::Enums
namespace DG::Tweening::Core::Enums {
  // Skipping declaration: UpdateNotice because it is already included!
}
// Completed forward declares
// Type namespace: DG.Tweening.Plugins
namespace DG::Tweening::Plugins {
  // Forward declaring type: Color2Plugin
  class Color2Plugin;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::Plugins::Color2Plugin);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Color2Plugin*, "DG.Tweening.Plugins", "Color2Plugin");
// Type namespace: DG.Tweening.Plugins
namespace DG::Tweening::Plugins {
  // WARNING Size may be invalid!
  // Autogenerated type: DG.Tweening.Plugins.Color2Plugin
  // [TokenAttribute] Offset: FFFFFFFF
  class Color2Plugin : public ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions> {
    public:
    // public System.Void Reset(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions> t)
    // Offset: 0x1091ADC
    void Reset(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>* t);
    // public System.Void SetFrom(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions> t, System.Boolean isRelative)
    // Offset: 0x1091AE0
    void SetFrom(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>* t, bool isRelative);
    // public System.Void SetFrom(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions> t, DG.Tweening.Color2 fromValue, System.Boolean setImmediately)
    // Offset: 0x1091D18
    void SetFrom(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>* t, ::DG::Tweening::Color2 fromValue, bool setImmediately);
    // public DG.Tweening.Color2 ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions> t, DG.Tweening.Color2 value)
    // Offset: 0x1091E80
    ::DG::Tweening::Color2 ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>* t, ::DG::Tweening::Color2 value);
    // public System.Void SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions> t)
    // Offset: 0x1091E8C
    void SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>* t);
    // public System.Void SetChangeValue(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions> t)
    // Offset: 0x1091EF8
    void SetChangeValue(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>* t);
    // public System.Single GetSpeedBasedDuration(DG.Tweening.Plugins.Options.ColorOptions options, System.Single unitsXSecond, DG.Tweening.Color2 changeValue)
    // Offset: 0x1091F70
    float GetSpeedBasedDuration(::DG::Tweening::Plugins::Options::ColorOptions options, float unitsXSecond, ::DG::Tweening::Color2 changeValue);
    // public System.Void EvaluateAndApply(DG.Tweening.Plugins.Options.ColorOptions options, DG.Tweening.Tween t, System.Boolean isRelative, DG.Tweening.Core.DOGetter`1<DG.Tweening.Color2> getter, DG.Tweening.Core.DOSetter`1<DG.Tweening.Color2> setter, System.Single elapsed, DG.Tweening.Color2 startValue, DG.Tweening.Color2 changeValue, System.Single duration, System.Boolean usingInversePosition, DG.Tweening.Core.Enums.UpdateNotice updateNotice)
    // Offset: 0x1091F7C
    void EvaluateAndApply(::DG::Tweening::Plugins::Options::ColorOptions options, ::DG::Tweening::Tween* t, bool isRelative, ::DG::Tweening::Core::DOGetter_1<::DG::Tweening::Color2>* getter, ::DG::Tweening::Core::DOSetter_1<::DG::Tweening::Color2>* setter, float elapsed, ::DG::Tweening::Color2 startValue, ::DG::Tweening::Color2 changeValue, float duration, bool usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice updateNotice);
    // public System.Void .ctor()
    // Offset: 0x1092F10
    // Implemented from: DG.Tweening.Plugins.Core.ABSTweenPlugin`3
    // Base method: System.Void ABSTweenPlugin_3::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Color2Plugin* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::Plugins::Color2Plugin::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Color2Plugin*, creationType>()));
    }
  }; // DG.Tweening.Plugins.Color2Plugin
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Plugins::Color2Plugin::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Color2Plugin::*)(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>*)>(&DG::Tweening::Plugins::Color2Plugin::Reset)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2"), ::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "ColorOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Color2Plugin*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Color2Plugin::SetFrom
// Il2CppName: SetFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Color2Plugin::*)(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>*, bool)>(&DG::Tweening::Plugins::Color2Plugin::SetFrom)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2"), ::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "ColorOptions")})->byval_arg;
    static auto* isRelative = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Color2Plugin*), "SetFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, isRelative});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Color2Plugin::SetFrom
// Il2CppName: SetFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Color2Plugin::*)(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>*, ::DG::Tweening::Color2, bool)>(&DG::Tweening::Plugins::Color2Plugin::SetFrom)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2"), ::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "ColorOptions")})->byval_arg;
    static auto* fromValue = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2")->byval_arg;
    static auto* setImmediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Color2Plugin*), "SetFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, fromValue, setImmediately});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Color2Plugin::ConvertToStartValue
// Il2CppName: ConvertToStartValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DG::Tweening::Color2 (DG::Tweening::Plugins::Color2Plugin::*)(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>*, ::DG::Tweening::Color2)>(&DG::Tweening::Plugins::Color2Plugin::ConvertToStartValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2"), ::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "ColorOptions")})->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Color2Plugin*), "ConvertToStartValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, value});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Color2Plugin::SetRelativeEndValue
// Il2CppName: SetRelativeEndValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Color2Plugin::*)(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>*)>(&DG::Tweening::Plugins::Color2Plugin::SetRelativeEndValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2"), ::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "ColorOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Color2Plugin*), "SetRelativeEndValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Color2Plugin::SetChangeValue
// Il2CppName: SetChangeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Color2Plugin::*)(::DG::Tweening::Core::TweenerCore_3<::DG::Tweening::Color2, ::DG::Tweening::Color2, ::DG::Tweening::Plugins::Options::ColorOptions>*)>(&DG::Tweening::Plugins::Color2Plugin::SetChangeValue)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "TweenerCore`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2"), ::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2"), ::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "ColorOptions")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Color2Plugin*), "SetChangeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Color2Plugin::GetSpeedBasedDuration
// Il2CppName: GetSpeedBasedDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (DG::Tweening::Plugins::Color2Plugin::*)(::DG::Tweening::Plugins::Options::ColorOptions, float, ::DG::Tweening::Color2)>(&DG::Tweening::Plugins::Color2Plugin::GetSpeedBasedDuration)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "ColorOptions")->byval_arg;
    static auto* unitsXSecond = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* changeValue = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Color2Plugin*), "GetSpeedBasedDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options, unitsXSecond, changeValue});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Color2Plugin::EvaluateAndApply
// Il2CppName: EvaluateAndApply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DG::Tweening::Plugins::Color2Plugin::*)(::DG::Tweening::Plugins::Options::ColorOptions, ::DG::Tweening::Tween*, bool, ::DG::Tweening::Core::DOGetter_1<::DG::Tweening::Color2>*, ::DG::Tweening::Core::DOSetter_1<::DG::Tweening::Color2>*, float, ::DG::Tweening::Color2, ::DG::Tweening::Color2, float, bool, ::DG::Tweening::Core::Enums::UpdateNotice)>(&DG::Tweening::Plugins::Color2Plugin::EvaluateAndApply)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("DG.Tweening.Plugins.Options", "ColorOptions")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Tween")->byval_arg;
    static auto* isRelative = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* getter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "DOGetter`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2")})->byval_arg;
    static auto* setter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("DG.Tweening.Core", "DOSetter`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2")})->byval_arg;
    static auto* elapsed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* startValue = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2")->byval_arg;
    static auto* changeValue = &::il2cpp_utils::GetClassFromName("DG.Tweening", "Color2")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* usingInversePosition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* updateNotice = &::il2cpp_utils::GetClassFromName("DG.Tweening.Core.Enums", "UpdateNotice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Color2Plugin*), "EvaluateAndApply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice});
  }
};
// Writing MetadataGetter for method: DG::Tweening::Plugins::Color2Plugin::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
