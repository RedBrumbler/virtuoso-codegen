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
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteBoardNote
  class NoteBoardNote;
  // Forward declaring type: NotefieldAnimationSettings
  class NotefieldAnimationSettings;
  // Forward declaring type: NotefieldColorSettings
  class NotefieldColorSettings;
  // Forward declaring type: NoteFieldData
  class NoteFieldData;
  // Forward declaring type: InputDevice
  class InputDevice;
  // Forward declaring type: NoteFieldNoteData
  class NoteFieldNoteData;
  // Forward declaring type: NoteFieldParameters
  class NoteFieldParameters;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
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
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteBoardNoteController
  class NoteBoardNoteController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NoteBoardNoteController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNoteController*, "VROSC", "NoteBoardNoteController");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteBoardNoteController
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteBoardNoteController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::NoteBoardNoteController::HoveredNoteBoardNote
    class HoveredNoteBoardNote;
    // Nested type: ::VROSC::NoteBoardNoteController::$BlinkNotes$d__27
    class $BlinkNotes$d__27;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // protected VROSC.NoteBoardNote _noteFieldPrefab
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::NoteBoardNote* noteFieldPrefab;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoardNote*) == 0x8);
    // protected UnityEngine.Vector3 _size
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 size;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: size and: settings
    char __padding1[0x4] = {};
    // protected VROSC.NotefieldAnimationSettings _settings
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::NotefieldAnimationSettings* settings;
    // Field size check
    static_assert(sizeof(::VROSC::NotefieldAnimationSettings*) == 0x8);
    // protected VROSC.NotefieldColorSettings _noteFieldSettings
    // Size: 0x8
    // Offset: 0x38
    ::VROSC::NotefieldColorSettings* noteFieldSettings;
    // Field size check
    static_assert(sizeof(::VROSC::NotefieldColorSettings*) == 0x8);
    // private VROSC.NoteFieldData <NoteFieldData>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::NoteFieldData* NoteFieldData;
    // Field size check
    static_assert(sizeof(::VROSC::NoteFieldData*) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.NoteBoardNote> _noteBoardNotes
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::VROSC::NoteBoardNote*>* noteBoardNotes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::NoteBoardNote*>*) == 0x8);
    // public System.Action`3<VROSC.InputDevice,VROSC.NoteFieldNoteData,System.Boolean> OnHover
    // Size: 0x8
    // Offset: 0x50
    ::System::Action_3<::VROSC::InputDevice*, ::VROSC::NoteFieldNoteData*, bool>* OnHover;
    // Field size check
    static_assert(sizeof(::System::Action_3<::VROSC::InputDevice*, ::VROSC::NoteFieldNoteData*, bool>*) == 0x8);
    // public System.Action`2<VROSC.NoteFieldData,VROSC.NoteFieldParameters> OnNewNotefieldData
    // Size: 0x8
    // Offset: 0x58
    ::System::Action_2<::VROSC::NoteFieldData*, ::VROSC::NoteFieldParameters*>* OnNewNotefieldData;
    // Field size check
    static_assert(sizeof(::System::Action_2<::VROSC::NoteFieldData*, ::VROSC::NoteFieldParameters*>*) == 0x8);
    // private UnityEngine.Coroutine _blinkCoroutine
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Coroutine* blinkCoroutine;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    // private System.Collections.Generic.List`1<VROSC.NoteBoardNoteController/VROSC.HoveredNoteBoardNote> _hoveredNoteBoardNotes
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::List_1<::VROSC::NoteBoardNoteController::HoveredNoteBoardNote*>* hoveredNoteBoardNotes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::NoteBoardNoteController::HoveredNoteBoardNote*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: protected VROSC.NoteBoardNote _noteFieldPrefab
    ::VROSC::NoteBoardNote*& dyn__noteFieldPrefab();
    // Get instance field reference: protected UnityEngine.Vector3 _size
    ::UnityEngine::Vector3& dyn__size();
    // Get instance field reference: protected VROSC.NotefieldAnimationSettings _settings
    ::VROSC::NotefieldAnimationSettings*& dyn__settings();
    // Get instance field reference: protected VROSC.NotefieldColorSettings _noteFieldSettings
    ::VROSC::NotefieldColorSettings*& dyn__noteFieldSettings();
    // Get instance field reference: private VROSC.NoteFieldData <NoteFieldData>k__BackingField
    ::VROSC::NoteFieldData*& dyn_$NoteFieldData$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.NoteBoardNote> _noteBoardNotes
    ::System::Collections::Generic::List_1<::VROSC::NoteBoardNote*>*& dyn__noteBoardNotes();
    // Get instance field reference: public System.Action`3<VROSC.InputDevice,VROSC.NoteFieldNoteData,System.Boolean> OnHover
    ::System::Action_3<::VROSC::InputDevice*, ::VROSC::NoteFieldNoteData*, bool>*& dyn_OnHover();
    // Get instance field reference: public System.Action`2<VROSC.NoteFieldData,VROSC.NoteFieldParameters> OnNewNotefieldData
    ::System::Action_2<::VROSC::NoteFieldData*, ::VROSC::NoteFieldParameters*>*& dyn_OnNewNotefieldData();
    // Get instance field reference: private UnityEngine.Coroutine _blinkCoroutine
    ::UnityEngine::Coroutine*& dyn__blinkCoroutine();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.NoteBoardNoteController/VROSC.HoveredNoteBoardNote> _hoveredNoteBoardNotes
    ::System::Collections::Generic::List_1<::VROSC::NoteBoardNoteController::HoveredNoteBoardNote*>*& dyn__hoveredNoteBoardNotes();
    // public VROSC.NoteFieldData get_NoteFieldData()
    // Offset: 0xA12860
    ::VROSC::NoteFieldData* get_NoteFieldData();
    // private System.Void set_NoteFieldData(VROSC.NoteFieldData value)
    // Offset: 0xA12858
    void set_NoteFieldData(::VROSC::NoteFieldData* value);
    // public System.Collections.Generic.List`1<VROSC.NoteBoardNote> get_NoteBoardNoteList()
    // Offset: 0xA12868
    ::System::Collections::Generic::List_1<::VROSC::NoteBoardNote*>* get_NoteBoardNoteList();
    // public VROSC.NotefieldAnimationSettings get_Settings()
    // Offset: 0xA12870
    ::VROSC::NotefieldAnimationSettings* get_Settings();
    // protected System.Void Update()
    // Offset: 0xA12878
    void Update();
    // public System.Void ClearNotefield()
    // Offset: 0xA0DBE8
    void ClearNotefield();
    // public System.Void UpdateNoteboard(VROSC.NoteFieldParameters parameters)
    // Offset: 0xA0E694
    void UpdateNoteboard(::VROSC::NoteFieldParameters* parameters);
    // protected UnityEngine.Vector3 GetVisualPosition(System.Int32 x, System.Int32 y, System.Int32 z, VROSC.NoteFieldParameters parameters, UnityEngine.Vector3 fieldSize)
    // Offset: 0xA0E734
    ::UnityEngine::Vector3 GetVisualPosition(int x, int y, int z, ::VROSC::NoteFieldParameters* parameters, ::UnityEngine::Vector3 fieldSize);
    // public VROSC.NoteFieldNoteData GetNote(UnityEngine.Vector3 normalizedPoint)
    // Offset: 0xA11700
    ::VROSC::NoteFieldNoteData* GetNote(::UnityEngine::Vector3 normalizedPoint);
    // public VROSC.NoteFieldNoteData GetNote(System.Int32 x, System.Int32 y, System.Int32 z)
    // Offset: 0xA12ECC
    ::VROSC::NoteFieldNoteData* GetNote(int x, int y, int z);
    // public System.Void Hover(VROSC.NoteFieldNoteData noteBoardNote, VROSC.InputDevice device)
    // Offset: 0xA10F8C
    void Hover(::VROSC::NoteFieldNoteData* noteBoardNote, ::VROSC::InputDevice* device);
    // public System.Void HoverEnd(VROSC.InputDevice device)
    // Offset: 0xA113C0
    void HoverEnd(::VROSC::InputDevice* device);
    // public System.Void StartBlinkingNotes()
    // Offset: 0xA12F64
    void StartBlinkingNotes();
    // private System.Collections.IEnumerator BlinkNotes()
    // Offset: 0xA12F98
    ::System::Collections::IEnumerator* BlinkNotes();
    // public System.Void StopBlinkingNotes()
    // Offset: 0xA13004
    void StopBlinkingNotes();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0xA13148
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0xA0EBFC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteBoardNoteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteBoardNoteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteBoardNoteController*, creationType>()));
    }
  }; // VROSC.NoteBoardNoteController
  #pragma pack(pop)
  static check_size<sizeof(NoteBoardNoteController), 104 + sizeof(::System::Collections::Generic::List_1<::VROSC::NoteBoardNoteController::HoveredNoteBoardNote*>*)> __VROSC_NoteBoardNoteControllerSizeCheck;
  static_assert(sizeof(NoteBoardNoteController) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::get_NoteFieldData
// Il2CppName: get_NoteFieldData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteFieldData* (VROSC::NoteBoardNoteController::*)()>(&VROSC::NoteBoardNoteController::get_NoteFieldData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteController*), "get_NoteFieldData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::set_NoteFieldData
// Il2CppName: set_NoteFieldData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteController::*)(::VROSC::NoteFieldData*)>(&VROSC::NoteBoardNoteController::set_NoteFieldData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteController*), "set_NoteFieldData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::get_NoteBoardNoteList
// Il2CppName: get_NoteBoardNoteList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::NoteBoardNote*>* (VROSC::NoteBoardNoteController::*)()>(&VROSC::NoteBoardNoteController::get_NoteBoardNoteList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteController*), "get_NoteBoardNoteList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::get_Settings
// Il2CppName: get_Settings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NotefieldAnimationSettings* (VROSC::NoteBoardNoteController::*)()>(&VROSC::NoteBoardNoteController::get_Settings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteController*), "get_Settings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteController::*)()>(&VROSC::NoteBoardNoteController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::ClearNotefield
// Il2CppName: ClearNotefield
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteController::*)()>(&VROSC::NoteBoardNoteController::ClearNotefield)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteController*), "ClearNotefield", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::UpdateNoteboard
// Il2CppName: UpdateNoteboard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteController::*)(::VROSC::NoteFieldParameters*)>(&VROSC::NoteBoardNoteController::UpdateNoteboard)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteController*), "UpdateNoteboard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::GetVisualPosition
// Il2CppName: GetVisualPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::NoteBoardNoteController::*)(int, int, int, ::VROSC::NoteFieldParameters*, ::UnityEngine::Vector3)>(&VROSC::NoteBoardNoteController::GetVisualPosition)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldParameters")->byval_arg;
    static auto* fieldSize = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteController*), "GetVisualPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z, parameters, fieldSize});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::GetNote
