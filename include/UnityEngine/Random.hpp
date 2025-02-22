// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Random
  class Random;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Random);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Random*, "UnityEngine", "Random");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Random
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 566D08
  class Random : public ::Il2CppObject {
    public:
    // static public System.Single get_value()
    // Offset: 0x9D4474
    static float get_value();
    // static public UnityEngine.Vector3 get_insideUnitSphere()
    // Offset: 0x9D44A8
    static ::UnityEngine::Vector3 get_insideUnitSphere();
    // static public UnityEngine.Vector2 get_insideUnitCircle()
    // Offset: 0x9D4580
    static ::UnityEngine::Vector2 get_insideUnitCircle();
    // static public UnityEngine.Vector3 get_onUnitSphere()
    // Offset: 0x9D45C8
    static ::UnityEngine::Vector3 get_onUnitSphere();
    // static public UnityEngine.Quaternion get_rotation()
    // Offset: 0x9D4660
    static ::UnityEngine::Quaternion get_rotation();
    // static public UnityEngine.Quaternion get_rotationUniform()
    // Offset: 0x9D46F4
    static ::UnityEngine::Quaternion get_rotationUniform();
    // static public System.Single Range(System.Single minInclusive, System.Single maxInclusive)
    // Offset: 0x9D4388
    static float Range(float minInclusive, float maxInclusive);
    // static public System.Int32 Range(System.Int32 minInclusive, System.Int32 maxExclusive)
    // Offset: 0x9D43D4
    static int Range(int minInclusive, int maxExclusive);
    // static private System.Int32 RandomRangeInt(System.Int32 minInclusive, System.Int32 maxExclusive)
    // Offset: 0x9D4424
    static int RandomRangeInt(int minInclusive, int maxExclusive);
    // static private System.Void GetRandomUnitCircle(out UnityEngine.Vector2 output)
    // Offset: 0x9D4540
    static void GetRandomUnitCircle(ByRef<::UnityEngine::Vector2> output);
    // static private System.Void get_insideUnitSphere_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x9D4500
    static void get_insideUnitSphere_Injected(ByRef<::UnityEngine::Vector3> ret);
    // static private System.Void get_onUnitSphere_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x9D4620
    static void get_onUnitSphere_Injected(ByRef<::UnityEngine::Vector3> ret);
    // static private System.Void get_rotation_Injected(out UnityEngine.Quaternion ret)
    // Offset: 0x9D46B4
    static void get_rotation_Injected(ByRef<::UnityEngine::Quaternion> ret);
    // static private System.Void get_rotationUniform_Injected(out UnityEngine.Quaternion ret)
    // Offset: 0x9D4748
    static void get_rotationUniform_Injected(ByRef<::UnityEngine::Quaternion> ret);
  }; // UnityEngine.Random
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Random::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::Random::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::get_insideUnitSphere
// Il2CppName: get_insideUnitSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)()>(&UnityEngine::Random::get_insideUnitSphere)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "get_insideUnitSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::get_insideUnitCircle
// Il2CppName: get_insideUnitCircle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)()>(&UnityEngine::Random::get_insideUnitCircle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "get_insideUnitCircle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::get_onUnitSphere
// Il2CppName: get_onUnitSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)()>(&UnityEngine::Random::get_onUnitSphere)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "get_onUnitSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::get_rotation
// Il2CppName: get_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)()>(&UnityEngine::Random::get_rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "get_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::get_rotationUniform
// Il2CppName: get_rotationUniform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)()>(&UnityEngine::Random::get_rotationUniform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "get_rotationUniform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::Range
// Il2CppName: Range
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float)>(&UnityEngine::Random::Range)> {
  static const MethodInfo* get() {
    static auto* minInclusive = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxInclusive = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "Range", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minInclusive, maxInclusive});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::Range
// Il2CppName: Range
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&UnityEngine::Random::Range)> {
  static const MethodInfo* get() {
    static auto* minInclusive = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxExclusive = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "Range", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minInclusive, maxExclusive});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::RandomRangeInt
// Il2CppName: RandomRangeInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&UnityEngine::Random::RandomRangeInt)> {
  static const MethodInfo* get() {
    static auto* minInclusive = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxExclusive = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "RandomRangeInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minInclusive, maxExclusive});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::GetRandomUnitCircle
// Il2CppName: GetRandomUnitCircle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::Random::GetRandomUnitCircle)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "GetRandomUnitCircle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::get_insideUnitSphere_Injected
// Il2CppName: get_insideUnitSphere_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Random::get_insideUnitSphere_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "get_insideUnitSphere_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::get_onUnitSphere_Injected
// Il2CppName: get_onUnitSphere_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Random::get_onUnitSphere_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "get_onUnitSphere_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::get_rotation_Injected
// Il2CppName: get_rotation_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::Random::get_rotation_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "get_rotation_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Random::get_rotationUniform_Injected
// Il2CppName: get_rotationUniform_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::Random::get_rotationUniform_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Random*), "get_rotationUniform_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
