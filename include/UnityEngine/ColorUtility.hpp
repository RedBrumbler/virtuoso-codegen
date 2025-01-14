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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color32
  struct Color32;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ColorUtility
  class ColorUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ColorUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ColorUtility*, "UnityEngine", "ColorUtility");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ColorUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 5664EC
  class ColorUtility : public ::Il2CppObject {
    public:
    // static System.Boolean DoTryParseHtmlColor(System.String htmlString, out UnityEngine.Color32 color)
    // Offset: 0xE35A6C
    static bool DoTryParseHtmlColor(::StringW htmlString, ByRef<::UnityEngine::Color32> color);
    // static public System.Boolean TryParseHtmlString(System.String htmlString, out UnityEngine.Color color)
    // Offset: 0xE35ABC
    static bool TryParseHtmlString(::StringW htmlString, ByRef<::UnityEngine::Color> color);
    // static public System.String ToHtmlStringRGB(UnityEngine.Color color)
    // Offset: 0xE35B74
    static ::StringW ToHtmlStringRGB(::UnityEngine::Color color);
  }; // UnityEngine.ColorUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ColorUtility::DoTryParseHtmlColor
// Il2CppName: DoTryParseHtmlColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::UnityEngine::Color32>)>(&UnityEngine::ColorUtility::DoTryParseHtmlColor)> {
  static const MethodInfo* get() {
    static auto* htmlString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ColorUtility*), "DoTryParseHtmlColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{htmlString, color});
  }
};
// Writing MetadataGetter for method: UnityEngine::ColorUtility::TryParseHtmlString
// Il2CppName: TryParseHtmlString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::UnityEngine::Color>)>(&UnityEngine::ColorUtility::TryParseHtmlString)> {
  static const MethodInfo* get() {
    static auto* htmlString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ColorUtility*), "TryParseHtmlString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{htmlString, color});
  }
};
// Writing MetadataGetter for method: UnityEngine::ColorUtility::ToHtmlStringRGB
// Il2CppName: ToHtmlStringRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Color)>(&UnityEngine::ColorUtility::ToHtmlStringRGB)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ColorUtility*), "ToHtmlStringRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
