// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: VROSC.FBDebug
namespace VROSC::FBDebug {
  // Forward declaring type: DebugMessage
  class DebugMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::FBDebug::DebugMessage);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FBDebug::DebugMessage*, "VROSC.FBDebug", "DebugMessage");
// Type namespace: VROSC.FBDebug
namespace VROSC::FBDebug {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.FBDebug.DebugMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugMessage : public ::UnityEngine::MonoBehaviour {
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
    // private TMPro.TextMeshProUGUI _messageText
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshProUGUI* messageText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private System.String _message
    static ::StringW _get__message();
    // Set static field: static private System.String _message
    static void _set__message(::StringW value);
    // Get instance field reference: private TMPro.TextMeshProUGUI _messageText
    ::TMPro::TextMeshProUGUI*& dyn__messageText();
    // private System.Void Awake()
    // Offset: 0x130A4DC
    void Awake();
    // private System.Void Update()
    // Offset: 0x130A53C
    void Update();
    // static public System.Void AddMessage(System.String message, System.Boolean clear)
    // Offset: 0x130A5C0
    static void AddMessage(::StringW message, bool clear);
    // public System.Void .ctor()
    // Offset: 0x130A700
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::FBDebug::DebugMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugMessage*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x130A708
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // VROSC.FBDebug.DebugMessage
  #pragma pack(pop)
  static check_size<sizeof(DebugMessage), 24 + sizeof(::TMPro::TextMeshProUGUI*)> __VROSC_FBDebug_DebugMessageSizeCheck;
  static_assert(sizeof(DebugMessage) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::FBDebug::DebugMessage::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FBDebug::DebugMessage::*)()>(&VROSC::FBDebug::DebugMessage::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FBDebug::DebugMessage*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FBDebug::DebugMessage::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::FBDebug::DebugMessage::*)()>(&VROSC::FBDebug::DebugMessage::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FBDebug::DebugMessage*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::FBDebug::DebugMessage::AddMessage
// Il2CppName: AddMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool)>(&VROSC::FBDebug::DebugMessage::AddMessage)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* clear = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::FBDebug::DebugMessage*), "AddMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, clear});
  }
};
// Writing MetadataGetter for method: VROSC::FBDebug::DebugMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VROSC::FBDebug::DebugMessage::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VROSC::FBDebug::DebugMessage::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::FBDebug::DebugMessage*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};