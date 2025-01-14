// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SessionsPanelUI
#include "VROSC/SessionsPanelUI.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: SessionUIData
  class SessionUIData;
  // Forward declaring type: Error
  struct Error;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: FavoritesSessionsPanelUI
  class FavoritesSessionsPanelUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::FavoritesSessionsPanelUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FavoritesSessionsPanelUI*, "VROSC", "FavoritesSessionsPanelUI");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.FavoritesSessionsPanelUI
  // [TokenAttribute] Offset: FFFFFFFF
  class FavoritesSessionsPanelUI : public ::VROSC::SessionsPanelUI {
    public:
    // private System.Void UserLoggedIn()
    // Offset: 0x1317CF0
    void UserLoggedIn();
    // private System.Void FavoritesDataChanged()
    // Offset: 0x1317E94
    void FavoritesDataChanged();
    // private System.Void UpdateSessionList(System.Collections.Generic.List`1<VROSC.SessionUIData> sessionUIDatas)
    // Offset: 0x1317AE8
    void UpdateSessionList(::System::Collections::Generic::List_1<::VROSC::SessionUIData*>* sessionUIDatas);
    // private System.Void FavoritesDataLoadSucceded()
    // Offset: 0x13179CC
    void FavoritesDataLoadSucceded();
    // private System.Void FavoritesDataLoadFailed(VROSC.Error error)
    // Offset: 0x1317F04
    void FavoritesDataLoadFailed(::VROSC::Error error);
    // public System.Void .ctor()
    // Offset: 0x1317FF8
    // Implemented from: VROSC.SessionsPanelUI
    // Base method: System.Void SessionsPanelUI::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FavoritesSessionsPanelUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::FavoritesSessionsPanelUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FavoritesSessionsPanelUI*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x1317618
    // Implemented from: VROSC.SessionsPanelUI
    // Base method: System.Void SessionsPanelUI::Awake()
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x1317658
    // Implemented from: VROSC.SessionsPanelUI
    // Base method: System.Void SessionsPanelUI::OnEnable()
    void OnEnable();
    // public override System.Void Refresh()
    // Offset: 0x131773C
    // Implemented from: VROSC.SessionsPanelUI
    // Base method: System.Void SessionsPanelUI::Refresh()
    void Refresh();
    // protected System.Void OnDisable()
    // Offset: 0x1317B8C
    // Implemented from: VROSC.SessionsPanelUI
    // Base method: System.Void SessionsPanelUI::OnDisable()
    void OnDisable();
  }; // VROSC.FavoritesSessionsPanelUI
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::FavoritesSessionsPanelUI::UserLoggedIn
// Il2CppName: UserLoggedIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FavoritesSessionsPanelUI::*)()>(&VROSC::FavoritesSessionsPanelUI::UserLoggedIn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FavoritesSessionsPanelUI*), "UserLoggedIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FavoritesSessionsPanelUI::FavoritesDataChanged
// Il2CppName: FavoritesDataChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FavoritesSessionsPanelUI::*)()>(&VROSC::FavoritesSessionsPanelUI::FavoritesDataChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FavoritesSessionsPanelUI*), "FavoritesDataChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FavoritesSessionsPanelUI::UpdateSessionList
// Il2CppName: UpdateSessionList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FavoritesSessionsPanelUI::*)(::System::Collections::Generic::List_1<::VROSC::SessionUIData*>*)>(&VROSC::FavoritesSessionsPanelUI::UpdateSessionList)> {
  static const MethodInfo* get() {
    static auto* sessionUIDatas = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "SessionUIData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FavoritesSessionsPanelUI*), "UpdateSessionList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionUIDatas});
  }
};
// Writing MetadataGetter for method: VROSC::FavoritesSessionsPanelUI::FavoritesDataLoadSucceded
// Il2CppName: FavoritesDataLoadSucceded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FavoritesSessionsPanelUI::*)()>(&VROSC::FavoritesSessionsPanelUI::FavoritesDataLoadSucceded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FavoritesSessionsPanelUI*), "FavoritesDataLoadSucceded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FavoritesSessionsPanelUI::FavoritesDataLoadFailed
// Il2CppName: FavoritesDataLoadFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FavoritesSessionsPanelUI::*)(::VROSC::Error)>(&VROSC::FavoritesSessionsPanelUI::FavoritesDataLoadFailed)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FavoritesSessionsPanelUI*), "FavoritesDataLoadFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::FavoritesSessionsPanelUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::FavoritesSessionsPanelUI::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FavoritesSessionsPanelUI::*)()>(&VROSC::FavoritesSessionsPanelUI::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FavoritesSessionsPanelUI*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FavoritesSessionsPanelUI::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FavoritesSessionsPanelUI::*)()>(&VROSC::FavoritesSessionsPanelUI::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FavoritesSessionsPanelUI*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FavoritesSessionsPanelUI::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FavoritesSessionsPanelUI::*)()>(&VROSC::FavoritesSessionsPanelUI::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FavoritesSessionsPanelUI*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FavoritesSessionsPanelUI::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FavoritesSessionsPanelUI::*)()>(&VROSC::FavoritesSessionsPanelUI::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FavoritesSessionsPanelUI*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
