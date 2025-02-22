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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: VRPlayer
  class VRPlayer;
  // Forward declaring type: HmdProfile
  class HmdProfile;
  // Skipping declaration: Platform because it is already included!
}
// Forward declaring namespace: LIV::SDK::Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: LIV
  class LIV;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
  // Forward declaring type: Message
  class Message;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: User
  class User;
  // Forward declaring type: OrgScopedID
  class OrgScopedID;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Component because it is already included!
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: PlatformSelector
  class PlatformSelector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::PlatformSelector);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlatformSelector*, "VROSC", "PlatformSelector");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.PlatformSelector
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformSelector : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::PlatformSelector::Platform
    struct Platform;
    // Nested type: ::VROSC::PlatformSelector::DebugSettings
    class DebugSettings;
    // Nested type: ::VROSC::PlatformSelector::$Setup$d__36
    struct $Setup$d__36;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.PlatformSelector/VROSC.Platform
    // [TokenAttribute] Offset: FFFFFFFF
    struct Platform/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Platform
      constexpr Platform(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.PlatformSelector/VROSC.Platform None
      static constexpr const int None = 0;
      // Get static field: static public VROSC.PlatformSelector/VROSC.Platform None
      static ::VROSC::PlatformSelector::Platform _get_None();
      // Set static field: static public VROSC.PlatformSelector/VROSC.Platform None
      static void _set_None(::VROSC::PlatformSelector::Platform value);
      // static field const value: static public VROSC.PlatformSelector/VROSC.Platform Oculus
      static constexpr const int Oculus = 1;
      // Get static field: static public VROSC.PlatformSelector/VROSC.Platform Oculus
      static ::VROSC::PlatformSelector::Platform _get_Oculus();
      // Set static field: static public VROSC.PlatformSelector/VROSC.Platform Oculus
      static void _set_Oculus(::VROSC::PlatformSelector::Platform value);
      // static field const value: static public VROSC.PlatformSelector/VROSC.Platform Steam
      static constexpr const int Steam = 2;
      // Get static field: static public VROSC.PlatformSelector/VROSC.Platform Steam
      static ::VROSC::PlatformSelector::Platform _get_Steam();
      // Set static field: static public VROSC.PlatformSelector/VROSC.Platform Steam
      static void _set_Steam(::VROSC::PlatformSelector::Platform value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.PlatformSelector/VROSC.Platform
    #pragma pack(pop)
    static check_size<sizeof(PlatformSelector::Platform), 0 + sizeof(int)> __VROSC_PlatformSelector_PlatformSizeCheck;
    static_assert(sizeof(PlatformSelector::Platform) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.VRPlayer _oculusPrefab
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::VRPlayer* oculusPrefab;
    // Field size check
    static_assert(sizeof(::VROSC::VRPlayer*) == 0x8);
    // private VROSC.VRPlayer _steamPrefab
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::VRPlayer* steamPrefab;
    // Field size check
    static_assert(sizeof(::VROSC::VRPlayer*) == 0x8);
    // private VROSC.VRPlayer _debugPrefab
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::VRPlayer* debugPrefab;
    // Field size check
    static_assert(sizeof(::VROSC::VRPlayer*) == 0x8);
    // private VROSC.PlatformSelector/VROSC.DebugSettings _debugSettings
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::PlatformSelector::DebugSettings* debugSettings;
    // Field size check
    static_assert(sizeof(::VROSC::PlatformSelector::DebugSettings*) == 0x8);
    // private VROSC.HmdProfile[] _hmdProfiles
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::VROSC::HmdProfile*> hmdProfiles;
    // Field size check
    static_assert(sizeof(::ArrayW<::VROSC::HmdProfile*>) == 0x8);
    // private LIV.SDK.Unity.LIV _liv
    // Size: 0x8
    // Offset: 0x40
    ::LIV::SDK::Unity::LIV* liv;
    // Field size check
    static_assert(sizeof(::LIV::SDK::Unity::LIV*) == 0x8);
    // private System.Boolean _bypassEntitlementCheck
    // Size: 0x1
    // Offset: 0x48
    bool bypassEntitlementCheck;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bypassEntitlementCheck and: applicationUserID
    char __padding6[0x7] = {};
    // private System.UInt64 _applicationUserID
    // Size: 0x8
    // Offset: 0x50
    uint64_t applicationUserID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.Boolean _waitingForUserId
    // Size: 0x1
    // Offset: 0x58
    bool waitingForUserId;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: waitingForUserId and: VRPlayer
    char __padding8[0x7] = {};
    // private VROSC.VRPlayer <VRPlayer>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    ::VROSC::VRPlayer* VRPlayer;
    // Field size check
    static_assert(sizeof(::VROSC::VRPlayer*) == 0x8);
    // private System.String <PlatformUID>k__BackingField
    // Size: 0x8
    // Offset: 0x68
    ::StringW PlatformUID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <PlatformUsername>k__BackingField
    // Size: 0x8
    // Offset: 0x70
    ::StringW PlatformUsername;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <HasPassedEntitlement>k__BackingField
    // Size: 0x1
    // Offset: 0x78
    bool HasPassedEntitlement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: HasPassedEntitlement and: CurrentPlatform
    char __padding12[0x3] = {};
    // private VROSC.PlatformSelector/VROSC.Platform <CurrentPlatform>k__BackingField
    // Size: 0x4
    // Offset: 0x7C
    ::VROSC::PlatformSelector::Platform CurrentPlatform;
    // Field size check
    static_assert(sizeof(::VROSC::PlatformSelector::Platform) == 0x4);
    // private VROSC.HmdProfile <CurrentHmdProfile>k__BackingField
    // Size: 0x8
    // Offset: 0x80
    ::VROSC::HmdProfile* CurrentHmdProfile;
    // Field size check
    static_assert(sizeof(::VROSC::HmdProfile*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static public System.Action`1<VROSC.VRPlayer> OnPlayerInitialized
    static ::System::Action_1<::VROSC::VRPlayer*>* _get_OnPlayerInitialized();
    // Set static field: static public System.Action`1<VROSC.VRPlayer> OnPlayerInitialized
    static void _set_OnPlayerInitialized(::System::Action_1<::VROSC::VRPlayer*>* value);
    // Get instance field reference: private VROSC.VRPlayer _oculusPrefab
    ::VROSC::VRPlayer*& dyn__oculusPrefab();
    // Get instance field reference: private VROSC.VRPlayer _steamPrefab
    ::VROSC::VRPlayer*& dyn__steamPrefab();
    // Get instance field reference: private VROSC.VRPlayer _debugPrefab
    ::VROSC::VRPlayer*& dyn__debugPrefab();
    // Get instance field reference: private VROSC.PlatformSelector/VROSC.DebugSettings _debugSettings
    ::VROSC::PlatformSelector::DebugSettings*& dyn__debugSettings();
    // Get instance field reference: private VROSC.HmdProfile[] _hmdProfiles
    ::ArrayW<::VROSC::HmdProfile*>& dyn__hmdProfiles();
    // Get instance field reference: private LIV.SDK.Unity.LIV _liv
    ::LIV::SDK::Unity::LIV*& dyn__liv();
    // Get instance field reference: private System.Boolean _bypassEntitlementCheck
    bool& dyn__bypassEntitlementCheck();
    // Get instance field reference: private System.UInt64 _applicationUserID
    uint64_t& dyn__applicationUserID();
    // Get instance field reference: private System.Boolean _waitingForUserId
    bool& dyn__waitingForUserId();
    // Get instance field reference: private VROSC.VRPlayer <VRPlayer>k__BackingField
    ::VROSC::VRPlayer*& dyn_$VRPlayer$k__BackingField();
    // Get instance field reference: private System.String <PlatformUID>k__BackingField
    ::StringW& dyn_$PlatformUID$k__BackingField();
    // Get instance field reference: private System.String <PlatformUsername>k__BackingField
    ::StringW& dyn_$PlatformUsername$k__BackingField();
    // Get instance field reference: private System.Boolean <HasPassedEntitlement>k__BackingField
    bool& dyn_$HasPassedEntitlement$k__BackingField();
    // Get instance field reference: private VROSC.PlatformSelector/VROSC.Platform <CurrentPlatform>k__BackingField
    ::VROSC::PlatformSelector::Platform& dyn_$CurrentPlatform$k__BackingField();
    // Get instance field reference: private VROSC.HmdProfile <CurrentHmdProfile>k__BackingField
    ::VROSC::HmdProfile*& dyn_$CurrentHmdProfile$k__BackingField();
    // public VROSC.VRPlayer get_VRPlayer()
    // Offset: 0x8FA7F8
    ::VROSC::VRPlayer* get_VRPlayer();
    // private System.Void set_VRPlayer(VROSC.VRPlayer value)
    // Offset: 0x8FA800
    void set_VRPlayer(::VROSC::VRPlayer* value);
    // public System.String get_PlatformUID()
    // Offset: 0x8FA808
    ::StringW get_PlatformUID();
    // private System.Void set_PlatformUID(System.String value)
    // Offset: 0x8FA810
    void set_PlatformUID(::StringW value);
    // public System.String get_PlatformUsername()
    // Offset: 0x8FA818
    ::StringW get_PlatformUsername();
    // private System.Void set_PlatformUsername(System.String value)
    // Offset: 0x8FA820
    void set_PlatformUsername(::StringW value);
    // public System.Boolean get_HasPassedEntitlement()
    // Offset: 0x8FA828
    bool get_HasPassedEntitlement();
    // private System.Void set_HasPassedEntitlement(System.Boolean value)
    // Offset: 0x8FA830
    void set_HasPassedEntitlement(bool value);
    // public VROSC.PlatformSelector/VROSC.Platform get_CurrentPlatform()
    // Offset: 0x8FA83C
    ::VROSC::PlatformSelector::Platform get_CurrentPlatform();
    // private System.Void set_CurrentPlatform(VROSC.PlatformSelector/VROSC.Platform value)
    // Offset: 0x8FA844
    void set_CurrentPlatform(::VROSC::PlatformSelector::Platform value);
    // public VROSC.HmdProfile get_CurrentHmdProfile()
    // Offset: 0x8FA84C
    ::VROSC::HmdProfile* get_CurrentHmdProfile();
    // private System.Void set_CurrentHmdProfile(VROSC.HmdProfile value)
    // Offset: 0x8FA854
    void set_CurrentHmdProfile(::VROSC::HmdProfile* value);
    // public System.Void Setup()
    // Offset: 0x8FA85C
    void Setup();
    // private System.Void Update()
    // Offset: 0x8FA920
    void Update();
    // private System.Void SetCurrentHmdProfile()
    // Offset: 0x8FAA2C
    void SetCurrentHmdProfile();
    // private System.Void GetOculusUserCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.User> message)
    // Offset: 0x8FAC78
    void GetOculusUserCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* message);
    // private System.Void SpawnOculusPlayer()
    // Offset: 0x8FB010
    void SpawnOculusPlayer();
    // private System.Void GetOculusOrgUserIdCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.OrgScopedID> message)
    // Offset: 0x8FB108
    void GetOculusOrgUserIdCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::OrgScopedID*>* message);
    // private System.Void OculusEntitlementCallback(Oculus.Platform.Message msg)
    // Offset: 0x8FB458
    void OculusEntitlementCallback(::Oculus::Platform::Message* msg);
    // private UnityEngine.Component CopyComponent(UnityEngine.Component original, UnityEngine.GameObject destination)
    // Offset: 0x8FB558
    ::UnityEngine::Component* CopyComponent(::UnityEngine::Component* original, ::UnityEngine::GameObject* destination);
    // public System.Void .ctor()
    // Offset: 0x8FB640
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformSelector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::PlatformSelector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformSelector*, creationType>()));
    }
  }; // VROSC.PlatformSelector
  #pragma pack(pop)
  static check_size<sizeof(PlatformSelector), 128 + sizeof(::VROSC::HmdProfile*)> __VROSC_PlatformSelectorSizeCheck;
  static_assert(sizeof(PlatformSelector) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PlatformSelector::Platform, "VROSC", "PlatformSelector/Platform");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::PlatformSelector::get_VRPlayer
