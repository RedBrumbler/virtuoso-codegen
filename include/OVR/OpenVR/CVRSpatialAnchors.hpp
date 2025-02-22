// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRSpatialAnchors
#include "OVR/OpenVR/IVRSpatialAnchors.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRSpatialAnchorError
  struct EVRSpatialAnchorError;
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: SpatialAnchorPose_t
  struct SpatialAnchorPose_t;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: CVRSpatialAnchors
  class CVRSpatialAnchors;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::CVRSpatialAnchors);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRSpatialAnchors*, "OVR.OpenVR", "CVRSpatialAnchors");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRSpatialAnchors
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRSpatialAnchors : public ::Il2CppObject {
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
    // private OVR.OpenVR.IVRSpatialAnchors FnTable
    // Size: 0x20
    // Offset: 0x10
    ::OVR::OpenVR::IVRSpatialAnchors FnTable;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRSpatialAnchors) == 0x20);
    public:
    // Creating conversion operator: operator ::OVR::OpenVR::IVRSpatialAnchors
    constexpr operator ::OVR::OpenVR::IVRSpatialAnchors() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private OVR.OpenVR.IVRSpatialAnchors FnTable
    ::OVR::OpenVR::IVRSpatialAnchors& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x810178
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRSpatialAnchors* New_ctor(::System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::CVRSpatialAnchors::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRSpatialAnchors*, creationType>(pInterface)));
    }
    // public OVR.OpenVR.EVRSpatialAnchorError CreateSpatialAnchorFromDescriptor(System.String pchDescriptor, ref System.UInt32 pHandleOut)
    // Offset: 0x810298
    ::OVR::OpenVR::EVRSpatialAnchorError CreateSpatialAnchorFromDescriptor(::StringW pchDescriptor, ByRef<uint> pHandleOut);
    // public OVR.OpenVR.EVRSpatialAnchorError CreateSpatialAnchorFromPose(System.UInt32 unDeviceIndex, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, ref OVR.OpenVR.SpatialAnchorPose_t pPose, ref System.UInt32 pHandleOut)
    // Offset: 0x8102B8
    ::OVR::OpenVR::EVRSpatialAnchorError CreateSpatialAnchorFromPose(uint unDeviceIndex, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPose, ByRef<uint> pHandleOut);
    // public OVR.OpenVR.EVRSpatialAnchorError GetSpatialAnchorPose(System.UInt32 unHandle, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, ref OVR.OpenVR.SpatialAnchorPose_t pPoseOut)
    // Offset: 0x8102D8
    ::OVR::OpenVR::EVRSpatialAnchorError GetSpatialAnchorPose(uint unHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t> pPoseOut);
    // public OVR.OpenVR.EVRSpatialAnchorError GetSpatialAnchorDescriptor(System.UInt32 unHandle, System.Text.StringBuilder pchDescriptorOut, ref System.UInt32 punDescriptorBufferLenInOut)
    // Offset: 0x8102F4
    ::OVR::OpenVR::EVRSpatialAnchorError GetSpatialAnchorDescriptor(uint unHandle, ::System::Text::StringBuilder* pchDescriptorOut, ByRef<uint> punDescriptorBufferLenInOut);
  }; // OVR.OpenVR.CVRSpatialAnchors
  #pragma pack(pop)
  static check_size<sizeof(CVRSpatialAnchors), 16 + sizeof(::OVR::OpenVR::IVRSpatialAnchors)> __OVR_OpenVR_CVRSpatialAnchorsSizeCheck;
  static_assert(sizeof(CVRSpatialAnchors) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::CVRSpatialAnchors::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRSpatialAnchors::CreateSpatialAnchorFromDescriptor
// Il2CppName: CreateSpatialAnchorFromDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::CVRSpatialAnchors::*)(::StringW, ByRef<uint>)>(&OVR::OpenVR::CVRSpatialAnchors::CreateSpatialAnchorFromDescriptor)> {
  static const MethodInfo* get() {
    static auto* pchDescriptor = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pHandleOut = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSpatialAnchors*), "CreateSpatialAnchorFromDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchDescriptor, pHandleOut});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSpatialAnchors::CreateSpatialAnchorFromPose
// Il2CppName: CreateSpatialAnchorFromPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::CVRSpatialAnchors::*)(uint, ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t>, ByRef<uint>)>(&OVR::OpenVR::CVRSpatialAnchors::CreateSpatialAnchorFromPose)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* pPose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "SpatialAnchorPose_t")->this_arg;
    static auto* pHandleOut = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSpatialAnchors*), "CreateSpatialAnchorFromPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, eOrigin, pPose, pHandleOut});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSpatialAnchors::GetSpatialAnchorPose
// Il2CppName: GetSpatialAnchorPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::CVRSpatialAnchors::*)(uint, ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::SpatialAnchorPose_t>)>(&OVR::OpenVR::CVRSpatialAnchors::GetSpatialAnchorPose)> {
  static const MethodInfo* get() {
    static auto* unHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* pPoseOut = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "SpatialAnchorPose_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSpatialAnchors*), "GetSpatialAnchorPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unHandle, eOrigin, pPoseOut});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSpatialAnchors::GetSpatialAnchorDescriptor
// Il2CppName: GetSpatialAnchorDescriptor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::CVRSpatialAnchors::*)(uint, ::System::Text::StringBuilder*, ByRef<uint>)>(&OVR::OpenVR::CVRSpatialAnchors::GetSpatialAnchorDescriptor)> {
  static const MethodInfo* get() {
    static auto* unHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pchDescriptorOut = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* punDescriptorBufferLenInOut = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSpatialAnchors*), "GetSpatialAnchorDescriptor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unHandle, pchDescriptorOut, punDescriptorBufferLenInOut});
  }
};
