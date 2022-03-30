// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: VROSC.Error
#include "VROSC/Error.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
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
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Firebase::Firestore
namespace Firebase::Firestore {
  // Forward declaring type: DocumentSnapshot
  class DocumentSnapshot;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: CallbackHandler
  class CallbackHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::CallbackHandler);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::CallbackHandler*, "VROSC", "CallbackHandler");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.CallbackHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class CallbackHandler : public ::Il2CppObject {
    public:
    // Nested type: ::VROSC::CallbackHandler::LoginUserWithEmailCallback
    class LoginUserWithEmailCallback;
    // Nested type: ::VROSC::CallbackHandler::UserLoginAnonymouslyCallback
    class UserLoginAnonymouslyCallback;
    // Nested type: ::VROSC::CallbackHandler::FirestoreCollectionReadCallback
    class FirestoreCollectionReadCallback;
    // Nested type: ::VROSC::CallbackHandler::FirestoreCollectionDictionaryReadCallback
    class FirestoreCollectionDictionaryReadCallback;
    // Nested type: ::VROSC::CallbackHandler::FirestoreDocumentReadCallback
    class FirestoreDocumentReadCallback;
    // Nested type: ::VROSC::CallbackHandler::StringCallback
    class StringCallback;
    // Nested type: ::VROSC::CallbackHandler::ErrorCallback
    class ErrorCallback;
    // Nested type: ::VROSC::CallbackHandler::$PollInProgressRequests$d__25
    struct $PollInProgressRequests$d__25;
    // static field const value: static private System.Int32 PollingDelay
    static constexpr const int PollingDelay = 100;
    // Get static field: static private System.Int32 PollingDelay
    static int _get_PollingDelay();
    // Set static field: static private System.Int32 PollingDelay
    static void _set_PollingDelay(int value);
    // Get static field: static private System.Collections.Concurrent.ConcurrentQueue`1<VROSC.CallbackHandler/VROSC.LoginUserWithEmailCallback> _loginUserWithEmailCallbacks
    static ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler::LoginUserWithEmailCallback*>* _get__loginUserWithEmailCallbacks();
    // Set static field: static private System.Collections.Concurrent.ConcurrentQueue`1<VROSC.CallbackHandler/VROSC.LoginUserWithEmailCallback> _loginUserWithEmailCallbacks
    static void _set__loginUserWithEmailCallbacks(::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler::LoginUserWithEmailCallback*>* value);
    // Get static field: static private System.Collections.Concurrent.ConcurrentQueue`1<VROSC.CallbackHandler/VROSC.UserLoginAnonymouslyCallback> _userLoginAnonymouslyCallbacks
    static ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler::UserLoginAnonymouslyCallback*>* _get__userLoginAnonymouslyCallbacks();
    // Set static field: static private System.Collections.Concurrent.ConcurrentQueue`1<VROSC.CallbackHandler/VROSC.UserLoginAnonymouslyCallback> _userLoginAnonymouslyCallbacks
    static void _set__userLoginAnonymouslyCallbacks(::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler::UserLoginAnonymouslyCallback*>* value);
    // Get static field: static private System.Collections.Concurrent.ConcurrentQueue`1<VROSC.CallbackHandler/VROSC.FirestoreCollectionReadCallback> _firestoreCollectionReadCallbacks
    static ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler::FirestoreCollectionReadCallback*>* _get__firestoreCollectionReadCallbacks();
    // Set static field: static private System.Collections.Concurrent.ConcurrentQueue`1<VROSC.CallbackHandler/VROSC.FirestoreCollectionReadCallback> _firestoreCollectionReadCallbacks
    static void _set__firestoreCollectionReadCallbacks(::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler::FirestoreCollectionReadCallback*>* value);
    // Get static field: static private System.Collections.Concurrent.ConcurrentQueue`1<VROSC.CallbackHandler/VROSC.FirestoreCollectionDictionaryReadCallback> _firestoreCollectionDictionaryReadCallbacks
    static ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler::FirestoreCollectionDictionaryReadCallback*>* _get__firestoreCollectionDictionaryReadCallbacks();
    // Set static field: static private System.Collections.Concurrent.ConcurrentQueue`1<VROSC.CallbackHandler/VROSC.FirestoreCollectionDictionaryReadCallback> _firestoreCollectionDictionaryReadCallbacks
    static void _set__firestoreCollectionDictionaryReadCallbacks(::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler::FirestoreCollectionDictionaryReadCallback*>* value);
    // Get static field: static private System.Collections.Concurrent.ConcurrentQueue`1<VROSC.CallbackHandler/VROSC.FirestoreDocumentReadCallback> _firestoreDocumentReadCallbacks
    static ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler::FirestoreDocumentReadCallback*>* _get__firestoreDocumentReadCallbacks();
    // Set static field: static private System.Collections.Concurrent.ConcurrentQueue`1<VROSC.CallbackHandler/VROSC.FirestoreDocumentReadCallback> _firestoreDocumentReadCallbacks
    static void _set__firestoreDocumentReadCallbacks(::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler::FirestoreDocumentReadCallback*>* value);
    // Get static field: static private System.Collections.Concurrent.ConcurrentQueue`1<System.Action> _emptyCallbacks
    static ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>* _get__emptyCallbacks();
    // Set static field: static private System.Collections.Concurrent.ConcurrentQueue`1<System.Action> _emptyCallbacks
    static void _set__emptyCallbacks(::System::Collections::Concurrent::ConcurrentQueue_1<::System::Action*>* value);
    // Get static field: static private System.Collections.Concurrent.ConcurrentQueue`1<VROSC.CallbackHandler/VROSC.StringCallback> _stringCallbacks
    static ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler::StringCallback*>* _get__stringCallbacks();
    // Set static field: static private System.Collections.Concurrent.ConcurrentQueue`1<VROSC.CallbackHandler/VROSC.StringCallback> _stringCallbacks
    static void _set__stringCallbacks(::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler::StringCallback*>* value);
    // Get static field: static private System.Collections.Concurrent.ConcurrentQueue`1<VROSC.CallbackHandler/VROSC.ErrorCallback> _errorCallbacks
    static ::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler::ErrorCallback*>* _get__errorCallbacks();
    // Set static field: static private System.Collections.Concurrent.ConcurrentQueue`1<VROSC.CallbackHandler/VROSC.ErrorCallback> _errorCallbacks
    static void _set__errorCallbacks(::System::Collections::Concurrent::ConcurrentQueue_1<::VROSC::CallbackHandler::ErrorCallback*>* value);
    // static private System.Void .cctor()
    // Offset: 0x132FA5C
    static void _cctor();
    // static public System.Void Init()
    // Offset: 0x132F308
    static void Init();
    // static public System.Void RegisterCallback(System.Action action)
    // Offset: 0x132F408
    static void RegisterCallback(::System::Action* action);
    // static public System.Void RegisterStringCallback(System.Action`1<System.String> action, System.String argument)
    // Offset: 0x132F494
    static void RegisterStringCallback(::System::Action_1<::StringW>* action, ::StringW argument);
    // static public System.Void RegisterErrorCallback(System.Action`1<VROSC.Error> action, VROSC.Error error)
    // Offset: 0x132F560
    static void RegisterErrorCallback(::System::Action_1<::VROSC::Error>* action, ::VROSC::Error error);
    // static public System.Void RegisterLoginUserWithEmailCallback(System.Action`2<System.String,System.Boolean> action, System.String userId, System.Boolean isVerified)
    // Offset: 0x132F630
    static void RegisterLoginUserWithEmailCallback(::System::Action_2<::StringW, bool>* action, ::StringW userId, bool isVerified);
    // static public System.Void RegisterUserLoginAnonymouslyCallback(System.Action`3<System.String,System.String,System.String> action, System.String userId, System.String accessToken, System.String refreshToken)
    // Offset: 0x132F710
    static void RegisterUserLoginAnonymouslyCallback(::System::Action_3<::StringW, ::StringW, ::StringW>* action, ::StringW userId, ::StringW accessToken, ::StringW refreshToken);
    // static public System.Void RegisterFirestoreCollectionReadCallback(System.Action`1<System.Collections.Generic.IEnumerable`1<Firebase.Firestore.DocumentSnapshot>> action, System.Collections.Generic.IEnumerable`1<Firebase.Firestore.DocumentSnapshot> data)
    // Offset: 0x132F7F0
    static void RegisterFirestoreCollectionReadCallback(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>* action, ::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>* data);
    // static public System.Void RegisterFirestoreCollectionDictionaryReadCallback(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>>> action, System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>> data)
    // Offset: 0x132F8BC
    static void RegisterFirestoreCollectionDictionaryReadCallback(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*>*>* action, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*>* data);
    // static public System.Void RegisterFirestoreDocumentReadCallback(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> action, System.Collections.Generic.Dictionary`2<System.String,System.Object> data)
    // Offset: 0x132F988
    static void RegisterFirestoreDocumentReadCallback(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*>* action, ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>* data);
    // static private System.Void PollInProgressRequests()
    // Offset: 0x132F360
    static void PollInProgressRequests();
    // public System.Void .ctor()
    // Offset: 0x132FA54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallbackHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::CallbackHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallbackHandler*, creationType>()));
    }
  }; // VROSC.CallbackHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::CallbackHandler::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VROSC::CallbackHandler::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::CallbackHandler*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::CallbackHandler::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VROSC::CallbackHandler::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::CallbackHandler*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::CallbackHandler::RegisterCallback
