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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteBoardNoteVisualController
  class NoteBoardNoteVisualController;
  // Forward declaring type: NoteBoardNoteAnimator
  class NoteBoardNoteAnimator;
  // Forward declaring type: NoteBoardNoteText
  class NoteBoardNoteText;
  // Forward declaring type: NoteFieldNoteData
  class NoteFieldNoteData;
  // Forward declaring type: NoteFieldParameters
  class NoteFieldParameters;
  // Forward declaring type: PlayData
  struct PlayData;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: NoteBoardNote
  class NoteBoardNote;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::NoteBoardNote);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::NoteBoardNote*, "VROSC", "NoteBoardNote");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x45
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.NoteBoardNote
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteBoardNote : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::NoteBoardNote::Coloring
    struct Coloring;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private VROSC.NoteBoardNoteVisualController _materialController
    // Size: 0x8
    // Offset: 0x18
    ::VROSC::NoteBoardNoteVisualController* materialController;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoardNoteVisualController*) == 0x8);
    // private VROSC.NoteBoardNoteAnimator _animator
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::NoteBoardNoteAnimator* animator;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoardNoteAnimator*) == 0x8);
    // private VROSC.NoteBoardNoteText _textDisplay
    // Size: 0x8
    // Offset: 0x28
    ::VROSC::NoteBoardNoteText* textDisplay;
    // Field size check
    static_assert(sizeof(::VROSC::NoteBoardNoteText*) == 0x8);
    // private VROSC.NoteFieldNoteData <Data>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::VROSC::NoteFieldNoteData* Data;
    // Field size check
    static_assert(sizeof(::VROSC::NoteFieldNoteData*) == 0x8);
    // private UnityEngine.Vector3 <LocalPositionForAnimation>k__BackingField
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 LocalPositionForAnimation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean <IsPlaying>k__BackingField
    // Size: 0x1
    // Offset: 0x44
    bool IsPlaying;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VROSC.NoteBoardNoteVisualController _materialController
    ::VROSC::NoteBoardNoteVisualController*& dyn__materialController();
    // Get instance field reference: private VROSC.NoteBoardNoteAnimator _animator
    ::VROSC::NoteBoardNoteAnimator*& dyn__animator();
    // Get instance field reference: private VROSC.NoteBoardNoteText _textDisplay
    ::VROSC::NoteBoardNoteText*& dyn__textDisplay();
    // Get instance field reference: private VROSC.NoteFieldNoteData <Data>k__BackingField
    ::VROSC::NoteFieldNoteData*& dyn_$Data$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 <LocalPositionForAnimation>k__BackingField
    ::UnityEngine::Vector3& dyn_$LocalPositionForAnimation$k__BackingField();
    // Get instance field reference: private System.Boolean <IsPlaying>k__BackingField
    bool& dyn_$IsPlaying$k__BackingField();
    // public VROSC.NoteBoardNoteAnimator get_Animator()
    // Offset: 0xA1190C
    ::VROSC::NoteBoardNoteAnimator* get_Animator();
    // public VROSC.NoteBoardNoteVisualController get_Visual()
    // Offset: 0xA11914
    ::VROSC::NoteBoardNoteVisualController* get_Visual();
    // public VROSC.NoteBoardNoteText get_TextDisplay()
    // Offset: 0xA1191C
    ::VROSC::NoteBoardNoteText* get_TextDisplay();
    // public VROSC.NoteFieldNoteData get_Data()
    // Offset: 0xA1192C
    ::VROSC::NoteFieldNoteData* get_Data();
    // private System.Void set_Data(VROSC.NoteFieldNoteData value)
    // Offset: 0xA11924
    void set_Data(::VROSC::NoteFieldNoteData* value);
    // public UnityEngine.Vector3 get_LocalPositionForAnimation()
    // Offset: 0xA11940
    ::UnityEngine::Vector3 get_LocalPositionForAnimation();
    // private System.Void set_LocalPositionForAnimation(UnityEngine.Vector3 value)
    // Offset: 0xA11934
    void set_LocalPositionForAnimation(::UnityEngine::Vector3 value);
    // public System.Boolean get_IsPlaying()
    // Offset: 0xA11958
    bool get_IsPlaying();
    // private System.Void set_IsPlaying(System.Boolean value)
    // Offset: 0xA1194C
    void set_IsPlaying(bool value);
    // public System.Void Init(VROSC.NoteFieldNoteData data, System.Int32[] numberOfFields, UnityEngine.Vector3 noteScale)
    // Offset: 0xA0E824
    void Init(::VROSC::NoteFieldNoteData* data, ::ArrayW<int> numberOfFields, ::UnityEngine::Vector3 noteScale);
    // public System.Void Init(VROSC.NoteFieldParameters parameters, VROSC.NoteFieldNoteData data, UnityEngine.Vector3 noteScale)
    // Offset: 0xA11A90
    void Init(::VROSC::NoteFieldParameters* parameters, ::VROSC::NoteFieldNoteData* data, ::UnityEngine::Vector3 noteScale);
    // private System.Void InitShared(VROSC.NoteFieldNoteData data, UnityEngine.Vector3 noteScale, System.Int32[] numberOfFields)
    // Offset: 0xA11960
    void InitShared(::VROSC::NoteFieldNoteData* data, ::UnityEngine::Vector3 noteScale, ::ArrayW<int> numberOfFields);
    // public System.Void SetData(VROSC.NoteFieldNoteData data)
    // Offset: 0xA0E888
    void SetData(::VROSC::NoteFieldNoteData* data);
    // public System.Void UpdateVisuals()
    // Offset: 0xA11BF8
    void UpdateVisuals();
    // public System.Void SetHovering(System.Boolean isHovering, System.Boolean isPlaying)
    // Offset: 0xA11EEC
    void SetHovering(bool isHovering, bool isPlaying);
    // public System.Void SetLocalPosition(UnityEngine.Vector3 position)
    // Offset: 0xA0E7D0
    void SetLocalPosition(::UnityEngine::Vector3 position);
    // public System.Void SetPlaying(System.Boolean isPlaying, VROSC.PlayData playData)
    // Offset: 0xA11F30
    void SetPlaying(bool isPlaying, ::VROSC::PlayData playData);
    // public System.Void .ctor()
    // Offset: 0xA12050
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteBoardNote* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::NoteBoardNote::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteBoardNote*, creationType>()));
    }
  }; // VROSC.NoteBoardNote
  #pragma pack(pop)
  static check_size<sizeof(NoteBoardNote), 68 + sizeof(bool)> __VROSC_NoteBoardNoteSizeCheck;
  static_assert(sizeof(NoteBoardNote) == 0x45);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::NoteBoardNote::get_Animator
