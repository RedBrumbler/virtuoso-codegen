// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.SoundEmitter
#include "OVR/SoundEmitter.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: OVR.Fade
#include "OVR/Fade.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::SoundEmitter::$FadeSoundChannel$d__64);
DEFINE_IL2CPP_ARG_TYPE(::OVR::SoundEmitter::$FadeSoundChannel$d__64*, "OVR", "SoundEmitter/<FadeSoundChannel>d__64");
// Type namespace: OVR
namespace OVR {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: OVR.SoundEmitter/OVR.<FadeSoundChannel>d__64
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SoundEmitter::$FadeSoundChannel$d__64 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Single delaySecs
    // Size: 0x4
    // Offset: 0x20
    float delaySecs;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public OVR.Fade fadeType
    // Size: 0x4
    // Offset: 0x24
    ::OVR::Fade fadeType;
    // Field size check
    static_assert(sizeof(::OVR::Fade) == 0x4);
    // public System.Single defaultVolume
    // Size: 0x4
    // Offset: 0x28
    float defaultVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: defaultVolume and: $$4__this
    char __padding4[0x4] = {};
    // public OVR.SoundEmitter <>4__this
    // Size: 0x8
    // Offset: 0x30
    ::OVR::SoundEmitter* $$4__this;
    // Field size check
    static_assert(sizeof(::OVR::SoundEmitter*) == 0x8);
    // public System.Single fadeTime
    // Size: 0x4
    // Offset: 0x38
    float fadeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <start>5__2
    // Size: 0x4
    // Offset: 0x3C
    float $start$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <end>5__3
    // Size: 0x4
    // Offset: 0x40
    float $end$5__3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean <restartPlay>5__4
    // Size: 0x1
    // Offset: 0x44
    bool $restartPlay$5__4;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: $restartPlay$5__4 and: $startTime$5__5
    char __padding9[0x3] = {};
    // private System.Single <startTime>5__5
    // Size: 0x4
    // Offset: 0x48
    float $startTime$5__5;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <elapsedTime>5__6
    // Size: 0x4
    // Offset: 0x4C
    float $elapsedTime$5__6;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public System.Single delaySecs
    float& dyn_delaySecs();
    // Get instance field reference: public OVR.Fade fadeType
    ::OVR::Fade& dyn_fadeType();
    // Get instance field reference: public System.Single defaultVolume
    float& dyn_defaultVolume();
    // Get instance field reference: public OVR.SoundEmitter <>4__this
    ::OVR::SoundEmitter*& dyn_$$4__this();
    // Get instance field reference: public System.Single fadeTime
    float& dyn_fadeTime();
    // Get instance field reference: private System.Single <start>5__2
    float& dyn_$start$5__2();
    // Get instance field reference: private System.Single <end>5__3
    float& dyn_$end$5__3();
    // Get instance field reference: private System.Boolean <restartPlay>5__4
    bool& dyn_$restartPlay$5__4();
    // Get instance field reference: private System.Single <startTime>5__5
    float& dyn_$startTime$5__5();
    // Get instance field reference: private System.Single <elapsedTime>5__6
    float& dyn_$elapsedTime$5__6();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x12A8454
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x12A849C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x12A72E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoundEmitter::$FadeSoundChannel$d__64* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::SoundEmitter::$FadeSoundChannel$d__64::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoundEmitter::$FadeSoundChannel$d__64*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x12A8218
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x12A821C
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x12A845C
    void System_Collections_IEnumerator_Reset();
  }; // OVR.SoundEmitter/OVR.<FadeSoundChannel>d__64
  #pragma pack(pop)
  static check_size<sizeof(SoundEmitter::$FadeSoundChannel$d__64), 76 + sizeof(float)> __OVR_SoundEmitter_$FadeSoundChannel$d__64SizeCheck;
  static_assert(sizeof(SoundEmitter::$FadeSoundChannel$d__64) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::SoundEmitter::$FadeSoundChannel$d__64::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (OVR::SoundEmitter::$FadeSoundChannel$d__64::*)()>(&OVR::SoundEmitter::$FadeSoundChannel$d__64::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter::$FadeSoundChannel$d__64*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::$FadeSoundChannel$d__64::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (OVR::SoundEmitter::$FadeSoundChannel$d__64::*)()>(&OVR::SoundEmitter::$FadeSoundChannel$d__64::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter::$FadeSoundChannel$d__64*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::$FadeSoundChannel$d__64::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::SoundEmitter::$FadeSoundChannel$d__64::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::$FadeSoundChannel$d__64::*)()>(&OVR::SoundEmitter::$FadeSoundChannel$d__64::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter::$FadeSoundChannel$d__64*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::$FadeSoundChannel$d__64::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::SoundEmitter::$FadeSoundChannel$d__64::*)()>(&OVR::SoundEmitter::$FadeSoundChannel$d__64::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter::$FadeSoundChannel$d__64*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::SoundEmitter::$FadeSoundChannel$d__64::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::SoundEmitter::$FadeSoundChannel$d__64::*)()>(&OVR::SoundEmitter::$FadeSoundChannel$d__64::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::SoundEmitter::$FadeSoundChannel$d__64*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
