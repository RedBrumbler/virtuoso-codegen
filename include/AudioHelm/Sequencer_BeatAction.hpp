// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AudioHelm.Sequencer
#include "AudioHelm/Sequencer.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::AudioHelm::Sequencer::BeatAction);
DEFINE_IL2CPP_ARG_TYPE(::AudioHelm::Sequencer::BeatAction*, "AudioHelm", "Sequencer/BeatAction");
// Type namespace: AudioHelm
namespace AudioHelm {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: AudioHelm.Sequencer/AudioHelm.BeatAction
  // [TokenAttribute] Offset: FFFFFFFF
  class Sequencer::BeatAction : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x13498F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sequencer::BeatAction* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::AudioHelm::Sequencer::BeatAction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sequencer::BeatAction*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Int32 index)
    // Offset: 0x1349904
    void Invoke(int index);
    // public System.IAsyncResult BeginInvoke(System.Int32 index, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1349B30
    ::System::IAsyncResult* BeginInvoke(int index, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1349BB8
    void EndInvoke(::System::IAsyncResult* result);
  }; // AudioHelm.Sequencer/AudioHelm.BeatAction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: AudioHelm::Sequencer::BeatAction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: AudioHelm::Sequencer::BeatAction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::Sequencer::BeatAction::*)(int)>(&AudioHelm::Sequencer::BeatAction::Invoke)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Sequencer::BeatAction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: AudioHelm::Sequencer::BeatAction::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (AudioHelm::Sequencer::BeatAction::*)(int, ::System::AsyncCallback*, ::Il2CppObject*)>(&AudioHelm::Sequencer::BeatAction::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Sequencer::BeatAction*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, callback, object});
  }
};
// Writing MetadataGetter for method: AudioHelm::Sequencer::BeatAction::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AudioHelm::Sequencer::BeatAction::*)(::System::IAsyncResult*)>(&AudioHelm::Sequencer::BeatAction::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(AudioHelm::Sequencer::BeatAction*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};