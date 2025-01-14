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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: TransformData
  class TransformData;
  // Forward declaring type: LoopPlaybackConfigData
  class LoopPlaybackConfigData;
  // Forward declaring type: LoopPlaybackConfigOverrideFlags
  class LoopPlaybackConfigOverrideFlags;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: LoopStationTrackGroup
  class LoopStationTrackGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::LoopStationTrackGroup);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopStationTrackGroup*, "VROSC", "LoopStationTrackGroup");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.LoopStationTrackGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class LoopStationTrackGroup : public ::Il2CppObject {
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
    // public System.String GroupId
    // Size: 0x8
    // Offset: 0x10
    ::StringW GroupId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String GroupName
    // Size: 0x8
    // Offset: 0x18
    ::StringW GroupName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single GroupVolume
    // Size: 0x4
    // Offset: 0x20
    float GroupVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean IsUserGroup
    // Size: 0x1
    // Offset: 0x24
    bool IsUserGroup;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsUserGroup and: TransformData
    char __padding3[0x3] = {};
    // public VROSC.TransformData TransformData
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::TransformData* TransformData;
    // Field size check
    static_assert(sizeof(::VROSC::TransformData*) == 0x8);
    // public System.Boolean GroupMuted
    // Size: 0x1
    // Offset: 0x30
    bool GroupMuted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: GroupMuted and: PlaybackConfigData
    char __padding5[0x7] = {};
    // public VROSC.LoopPlaybackConfigData PlaybackConfigData
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::LoopPlaybackConfigData* PlaybackConfigData;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlaybackConfigData*) == 0x8);
    // public VROSC.LoopPlaybackConfigOverrideFlags PlaybackOverrideFlags
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::LoopPlaybackConfigOverrideFlags* PlaybackOverrideFlags;
    // Field size check
    static_assert(sizeof(::VROSC::LoopPlaybackConfigOverrideFlags*) == 0x8);
    // public UnityEngine.Color Color
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Color Color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: public System.String GroupId
    ::StringW& dyn_GroupId();
    // Get instance field reference: public System.String GroupName
    ::StringW& dyn_GroupName();
    // Get instance field reference: public System.Single GroupVolume
    float& dyn_GroupVolume();
    // Get instance field reference: public System.Boolean IsUserGroup
    bool& dyn_IsUserGroup();
    // Get instance field reference: public VROSC.TransformData TransformData
    ::VROSC::TransformData*& dyn_TransformData();
    // Get instance field reference: public System.Boolean GroupMuted
    bool& dyn_GroupMuted();
    // Get instance field reference: public VROSC.LoopPlaybackConfigData PlaybackConfigData
    ::VROSC::LoopPlaybackConfigData*& dyn_PlaybackConfigData();
    // Get instance field reference: public VROSC.LoopPlaybackConfigOverrideFlags PlaybackOverrideFlags
    ::VROSC::LoopPlaybackConfigOverrideFlags*& dyn_PlaybackOverrideFlags();
    // Get instance field reference: public UnityEngine.Color Color
    ::UnityEngine::Color& dyn_Color();
    // public System.Void .ctor()
    // Offset: 0x8A67A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoopStationTrackGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::LoopStationTrackGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoopStationTrackGroup*, creationType>()));
    }
  }; // VROSC.LoopStationTrackGroup
  #pragma pack(pop)
  static check_size<sizeof(LoopStationTrackGroup), 72 + sizeof(::UnityEngine::Color)> __VROSC_LoopStationTrackGroupSizeCheck;
  static_assert(sizeof(LoopStationTrackGroup) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::LoopStationTrackGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
