// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Facebook.WitAi.VoiceService
#include "Facebook/WitAi/VoiceService.hpp"
// Including type: Facebook.WitAi.IWitRuntimeConfigProvider
#include "Facebook/WitAi/IWitRuntimeConfigProvider.hpp"
// Including type: Facebook.WitAi.Data.RingBuffer`1
#include "Facebook/WitAi/Data/RingBuffer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Facebook::WitAi
namespace Facebook::WitAi {
  // Forward declaring type: WitRequest
  class WitRequest;
}
// Forward declaring namespace: Facebook::WitAi::Configuration
namespace Facebook::WitAi::Configuration {
  // Forward declaring type: WitRuntimeConfiguration
  class WitRuntimeConfiguration;
  // Forward declaring type: WitRequestOptions
  class WitRequestOptions;
}
// Forward declaring namespace: Facebook::WitAi::Interfaces
namespace Facebook::WitAi::Interfaces {
  // Forward declaring type: IAudioInputSource
  class IAudioInputSource;
  // Forward declaring type: ITranscriptionProvider
  class ITranscriptionProvider;
}
// Forward declaring namespace: System::Collections::Concurrent
namespace System::Collections::Concurrent {
  // Forward declaring type: ConcurrentQueue`1<T>
  template<typename T>
  class ConcurrentQueue_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
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
// Type namespace: Facebook.WitAi
namespace Facebook::WitAi {
  // Forward declaring type: Wit
  class Wit;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Facebook::WitAi::Wit);
DEFINE_IL2CPP_ARG_TYPE(::Facebook::WitAi::Wit*, "Facebook.WitAi", "Wit");
// Type namespace: Facebook.WitAi
namespace Facebook::WitAi {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: Facebook.WitAi.Wit
  // [TokenAttribute] Offset: FFFFFFFF
  class Wit : public ::Facebook::WitAi::VoiceService/*, public ::Facebook::WitAi::IWitRuntimeConfigProvider*/ {
    public:
    // Nested type: ::Facebook::WitAi::Wit::$DeactivateDueToTimeLimit$d__43
    class $DeactivateDueToTimeLimit$d__43;
    // Nested type: ::Facebook::WitAi::Wit::$$c__DisplayClass47_0
    class $$c__DisplayClass47_0;
    // Nested type: ::Facebook::WitAi::Wit::$$c__DisplayClass47_1
    class $$c__DisplayClass47_1;
    // Nested type: ::Facebook::WitAi::Wit::$$c__DisplayClass55_0
    class $$c__DisplayClass55_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [HeaderAttribute] Offset: 0x5B143C
    // [FormerlySerializedAsAttribute] Offset: 0x5B143C
    // [TooltipAttribute] Offset: 0x5B143C
    // private Facebook.WitAi.Configuration.WitRuntimeConfiguration runtimeConfiguration
    // Size: 0x8
    // Offset: 0x20
    ::Facebook::WitAi::Configuration::WitRuntimeConfiguration* runtimeConfiguration;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Configuration::WitRuntimeConfiguration*) == 0x8);
    // private System.Single activationTime
    // Size: 0x4
    // Offset: 0x28
    float activationTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: activationTime and: micInput
    char __padding1[0x4] = {};
    // private Facebook.WitAi.Interfaces.IAudioInputSource micInput
    // Size: 0x8
    // Offset: 0x30
    ::Facebook::WitAi::Interfaces::IAudioInputSource* micInput;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Interfaces::IAudioInputSource*) == 0x8);
    // private Facebook.WitAi.Configuration.WitRequestOptions currentRequestOptions
    // Size: 0x8
    // Offset: 0x38
    ::Facebook::WitAi::Configuration::WitRequestOptions* currentRequestOptions;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Configuration::WitRequestOptions*) == 0x8);
    // private System.Single lastMinVolumeLevelTime
    // Size: 0x4
    // Offset: 0x40
    float lastMinVolumeLevelTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lastMinVolumeLevelTime and: activeRequest
    char __padding4[0x4] = {};
    // private Facebook.WitAi.WitRequest activeRequest
    // Size: 0x8
    // Offset: 0x48
    ::Facebook::WitAi::WitRequest* activeRequest;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::WitRequest*) == 0x8);
    // private System.Collections.Concurrent.ConcurrentQueue`1<System.Action> updateQueue
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>* updateQueue;
    // Field size check
    static_assert(sizeof(::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*) == 0x8);
    // private System.Boolean isSoundWakeActive
    // Size: 0x1
    // Offset: 0x58
    bool isSoundWakeActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isSoundWakeActive and: micDataBuffer
    char __padding7[0x7] = {};
    // private Facebook.WitAi.Data.RingBuffer`1<System.Byte> micDataBuffer
    // Size: 0x8
    // Offset: 0x60
    ::Facebook::WitAi::Data::RingBuffer_1<uint8_t>* micDataBuffer;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Data::RingBuffer_1<uint8_t>*) == 0x8);
    // private Facebook.WitAi.Data.RingBuffer`1/Facebook.WitAi.Data.Marker<System.Byte> lastSampleMarker
    // Size: 0x8
    // Offset: 0x68
    typename ::Facebook::WitAi::Data::RingBuffer_1<uint8_t>::Marker* lastSampleMarker;
    // Field size check
    static_assert(sizeof(typename ::Facebook::WitAi::Data::RingBuffer_1<uint8_t>::Marker*) == 0x8);
    // private System.Byte[] writeBuffer
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<uint8_t> writeBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Boolean minKeepAliveWasHit
    // Size: 0x1
    // Offset: 0x78
    bool minKeepAliveWasHit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isActive
    // Size: 0x1
    // Offset: 0x79
    bool isActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isActive and: byteDataBuffer
    char __padding12[0x6] = {};
    // private System.Byte[] byteDataBuffer
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<uint8_t> byteDataBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private Facebook.WitAi.Interfaces.ITranscriptionProvider activeTranscriptionProvider
    // Size: 0x8
    // Offset: 0x88
    ::Facebook::WitAi::Interfaces::ITranscriptionProvider* activeTranscriptionProvider;
    // Field size check
    static_assert(sizeof(::Facebook::WitAi::Interfaces::ITranscriptionProvider*) == 0x8);
    // private UnityEngine.Coroutine timeLimitCoroutine
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::Coroutine* timeLimitCoroutine;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    // private System.Boolean receivedTranscription
    // Size: 0x1
    // Offset: 0x98
    bool receivedTranscription;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: receivedTranscription and: lastWordTime
    char __padding16[0x3] = {};
    // private System.Single lastWordTime
    // Size: 0x4
    // Offset: 0x9C
    float lastWordTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Facebook::WitAi::IWitRuntimeConfigProvider
    operator ::Facebook::WitAi::IWitRuntimeConfigProvider() noexcept {
      return *reinterpret_cast<::Facebook::WitAi::IWitRuntimeConfigProvider*>(this);
    }
    // Get instance field reference: private Facebook.WitAi.Configuration.WitRuntimeConfiguration runtimeConfiguration
    ::Facebook::WitAi::Configuration::WitRuntimeConfiguration*& dyn_runtimeConfiguration();
    // Get instance field reference: private System.Single activationTime
    float& dyn_activationTime();
    // Get instance field reference: private Facebook.WitAi.Interfaces.IAudioInputSource micInput
    ::Facebook::WitAi::Interfaces::IAudioInputSource*& dyn_micInput();
    // Get instance field reference: private Facebook.WitAi.Configuration.WitRequestOptions currentRequestOptions
    ::Facebook::WitAi::Configuration::WitRequestOptions*& dyn_currentRequestOptions();
    // Get instance field reference: private System.Single lastMinVolumeLevelTime
    float& dyn_lastMinVolumeLevelTime();
    // Get instance field reference: private Facebook.WitAi.WitRequest activeRequest
    ::Facebook::WitAi::WitRequest*& dyn_activeRequest();
    // Get instance field reference: private System.Collections.Concurrent.ConcurrentQueue`1<System.Action> updateQueue
    ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>*& dyn_updateQueue();
    // Get instance field reference: private System.Boolean isSoundWakeActive
    bool& dyn_isSoundWakeActive();
    // Get instance field reference: private Facebook.WitAi.Data.RingBuffer`1<System.Byte> micDataBuffer
    ::Facebook::WitAi::Data::RingBuffer_1<uint8_t>*& dyn_micDataBuffer();
    // Get instance field reference: private Facebook.WitAi.Data.RingBuffer`1/Facebook.WitAi.Data.Marker<System.Byte> lastSampleMarker
    typename ::Facebook::WitAi::Data::RingBuffer_1<uint8_t>::Marker*& dyn_lastSampleMarker();
    // Get instance field reference: private System.Byte[] writeBuffer
    ::ArrayW<uint8_t>& dyn_writeBuffer();
    // Get instance field reference: private System.Boolean minKeepAliveWasHit
    bool& dyn_minKeepAliveWasHit();
    // Get instance field reference: private System.Boolean isActive
    bool& dyn_isActive();
    // Get instance field reference: private System.Byte[] byteDataBuffer
    ::ArrayW<uint8_t>& dyn_byteDataBuffer();
    // Get instance field reference: private Facebook.WitAi.Interfaces.ITranscriptionProvider activeTranscriptionProvider
    ::Facebook::WitAi::Interfaces::ITranscriptionProvider*& dyn_activeTranscriptionProvider();
    // Get instance field reference: private UnityEngine.Coroutine timeLimitCoroutine
    ::UnityEngine::Coroutine*& dyn_timeLimitCoroutine();
    // Get instance field reference: private System.Boolean receivedTranscription
    bool& dyn_receivedTranscription();
    // Get instance field reference: private System.Single lastWordTime
    float& dyn_lastWordTime();
    // public Facebook.WitAi.Configuration.WitRuntimeConfiguration get_RuntimeConfiguration()
    // Offset: 0x10FA22C
    ::Facebook::WitAi::Configuration::WitRuntimeConfiguration* get_RuntimeConfiguration();
    // public System.Void set_RuntimeConfiguration(Facebook.WitAi.Configuration.WitRuntimeConfiguration value)
    // Offset: 0x10FA234
    void set_RuntimeConfiguration(::Facebook::WitAi::Configuration::WitRuntimeConfiguration* value);
    // private System.Void Awake()
    // Offset: 0x10FAB78
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x10FAC74
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x10FAEE0
    void OnDisable();
    // private System.Void OnSampleReady(System.Int32 sampleCount, System.Single[] sample, System.Single levelMax)
    // Offset: 0x10FB150
    void OnSampleReady(int sampleCount, ::ArrayW<float> sample, float levelMax);
    // private System.Void OnFullTranscription(System.String transcription)
    // Offset: 0x10FBB44
    void OnFullTranscription(::StringW transcription);
    // private System.Void OnPartialTranscription(System.String transcription)
    // Offset: 0x10FBD64
    void OnPartialTranscription(::StringW transcription);
    // private System.Void OnTranscriptionMicLevelChanged(System.Single level)
    // Offset: 0x10FBDE4
    void OnTranscriptionMicLevelChanged(float level);
    // private System.Void OnMicLevelChanged(System.Single level)
    // Offset: 0x10FB598
    void OnMicLevelChanged(float level);
    // private System.Void OnStoppedListening()
    // Offset: 0x10FBEEC
    void OnStoppedListening();
    // private System.Void OnStartListening()
    // Offset: 0x10FBF08
    void OnStartListening();
    // private System.Void Update()
    // Offset: 0x10FBF24
    void Update();
    // private System.Collections.IEnumerator DeactivateDueToTimeLimit()
    // Offset: 0x10FC074
    ::System::Collections::IEnumerator* DeactivateDueToTimeLimit();
    // private System.Void OnWitReadyForData()
    // Offset: 0x10FCD40
    void OnWitReadyForData();
    // private System.Void DeactivateRequest()
    // Offset: 0x10FB8F4
    void DeactivateRequest();
    // private System.Byte[] Convert(System.Single[] samples)
    // Offset: 0x10FB63C
    ::ArrayW<uint8_t> Convert(::ArrayW<float> samples);
    // private System.Void SendTranscription(System.String transcription, Facebook.WitAi.Configuration.WitRequestOptions requestOptions)
    // Offset: 0x10FBC60
    void SendTranscription(::StringW transcription, ::Facebook::WitAi::Configuration::WitRequestOptions* requestOptions);
    // private System.Void QueueResult(Facebook.WitAi.WitRequest request)
    // Offset: 0x10FD380
    void QueueResult(::Facebook::WitAi::WitRequest* request);
    // private System.Void HandleResult(Facebook.WitAi.WitRequest request)
    // Offset: 0x10FD464
    void HandleResult(::Facebook::WitAi::WitRequest* request);
    // private System.Void <ActivateImmediately>b__47_0(System.String s)
    // Offset: 0x10FD6EC
    void $ActivateImmediately$b__47_0(::StringW s);
    // private System.Void <ActivateImmediately>b__47_1(System.String s)
    // Offset: 0x10FD7D0
    void $ActivateImmediately$b__47_1(::StringW s);
    // private System.Void <ActivateImmediately>b__47_2(Facebook.WitAi.WitRequest r)
    // Offset: 0x10FD8B4
    void $ActivateImmediately$b__47_2(::Facebook::WitAi::WitRequest* r);
    // public override System.Boolean get_Active()
    // Offset: 0x10FA1EC
    // Implemented from: Facebook.WitAi.VoiceService
    // Base method: System.Boolean VoiceService::get_Active()
    bool get_Active();
    // public override System.Boolean get_IsRequestActive()
    // Offset: 0x10FA20C
    // Implemented from: Facebook.WitAi.VoiceService
    // Base method: System.Boolean VoiceService::get_IsRequestActive()
    bool get_IsRequestActive();
    // public override Facebook.WitAi.Interfaces.ITranscriptionProvider get_TranscriptionProvider()
    // Offset: 0x10FA23C
    // Implemented from: Facebook.WitAi.VoiceService
    // Base method: Facebook.WitAi.Interfaces.ITranscriptionProvider VoiceService::get_TranscriptionProvider()
    ::Facebook::WitAi::Interfaces::ITranscriptionProvider* get_TranscriptionProvider();
    // public override System.Void set_TranscriptionProvider(Facebook.WitAi.Interfaces.ITranscriptionProvider value)
    // Offset: 0x10FA244
    // Implemented from: Facebook.WitAi.VoiceService
    // Base method: System.Void VoiceService::set_TranscriptionProvider(Facebook.WitAi.Interfaces.ITranscriptionProvider value)
    void set_TranscriptionProvider(::Facebook::WitAi::Interfaces::ITranscriptionProvider* value);
    // public override System.Boolean get_MicActive()
    // Offset: 0x10FAA94
    // Implemented from: Facebook.WitAi.VoiceService
    // Base method: System.Boolean VoiceService::get_MicActive()
    bool get_MicActive();
    // public override System.Boolean get_ShouldSendMicData()
    // Offset: 0x10FAB44
    // Implemented from: Facebook.WitAi.VoiceService
    // Base method: System.Boolean VoiceService::get_ShouldSendMicData()
    bool get_ShouldSendMicData();
    // public System.Void .ctor()
    // Offset: 0x10FD5EC
    // Implemented from: Facebook.WitAi.VoiceService
    // Base method: System.Void VoiceService::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Wit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Facebook::WitAi::Wit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Wit*, creationType>()));
    }
    // public override System.Void Activate()
    // Offset: 0x10FC10C
    // Implemented from: Facebook.WitAi.VoiceService
    // Base method: System.Void VoiceService::Activate()
    void Activate();
    // public override System.Void Activate(Facebook.WitAi.Configuration.WitRequestOptions requestOptions)
    // Offset: 0x10FC180
    // Implemented from: Facebook.WitAi.VoiceService
    // Base method: System.Void VoiceService::Activate(Facebook.WitAi.Configuration.WitRequestOptions requestOptions)
    void Activate(::Facebook::WitAi::Configuration::WitRequestOptions* requestOptions);
    // public override System.Void ActivateImmediately()
    // Offset: 0x10FC50C
    // Implemented from: Facebook.WitAi.VoiceService
    // Base method: System.Void VoiceService::ActivateImmediately()
    void ActivateImmediately();
    // public override System.Void ActivateImmediately(Facebook.WitAi.Configuration.WitRequestOptions requestOptions)
    // Offset: 0x10FC580
    // Implemented from: Facebook.WitAi.VoiceService
    // Base method: System.Void VoiceService::ActivateImmediately(Facebook.WitAi.Configuration.WitRequestOptions requestOptions)
    void ActivateImmediately(::Facebook::WitAi::Configuration::WitRequestOptions* requestOptions);
    // public override System.Void Deactivate()
    // Offset: 0x10FCEA0
    // Implemented from: Facebook.WitAi.VoiceService
    // Base method: System.Void VoiceService::Deactivate()
    void Deactivate();
    // public override System.Void Activate(System.String text, Facebook.WitAi.Configuration.WitRequestOptions requestOptions)
    // Offset: 0x10FD064
    // Implemented from: Facebook.WitAi.VoiceService
    // Base method: System.Void VoiceService::Activate(System.String text, Facebook.WitAi.Configuration.WitRequestOptions requestOptions)
    void Activate(::StringW text, ::Facebook::WitAi::Configuration::WitRequestOptions* requestOptions);
    // public override System.Void Activate(System.String text)
    // Offset: 0x10FD0C4
    // Implemented from: Facebook.WitAi.VoiceService
    // Base method: System.Void VoiceService::Activate(System.String text)
    void Activate(::StringW text);
  }; // Facebook.WitAi.Wit
  #pragma pack(pop)
  static check_size<sizeof(Wit), 156 + sizeof(float)> __Facebook_WitAi_WitSizeCheck;
  static_assert(sizeof(Wit) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Facebook::WitAi::Wit::get_RuntimeConfiguration
// Il2CppName: get_RuntimeConfiguration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Configuration::WitRuntimeConfiguration* (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::get_RuntimeConfiguration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "get_RuntimeConfiguration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::set_RuntimeConfiguration
// Il2CppName: set_RuntimeConfiguration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)(::Facebook::WitAi::Configuration::WitRuntimeConfiguration*)>(&Facebook::WitAi::Wit::set_RuntimeConfiguration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Configuration", "WitRuntimeConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "set_RuntimeConfiguration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::OnSampleReady
// Il2CppName: OnSampleReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)(int, ::ArrayW<float>, float)>(&Facebook::WitAi::Wit::OnSampleReady)> {
  static const MethodInfo* get() {
    static auto* sampleCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sample = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* levelMax = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "OnSampleReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sampleCount, sample, levelMax});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::OnFullTranscription
// Il2CppName: OnFullTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)(::StringW)>(&Facebook::WitAi::Wit::OnFullTranscription)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "OnFullTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::OnPartialTranscription
// Il2CppName: OnPartialTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)(::StringW)>(&Facebook::WitAi::Wit::OnPartialTranscription)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "OnPartialTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::OnTranscriptionMicLevelChanged
// Il2CppName: OnTranscriptionMicLevelChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)(float)>(&Facebook::WitAi::Wit::OnTranscriptionMicLevelChanged)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "OnTranscriptionMicLevelChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::OnMicLevelChanged
// Il2CppName: OnMicLevelChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)(float)>(&Facebook::WitAi::Wit::OnMicLevelChanged)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "OnMicLevelChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::OnStoppedListening
// Il2CppName: OnStoppedListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::OnStoppedListening)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "OnStoppedListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::OnStartListening
// Il2CppName: OnStartListening
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::OnStartListening)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "OnStartListening", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::DeactivateDueToTimeLimit
// Il2CppName: DeactivateDueToTimeLimit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::DeactivateDueToTimeLimit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "DeactivateDueToTimeLimit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::OnWitReadyForData
// Il2CppName: OnWitReadyForData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::OnWitReadyForData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "OnWitReadyForData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::DeactivateRequest
// Il2CppName: DeactivateRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::DeactivateRequest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "DeactivateRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Facebook::WitAi::Wit::*)(::ArrayW<float>)>(&Facebook::WitAi::Wit::Convert)> {
  static const MethodInfo* get() {
    static auto* samples = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{samples});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::SendTranscription
// Il2CppName: SendTranscription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)(::StringW, ::Facebook::WitAi::Configuration::WitRequestOptions*)>(&Facebook::WitAi::Wit::SendTranscription)> {
  static const MethodInfo* get() {
    static auto* transcription = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "SendTranscription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transcription, requestOptions});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::QueueResult
// Il2CppName: QueueResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)(::Facebook::WitAi::WitRequest*)>(&Facebook::WitAi::Wit::QueueResult)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Facebook.WitAi", "WitRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "QueueResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::HandleResult
// Il2CppName: HandleResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)(::Facebook::WitAi::WitRequest*)>(&Facebook::WitAi::Wit::HandleResult)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("Facebook.WitAi", "WitRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "HandleResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::$ActivateImmediately$b__47_0
// Il2CppName: <ActivateImmediately>b__47_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)(::StringW)>(&Facebook::WitAi::Wit::$ActivateImmediately$b__47_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "<ActivateImmediately>b__47_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::$ActivateImmediately$b__47_1
// Il2CppName: <ActivateImmediately>b__47_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)(::StringW)>(&Facebook::WitAi::Wit::$ActivateImmediately$b__47_1)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "<ActivateImmediately>b__47_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::$ActivateImmediately$b__47_2
// Il2CppName: <ActivateImmediately>b__47_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)(::Facebook::WitAi::WitRequest*)>(&Facebook::WitAi::Wit::$ActivateImmediately$b__47_2)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("Facebook.WitAi", "WitRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "<ActivateImmediately>b__47_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::get_IsRequestActive
// Il2CppName: get_IsRequestActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::get_IsRequestActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "get_IsRequestActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::get_TranscriptionProvider
// Il2CppName: get_TranscriptionProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Facebook::WitAi::Interfaces::ITranscriptionProvider* (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::get_TranscriptionProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "get_TranscriptionProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::set_TranscriptionProvider
// Il2CppName: set_TranscriptionProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)(::Facebook::WitAi::Interfaces::ITranscriptionProvider*)>(&Facebook::WitAi::Wit::set_TranscriptionProvider)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Interfaces", "ITranscriptionProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "set_TranscriptionProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::get_MicActive
// Il2CppName: get_MicActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::get_MicActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "get_MicActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::get_ShouldSendMicData
// Il2CppName: get_ShouldSendMicData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::get_ShouldSendMicData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "get_ShouldSendMicData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Facebook::WitAi::Wit::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::Activate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)(::Facebook::WitAi::Configuration::WitRequestOptions*)>(&Facebook::WitAi::Wit::Activate)> {
  static const MethodInfo* get() {
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestOptions});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::ActivateImmediately
// Il2CppName: ActivateImmediately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::ActivateImmediately)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "ActivateImmediately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::ActivateImmediately
// Il2CppName: ActivateImmediately
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)(::Facebook::WitAi::Configuration::WitRequestOptions*)>(&Facebook::WitAi::Wit::ActivateImmediately)> {
  static const MethodInfo* get() {
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "ActivateImmediately", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestOptions});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::Deactivate
// Il2CppName: Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)()>(&Facebook::WitAi::Wit::Deactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)(::StringW, ::Facebook::WitAi::Configuration::WitRequestOptions*)>(&Facebook::WitAi::Wit::Activate)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* requestOptions = &::il2cpp_utils::GetClassFromName("Facebook.WitAi.Configuration", "WitRequestOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, requestOptions});
  }
};
// Writing MetadataGetter for method: Facebook::WitAi::Wit::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Facebook::WitAi::Wit::*)(::StringW)>(&Facebook::WitAi::Wit::Activate)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Facebook::WitAi::Wit*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
