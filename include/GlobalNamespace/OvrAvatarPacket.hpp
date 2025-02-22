// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OvrAvatarDriver/PoseFrame
#include "GlobalNamespace/OvrAvatarDriver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarPacket
  class OvrAvatarPacket;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarPacket*, "", "OvrAvatarPacket");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarPacket
  // [TokenAttribute] Offset: FFFFFFFF
  class OvrAvatarPacket : public ::Il2CppObject {
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
    // public System.IntPtr ovrNativePacket
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr ovrNativePacket;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Collections.Generic.List`1<System.Single> frameTimes
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<float>* frameTimes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<float>*) == 0x8);
    // private System.Collections.Generic.List`1<OvrAvatarDriver/PoseFrame> frames
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::GlobalNamespace::OvrAvatarDriver::PoseFrame>* frames;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OvrAvatarDriver::PoseFrame>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Byte[]> encodedAudioPackets
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* encodedAudioPackets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*) == 0x8);
    public:
    // Get instance field reference: public System.IntPtr ovrNativePacket
    ::System::IntPtr& dyn_ovrNativePacket();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Single> frameTimes
    ::System::Collections::Generic::List_1<float>*& dyn_frameTimes();
    // Get instance field reference: private System.Collections.Generic.List`1<OvrAvatarDriver/PoseFrame> frames
    ::System::Collections::Generic::List_1<::GlobalNamespace::OvrAvatarDriver::PoseFrame>*& dyn_frames();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Byte[]> encodedAudioPackets
    ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*& dyn_encodedAudioPackets();
    // public System.Single get_Duration()
    // Offset: 0x923CCC
    float get_Duration();
    // public OvrAvatarDriver/PoseFrame get_FinalFrame()
    // Offset: 0x923E18
    ::GlobalNamespace::OvrAvatarDriver::PoseFrame get_FinalFrame();
    // public System.Void .ctor(OvrAvatarDriver/PoseFrame initialPose)
    // Offset: 0x923B30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarPacket* New_ctor(::GlobalNamespace::OvrAvatarDriver::PoseFrame initialPose) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarPacket*, creationType>(initialPose)));
    }
    // private System.Void .ctor(System.Collections.Generic.List`1<System.Single> frameTimes, System.Collections.Generic.List`1<OvrAvatarDriver/PoseFrame> frames, System.Collections.Generic.List`1<System.Byte[]> audioPackets)
    // Offset: 0x92DD2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarPacket* New_ctor(::System::Collections::Generic::List_1<float>* frameTimes, ::System::Collections::Generic::List_1<::GlobalNamespace::OvrAvatarDriver::PoseFrame>* frames, ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* audioPackets) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarPacket*, creationType>(frameTimes, frames, audioPackets)));
    }
    // public System.Void AddFrame(OvrAvatarDriver/PoseFrame frame, System.Single deltaSeconds)
    // Offset: 0x923D40
    void AddFrame(::GlobalNamespace::OvrAvatarDriver::PoseFrame frame, float deltaSeconds);
    // public OvrAvatarDriver/PoseFrame GetPoseFrame(System.Single seconds)
    // Offset: 0x92DE4C
    ::GlobalNamespace::OvrAvatarDriver::PoseFrame GetPoseFrame(float seconds);
    // static public OvrAvatarPacket Read(System.IO.Stream stream)
    // Offset: 0x92E07C
    static ::GlobalNamespace::OvrAvatarPacket* Read(::System::IO::Stream* stream);
    // public System.Void Write(System.IO.Stream stream)
    // Offset: 0x92E358
    void Write(::System::IO::Stream* stream);
    // public System.Void .ctor()
    // Offset: 0x923EA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarPacket*, creationType>()));
    }
  }; // OvrAvatarPacket
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarPacket), 40 + sizeof(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*)> __GlobalNamespace_OvrAvatarPacketSizeCheck;
  static_assert(sizeof(OvrAvatarPacket) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarPacket::get_Duration
// Il2CppName: get_Duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OvrAvatarPacket::*)()>(&GlobalNamespace::OvrAvatarPacket::get_Duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarPacket*), "get_Duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarPacket::get_FinalFrame
// Il2CppName: get_FinalFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OvrAvatarDriver::PoseFrame (GlobalNamespace::OvrAvatarPacket::*)()>(&GlobalNamespace::OvrAvatarPacket::get_FinalFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarPacket*), "get_FinalFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarPacket::AddFrame
// Il2CppName: AddFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarPacket::*)(::GlobalNamespace::OvrAvatarDriver::PoseFrame, float)>(&GlobalNamespace::OvrAvatarPacket::AddFrame)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("", "OvrAvatarDriver/PoseFrame")->byval_arg;
    static auto* deltaSeconds = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarPacket*), "AddFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame, deltaSeconds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarPacket::GetPoseFrame
// Il2CppName: GetPoseFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OvrAvatarDriver::PoseFrame (GlobalNamespace::OvrAvatarPacket::*)(float)>(&GlobalNamespace::OvrAvatarPacket::GetPoseFrame)> {
  static const MethodInfo* get() {
    static auto* seconds = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarPacket*), "GetPoseFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seconds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarPacket::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OvrAvatarPacket* (*)(::System::IO::Stream*)>(&GlobalNamespace::OvrAvatarPacket::Read)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarPacket*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarPacket::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarPacket::*)(::System::IO::Stream*)>(&GlobalNamespace::OvrAvatarPacket::Write)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarPacket*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
