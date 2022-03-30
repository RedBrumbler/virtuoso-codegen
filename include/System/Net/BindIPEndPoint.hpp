// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
  // Forward declaring type: ServicePoint
  class ServicePoint;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: BindIPEndPoint
  class BindIPEndPoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::BindIPEndPoint);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::BindIPEndPoint*, "System.Net", "BindIPEndPoint");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.BindIPEndPoint
  // [TokenAttribute] Offset: FFFFFFFF
  class BindIPEndPoint : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xE68FDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BindIPEndPoint* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::BindIPEndPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BindIPEndPoint*, creationType>(object, method)));
    }
    // public System.Net.IPEndPoint Invoke(System.Net.ServicePoint servicePoint, System.Net.IPEndPoint remoteEndPoint, System.Int32 retryCount)
    // Offset: 0xE68FEC
    ::System::Net::IPEndPoint* Invoke(::System::Net::ServicePoint* servicePoint, ::System::Net::IPEndPoint* remoteEndPoint, int retryCount);
    // public System.IAsyncResult BeginInvoke(System.Net.ServicePoint servicePoint, System.Net.IPEndPoint remoteEndPoint, System.Int32 retryCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0xE693A8
    ::System::IAsyncResult* BeginInvoke(::System::Net::ServicePoint* servicePoint, ::System::Net::IPEndPoint* remoteEndPoint, int retryCount, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Net.IPEndPoint EndInvoke(System.IAsyncResult result)
    // Offset: 0xE69444
    ::System::Net::IPEndPoint* EndInvoke(::System::IAsyncResult* result);
  }; // System.Net.BindIPEndPoint
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::BindIPEndPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::BindIPEndPoint::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (System::Net::BindIPEndPoint::*)(::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, int)>(&System::Net::BindIPEndPoint::Invoke)> {
  static const MethodInfo* get() {
    static auto* servicePoint = &::il2cpp_utils::GetClassFromName("System.Net", "ServicePoint")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* retryCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::BindIPEndPoint*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{servicePoint, remoteEndPoint, retryCount});
  }
};
// Writing MetadataGetter for method: System::Net::BindIPEndPoint::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::BindIPEndPoint::*)(::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::BindIPEndPoint::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* servicePoint = &::il2cpp_utils::GetClassFromName("System.Net", "ServicePoint")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* retryCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::BindIPEndPoint*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{servicePoint, remoteEndPoint, retryCount, callback, object});
  }
};
// Writing MetadataGetter for method: System::Net::BindIPEndPoint::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (System::Net::BindIPEndPoint::*)(::System::IAsyncResult*)>(&System::Net::BindIPEndPoint::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::BindIPEndPoint*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};