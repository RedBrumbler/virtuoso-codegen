// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebExceptionStatus
  struct WebExceptionStatus;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: NetRes
  class NetRes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::NetRes);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetRes*, "System.Net", "NetRes");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetRes
  // [TokenAttribute] Offset: FFFFFFFF
  class NetRes : public ::Il2CppObject {
    public:
    // static public System.String GetWebStatusString(System.String Res, System.Net.WebExceptionStatus Status)
    // Offset: 0xBF747C
    static ::StringW GetWebStatusString(::StringW Res, ::System::Net::WebExceptionStatus Status);
    // static public System.String GetWebStatusString(System.Net.WebExceptionStatus Status)
    // Offset: 0xBF7550
    static ::StringW GetWebStatusString(::System::Net::WebExceptionStatus Status);
  }; // System.Net.NetRes
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::NetRes::GetWebStatusString
// Il2CppName: GetWebStatusString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::Net::WebExceptionStatus)>(&System::Net::NetRes::GetWebStatusString)> {
  static const MethodInfo* get() {
    static auto* Res = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* Status = &::il2cpp_utils::GetClassFromName("System.Net", "WebExceptionStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetRes*), "GetWebStatusString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Res, Status});
  }
};
// Writing MetadataGetter for method: System::Net::NetRes::GetWebStatusString
// Il2CppName: GetWebStatusString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Net::WebExceptionStatus)>(&System::Net::NetRes::GetWebStatusString)> {
  static const MethodInfo* get() {
    static auto* Status = &::il2cpp_utils::GetClassFromName("System.Net", "WebExceptionStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::NetRes*), "GetWebStatusString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Status});
  }
};