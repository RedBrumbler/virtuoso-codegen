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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
  // Forward declaring type: Message
  class Message;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Room
  class Room;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RoomManager
  class RoomManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RoomManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomManager*, "", "RoomManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x22
  #pragma pack(push, 1)
  // Autogenerated type: RoomManager
  // [TokenAttribute] Offset: FFFFFFFF
  class RoomManager : public ::Il2CppObject {
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
    // public System.UInt64 roomID
    // Size: 0x8
    // Offset: 0x10
    uint64_t roomID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 invitedRoomID
    // Size: 0x8
    // Offset: 0x18
    uint64_t invitedRoomID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.Boolean amIServer
    // Size: 0x1
    // Offset: 0x20
    bool amIServer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean startupDone
    // Size: 0x1
    // Offset: 0x21
    bool startupDone;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.UInt64 roomID
    uint64_t& dyn_roomID();
    // Get instance field reference: private System.UInt64 invitedRoomID
    uint64_t& dyn_invitedRoomID();
    // Get instance field reference: private System.Boolean amIServer
    bool& dyn_amIServer();
    // Get instance field reference: private System.Boolean startupDone
    bool& dyn_startupDone();
    // private System.Void AcceptingInviteCallback(Oculus.Platform.Message`1<System.String> msg)
    // Offset: 0xAFF91C
    void AcceptingInviteCallback(::Oculus::Platform::Message_1<::StringW>* msg);
    // public System.Boolean CheckForInvite()
    // Offset: 0xAFFA9C
    bool CheckForInvite();
    // public System.Void CreateRoom()
    // Offset: 0xAFFBD8
    void CreateRoom();
    // private System.Void CreateAndJoinPrivateRoomCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> msg)
    // Offset: 0xAFFCAC
    void CreateAndJoinPrivateRoomCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>* msg);
    // private System.Void OnLaunchInviteWorkflowComplete(Oculus.Platform.Message msg)
    // Offset: 0xAFFDE8
    void OnLaunchInviteWorkflowComplete(::Oculus::Platform::Message* msg);
    // public System.Void JoinExistingRoom(System.UInt64 roomID)
    // Offset: 0xAFFACC
    void JoinExistingRoom(uint64_t roomID);
    // private System.Void JoinRoomCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> msg)
    // Offset: 0xAFFE70
    void JoinRoomCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>* msg);
    // private System.Void RoomUpdateCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> msg)
    // Offset: 0xB005C8
    void RoomUpdateCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>* msg);
    // public System.Void LeaveCurrentRoom()
    // Offset: 0xB008C8
    void LeaveCurrentRoom();
    // private System.Void ProcessRoomData(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> msg)
    // Offset: 0xB00150
    void ProcessRoomData(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>* msg);
    // public System.Void .ctor()
    // Offset: 0xAFF818
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RoomManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RoomManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RoomManager*, creationType>()));
    }
  }; // RoomManager
  #pragma pack(pop)
  static check_size<sizeof(RoomManager), 33 + sizeof(bool)> __GlobalNamespace_RoomManagerSizeCheck;
  static_assert(sizeof(RoomManager) == 0x22);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RoomManager::AcceptingInviteCallback
// Il2CppName: AcceptingInviteCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomManager::*)(::Oculus::Platform::Message_1<::StringW>*)>(&GlobalNamespace::RoomManager::AcceptingInviteCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomManager*), "AcceptingInviteCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomManager::CheckForInvite
// Il2CppName: CheckForInvite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::RoomManager::*)()>(&GlobalNamespace::RoomManager::CheckForInvite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomManager*), "CheckForInvite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomManager::CreateRoom
// Il2CppName: CreateRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomManager::*)()>(&GlobalNamespace::RoomManager::CreateRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomManager*), "CreateRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomManager::CreateAndJoinPrivateRoomCallback
// Il2CppName: CreateAndJoinPrivateRoomCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>*)>(&GlobalNamespace::RoomManager::CreateAndJoinPrivateRoomCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Room")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomManager*), "CreateAndJoinPrivateRoomCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomManager::OnLaunchInviteWorkflowComplete
// Il2CppName: OnLaunchInviteWorkflowComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomManager::*)(::Oculus::Platform::Message*)>(&GlobalNamespace::RoomManager::OnLaunchInviteWorkflowComplete)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomManager*), "OnLaunchInviteWorkflowComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomManager::JoinExistingRoom
// Il2CppName: JoinExistingRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomManager::*)(uint64_t)>(&GlobalNamespace::RoomManager::JoinExistingRoom)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomManager*), "JoinExistingRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomManager::JoinRoomCallback
// Il2CppName: JoinRoomCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>*)>(&GlobalNamespace::RoomManager::JoinRoomCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Room")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomManager*), "JoinRoomCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomManager::RoomUpdateCallback
// Il2CppName: RoomUpdateCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>*)>(&GlobalNamespace::RoomManager::RoomUpdateCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Room")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomManager*), "RoomUpdateCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomManager::LeaveCurrentRoom
// Il2CppName: LeaveCurrentRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomManager::*)()>(&GlobalNamespace::RoomManager::LeaveCurrentRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomManager*), "LeaveCurrentRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomManager::ProcessRoomData
// Il2CppName: ProcessRoomData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RoomManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>*)>(&GlobalNamespace::RoomManager::ProcessRoomData)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Room")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RoomManager*), "ProcessRoomData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RoomManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