// Il2CppName: RegisterCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&VROSC::CallbackHandler::RegisterCallback)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CallbackHandler*), "RegisterCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: VROSC::CallbackHandler::RegisterStringCallback
// Il2CppName: RegisterStringCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::StringW>*, ::StringW)>(&VROSC::CallbackHandler::RegisterStringCallback)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* argument = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CallbackHandler*), "RegisterStringCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, argument});
  }
};
// Writing MetadataGetter for method: VROSC::CallbackHandler::RegisterErrorCallback
// Il2CppName: RegisterErrorCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::VROSC::Error>*, ::VROSC::Error)>(&VROSC::CallbackHandler::RegisterErrorCallback)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "Error")})->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CallbackHandler*), "RegisterErrorCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, error});
  }
};
// Writing MetadataGetter for method: VROSC::CallbackHandler::RegisterLoginUserWithEmailCallback
// Il2CppName: RegisterLoginUserWithEmailCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::StringW, bool>*, ::StringW, bool)>(&VROSC::CallbackHandler::RegisterLoginUserWithEmailCallback)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isVerified = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CallbackHandler*), "RegisterLoginUserWithEmailCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, userId, isVerified});
  }
};
// Writing MetadataGetter for method: VROSC::CallbackHandler::RegisterUserLoginAnonymouslyCallback
// Il2CppName: RegisterUserLoginAnonymouslyCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_3<::StringW, ::StringW, ::StringW>*, ::StringW, ::StringW, ::StringW)>(&VROSC::CallbackHandler::RegisterUserLoginAnonymouslyCallback)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* accessToken = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* refreshToken = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CallbackHandler*), "RegisterUserLoginAnonymouslyCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, userId, accessToken, refreshToken});
  }
};
// Writing MetadataGetter for method: VROSC::CallbackHandler::RegisterFirestoreCollectionReadCallback
// Il2CppName: RegisterFirestoreCollectionReadCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*>*, ::System::Collections::Generic::IEnumerable_1<::Firebase::Firestore::DocumentSnapshot*>*)>(&VROSC::CallbackHandler::RegisterFirestoreCollectionReadCallback)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Firebase.Firestore", "DocumentSnapshot")})})->byval_arg;
    static auto* data = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Firebase.Firestore", "DocumentSnapshot")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CallbackHandler*), "RegisterFirestoreCollectionReadCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, data});
  }
};
// Writing MetadataGetter for method: VROSC::CallbackHandler::RegisterFirestoreCollectionDictionaryReadCallback
// Il2CppName: RegisterFirestoreCollectionDictionaryReadCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*>*>*, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*>*)>(&VROSC::CallbackHandler::RegisterFirestoreCollectionDictionaryReadCallback)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Object")})})})->byval_arg;
    static auto* data = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Object")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CallbackHandler*), "RegisterFirestoreCollectionDictionaryReadCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, data});
  }
};
// Writing MetadataGetter for method: VROSC::CallbackHandler::RegisterFirestoreDocumentReadCallback
// Il2CppName: RegisterFirestoreDocumentReadCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*>*, ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*)>(&VROSC::CallbackHandler::RegisterFirestoreDocumentReadCallback)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Object")})})->byval_arg;
    static auto* data = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::CallbackHandler*), "RegisterFirestoreDocumentReadCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, data});
  }
};
// Writing MetadataGetter for method: VROSC::CallbackHandler::PollInProgressRequests
// Il2CppName: PollInProgressRequests
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VROSC::CallbackHandler::PollInProgressRequests)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::CallbackHandler*), "PollInProgressRequests", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::CallbackHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!