// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ovrAvatarControllerType
#include "GlobalNamespace/ovrAvatarControllerType.hpp"
// Including type: ovrAvatarButton
#include "GlobalNamespace/ovrAvatarButton.hpp"
// Including type: ovrAvatarTouch
#include "GlobalNamespace/ovrAvatarTouch.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: ControllerPose because it is already included!
  // Skipping declaration: PoseFrame because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarDriver
  class OvrAvatarDriver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarDriver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarDriver*, "", "OvrAvatarDriver");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarDriver
  // [TokenAttribute] Offset: FFFFFFFF
  class OvrAvatarDriver : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OvrAvatarDriver::PacketMode
    struct PacketMode;
    // Nested type: ::GlobalNamespace::OvrAvatarDriver::ControllerPose
    struct ControllerPose;
    // Nested type: ::GlobalNamespace::OvrAvatarDriver::PoseFrame
    struct PoseFrame;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OvrAvatarDriver/PacketMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct PacketMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: PacketMode
      constexpr PacketMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OvrAvatarDriver/PacketMode SDK
      static constexpr const int SDK = 0;
      // Get static field: static public OvrAvatarDriver/PacketMode SDK
      static ::GlobalNamespace::OvrAvatarDriver::PacketMode _get_SDK();
      // Set static field: static public OvrAvatarDriver/PacketMode SDK
      static void _set_SDK(::GlobalNamespace::OvrAvatarDriver::PacketMode value);
      // static field const value: static public OvrAvatarDriver/PacketMode Unity
      static constexpr const int Unity = 1;
      // Get static field: static public OvrAvatarDriver/PacketMode Unity
      static ::GlobalNamespace::OvrAvatarDriver::PacketMode _get_Unity();
      // Set static field: static public OvrAvatarDriver/PacketMode Unity
      static void _set_Unity(::GlobalNamespace::OvrAvatarDriver::PacketMode value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // OvrAvatarDriver/PacketMode
    #pragma pack(pop)
    static check_size<sizeof(OvrAvatarDriver::PacketMode), 0 + sizeof(int)> __GlobalNamespace_OvrAvatarDriver_PacketModeSizeCheck;
    static_assert(sizeof(OvrAvatarDriver::PacketMode) == 0x4);
    // Size: 0x19
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: OvrAvatarDriver/ControllerPose
    // [TokenAttribute] Offset: FFFFFFFF
    struct ControllerPose/*, public ::System::ValueType*/ {
      public:
      public:
      // public ovrAvatarButton buttons
      // Size: 0x4
      // Offset: 0x0
      ::GlobalNamespace::ovrAvatarButton buttons;
      // Field size check
      static_assert(sizeof(::GlobalNamespace::ovrAvatarButton) == 0x4);
      // public ovrAvatarTouch touches
      // Size: 0x4
      // Offset: 0x4
      ::GlobalNamespace::ovrAvatarTouch touches;
      // Field size check
      static_assert(sizeof(::GlobalNamespace::ovrAvatarTouch) == 0x4);
      // public UnityEngine.Vector2 joystickPosition
      // Size: 0x8
      // Offset: 0x8
      ::UnityEngine::Vector2 joystickPosition;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
      // public System.Single indexTrigger
      // Size: 0x4
      // Offset: 0x10
      float indexTrigger;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single handTrigger
      // Size: 0x4
      // Offset: 0x14
      float handTrigger;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Boolean isActive
      // Size: 0x1
      // Offset: 0x18
      bool isActive;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      public:
      // Creating value type constructor for type: ControllerPose
      constexpr ControllerPose(::GlobalNamespace::ovrAvatarButton buttons_ = {}, ::GlobalNamespace::ovrAvatarTouch touches_ = {}, ::UnityEngine::Vector2 joystickPosition_ = {}, float indexTrigger_ = {}, float handTrigger_ = {}, bool isActive_ = {}) noexcept : buttons{buttons_}, touches{touches_}, joystickPosition{joystickPosition_}, indexTrigger{indexTrigger_}, handTrigger{handTrigger_}, isActive{isActive_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public ovrAvatarButton buttons
      ::GlobalNamespace::ovrAvatarButton& dyn_buttons();
      // Get instance field reference: public ovrAvatarTouch touches
      ::GlobalNamespace::ovrAvatarTouch& dyn_touches();
      // Get instance field reference: public UnityEngine.Vector2 joystickPosition
      ::UnityEngine::Vector2& dyn_joystickPosition();
      // Get instance field reference: public System.Single indexTrigger
      float& dyn_indexTrigger();
      // Get instance field reference: public System.Single handTrigger
      float& dyn_handTrigger();
      // Get instance field reference: public System.Boolean isActive
      bool& dyn_isActive();
      // static public OvrAvatarDriver/ControllerPose Interpolate(OvrAvatarDriver/ControllerPose a, OvrAvatarDriver/ControllerPose b, System.Single t)
      // Offset: 0x1341054
      static ::GlobalNamespace::OvrAvatarDriver::ControllerPose Interpolate(::GlobalNamespace::OvrAvatarDriver::ControllerPose a, ::GlobalNamespace::OvrAvatarDriver::ControllerPose b, float t);
    }; // OvrAvatarDriver/ControllerPose
    #pragma pack(pop)
    static check_size<sizeof(OvrAvatarDriver::ControllerPose), 24 + sizeof(bool)> __GlobalNamespace_OvrAvatarDriver_ControllerPoseSizeCheck;
    static_assert(sizeof(OvrAvatarDriver::ControllerPose) == 0x19);
    // Size: 0x8D
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: OvrAvatarDriver/PoseFrame
    // [TokenAttribute] Offset: FFFFFFFF
    struct PoseFrame/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.Vector3 headPosition
      // Size: 0xC
      // Offset: 0x0
      ::UnityEngine::Vector3 headPosition;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // public UnityEngine.Quaternion headRotation
      // Size: 0x10
      // Offset: 0xC
      ::UnityEngine::Quaternion headRotation;
      // Field size check
      static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
      // public UnityEngine.Vector3 handLeftPosition
      // Size: 0xC
      // Offset: 0x1C
      ::UnityEngine::Vector3 handLeftPosition;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // public UnityEngine.Quaternion handLeftRotation
      // Size: 0x10
      // Offset: 0x28
      ::UnityEngine::Quaternion handLeftRotation;
      // Field size check
      static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
      // public UnityEngine.Vector3 handRightPosition
      // Size: 0xC
      // Offset: 0x38
      ::UnityEngine::Vector3 handRightPosition;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // public UnityEngine.Quaternion handRightRotation
      // Size: 0x10
      // Offset: 0x44
      ::UnityEngine::Quaternion handRightRotation;
      // Field size check
      static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
      // public System.Single voiceAmplitude
      // Size: 0x4
      // Offset: 0x54
      float voiceAmplitude;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public OvrAvatarDriver/ControllerPose controllerLeftPose
      // Size: 0x19
      // Offset: 0x58
      ::GlobalNamespace::OvrAvatarDriver::ControllerPose controllerLeftPose;
      // Field size check
      static_assert(sizeof(::GlobalNamespace::OvrAvatarDriver::ControllerPose) == 0x19);
      // Padding between fields: controllerLeftPose and: controllerRightPose
      char __padding7[0x3] = {};
      // public OvrAvatarDriver/ControllerPose controllerRightPose
      // Size: 0x19
      // Offset: 0x74
      ::GlobalNamespace::OvrAvatarDriver::ControllerPose controllerRightPose;
      // Field size check
      static_assert(sizeof(::GlobalNamespace::OvrAvatarDriver::ControllerPose) == 0x19);
      public:
      // Creating value type constructor for type: PoseFrame
      constexpr PoseFrame(::UnityEngine::Vector3 headPosition_ = {}, ::UnityEngine::Quaternion headRotation_ = {}, ::UnityEngine::Vector3 handLeftPosition_ = {}, ::UnityEngine::Quaternion handLeftRotation_ = {}, ::UnityEngine::Vector3 handRightPosition_ = {}, ::UnityEngine::Quaternion handRightRotation_ = {}, float voiceAmplitude_ = {}, ::GlobalNamespace::OvrAvatarDriver::ControllerPose controllerLeftPose_ = {}, ::GlobalNamespace::OvrAvatarDriver::ControllerPose controllerRightPose_ = {}) noexcept : headPosition{headPosition_}, headRotation{headRotation_}, handLeftPosition{handLeftPosition_}, handLeftRotation{handLeftRotation_}, handRightPosition{handRightPosition_}, handRightRotation{handRightRotation_}, voiceAmplitude{voiceAmplitude_}, controllerLeftPose{controllerLeftPose_}, controllerRightPose{controllerRightPose_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.Vector3 headPosition
      ::UnityEngine::Vector3& dyn_headPosition();
      // Get instance field reference: public UnityEngine.Quaternion headRotation
      ::UnityEngine::Quaternion& dyn_headRotation();
      // Get instance field reference: public UnityEngine.Vector3 handLeftPosition
      ::UnityEngine::Vector3& dyn_handLeftPosition();
      // Get instance field reference: public UnityEngine.Quaternion handLeftRotation
      ::UnityEngine::Quaternion& dyn_handLeftRotation();
      // Get instance field reference: public UnityEngine.Vector3 handRightPosition
      ::UnityEngine::Vector3& dyn_handRightPosition();
      // Get instance field reference: public UnityEngine.Quaternion handRightRotation
      ::UnityEngine::Quaternion& dyn_handRightRotation();
      // Get instance field reference: public System.Single voiceAmplitude
      float& dyn_voiceAmplitude();
      // Get instance field reference: public OvrAvatarDriver/ControllerPose controllerLeftPose
      ::GlobalNamespace::OvrAvatarDriver::ControllerPose& dyn_controllerLeftPose();
      // Get instance field reference: public OvrAvatarDriver/ControllerPose controllerRightPose
      ::GlobalNamespace::OvrAvatarDriver::ControllerPose& dyn_controllerRightPose();
      // static public OvrAvatarDriver/PoseFrame Interpolate(OvrAvatarDriver/PoseFrame a, OvrAvatarDriver/PoseFrame b, System.Single t)
      // Offset: 0x1341130
      static ::GlobalNamespace::OvrAvatarDriver::PoseFrame Interpolate(::GlobalNamespace::OvrAvatarDriver::PoseFrame a, ::GlobalNamespace::OvrAvatarDriver::PoseFrame b, float t);
    }; // OvrAvatarDriver/PoseFrame
    #pragma pack(pop)
    static check_size<sizeof(OvrAvatarDriver::PoseFrame), 116 + sizeof(::GlobalNamespace::OvrAvatarDriver::ControllerPose)> __GlobalNamespace_OvrAvatarDriver_PoseFrameSizeCheck;
    static_assert(sizeof(OvrAvatarDriver::PoseFrame) == 0x8D);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public OvrAvatarDriver/PacketMode Mode
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::OvrAvatarDriver::PacketMode Mode;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OvrAvatarDriver::PacketMode) == 0x4);
    // protected OvrAvatarDriver/PoseFrame CurrentPose
    // Size: 0x8D
    // Offset: 0x1C
    ::GlobalNamespace::OvrAvatarDriver::PoseFrame CurrentPose;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OvrAvatarDriver::PoseFrame) == 0x8D);
    // Padding between fields: CurrentPose and: ControllerType
    char __padding1[0x3] = {};
    // private ovrAvatarControllerType ControllerType
    // Size: 0x4
    // Offset: 0xAC
    ::GlobalNamespace::ovrAvatarControllerType ControllerType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarControllerType) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public OvrAvatarDriver/PacketMode Mode
    ::GlobalNamespace::OvrAvatarDriver::PacketMode& dyn_Mode();
    // Get instance field reference: protected OvrAvatarDriver/PoseFrame CurrentPose
    ::GlobalNamespace::OvrAvatarDriver::PoseFrame& dyn_CurrentPose();
    // Get instance field reference: private ovrAvatarControllerType ControllerType
    ::GlobalNamespace::ovrAvatarControllerType& dyn_ControllerType();
    // public OvrAvatarDriver/PoseFrame GetCurrentPose()
    // Offset: 0x92A2D4
    ::GlobalNamespace::OvrAvatarDriver::PoseFrame GetCurrentPose();
    // public System.Void UpdateTransforms(System.IntPtr sdkAvatar)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdateTransforms(::System::IntPtr sdkAvatar);
    // private System.Void Start()
    // Offset: 0x92A2E4
    void Start();
    // public System.Void UpdateTransformsFromPose(System.IntPtr sdkAvatar)
    // Offset: 0x9225F0
    void UpdateTransformsFromPose(::System::IntPtr sdkAvatar);
    // static public System.Boolean GetIsTrackedRemote()
    // Offset: 0x92A36C
    static bool GetIsTrackedRemote();
    // protected System.Void .ctor()
    // Offset: 0x92A374
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarDriver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarDriver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarDriver*, creationType>()));
    }
  }; // OvrAvatarDriver
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarDriver), 172 + sizeof(::GlobalNamespace::ovrAvatarControllerType)> __GlobalNamespace_OvrAvatarDriverSizeCheck;
  static_assert(sizeof(OvrAvatarDriver) == 0xB0);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarDriver::PoseFrame, "", "OvrAvatarDriver/PoseFrame");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarDriver::ControllerPose, "", "OvrAvatarDriver/ControllerPose");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarDriver::PacketMode, "", "OvrAvatarDriver/PacketMode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarDriver::GetCurrentPose