// Il2CppName: get_VRPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::VRPlayer* (VROSC::PlatformSelector::*)()>(&VROSC::PlatformSelector::get_VRPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "get_VRPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::set_VRPlayer
// Il2CppName: set_VRPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlatformSelector::*)(::VROSC::VRPlayer*)>(&VROSC::PlatformSelector::set_VRPlayer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "VRPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "set_VRPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::get_PlatformUID
// Il2CppName: get_PlatformUID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::PlatformSelector::*)()>(&VROSC::PlatformSelector::get_PlatformUID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "get_PlatformUID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::set_PlatformUID
// Il2CppName: set_PlatformUID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlatformSelector::*)(::StringW)>(&VROSC::PlatformSelector::set_PlatformUID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "set_PlatformUID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::get_PlatformUsername
// Il2CppName: get_PlatformUsername
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (VROSC::PlatformSelector::*)()>(&VROSC::PlatformSelector::get_PlatformUsername)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "get_PlatformUsername", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::set_PlatformUsername
// Il2CppName: set_PlatformUsername
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlatformSelector::*)(::StringW)>(&VROSC::PlatformSelector::set_PlatformUsername)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "set_PlatformUsername", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::get_HasPassedEntitlement
// Il2CppName: get_HasPassedEntitlement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::PlatformSelector::*)()>(&VROSC::PlatformSelector::get_HasPassedEntitlement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "get_HasPassedEntitlement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::set_HasPassedEntitlement
// Il2CppName: set_HasPassedEntitlement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlatformSelector::*)(bool)>(&VROSC::PlatformSelector::set_HasPassedEntitlement)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "set_HasPassedEntitlement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::get_CurrentPlatform
// Il2CppName: get_CurrentPlatform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::PlatformSelector::Platform (VROSC::PlatformSelector::*)()>(&VROSC::PlatformSelector::get_CurrentPlatform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "get_CurrentPlatform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::set_CurrentPlatform
// Il2CppName: set_CurrentPlatform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlatformSelector::*)(::VROSC::PlatformSelector::Platform)>(&VROSC::PlatformSelector::set_CurrentPlatform)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "PlatformSelector/Platform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "set_CurrentPlatform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::get_CurrentHmdProfile
// Il2CppName: get_CurrentHmdProfile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::HmdProfile* (VROSC::PlatformSelector::*)()>(&VROSC::PlatformSelector::get_CurrentHmdProfile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "get_CurrentHmdProfile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::set_CurrentHmdProfile
// Il2CppName: set_CurrentHmdProfile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlatformSelector::*)(::VROSC::HmdProfile*)>(&VROSC::PlatformSelector::set_CurrentHmdProfile)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "HmdProfile")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "set_CurrentHmdProfile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlatformSelector::*)()>(&VROSC::PlatformSelector::Setup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlatformSelector::*)()>(&VROSC::PlatformSelector::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::SetCurrentHmdProfile
// Il2CppName: SetCurrentHmdProfile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlatformSelector::*)()>(&VROSC::PlatformSelector::SetCurrentHmdProfile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "SetCurrentHmdProfile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::GetOculusUserCallback
// Il2CppName: GetOculusUserCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlatformSelector::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*)>(&VROSC::PlatformSelector::GetOculusUserCallback)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "User")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "GetOculusUserCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::SpawnOculusPlayer
// Il2CppName: SpawnOculusPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlatformSelector::*)()>(&VROSC::PlatformSelector::SpawnOculusPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "SpawnOculusPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::GetOculusOrgUserIdCallback
// Il2CppName: GetOculusOrgUserIdCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlatformSelector::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::OrgScopedID*>*)>(&VROSC::PlatformSelector::GetOculusOrgUserIdCallback)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "OrgScopedID")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "GetOculusOrgUserIdCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::OculusEntitlementCallback
// Il2CppName: OculusEntitlementCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::PlatformSelector::*)(::Oculus::Platform::Message*)>(&VROSC::PlatformSelector::OculusEntitlementCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "OculusEntitlementCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::CopyComponent
// Il2CppName: CopyComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Component* (VROSC::PlatformSelector::*)(::UnityEngine::Component*, ::UnityEngine::GameObject*)>(&VROSC::PlatformSelector::CopyComponent)> {
  static const MethodInfo* get() {
    static auto* original = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    static auto* destination = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::PlatformSelector*), "CopyComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{original, destination});
  }
};
// Writing MetadataGetter for method: VROSC::PlatformSelector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
