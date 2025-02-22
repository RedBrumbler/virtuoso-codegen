// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Voice::Demo::UIShapesDemo
namespace Oculus::Voice::Demo::UIShapesDemo {
  // Skipping declaration: Step because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Completed forward declares
// Type namespace: Oculus.Voice.Demo.UIShapesDemo
namespace Oculus::Voice::Demo::UIShapesDemo {
  // Forward declaring type: Instructions
  class Instructions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::Demo::UIShapesDemo::Instructions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Demo::UIShapesDemo::Instructions*, "Oculus.Voice.Demo.UIShapesDemo", "Instructions");
// Type namespace: Oculus.Voice.Demo.UIShapesDemo
namespace Oculus::Voice::Demo::UIShapesDemo {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Voice.Demo.UIShapesDemo.Instructions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class Instructions : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step
    struct Step;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step
    // [TokenAttribute] Offset: FFFFFFFF
    struct Step/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Step
      constexpr Step(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step SetupWit
      static constexpr const int SetupWit = 0;
      // Get static field: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step SetupWit
      static ::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step _get_SetupWit();
      // Set static field: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step SetupWit
      static void _set_SetupWit(::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step value);
      // static field const value: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step MissingServerToken
      static constexpr const int MissingServerToken = 1;
      // Get static field: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step MissingServerToken
      static ::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step _get_MissingServerToken();
      // Set static field: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step MissingServerToken
      static void _set_MissingServerToken(::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step value);
      // static field const value: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step MissingClientToken
      static constexpr const int MissingClientToken = 2;
      // Get static field: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step MissingClientToken
      static ::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step _get_MissingClientToken();
      // Set static field: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step MissingClientToken
      static void _set_MissingClientToken(::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step value);
      // static field const value: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step AddConfig
      static constexpr const int AddConfig = 3;
      // Get static field: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step AddConfig
      static ::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step _get_AddConfig();
      // Set static field: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step AddConfig
      static void _set_AddConfig(::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step value);
      // static field const value: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step AddVoiceExperiences
      static constexpr const int AddVoiceExperiences = 4;
      // Get static field: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step AddVoiceExperiences
      static ::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step _get_AddVoiceExperiences();
      // Set static field: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step AddVoiceExperiences
      static void _set_AddVoiceExperiences(::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step value);
      // static field const value: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step SetConfig
      static constexpr const int SetConfig = 5;
      // Get static field: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step SetConfig
      static ::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step _get_SetConfig();
      // Set static field: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step SetConfig
      static void _set_SetConfig(::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step value);
      // static field const value: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step Ready
      static constexpr const int Ready = 6;
      // Get static field: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step Ready
      static ::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step _get_Ready();
      // Set static field: static public Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step Ready
      static void _set_Ready(::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step
    #pragma pack(pop)
    static check_size<sizeof(Instructions::Step), 0 + sizeof(int)> __Oculus_Voice_Demo_UIShapesDemo_Instructions_StepSizeCheck;
    static_assert(sizeof(Instructions::Step) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.UI.Text instructionText
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Text* instructionText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step currentStep
    // Size: 0x4
    // Offset: 0x20
    ::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step currentStep;
    // Field size check
    static_assert(sizeof(::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private readonly System.String[] steps
    static ::ArrayW<::StringW> _get_steps();
    // Set static field: static private readonly System.String[] steps
    static void _set_steps(::ArrayW<::StringW> value);
    // Get instance field reference: private UnityEngine.UI.Text instructionText
    ::UnityEngine::UI::Text*& dyn_instructionText();
    // Get instance field reference: private Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step currentStep
    ::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step& dyn_currentStep();
    // Oculus.Voice.Demo.UIShapesDemo.Instructions/Oculus.Voice.Demo.UIShapesDemo.Step get_CurrentStep()
    // Offset: 0x13833C0
    ::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step get_CurrentStep();
    // System.String get_CurrentStepText()
    // Offset: 0x13833C8
    ::StringW get_CurrentStepText();
    // private System.Void OnValidate()
    // Offset: 0x138345C
    void OnValidate();
    // private System.Void OnEnable()
    // Offset: 0x1383464
    void OnEnable();
    // private System.Void Update()
    // Offset: 0x1383468
    void Update();
    // private System.Void UpdateStep()
    // Offset: 0x1383460
    void UpdateStep();
    // public System.Void .ctor()
    // Offset: 0x138346C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Instructions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Demo::UIShapesDemo::Instructions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Instructions*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x138347C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // Oculus.Voice.Demo.UIShapesDemo.Instructions
  #pragma pack(pop)
  static check_size<sizeof(Instructions), 32 + sizeof(::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step)> __Oculus_Voice_Demo_UIShapesDemo_InstructionsSizeCheck;
  static_assert(sizeof(Instructions) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step, "Oculus.Voice.Demo.UIShapesDemo", "Instructions/Step");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::Instructions::get_CurrentStep
// Il2CppName: get_CurrentStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Voice::Demo::UIShapesDemo::Instructions::Step (Oculus::Voice::Demo::UIShapesDemo::Instructions::*)()>(&Oculus::Voice::Demo::UIShapesDemo::Instructions::get_CurrentStep)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::Instructions*), "get_CurrentStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::Instructions::get_CurrentStepText
// Il2CppName: get_CurrentStepText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Oculus::Voice::Demo::UIShapesDemo::Instructions::*)()>(&Oculus::Voice::Demo::UIShapesDemo::Instructions::get_CurrentStepText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::Instructions*), "get_CurrentStepText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::Instructions::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::UIShapesDemo::Instructions::*)()>(&Oculus::Voice::Demo::UIShapesDemo::Instructions::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::Instructions*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::Instructions::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::UIShapesDemo::Instructions::*)()>(&Oculus::Voice::Demo::UIShapesDemo::Instructions::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::Instructions*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::Instructions::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::UIShapesDemo::Instructions::*)()>(&Oculus::Voice::Demo::UIShapesDemo::Instructions::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::Instructions*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::Instructions::UpdateStep
// Il2CppName: UpdateStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Voice::Demo::UIShapesDemo::Instructions::*)()>(&Oculus::Voice::Demo::UIShapesDemo::Instructions::UpdateStep)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::Instructions*), "UpdateStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::Instructions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Voice::Demo::UIShapesDemo::Instructions::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Voice::Demo::UIShapesDemo::Instructions::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Demo::UIShapesDemo::Instructions*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
