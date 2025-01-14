// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: Loop
  class Loop;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::Loop);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Loop*, "VROSC", "Loop");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.Loop
  // [TokenAttribute] Offset: FFFFFFFF
  class Loop : public ::Il2CppObject {
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
    // public System.Single[] LoopAudio
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<float> LoopAudio;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] LoopTailAudio
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<float> LoopTailAudio;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Int32 LoopLength
    // Size: 0x4
    // Offset: 0x20
    int LoopLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <GlobalSyncStartOffset>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    int GlobalSyncStartOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Single[] LoopAudio
    ::ArrayW<float>& dyn_LoopAudio();
    // Get instance field reference: public System.Single[] LoopTailAudio
    ::ArrayW<float>& dyn_LoopTailAudio();
    // Get instance field reference: public System.Int32 LoopLength
    int& dyn_LoopLength();
    // Get instance field reference: private System.Int32 <GlobalSyncStartOffset>k__BackingField
    int& dyn_$GlobalSyncStartOffset$k__BackingField();
    // public System.Int32 get_TailLength()
    // Offset: 0x1394748
    int get_TailLength();
    // public System.Int32 get_LoopLengthInSamples()
    // Offset: 0x139476C
    int get_LoopLengthInSamples();
    // public System.Int32 get_GlobalSyncStartOffset()
    // Offset: 0x139481C
    int get_GlobalSyncStartOffset();
    // public System.Void set_GlobalSyncStartOffset(System.Int32 value)
    // Offset: 0x1394824
    void set_GlobalSyncStartOffset(int value);
    // public System.Single get_BeatLengthMultiplier()
    // Offset: 0x139482C
    float get_BeatLengthMultiplier();
    // public System.Single GetAudio(System.Int32 index, System.Boolean addTail)
    // Offset: 0x1394898
    float GetAudio(int index, bool addTail);
    // public System.Int32 GetNextLoopStartAfterSample(System.Int32 sample)
    // Offset: 0x1394900
    int GetNextLoopStartAfterSample(int sample);
    // public System.Void .ctor()
    // Offset: 0x139499C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Loop* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::Loop::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Loop*, creationType>()));
    }
  }; // VROSC.Loop
  #pragma pack(pop)
  static check_size<sizeof(Loop), 36 + sizeof(int)> __VROSC_LoopSizeCheck;
  static_assert(sizeof(Loop) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::Loop::get_TailLength
// Il2CppName: get_TailLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::Loop::*)()>(&VROSC::Loop::get_TailLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Loop*), "get_TailLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Loop::get_LoopLengthInSamples
// Il2CppName: get_LoopLengthInSamples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::Loop::*)()>(&VROSC::Loop::get_LoopLengthInSamples)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Loop*), "get_LoopLengthInSamples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Loop::get_GlobalSyncStartOffset
// Il2CppName: get_GlobalSyncStartOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::Loop::*)()>(&VROSC::Loop::get_GlobalSyncStartOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Loop*), "get_GlobalSyncStartOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Loop::set_GlobalSyncStartOffset
// Il2CppName: set_GlobalSyncStartOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::Loop::*)(int)>(&VROSC::Loop::set_GlobalSyncStartOffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Loop*), "set_GlobalSyncStartOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::Loop::get_BeatLengthMultiplier
// Il2CppName: get_BeatLengthMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::Loop::*)()>(&VROSC::Loop::get_BeatLengthMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::Loop*), "get_BeatLengthMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::Loop::GetAudio
// Il2CppName: GetAudio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::Loop::*)(int, bool)>(&VROSC::Loop::GetAudio)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* addTail = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Loop*), "GetAudio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, addTail});
  }
};
// Writing MetadataGetter for method: VROSC::Loop::GetNextLoopStartAfterSample
// Il2CppName: GetNextLoopStartAfterSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::Loop::*)(int)>(&VROSC::Loop::GetNextLoopStartAfterSample)> {
  static const MethodInfo* get() {
    static auto* sample = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::Loop*), "GetNextLoopStartAfterSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sample});
  }
};
// Writing MetadataGetter for method: VROSC::Loop::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
