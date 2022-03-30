// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Proyecto26
namespace Proyecto26 {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Proyecto26
namespace Proyecto26 {
  // Forward declaring type: StaticCoroutine
  class StaticCoroutine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Proyecto26::StaticCoroutine);
DEFINE_IL2CPP_ARG_TYPE(::Proyecto26::StaticCoroutine*, "Proyecto26", "StaticCoroutine");
// Type namespace: Proyecto26
namespace Proyecto26 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Proyecto26.StaticCoroutine
  // [TokenAttribute] Offset: FFFFFFFF
  class StaticCoroutine : public ::Il2CppObject {
    public:
    // Nested type: ::Proyecto26::StaticCoroutine::CoroutineHolder
    class CoroutineHolder;
    // Get static field: static private Proyecto26.StaticCoroutine/Proyecto26.CoroutineHolder _runner
    static ::Proyecto26::StaticCoroutine::CoroutineHolder* _get__runner();
    // Set static field: static private Proyecto26.StaticCoroutine/Proyecto26.CoroutineHolder _runner
    static void _set__runner(::Proyecto26::StaticCoroutine::CoroutineHolder* value);
    // static private Proyecto26.StaticCoroutine/Proyecto26.CoroutineHolder get_Runner()
    // Offset: 0x13BD864
    static ::Proyecto26::StaticCoroutine::CoroutineHolder* get_Runner();
    // static public UnityEngine.Coroutine StartCoroutine(System.Collections.IEnumerator coroutine)
    // Offset: 0x13BD9A8
    static ::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator* coroutine);
  }; // Proyecto26.StaticCoroutine
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Proyecto26::StaticCoroutine::get_Runner
// Il2CppName: get_Runner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Proyecto26::StaticCoroutine::CoroutineHolder* (*)()>(&Proyecto26::StaticCoroutine::get_Runner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::StaticCoroutine*), "get_Runner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Proyecto26::StaticCoroutine::StartCoroutine
// Il2CppName: StartCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Coroutine* (*)(::System::Collections::IEnumerator*)>(&Proyecto26::StaticCoroutine::StartCoroutine)> {
  static const MethodInfo* get() {
    static auto* coroutine = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Proyecto26::StaticCoroutine*), "StartCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{coroutine});
  }
};