// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarComponent_Offsets
  struct ovrAvatarComponent_Offsets;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarComponent_Offsets, "", "ovrAvatarComponent_Offsets");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarComponent_Offsets
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarComponent_Offsets/*, public ::System::ValueType*/ {
    public:
    // Creating value type constructor for type: ovrAvatarComponent_Offsets
    constexpr ovrAvatarComponent_Offsets() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public System.Int64 transform
    static int64_t _get_transform();
    // Set static field: static public System.Int64 transform
    static void _set_transform(int64_t value);
    // Get static field: static public System.Int32 renderPartCount
    static int _get_renderPartCount();
    // Set static field: static public System.Int32 renderPartCount
    static void _set_renderPartCount(int value);
    // Get static field: static public System.Int32 renderParts
    static int _get_renderParts();
    // Set static field: static public System.Int32 renderParts
    static void _set_renderParts(int value);
    // Get static field: static public System.Int32 name
    static int _get_name();
    // Set static field: static public System.Int32 name
    static void _set_name(int value);
    // static private System.Void .cctor()
    // Offset: 0x1357D6C
    static void _cctor();
  }; // ovrAvatarComponent_Offsets
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ovrAvatarComponent_Offsets::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ovrAvatarComponent_Offsets::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ovrAvatarComponent_Offsets), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
