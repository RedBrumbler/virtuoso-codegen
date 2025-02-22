// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRApplications
#include "OVR/OpenVR/IVRApplications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.AppOverrideKeys_t
#include "OVR/OpenVR/AppOverrideKeys_t.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::IVRApplications::_LaunchTemplateApplication);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRApplications::_LaunchTemplateApplication*, "OVR.OpenVR", "IVRApplications/_LaunchTemplateApplication");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchTemplateApplication
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 58A76C
  class IVRApplications::_LaunchTemplateApplication : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x6F5958
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_LaunchTemplateApplication* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRApplications::_LaunchTemplateApplication::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_LaunchTemplateApplication*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRApplicationError Invoke(System.String pchTemplateAppKey, System.String pchNewAppKey, in OVR.OpenVR.AppOverrideKeys_t[] pKeys, System.UInt32 unKeys)
    // Offset: 0x6F5968
    ::OVR::OpenVR::EVRApplicationError Invoke(::StringW pchTemplateAppKey, ::StringW pchNewAppKey, ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t>> pKeys, uint unKeys);
    // public System.IAsyncResult BeginInvoke(System.String pchTemplateAppKey, System.String pchNewAppKey, in OVR.OpenVR.AppOverrideKeys_t[] pKeys, System.UInt32 unKeys, System.AsyncCallback callback, System.Object object)
    // Offset: 0x6F5D44
    ::System::IAsyncResult* BeginInvoke(::StringW pchTemplateAppKey, ::StringW pchNewAppKey, ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t>> pKeys, uint unKeys, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x6F5DF0
    ::OVR::OpenVR::EVRApplicationError EndInvoke(::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRApplications/OVR.OpenVR._LaunchTemplateApplication
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_LaunchTemplateApplication::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_LaunchTemplateApplication::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (OVR::OpenVR::IVRApplications::_LaunchTemplateApplication::*)(::StringW, ::StringW, ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t>>, uint)>(&OVR::OpenVR::IVRApplications::_LaunchTemplateApplication::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchTemplateAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchNewAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pKeys = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "AppOverrideKeys_t"), 1)->this_arg;
    static auto* unKeys = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_LaunchTemplateApplication*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchTemplateAppKey, pchNewAppKey, pKeys, unKeys});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_LaunchTemplateApplication::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRApplications::_LaunchTemplateApplication::*)(::StringW, ::StringW, ByRef<::ArrayW<::OVR::OpenVR::AppOverrideKeys_t>>, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRApplications::_LaunchTemplateApplication::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchTemplateAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchNewAppKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pKeys = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "AppOverrideKeys_t"), 1)->this_arg;
    static auto* unKeys = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_LaunchTemplateApplication*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchTemplateAppKey, pchNewAppKey, pKeys, unKeys, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRApplications::_LaunchTemplateApplication::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRApplicationError (OVR::OpenVR::IVRApplications::_LaunchTemplateApplication::*)(::System::IAsyncResult*)>(&OVR::OpenVR::IVRApplications::_LaunchTemplateApplication::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRApplications::_LaunchTemplateApplication*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
