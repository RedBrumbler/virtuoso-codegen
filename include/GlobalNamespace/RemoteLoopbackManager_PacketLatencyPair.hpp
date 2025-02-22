// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RemoteLoopbackManager
#include "GlobalNamespace/RemoteLoopbackManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RemoteLoopbackManager::PacketLatencyPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RemoteLoopbackManager::PacketLatencyPair*, "", "RemoteLoopbackManager/PacketLatencyPair");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: RemoteLoopbackManager/PacketLatencyPair
  // [TokenAttribute] Offset: FFFFFFFF
  class RemoteLoopbackManager::PacketLatencyPair : public ::Il2CppObject {
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
    // public System.Byte[] PacketData
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> PacketData;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Single FakeLatency
    // Size: 0x4
    // Offset: 0x18
    float FakeLatency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Byte[] PacketData
    ::ArrayW<uint8_t>& dyn_PacketData();
    // Get instance field reference: public System.Single FakeLatency
    float& dyn_FakeLatency();
    // public System.Void .ctor()
    // Offset: 0x1345140
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteLoopbackManager::PacketLatencyPair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RemoteLoopbackManager::PacketLatencyPair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteLoopbackManager::PacketLatencyPair*, creationType>()));
    }
  }; // RemoteLoopbackManager/PacketLatencyPair
  #pragma pack(pop)
  static check_size<sizeof(RemoteLoopbackManager::PacketLatencyPair), 24 + sizeof(float)> __GlobalNamespace_RemoteLoopbackManager_PacketLatencyPairSizeCheck;
  static_assert(sizeof(RemoteLoopbackManager::PacketLatencyPair) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RemoteLoopbackManager::PacketLatencyPair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