// Il2CppName: GetCurrentPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OvrAvatarDriver::PoseFrame (GlobalNamespace::OvrAvatarDriver::*)()>(&GlobalNamespace::OvrAvatarDriver::GetCurrentPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarDriver*), "GetCurrentPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarDriver::UpdateTransforms
// Il2CppName: UpdateTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarDriver::*)(::System::IntPtr)>(&GlobalNamespace::OvrAvatarDriver::UpdateTransforms)> {
  static const MethodInfo* get() {
    static auto* sdkAvatar = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarDriver*), "UpdateTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sdkAvatar});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarDriver::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarDriver::*)()>(&GlobalNamespace::OvrAvatarDriver::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarDriver*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarDriver::UpdateTransformsFromPose
// Il2CppName: UpdateTransformsFromPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarDriver::*)(::System::IntPtr)>(&GlobalNamespace::OvrAvatarDriver::UpdateTransformsFromPose)> {
  static const MethodInfo* get() {
    static auto* sdkAvatar = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarDriver*), "UpdateTransformsFromPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sdkAvatar});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarDriver::GetIsTrackedRemote
// Il2CppName: GetIsTrackedRemote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GlobalNamespace::OvrAvatarDriver::GetIsTrackedRemote)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarDriver*), "GetIsTrackedRemote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarDriver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
