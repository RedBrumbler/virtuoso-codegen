// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: TutorialVisualBlinking
  class TutorialVisualBlinking;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TutorialVisualBlinking);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TutorialVisualBlinking*, "VROSC", "TutorialVisualBlinking");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x84
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TutorialVisualBlinking
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialVisualBlinking : public ::Il2CppObject {
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
    // private System.Boolean <Active>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool Active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Active and: onColor
    char __padding0[0x3] = {};
    // private UnityEngine.Color _onColor
    // Size: 0x10
    // Offset: 0x14
    ::UnityEngine::Color onColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _offColor
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Color offColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean _useNormalColorAsOffColor
    // Size: 0x1
    // Offset: 0x34
    bool useNormalColorAsOffColor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useNormalColorAsOffColor and: intensity
    char __padding3[0x3] = {};
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x38
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: intensity and: getNormalColor
    char __padding4[0x4] = {};
    // private System.Func`1<UnityEngine.Color> _getNormalColor
    // Size: 0x8
    // Offset: 0x40
    ::System::Func_1<::UnityEngine::Color>* getNormalColor;
    // Field size check
    static_assert(sizeof(::System::Func_1<::UnityEngine::Color>*) == 0x8);
    // private System.Func`1<UnityEngine.Color> _getCurrentColor
    // Size: 0x8
    // Offset: 0x48
    ::System::Func_1<::UnityEngine::Color>* getCurrentColor;
    // Field size check
    static_assert(sizeof(::System::Func_1<::UnityEngine::Color>*) == 0x8);
    // private UnityEngine.Color _startColor
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color startColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single _startTime
    // Size: 0x4
    // Offset: 0x60
    float startTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _peak
    // Size: 0x4
    // Offset: 0x64
    float peak;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _hasPeaked
    // Size: 0x1
    // Offset: 0x68
    bool hasPeaked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _stopping
    // Size: 0x1
    // Offset: 0x69
    bool stopping;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: stopping and: stoppingBeginTime
    char __padding11[0x2] = {};
    // private System.Single _stoppingBeginTime
    // Size: 0x4
    // Offset: 0x6C
    float stoppingBeginTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _stoppingBeginColor
    // Size: 0x10
    // Offset: 0x70
    ::UnityEngine::Color stoppingBeginColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single _stoppingEndTime
    // Size: 0x4
    // Offset: 0x80
    float stoppingEndTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Boolean <Active>k__BackingField
    bool& dyn_$Active$k__BackingField();
    // Get instance field reference: private UnityEngine.Color _onColor
    ::UnityEngine::Color& dyn__onColor();
    // Get instance field reference: private UnityEngine.Color _offColor
    ::UnityEngine::Color& dyn__offColor();
    // Get instance field reference: private System.Boolean _useNormalColorAsOffColor
    bool& dyn__useNormalColorAsOffColor();
    // Get instance field reference: private System.Single _intensity
    float& dyn__intensity();
    // Get instance field reference: private System.Func`1<UnityEngine.Color> _getNormalColor
    ::System::Func_1<::UnityEngine::Color>*& dyn__getNormalColor();
    // Get instance field reference: private System.Func`1<UnityEngine.Color> _getCurrentColor
    ::System::Func_1<::UnityEngine::Color>*& dyn__getCurrentColor();
    // Get instance field reference: private UnityEngine.Color _startColor
    ::UnityEngine::Color& dyn__startColor();
    // Get instance field reference: private System.Single _startTime
    float& dyn__startTime();
    // Get instance field reference: private System.Single _peak
    float& dyn__peak();
    // Get instance field reference: private System.Boolean _hasPeaked
    bool& dyn__hasPeaked();
    // Get instance field reference: private System.Boolean _stopping
    bool& dyn__stopping();
    // Get instance field reference: private System.Single _stoppingBeginTime
    float& dyn__stoppingBeginTime();
    // Get instance field reference: private UnityEngine.Color _stoppingBeginColor
    ::UnityEngine::Color& dyn__stoppingBeginColor();
    // Get instance field reference: private System.Single _stoppingEndTime
    float& dyn__stoppingEndTime();
    // public System.Boolean get_Active()
    // Offset: 0x140A690
    bool get_Active();
    // private System.Void set_Active(System.Boolean value)
    // Offset: 0x140A684
    void set_Active(bool value);
    // public System.Void Setup(System.Func`1<UnityEngine.Color> getNormalColor, System.Func`1<UnityEngine.Color> getCurrentColor)
    // Offset: 0x1406C28
    void Setup(::System::Func_1<::UnityEngine::Color>* getNormalColor, ::System::Func_1<::UnityEngine::Color>* getCurrentColor);
    // public System.Void Start(UnityEngine.Color onColor, System.Single intensity)
    // Offset: 0x1406D44
    void Start(::UnityEngine::Color onColor, float intensity);
    // public System.Void Start(UnityEngine.Color onColor, UnityEngine.Color offColor)
    // Offset: 0x140A71C
    void Start(::UnityEngine::Color onColor, ::UnityEngine::Color offColor);
    // private System.Void SharedStart()
    // Offset: 0x140A698
    void SharedStart();
    // public System.Void Stop(System.Single fadeOverSeconds)
    // Offset: 0x1406D78
    void Stop(float fadeOverSeconds);
    // public UnityEngine.Color GetColor()
    // Offset: 0x1406CE0
    ::UnityEngine::Color GetColor();
    // private UnityEngine.Color SetToBeginningColor()
    // Offset: 0x140A844
    ::UnityEngine::Color SetToBeginningColor();
    // private UnityEngine.Color SetToBlinkingColor()
    // Offset: 0x140A93C
    ::UnityEngine::Color SetToBlinkingColor();
    // private UnityEngine.Color SetToStoppingColor()
    // Offset: 0x140A734
    ::UnityEngine::Color SetToStoppingColor();
    // public System.Void .ctor()
    // Offset: 0x1406E6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialVisualBlinking* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TutorialVisualBlinking::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialVisualBlinking*, creationType>()));
    }
  }; // VROSC.TutorialVisualBlinking
  #pragma pack(pop)
  static check_size<sizeof(TutorialVisualBlinking), 128 + sizeof(float)> __VROSC_TutorialVisualBlinkingSizeCheck;
  static_assert(sizeof(TutorialVisualBlinking) == 0x84);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TutorialVisualBlinking::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::TutorialVisualBlinking::*)()>(&VROSC::TutorialVisualBlinking::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialVisualBlinking*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialVisualBlinking::set_Active
// Il2CppName: set_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialVisualBlinking::*)(bool)>(&VROSC::TutorialVisualBlinking::set_Active)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialVisualBlinking*), "set_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialVisualBlinking::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialVisualBlinking::*)(::System::Func_1<::UnityEngine::Color>*, ::System::Func_1<::UnityEngine::Color>*)>(&VROSC::TutorialVisualBlinking::Setup)> {
  static const MethodInfo* get() {
    static auto* getNormalColor = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->byval_arg;
    static auto* getCurrentColor = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialVisualBlinking*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{getNormalColor, getCurrentColor});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialVisualBlinking::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialVisualBlinking::*)(::UnityEngine::Color, float)>(&VROSC::TutorialVisualBlinking::Start)> {
  static const MethodInfo* get() {
    static auto* onColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* intensity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialVisualBlinking*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onColor, intensity});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialVisualBlinking::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialVisualBlinking::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&VROSC::TutorialVisualBlinking::Start)> {
  static const MethodInfo* get() {
    static auto* onColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* offColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialVisualBlinking*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onColor, offColor});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialVisualBlinking::SharedStart
