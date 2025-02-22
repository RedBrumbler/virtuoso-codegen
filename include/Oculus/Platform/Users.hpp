// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: UserOptions
  class UserOptions;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: User
  class User;
  // Forward declaring type: UserList
  class UserList;
  // Forward declaring type: UserAndRoomList
  class UserAndRoomList;
  // Forward declaring type: OrgScopedID
  class OrgScopedID;
  // Forward declaring type: SdkAccountList
  class SdkAccountList;
  // Forward declaring type: UserProof
  class UserProof;
  // Forward declaring type: LaunchFriendRequestFlowResult
  class LaunchFriendRequestFlowResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: Users
  class Users;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Users);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Users*, "Oculus.Platform", "Users");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Users
  // [TokenAttribute] Offset: FFFFFFFF
  class Users : public ::Il2CppObject {
    public:
    // static public System.String GetLoggedInUserLocale()
    // Offset: 0x11505FC
    static ::StringW GetLoggedInUserLocale();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.User> Get(System.UInt64 userID)
    // Offset: 0x1148F10
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* Get(uint64_t userID);
    // static public Oculus.Platform.Request`1<System.String> GetAccessToken()
    // Offset: 0x11506F0
    static ::Oculus::Platform::Request_1<::StringW>* GetAccessToken();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.User> GetLoggedInUser()
    // Offset: 0x1148C64
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* GetLoggedInUser();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> GetLoggedInUserFriends()
    // Offset: 0x1150870
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* GetLoggedInUserFriends();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserAndRoomList> GetLoggedInUserFriendsAndRooms()
    // Offset: 0x11509F0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserAndRoomList*>* GetLoggedInUserFriendsAndRooms();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserAndRoomList> GetLoggedInUserRecentlyMetUsersAndRooms(Oculus.Platform.UserOptions userOptions)
    // Offset: 0x1150B70
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserAndRoomList*>* GetLoggedInUserRecentlyMetUsersAndRooms(::Oculus::Platform::UserOptions* userOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID> GetOrgScopedID(System.UInt64 userID)
    // Offset: 0x1150D28
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::OrgScopedID*>* GetOrgScopedID(uint64_t userID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList> GetSdkAccounts()
    // Offset: 0x1150EB8
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::SdkAccountList*>* GetSdkAccounts();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof> GetUserProof()
    // Offset: 0x1151038
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserProof*>* GetUserProof();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult> LaunchFriendRequestFlow(System.UInt64 userID)
    // Offset: 0x11511B8
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>* LaunchFriendRequestFlow(uint64_t userID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserAndRoomList> GetNextUserAndRoomListPage(Oculus.Platform.Models.UserAndRoomList list)
    // Offset: 0x1151348
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserAndRoomList*>* GetNextUserAndRoomListPage(::Oculus::Platform::Models::UserAndRoomList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> GetNextUserListPage(Oculus.Platform.Models.UserList list)
    // Offset: 0x1151560
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* GetNextUserListPage(::Oculus::Platform::Models::UserList* list);
  }; // Oculus.Platform.Users
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Users::GetLoggedInUserLocale
// Il2CppName: GetLoggedInUserLocale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Oculus::Platform::Users::GetLoggedInUserLocale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetLoggedInUserLocale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* (*)(uint64_t)>(&Oculus::Platform::Users::Get)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetAccessToken
// Il2CppName: GetAccessToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::StringW>* (*)()>(&Oculus::Platform::Users::GetAccessToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetAccessToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetLoggedInUser
// Il2CppName: GetLoggedInUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* (*)()>(&Oculus::Platform::Users::GetLoggedInUser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetLoggedInUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetLoggedInUserFriends
// Il2CppName: GetLoggedInUserFriends
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* (*)()>(&Oculus::Platform::Users::GetLoggedInUserFriends)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetLoggedInUserFriends", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetLoggedInUserFriendsAndRooms
// Il2CppName: GetLoggedInUserFriendsAndRooms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserAndRoomList*>* (*)()>(&Oculus::Platform::Users::GetLoggedInUserFriendsAndRooms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetLoggedInUserFriendsAndRooms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetLoggedInUserRecentlyMetUsersAndRooms
// Il2CppName: GetLoggedInUserRecentlyMetUsersAndRooms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserAndRoomList*>* (*)(::Oculus::Platform::UserOptions*)>(&Oculus::Platform::Users::GetLoggedInUserRecentlyMetUsersAndRooms)> {
  static const MethodInfo* get() {
    static auto* userOptions = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "UserOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetLoggedInUserRecentlyMetUsersAndRooms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userOptions});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetOrgScopedID
// Il2CppName: GetOrgScopedID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::OrgScopedID*>* (*)(uint64_t)>(&Oculus::Platform::Users::GetOrgScopedID)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetOrgScopedID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetSdkAccounts
// Il2CppName: GetSdkAccounts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::SdkAccountList*>* (*)()>(&Oculus::Platform::Users::GetSdkAccounts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetSdkAccounts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetUserProof
// Il2CppName: GetUserProof
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserProof*>* (*)()>(&Oculus::Platform::Users::GetUserProof)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetUserProof", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::LaunchFriendRequestFlow
// Il2CppName: LaunchFriendRequestFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>* (*)(uint64_t)>(&Oculus::Platform::Users::LaunchFriendRequestFlow)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "LaunchFriendRequestFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetNextUserAndRoomListPage
// Il2CppName: GetNextUserAndRoomListPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserAndRoomList*>* (*)(::Oculus::Platform::Models::UserAndRoomList*)>(&Oculus::Platform::Users::GetNextUserAndRoomListPage)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "UserAndRoomList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetNextUserAndRoomListPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetNextUserListPage
// Il2CppName: GetNextUserListPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* (*)(::Oculus::Platform::Models::UserList*)>(&Oculus::Platform::Users::GetNextUserListPage)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "UserList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetNextUserListPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