// Il2CppName: GetNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteFieldNoteData* (VROSC::NoteBoardNoteController::*)(::UnityEngine::Vector3)>(&VROSC::NoteBoardNoteController::GetNote)> {
  static const MethodInfo* get() {
    static auto* normalizedPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteController*), "GetNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{normalizedPoint});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::GetNote
// Il2CppName: GetNote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteFieldNoteData* (VROSC::NoteBoardNoteController::*)(int, int, int)>(&VROSC::NoteBoardNoteController::GetNote)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteController*), "GetNote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::Hover
// Il2CppName: Hover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteController::*)(::VROSC::NoteFieldNoteData*, ::VROSC::InputDevice*)>(&VROSC::NoteBoardNoteController::Hover)> {
  static const MethodInfo* get() {
    static auto* noteBoardNote = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldNoteData")->byval_arg;
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteController*), "Hover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteBoardNote, device});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::HoverEnd
// Il2CppName: HoverEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteController::*)(::VROSC::InputDevice*)>(&VROSC::NoteBoardNoteController::HoverEnd)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("VROSC", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteController*), "HoverEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::StartBlinkingNotes
// Il2CppName: StartBlinkingNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteController::*)()>(&VROSC::NoteBoardNoteController::StartBlinkingNotes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteController*), "StartBlinkingNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::BlinkNotes
// Il2CppName: BlinkNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VROSC::NoteBoardNoteController::*)()>(&VROSC::NoteBoardNoteController::BlinkNotes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteController*), "BlinkNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::StopBlinkingNotes
// Il2CppName: StopBlinkingNotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteController::*)()>(&VROSC::NoteBoardNoteController::StopBlinkingNotes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteController*), "StopBlinkingNotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNoteController::*)()>(&VROSC::NoteBoardNoteController::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNoteController*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNoteController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!