// Il2CppName: SharedStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialVisualBlinking::*)()>(&VROSC::TutorialVisualBlinking::SharedStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialVisualBlinking*), "SharedStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialVisualBlinking::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TutorialVisualBlinking::*)(float)>(&VROSC::TutorialVisualBlinking::Stop)> {
  static const MethodInfo* get() {
    static auto* fadeOverSeconds = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialVisualBlinking*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fadeOverSeconds});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialVisualBlinking::GetColor
// Il2CppName: GetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::TutorialVisualBlinking::*)()>(&VROSC::TutorialVisualBlinking::GetColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialVisualBlinking*), "GetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialVisualBlinking::SetToBeginningColor
// Il2CppName: SetToBeginningColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::TutorialVisualBlinking::*)()>(&VROSC::TutorialVisualBlinking::SetToBeginningColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialVisualBlinking*), "SetToBeginningColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialVisualBlinking::SetToBlinkingColor
// Il2CppName: SetToBlinkingColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::TutorialVisualBlinking::*)()>(&VROSC::TutorialVisualBlinking::SetToBlinkingColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialVisualBlinking*), "SetToBlinkingColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialVisualBlinking::SetToStoppingColor
// Il2CppName: SetToStoppingColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (VROSC::TutorialVisualBlinking::*)()>(&VROSC::TutorialVisualBlinking::SetToStoppingColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TutorialVisualBlinking*), "SetToStoppingColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TutorialVisualBlinking::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!