// Il2CppName: get_Animator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteBoardNoteAnimator* (VROSC::NoteBoardNote::*)()>(&VROSC::NoteBoardNote::get_Animator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNote*), "get_Animator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNote::get_Visual
// Il2CppName: get_Visual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteBoardNoteVisualController* (VROSC::NoteBoardNote::*)()>(&VROSC::NoteBoardNote::get_Visual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNote*), "get_Visual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNote::get_TextDisplay
// Il2CppName: get_TextDisplay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteBoardNoteText* (VROSC::NoteBoardNote::*)()>(&VROSC::NoteBoardNote::get_TextDisplay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNote*), "get_TextDisplay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNote::get_Data
// Il2CppName: get_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NoteFieldNoteData* (VROSC::NoteBoardNote::*)()>(&VROSC::NoteBoardNote::get_Data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNote*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNote::set_Data
// Il2CppName: set_Data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNote::*)(::VROSC::NoteFieldNoteData*)>(&VROSC::NoteBoardNote::set_Data)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldNoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNote*), "set_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNote::get_LocalPositionForAnimation
// Il2CppName: get_LocalPositionForAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::NoteBoardNote::*)()>(&VROSC::NoteBoardNote::get_LocalPositionForAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNote*), "get_LocalPositionForAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNote::set_LocalPositionForAnimation
// Il2CppName: set_LocalPositionForAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNote::*)(::UnityEngine::Vector3)>(&VROSC::NoteBoardNote::set_LocalPositionForAnimation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNote*), "set_LocalPositionForAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNote::get_IsPlaying
// Il2CppName: get_IsPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::NoteBoardNote::*)()>(&VROSC::NoteBoardNote::get_IsPlaying)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNote*), "get_IsPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNote::set_IsPlaying
// Il2CppName: set_IsPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNote::*)(bool)>(&VROSC::NoteBoardNote::set_IsPlaying)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNote*), "set_IsPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNote::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNote::*)(::VROSC::NoteFieldNoteData*, ::ArrayW<int>, ::UnityEngine::Vector3)>(&VROSC::NoteBoardNote::Init)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldNoteData")->byval_arg;
    static auto* numberOfFields = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* noteScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNote*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, numberOfFields, noteScale});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNote::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNote::*)(::VROSC::NoteFieldParameters*, ::VROSC::NoteFieldNoteData*, ::UnityEngine::Vector3)>(&VROSC::NoteBoardNote::Init)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldParameters")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldNoteData")->byval_arg;
    static auto* noteScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNote*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters, data, noteScale});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNote::InitShared
// Il2CppName: InitShared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNote::*)(::VROSC::NoteFieldNoteData*, ::UnityEngine::Vector3, ::ArrayW<int>)>(&VROSC::NoteBoardNote::InitShared)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldNoteData")->byval_arg;
    static auto* noteScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* numberOfFields = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNote*), "InitShared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, noteScale, numberOfFields});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNote::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNote::*)(::VROSC::NoteFieldNoteData*)>(&VROSC::NoteBoardNote::SetData)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("VROSC", "NoteFieldNoteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNote*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNote::UpdateVisuals
// Il2CppName: UpdateVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNote::*)()>(&VROSC::NoteBoardNote::UpdateVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNote*), "UpdateVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNote::SetHovering
// Il2CppName: SetHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNote::*)(bool, bool)>(&VROSC::NoteBoardNote::SetHovering)> {
  static const MethodInfo* get() {
    static auto* isHovering = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isPlaying = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNote*), "SetHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isHovering, isPlaying});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNote::SetLocalPosition
// Il2CppName: SetLocalPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNote::*)(::UnityEngine::Vector3)>(&VROSC::NoteBoardNote::SetLocalPosition)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNote*), "SetLocalPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNote::SetPlaying
// Il2CppName: SetPlaying
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::NoteBoardNote::*)(bool, ::VROSC::PlayData)>(&VROSC::NoteBoardNote::SetPlaying)> {
  static const MethodInfo* get() {
    static auto* isPlaying = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* playData = &::il2cpp_utils::GetClassFromName("VROSC", "PlayData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::NoteBoardNote*), "SetPlaying", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isPlaying, playData});
  }
};
// Writing MetadataGetter for method: VROSC::NoteBoardNote::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
