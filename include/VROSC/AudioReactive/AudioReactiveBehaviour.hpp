// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Forward declaring type: AudioReactiveBehaviour
  class AudioReactiveBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::AudioReactive::AudioReactiveBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::AudioReactiveBehaviour*, "VROSC.AudioReactive", "AudioReactiveBehaviour");
// Type namespace: VROSC.AudioReactive
namespace VROSC::AudioReactive {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.AudioReactive.AudioReactiveBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioReactiveBehaviour : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat
    struct ReactiveBeat;
    // Size: 0x14
    #pragma pack(push, 1)
    // Autogenerated type: VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat
    // [TokenAttribute] Offset: FFFFFFFF
    struct ReactiveBeat/*, public ::System::Enum*/ {
      public:
      // Writing base type padding for base size: 0x0 to desired offset: 0x10
      char ___base_padding[0x10] = {};
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x10
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ReactiveBeat
      constexpr ReactiveBeat(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat Beat1
      static constexpr const int Beat1 = 1;
      // Get static field: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat Beat1
      static ::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat _get_Beat1();
      // Set static field: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat Beat1
      static void _set_Beat1(::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat value);
      // static field const value: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat Beat2
      static constexpr const int Beat2 = 2;
      // Get static field: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat Beat2
      static ::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat _get_Beat2();
      // Set static field: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat Beat2
      static void _set_Beat2(::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat value);
      // static field const value: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat Beat3
      static constexpr const int Beat3 = 4;
      // Get static field: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat Beat3
      static ::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat _get_Beat3();
      // Set static field: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat Beat3
      static void _set_Beat3(::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat value);
      // static field const value: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat Beat4
      static constexpr const int Beat4 = 8;
      // Get static field: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat Beat4
      static ::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat _get_Beat4();
      // Set static field: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat Beat4
      static void _set_Beat4(::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat value);
      // static field const value: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat PlayerBass
      static constexpr const int PlayerBass = 16;
      // Get static field: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat PlayerBass
      static ::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat _get_PlayerBass();
      // Set static field: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat PlayerBass
      static void _set_PlayerBass(::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat value);
      // static field const value: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat PlayerMid
      static constexpr const int PlayerMid = 32;
      // Get static field: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat PlayerMid
      static ::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat _get_PlayerMid();
      // Set static field: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat PlayerMid
      static void _set_PlayerMid(::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat value);
      // static field const value: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat PlayerTop
      static constexpr const int PlayerTop = 64;
      // Get static field: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat PlayerTop
      static ::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat _get_PlayerTop();
      // Set static field: static public VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat PlayerTop
      static void _set_PlayerTop(::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat
    #pragma pack(pop)
    static check_size<sizeof(AudioReactiveBehaviour::ReactiveBeat), 16 + sizeof(int)> __VROSC_AudioReactive_AudioReactiveBehaviour_ReactiveBeatSizeCheck;
    static_assert(sizeof(AudioReactiveBehaviour::ReactiveBeat) == 0x14);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [BitMaskAttribute] Offset: 0x676330
    // private VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat _reactOn
    // Size: 0x14
    // Offset: 0x18
    ::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat reactOn;
    // Field size check
    static_assert(sizeof(::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat) == 0x14);
    // private System.Int32 _coolDown
    // Size: 0x4
    // Offset: 0x1C
    int coolDown;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _onCoolDown
    // Size: 0x4
    // Offset: 0x20
    int onCoolDown;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.AudioReactive.AudioReactiveBehaviour/VROSC.AudioReactive.ReactiveBeat _reactOn
    ::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat& dyn__reactOn();
    // Get instance field reference: private System.Int32 _coolDown
    int& dyn__coolDown();
    // Get instance field reference: private System.Int32 _onCoolDown
    int& dyn__onCoolDown();
    // protected System.Void Awake()
    // Offset: 0x1371E74
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x1371E78
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1371F64
    void OnDisable();
    // private System.Void FilterBeat(System.Int32 beat)
    // Offset: 0x1372050
    void FilterBeat(int beat);
    // protected System.Void OnBeat(System.Int32 beat)
    // Offset: 0x13720A0
    void OnBeat(int beat);
    // public System.Void .ctor()
    // Offset: 0x13720A4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioReactiveBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::AudioReactive::AudioReactiveBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioReactiveBehaviour*, creationType>()));
    }
  }; // VROSC.AudioReactive.AudioReactiveBehaviour
  #pragma pack(pop)
  static check_size<sizeof(AudioReactiveBehaviour), 32 + sizeof(int)> __VROSC_AudioReactive_AudioReactiveBehaviourSizeCheck;
  static_assert(sizeof(AudioReactiveBehaviour) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::AudioReactiveBehaviour::ReactiveBeat, "VROSC.AudioReactive", "AudioReactiveBehaviour/ReactiveBeat");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveBehaviour::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::AudioReactiveBehaviour::*)()>(&VROSC::AudioReactive::AudioReactiveBehaviour::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::AudioReactiveBehaviour*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveBehaviour::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::AudioReactiveBehaviour::*)()>(&VROSC::AudioReactive::AudioReactiveBehaviour::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::AudioReactiveBehaviour*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveBehaviour::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::AudioReactiveBehaviour::*)()>(&VROSC::AudioReactive::AudioReactiveBehaviour::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::AudioReactiveBehaviour*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveBehaviour::FilterBeat
// Il2CppName: FilterBeat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::AudioReactiveBehaviour::*)(int)>(&VROSC::AudioReactive::AudioReactiveBehaviour::FilterBeat)> {
  static const MethodInfo* get() {
    static auto* beat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::AudioReactiveBehaviour*), "FilterBeat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beat});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveBehaviour::OnBeat
// Il2CppName: OnBeat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::AudioReactive::AudioReactiveBehaviour::*)(int)>(&VROSC::AudioReactive::AudioReactiveBehaviour::OnBeat)> {
  static const MethodInfo* get() {
    static auto* beat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::AudioReactive::AudioReactiveBehaviour*), "OnBeat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beat});
  }
};
// Writing MetadataGetter for method: VROSC::AudioReactive::AudioReactiveBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!