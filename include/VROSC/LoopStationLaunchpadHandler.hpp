// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: LaunchpadSpawner
  class LaunchpadSpawner;
  // Forward declaring type: LoopPlayButton
  class LoopPlayButton;
  // Forward declaring type: LoopStation
  class LoopStation;
  // Forward declaring type: LoopPlaybackConfig
  class LoopPlaybackConfig;
  // Forward declaring type: Launchpad
  class Launchpad;
  // Forward declaring type: PlayButtonLaunchpad
  class PlayButtonLaunchpad;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopStationLaunchpadHandler
  class LoopStationLaunchpadHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopStationLaunchpadHandler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationLaunchpadHandler*, "VROSC", "LoopStationLaunchpadHandler");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopStationLaunchpadHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopStationLaunchpadHandler : public ::UnityEngine::MonoBehaviour {
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
    // private VROSC.LaunchpadSpawner _launchpadSpawner
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::LaunchpadSpawner* launchpadSpawner;
    // Field size check
    static_assert(sizeof(::VROSC::LaunchpadSpawner*) == 0x8);
    // private VROSC.LoopPlayButton _playButton
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::LoopPlayButton* playButton;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlayButton*) == 0x8);
    // private VROSC.LoopStation _loopStation
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::LoopStation* loopStation;
    // Field size check
    static_assert(sizeof(::VROSC::LoopStation*) == 0x8);
    // private System.Boolean _isGroup
    // Size: 0x1
    // Offset: 0x30
    bool isGroup;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isGroup and: config
    char __padding3[0x7] = {};
    // private VROSC.LoopPlaybackConfig _config
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::LoopPlaybackConfig* config;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlaybackConfig*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.LaunchpadSpawner _launchpadSpawner
    ::VROSC::LaunchpadSpawner*& dyn__launchpadSpawner();
    // Get instance field reference: private VROSC.LoopPlayButton _playButton
    ::VROSC::LoopPlayButton*& dyn__playButton();
    // Get instance field reference: private VROSC.LoopStation _loopStation
    ::VROSC::LoopStation*& dyn__loopStation();
    // Get instance field reference: private System.Boolean _isGroup
    bool& dyn__isGroup();
    // Get instance field reference: private VROSC.LoopPlaybackConfig _config
    ::VROSC::LoopPlaybackConfig*& dyn__config();
    // public VROSC.LaunchpadSpawner get_LaunchpadSpawner()
    // Offset: 0x916524
    ::VROSC::LaunchpadSpawner* get_LaunchpadSpawner();
    // private System.Void Awake()
    // Offset: 0x91652C
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x91672C
    void OnDestroy();
    // public System.Void Setup(System.String targetID, System.Boolean isGroup, VROSC.LoopStation loopStation, System.String displayName, VROSC.LoopPlaybackConfig config)
    // Offset: 0x91693C
    void Setup(::StringW targetID, bool isGroup, ::VROSC::LoopStation* loopStation, ::StringW displayName, ::VROSC::LoopPlaybackConfig* config);
    // public System.Void SetName(System.String text)
    // Offset: 0x909534
    void SetName(::StringW text);
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x9092B4
    void SetColor(::UnityEngine::Color color);
    // System.Void LoadLaunchPad(System.String padID, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Vector3 localScale)
    // Offset: 0x909870
    void LoadLaunchPad(::StringW padID, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 localScale);
    // private System.Void LaunchPadDeleted(VROSC.Launchpad launchpad)
    // Offset: 0x9169BC
    void LaunchPadDeleted(::VROSC::Launchpad* launchpad);
    // private System.Void LaunchPadMoved(VROSC.Launchpad launchpad)
    // Offset: 0x9169E8
    void LaunchPadMoved(::VROSC::Launchpad* launchpad);
    // private System.Void LaunchPadCreated(VROSC.Launchpad launchpad)
    // Offset: 0x916AE4
    void LaunchPadCreated(::VROSC::Launchpad* launchpad);
    // private System.Void AssignToPlayButtonLaunchpad(VROSC.PlayButtonLaunchpad launchpad)
    // Offset: 0x916978
    void AssignToPlayButtonLaunchpad(::VROSC::PlayButtonLaunchpad* launchpad);
    // private System.Void LaunchPadHit(VROSC.Launchpad launchpad)
    // Offset: 0x916BA0
    void LaunchPadHit(::VROSC::Launchpad* launchpad);
    // public System.Void .ctor()
    // Offset: 0x916BBC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopStationLaunchpadHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopStationLaunchpadHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopStationLaunchpadHandler*, creationType>()));
    }
  }; // VROSC.LoopStationLaunchpadHandler
  #pragma pack(pop)
  static check_size<sizeof(LoopStationLaunchpadHandler), 56 + sizeof(::VROSC::LoopPlaybackConfig*)> __VROSC_LoopStationLaunchpadHandlerSizeCheck;
  static_assert(sizeof(LoopStationLaunchpadHandler) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopStationLaunchpadHandler::get_LaunchpadSpawner
// Il2CppName: get_LaunchpadSpawner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::LaunchpadSpawner* (VROSC::LoopStationLaunchpadHandler::*)()>(&VROSC::LoopStationLaunchpadHandler::get_LaunchpadSpawner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationLaunchpadHandler*), "get_LaunchpadSpawner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationLaunchpadHandler::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationLaunchpadHandler::*)()>(&VROSC::LoopStationLaunchpadHandler::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationLaunchpadHandler*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationLaunchpadHandler::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationLaunchpadHandler::*)()>(&VROSC::LoopStationLaunchpadHandler::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationLaunchpadHandler*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationLaunchpadHandler::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationLaunchpadHandler::*)(::StringW, bool, ::VROSC::LoopStation*, ::StringW, ::VROSC::LoopPlaybackConfig*)>(&VROSC::LoopStationLaunchpadHandler::Setup)> {
  static const MethodInfo* get() {
    static auto* targetID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isGroup = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* loopStation = &::il2cpp_utils::GetClassFromName("VROSC", "LoopStation")->byval_arg;
    static auto* displayName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* config = &::il2cpp_utils::GetClassFromName("VROSC", "LoopPlaybackConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationLaunchpadHandler*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetID, isGroup, loopStation, displayName, config});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationLaunchpadHandler::SetName
// Il2CppName: SetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationLaunchpadHandler::*)(::StringW)>(&VROSC::LoopStationLaunchpadHandler::SetName)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationLaunchpadHandler*), "SetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationLaunchpadHandler::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationLaunchpadHandler::*)(::UnityEngine::Color)>(&VROSC::LoopStationLaunchpadHandler::SetColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationLaunchpadHandler*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationLaunchpadHandler::LoadLaunchPad
// Il2CppName: LoadLaunchPad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationLaunchpadHandler::*)(::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&VROSC::LoopStationLaunchpadHandler::LoadLaunchPad)> {
  static const MethodInfo* get() {
    static auto* padID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* localScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationLaunchpadHandler*), "LoadLaunchPad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{padID, position, rotation, localScale});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationLaunchpadHandler::LaunchPadDeleted
// Il2CppName: LaunchPadDeleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationLaunchpadHandler::*)(::VROSC::Launchpad*)>(&VROSC::LoopStationLaunchpadHandler::LaunchPadDeleted)> {
  static const MethodInfo* get() {
    static auto* launchpad = &::il2cpp_utils::GetClassFromName("VROSC", "Launchpad")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationLaunchpadHandler*), "LaunchPadDeleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{launchpad});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationLaunchpadHandler::LaunchPadMoved
// Il2CppName: LaunchPadMoved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationLaunchpadHandler::*)(::VROSC::Launchpad*)>(&VROSC::LoopStationLaunchpadHandler::LaunchPadMoved)> {
  static const MethodInfo* get() {
    static auto* launchpad = &::il2cpp_utils::GetClassFromName("VROSC", "Launchpad")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationLaunchpadHandler*), "LaunchPadMoved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{launchpad});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationLaunchpadHandler::LaunchPadCreated
// Il2CppName: LaunchPadCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationLaunchpadHandler::*)(::VROSC::Launchpad*)>(&VROSC::LoopStationLaunchpadHandler::LaunchPadCreated)> {
  static const MethodInfo* get() {
    static auto* launchpad = &::il2cpp_utils::GetClassFromName("VROSC", "Launchpad")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationLaunchpadHandler*), "LaunchPadCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{launchpad});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationLaunchpadHandler::AssignToPlayButtonLaunchpad
// Il2CppName: AssignToPlayButtonLaunchpad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationLaunchpadHandler::*)(::VROSC::PlayButtonLaunchpad*)>(&VROSC::LoopStationLaunchpadHandler::AssignToPlayButtonLaunchpad)> {
  static const MethodInfo* get() {
    static auto* launchpad = &::il2cpp_utils::GetClassFromName("VROSC", "PlayButtonLaunchpad")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationLaunchpadHandler*), "AssignToPlayButtonLaunchpad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{launchpad});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationLaunchpadHandler::LaunchPadHit
// Il2CppName: LaunchPadHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::LoopStationLaunchpadHandler::*)(::VROSC::Launchpad*)>(&VROSC::LoopStationLaunchpadHandler::LaunchPadHit)> {
  static const MethodInfo* get() {
    static auto* launchpad = &::il2cpp_utils::GetClassFromName("VROSC", "Launchpad")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::LoopStationLaunchpadHandler*), "LaunchPadHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{launchpad});
  }
};
// Writing MetadataGetter for method: VROSC::LoopStationLaunchpadHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!