// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.AudioManager
#include "OVR/AudioManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Forward declaring namespace: OVR
namespace OVR {
  // Forward declaring type: SoundEmitter
  class SoundEmitter;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::AudioManager::$$c);
DEFINE_IL2CPP_ARG_TYPE(::OVR::AudioManager::$$c*, "OVR", "AudioManager/<>c");
// Type namespace: OVR
namespace OVR {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVR.AudioManager/OVR.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AudioManager::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly OVR.AudioManager/OVR.<>c <>9
    static ::OVR::AudioManager::$$c* _get_$$9();
    // Set static field: static public readonly OVR.AudioManager/OVR.<>c <>9
    static void _set_$$9(::OVR::AudioManager::$$c* value);
    // Get static field: static public System.Predicate`1<OVR.SoundEmitter> <>9__77_1
    static ::System::Predicate_1<::OVR::SoundEmitter*>* _get_$$9__77_1();
    // Set static field: static public System.Predicate`1<OVR.SoundEmitter> <>9__77_1
    static void _set_$$9__77_1(::System::Predicate_1<::OVR::SoundEmitter*>* value);
    // static private System.Void .cctor()
    // Offset: 0x12A7F4C
    static void _cctor();
    // System.Boolean <FindFreeEmitter>b__77_1(OVR.SoundEmitter item)
    // Offset: 0x12A7FB4
    bool $FindFreeEmitter$b__77_1(::OVR::SoundEmitter* item);
    // public System.Void .ctor()
    // Offset: 0x12A7FAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::AudioManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioManager::$$c*, creationType>()));
    }
  }; // OVR.AudioManager/OVR.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::AudioManager::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&OVR::AudioManager::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::AudioManager::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::AudioManager::$$c::$FindFreeEmitter$b__77_1
// Il2CppName: <FindFreeEmitter>b__77_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::AudioManager::$$c::*)(::OVR::SoundEmitter*)>(&OVR::AudioManager::$$c::$FindFreeEmitter$b__77_1)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("OVR", "SoundEmitter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::AudioManager::$$c*), "<FindFreeEmitter>b__77_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: OVR::AudioManager::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
