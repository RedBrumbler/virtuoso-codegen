// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NatSuite::Devices
namespace NatSuite::Devices {
  // Forward declaring type: IMediaDevice
  class IMediaDevice;
  // Forward declaring type: AudioDevice
  class AudioDevice;
  // Forward declaring type: CameraDevice
  class CameraDevice;
  // Forward declaring type: WebCameraDevice
  class WebCameraDevice;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Forward declaring type: MediaDeviceQuery
  class MediaDeviceQuery;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NatSuite::Devices::MediaDeviceQuery);
DEFINE_IL2CPP_ARG_TYPE(::NatSuite::Devices::MediaDeviceQuery*, "NatSuite.Devices", "MediaDeviceQuery");
// Type namespace: NatSuite.Devices
namespace NatSuite::Devices {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: NatSuite.Devices.MediaDeviceQuery
  // [TokenAttribute] Offset: FFFFFFFF
  // [DocAttribute] Offset: 66BB1C
  class MediaDeviceQuery : public ::Il2CppObject {
    public:
    // Nested type: ::NatSuite::Devices::MediaDeviceQuery::Criterion
    class Criterion;
    // Nested type: ::NatSuite::Devices::MediaDeviceQuery::Criteria
    class Criteria;
    // Nested type: ::NatSuite::Devices::MediaDeviceQuery::MediaDeviceQueryPermissionsHelper
    class MediaDeviceQueryPermissionsHelper;
    // Nested type: ::NatSuite::Devices::MediaDeviceQuery::$$c__DisplayClass2_0_1<T>
    template<typename T>
    class $$c__DisplayClass2_0_1;
    // Nested type: ::NatSuite::Devices::MediaDeviceQuery::$$c__DisplayClass9_0
    class $$c__DisplayClass9_0;
    // Nested type: ::NatSuite::Devices::MediaDeviceQuery::$$c__DisplayClass9_1
    class $$c__DisplayClass9_1;
    // Nested type: ::NatSuite::Devices::MediaDeviceQuery::$$c
    class $$c;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [DocAttribute] Offset: 0x678034
    // public readonly NatSuite.Devices.IMediaDevice[] devices
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::NatSuite::Devices::IMediaDevice*> devices;
    // Field size check
    static_assert(sizeof(::ArrayW<::NatSuite::Devices::IMediaDevice*>) == 0x8);
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public readonly NatSuite.Devices.IMediaDevice[] devices
    ::ArrayW<::NatSuite::Devices::IMediaDevice*>& dyn_devices();
    // Get instance field reference: private System.Int32 index
    int& dyn_index();
    // public NatSuite.Devices.IMediaDevice get_currentDevice()
    // Offset: 0x8ADD74
    ::NatSuite::Devices::IMediaDevice* get_currentDevice();
    // public System.Int32 get_count()
    // Offset: 0x8ADDC4
    int get_count();
    // public System.Void .ctor(params NatSuite.Devices.MediaDeviceQuery/NatSuite.Devices.Criterion[] criteria)
    // Offset: 0x8ADDE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MediaDeviceQuery* New_ctor(::ArrayW<::NatSuite::Devices::MediaDeviceQuery::Criterion*> criteria) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NatSuite::Devices::MediaDeviceQuery::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MediaDeviceQuery*, creationType>(criteria)));
    }
    // static public System.Threading.Tasks.Task`1<System.Boolean> RequestPermissions()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Threading::Tasks::Task_1<bool>* RequestPermissions() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::NatSuite::Devices::IMediaDevice>);
      static auto ___internal__logger = ::Logger::get().WithContext("::NatSuite::Devices::MediaDeviceQuery::RequestPermissions");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("NatSuite.Devices", "MediaDeviceQuery", "RequestPermissions", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // public System.Void Advance()
    // Offset: 0x8AE518
    void Advance();
    // static private System.Collections.Generic.IEnumerable`1<NatSuite.Devices.AudioDevice> AudioDevices()
    // Offset: 0x8ADFE8
    static ::System::Collections::Generic::IEnumerable_1<::NatSuite::Devices::AudioDevice*>* AudioDevices();
    // static private System.Collections.Generic.IEnumerable`1<NatSuite.Devices.CameraDevice> CameraDevices()
    // Offset: 0x8AE1EC
    static ::System::Collections::Generic::IEnumerable_1<::NatSuite::Devices::CameraDevice*>* CameraDevices();
    // static private System.Collections.Generic.IEnumerable`1<NatSuite.Devices.WebCameraDevice> WebCamDevices()
    // Offset: 0x8AE3F0
    static ::System::Collections::Generic::IEnumerable_1<::NatSuite::Devices::WebCameraDevice*>* WebCamDevices();
  }; // NatSuite.Devices.MediaDeviceQuery
  #pragma pack(pop)
  static check_size<sizeof(MediaDeviceQuery), 24 + sizeof(int)> __NatSuite_Devices_MediaDeviceQuerySizeCheck;
  static_assert(sizeof(MediaDeviceQuery) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::get_currentDevice
// Il2CppName: get_currentDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NatSuite::Devices::IMediaDevice* (NatSuite::Devices::MediaDeviceQuery::*)()>(&NatSuite::Devices::MediaDeviceQuery::get_currentDevice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery*), "get_currentDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::get_count
// Il2CppName: get_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (NatSuite::Devices::MediaDeviceQuery::*)()>(&NatSuite::Devices::MediaDeviceQuery::get_count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery*), "get_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::RequestPermissions
// Il2CppName: RequestPermissions
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::Advance
// Il2CppName: Advance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NatSuite::Devices::MediaDeviceQuery::*)()>(&NatSuite::Devices::MediaDeviceQuery::Advance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery*), "Advance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::AudioDevices
// Il2CppName: AudioDevices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::NatSuite::Devices::AudioDevice*>* (*)()>(&NatSuite::Devices::MediaDeviceQuery::AudioDevices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery*), "AudioDevices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::CameraDevices
// Il2CppName: CameraDevices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::NatSuite::Devices::CameraDevice*>* (*)()>(&NatSuite::Devices::MediaDeviceQuery::CameraDevices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery*), "CameraDevices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NatSuite::Devices::MediaDeviceQuery::WebCamDevices
// Il2CppName: WebCamDevices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::NatSuite::Devices::WebCameraDevice*>* (*)()>(&NatSuite::Devices::MediaDeviceQuery::WebCamDevices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NatSuite::Devices::MediaDeviceQuery*), "WebCamDevices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};