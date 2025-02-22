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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIScrollableItem
  class UIScrollableItem;
  // Forward declaring type: UIScrollableContainerInput
  class UIScrollableContainerInput;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: VROSC
namespace VROSC {
  // Forward declaring type: UIScrollableContainer
  class UIScrollableContainer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::UIScrollableContainer);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIScrollableContainer*, "VROSC", "UIScrollableContainer");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.UIScrollableContainer
  // [TokenAttribute] Offset: FFFFFFFF
  class UIScrollableContainer : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::VROSC::UIScrollableContainer::$MoveBar$d__48
    class $MoveBar$d__48;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.Transform _itemsContainer
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* itemsContainer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private VROSC.UIScrollableItem _scrollableItemPrefab
    // Size: 0x8
    // Offset: 0x20
    ::VROSC::UIScrollableItem* scrollableItemPrefab;
    // Field size check
    static_assert(sizeof(::VROSC::UIScrollableItem*) == 0x8);
    // private System.Single _length
    // Size: 0x4
    // Offset: 0x28
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _isHorizontal
    // Size: 0x1
    // Offset: 0x2C
    bool isHorizontal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _invert
    // Size: 0x1
    // Offset: 0x2D
    bool invert;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: invert and: padding
    char __padding4[0x2] = {};
    // private System.Single _padding
    // Size: 0x4
    // Offset: 0x30
    float padding;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Int32 _defaultSelection
    // Size: 0x4
    // Offset: 0x34
    int defaultSelection;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _supportsMultipleSelection
    // Size: 0x1
    // Offset: 0x38
    bool supportsMultipleSelection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _supportsNoSelection
    // Size: 0x1
    // Offset: 0x39
    bool supportsNoSelection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: supportsNoSelection and: selectionInput
    char __padding8[0x6] = {};
    // private VROSC.UIScrollableContainerInput _selectionInput
    // Size: 0x8
    // Offset: 0x40
    ::VROSC::UIScrollableContainerInput* selectionInput;
    // Field size check
    static_assert(sizeof(::VROSC::UIScrollableContainerInput*) == 0x8);
    // private System.Int32 <SelectedItemIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x48
    int SelectedItemIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: SelectedItemIndex and: Items
    char __padding10[0x4] = {};
    // private System.Collections.Generic.List`1<VROSC.UIScrollableItem> <Items>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::VROSC::UIScrollableItem*>* Items;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VROSC::UIScrollableItem*>*) == 0x8);
    // public System.Action`1<VROSC.UIScrollableItem> OnItemSelected
    // Size: 0x8
    // Offset: 0x58
    ::System::Action_1<::VROSC::UIScrollableItem*>* OnItemSelected;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::UIScrollableItem*>*) == 0x8);
    // public System.Action`1<VROSC.UIScrollableItem> OnItemDeselected
    // Size: 0x8
    // Offset: 0x60
    ::System::Action_1<::VROSC::UIScrollableItem*>* OnItemDeselected;
    // Field size check
    static_assert(sizeof(::System::Action_1<::VROSC::UIScrollableItem*>*) == 0x8);
    // protected System.Boolean _valuesSet
    // Size: 0x1
    // Offset: 0x68
    bool valuesSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Transform _itemsContainer
    ::UnityEngine::Transform*& dyn__itemsContainer();
    // Get instance field reference: private VROSC.UIScrollableItem _scrollableItemPrefab
    ::VROSC::UIScrollableItem*& dyn__scrollableItemPrefab();
    // Get instance field reference: private System.Single _length
    float& dyn__length();
    // Get instance field reference: private System.Boolean _isHorizontal
    bool& dyn__isHorizontal();
    // Get instance field reference: private System.Boolean _invert
    bool& dyn__invert();
    // Get instance field reference: private System.Single _padding
    float& dyn__padding();
    // Get instance field reference: protected System.Int32 _defaultSelection
    int& dyn__defaultSelection();
    // Get instance field reference: private System.Boolean _supportsMultipleSelection
    bool& dyn__supportsMultipleSelection();
    // Get instance field reference: private System.Boolean _supportsNoSelection
    bool& dyn__supportsNoSelection();
    // Get instance field reference: private VROSC.UIScrollableContainerInput _selectionInput
    ::VROSC::UIScrollableContainerInput*& dyn__selectionInput();
    // Get instance field reference: private System.Int32 <SelectedItemIndex>k__BackingField
    int& dyn_$SelectedItemIndex$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<VROSC.UIScrollableItem> <Items>k__BackingField
    ::System::Collections::Generic::List_1<::VROSC::UIScrollableItem*>*& dyn_$Items$k__BackingField();
    // Get instance field reference: public System.Action`1<VROSC.UIScrollableItem> OnItemSelected
    ::System::Action_1<::VROSC::UIScrollableItem*>*& dyn_OnItemSelected();
    // Get instance field reference: public System.Action`1<VROSC.UIScrollableItem> OnItemDeselected
    ::System::Action_1<::VROSC::UIScrollableItem*>*& dyn_OnItemDeselected();
    // Get instance field reference: protected System.Boolean _valuesSet
    bool& dyn__valuesSet();
    // public System.Int32 get_SelectedItemIndex()
    // Offset: 0x139FE78
    int get_SelectedItemIndex();
    // private System.Void set_SelectedItemIndex(System.Int32 value)
    // Offset: 0x139FE70
    void set_SelectedItemIndex(int value);
    // public System.Single get_ItemLength()
    // Offset: 0x139FE80
    float get_ItemLength();
    // public System.Boolean get_IsHorizontal()
    // Offset: 0x139FE9C
    bool get_IsHorizontal();
    // public System.Boolean get_IsInverted()
    // Offset: 0x139FEA4
    bool get_IsInverted();
    // public UnityEngine.Transform get_ItemsContainer()
    // Offset: 0x139FEAC
    ::UnityEngine::Transform* get_ItemsContainer();
    // public System.Single get_Length()
    // Offset: 0x139FEB4
    float get_Length();
    // public System.Single get_Padding()
    // Offset: 0x139FEBC
    float get_Padding();
    // public System.Collections.Generic.List`1<VROSC.UIScrollableItem> get_Items()
    // Offset: 0x139FECC
    ::System::Collections::Generic::List_1<::VROSC::UIScrollableItem*>* get_Items();
    // private System.Void set_Items(System.Collections.Generic.List`1<VROSC.UIScrollableItem> value)
    // Offset: 0x139FEC4
    void set_Items(::System::Collections::Generic::List_1<::VROSC::UIScrollableItem*>* value);
    // private System.Void OnEnable()
    // Offset: 0x139FED4
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x13A0098
    void OnDisable();
    // public System.Void SetValues(System.String[] values, System.Int32 selected)
    // Offset: 0x13A025C
    void SetValues(::ArrayW<::StringW> values, int selected);
    // private System.Void CreateItems(System.String[] values, System.Int32 selection)
    // Offset: 0x13A0294
    void CreateItems(::ArrayW<::StringW> values, int selection);
    // private System.Void SetItemPosition(VROSC.UIScrollableItem item, System.Int32 index)
    // Offset: 0x13A0604
    void SetItemPosition(::VROSC::UIScrollableItem* item, int index);
    // public VROSC.UIScrollableItem AddItem(VROSC.UIScrollableItem itemPrefab, System.String value, System.Boolean select, System.Int32 index)
    // Offset: 0x13A06C8
    ::VROSC::UIScrollableItem* AddItem(::VROSC::UIScrollableItem* itemPrefab, ::StringW value, bool select, int index);
    // public VROSC.UIScrollableItem AddItem(System.String value, System.Boolean select, System.Int32 index)
    // Offset: 0x13A0AE4
    ::VROSC::UIScrollableItem* AddItem(::StringW value, bool select, int index);
    // public System.Void RemoveItemAt(System.Int32 index)
    // Offset: 0x13A0AFC
    void RemoveItemAt(int index);
    // private System.Void SortByListOrder()
    // Offset: 0x13A0A38
    void SortByListOrder();
    // public System.Boolean HasItem(System.String value)
    // Offset: 0x13A08D8
    bool HasItem(::StringW value);
    // public VROSC.UIScrollableItem GetItem(System.String value)
    // Offset: 0x13A0BF0
    ::VROSC::UIScrollableItem* GetItem(::StringW value);
    // private System.Void DestroyItems()
    // Offset: 0x13A0508
    void DestroyItems();
    // private System.Void OnDrawGizmos()
    // Offset: 0x13A0D50
    void OnDrawGizmos();
    // private System.Void ShowItems(System.Boolean animate)
    // Offset: 0x13A0408
    void ShowItems(bool animate);
    // protected System.Void MoveToSelectedItem(System.Boolean animate)
    // Offset: 0x13A0DB0
    void MoveToSelectedItem(bool animate);
    // private System.Collections.IEnumerator MoveBar(System.Single duration)
    // Offset: 0x13A0E40
    ::System::Collections::IEnumerator* MoveBar(float duration);
    // private UnityEngine.Vector3 GetSelectedPosition()
    // Offset: 0x13A0EBC
    ::UnityEngine::Vector3 GetSelectedPosition();
    // private System.Void SetHoveringItem(System.Int32 hoverItem)
    // Offset: 0x13A0FDC
    void SetHoveringItem(int hoverItem);
    // private System.Void SetHovering(System.Boolean hovering)
    // Offset: 0x13A10F4
    void SetHovering(bool hovering);
    // public VROSC.UIScrollableItem GetSelectedItem()
    // Offset: 0x13A11A4
    ::VROSC::UIScrollableItem* GetSelectedItem();
    // public System.Void SetSelectedItem(System.Int32 selectedItem)
    // Offset: 0x13A121C
    void SetSelectedItem(int selectedItem);
    // public System.Void DeselectItem()
    // Offset: 0x13A13BC
    void DeselectItem();
    // public System.Void ResetSelectionBar()
    // Offset: 0x13A14BC
    void ResetSelectionBar();
    // public System.Void SetDisabled(UnityEngine.GameObject disabler, System.Boolean state)
    // Offset: 0x13A14C4
    void SetDisabled(::UnityEngine::GameObject* disabler, bool state);
    // public System.Void .ctor()
    // Offset: 0x13A1590
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIScrollableContainer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::UIScrollableContainer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIScrollableContainer*, creationType>()));
    }
  }; // VROSC.UIScrollableContainer
  #pragma pack(pop)
  static check_size<sizeof(UIScrollableContainer), 104 + sizeof(bool)> __VROSC_UIScrollableContainerSizeCheck;
  static_assert(sizeof(UIScrollableContainer) == 0x69);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::get_SelectedItemIndex
// Il2CppName: get_SelectedItemIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (VROSC::UIScrollableContainer::*)()>(&VROSC::UIScrollableContainer::get_SelectedItemIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "get_SelectedItemIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::set_SelectedItemIndex
// Il2CppName: set_SelectedItemIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)(int)>(&VROSC::UIScrollableContainer::set_SelectedItemIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "set_SelectedItemIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::get_ItemLength
// Il2CppName: get_ItemLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::UIScrollableContainer::*)()>(&VROSC::UIScrollableContainer::get_ItemLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "get_ItemLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::get_IsHorizontal
// Il2CppName: get_IsHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UIScrollableContainer::*)()>(&VROSC::UIScrollableContainer::get_IsHorizontal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "get_IsHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::get_IsInverted
// Il2CppName: get_IsInverted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UIScrollableContainer::*)()>(&VROSC::UIScrollableContainer::get_IsInverted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "get_IsInverted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::get_ItemsContainer
// Il2CppName: get_ItemsContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (VROSC::UIScrollableContainer::*)()>(&VROSC::UIScrollableContainer::get_ItemsContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "get_ItemsContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::UIScrollableContainer::*)()>(&VROSC::UIScrollableContainer::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::get_Padding
// Il2CppName: get_Padding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VROSC::UIScrollableContainer::*)()>(&VROSC::UIScrollableContainer::get_Padding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "get_Padding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::get_Items
// Il2CppName: get_Items
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::UIScrollableItem*>* (VROSC::UIScrollableContainer::*)()>(&VROSC::UIScrollableContainer::get_Items)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "get_Items", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::set_Items
// Il2CppName: set_Items
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)(::System::Collections::Generic::List_1<::VROSC::UIScrollableItem*>*)>(&VROSC::UIScrollableContainer::set_Items)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("VROSC", "UIScrollableItem")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "set_Items", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)()>(&VROSC::UIScrollableContainer::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)()>(&VROSC::UIScrollableContainer::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::SetValues
// Il2CppName: SetValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)(::ArrayW<::StringW>, int)>(&VROSC::UIScrollableContainer::SetValues)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* selected = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "SetValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values, selected});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::CreateItems
// Il2CppName: CreateItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)(::ArrayW<::StringW>, int)>(&VROSC::UIScrollableContainer::CreateItems)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* selection = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "CreateItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values, selection});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::SetItemPosition
// Il2CppName: SetItemPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)(::VROSC::UIScrollableItem*, int)>(&VROSC::UIScrollableContainer::SetItemPosition)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("VROSC", "UIScrollableItem")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "SetItemPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item, index});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::AddItem
// Il2CppName: AddItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UIScrollableItem* (VROSC::UIScrollableContainer::*)(::VROSC::UIScrollableItem*, ::StringW, bool, int)>(&VROSC::UIScrollableContainer::AddItem)> {
  static const MethodInfo* get() {
    static auto* itemPrefab = &::il2cpp_utils::GetClassFromName("VROSC", "UIScrollableItem")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* select = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "AddItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{itemPrefab, value, select, index});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::AddItem
// Il2CppName: AddItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UIScrollableItem* (VROSC::UIScrollableContainer::*)(::StringW, bool, int)>(&VROSC::UIScrollableContainer::AddItem)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* select = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "AddItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, select, index});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::RemoveItemAt
// Il2CppName: RemoveItemAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)(int)>(&VROSC::UIScrollableContainer::RemoveItemAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "RemoveItemAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::SortByListOrder
// Il2CppName: SortByListOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)()>(&VROSC::UIScrollableContainer::SortByListOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "SortByListOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::HasItem
// Il2CppName: HasItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VROSC::UIScrollableContainer::*)(::StringW)>(&VROSC::UIScrollableContainer::HasItem)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "HasItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::GetItem
// Il2CppName: GetItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UIScrollableItem* (VROSC::UIScrollableContainer::*)(::StringW)>(&VROSC::UIScrollableContainer::GetItem)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "GetItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::DestroyItems
// Il2CppName: DestroyItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)()>(&VROSC::UIScrollableContainer::DestroyItems)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "DestroyItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)()>(&VROSC::UIScrollableContainer::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::ShowItems
// Il2CppName: ShowItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)(bool)>(&VROSC::UIScrollableContainer::ShowItems)> {
  static const MethodInfo* get() {
    static auto* animate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "ShowItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animate});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::MoveToSelectedItem
// Il2CppName: MoveToSelectedItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)(bool)>(&VROSC::UIScrollableContainer::MoveToSelectedItem)> {
  static const MethodInfo* get() {
    static auto* animate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "MoveToSelectedItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animate});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::MoveBar
// Il2CppName: MoveBar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (VROSC::UIScrollableContainer::*)(float)>(&VROSC::UIScrollableContainer::MoveBar)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "MoveBar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::GetSelectedPosition
// Il2CppName: GetSelectedPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (VROSC::UIScrollableContainer::*)()>(&VROSC::UIScrollableContainer::GetSelectedPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "GetSelectedPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::SetHoveringItem
// Il2CppName: SetHoveringItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)(int)>(&VROSC::UIScrollableContainer::SetHoveringItem)> {
  static const MethodInfo* get() {
    static auto* hoverItem = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "SetHoveringItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hoverItem});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::SetHovering
// Il2CppName: SetHovering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)(bool)>(&VROSC::UIScrollableContainer::SetHovering)> {
  static const MethodInfo* get() {
    static auto* hovering = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "SetHovering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hovering});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::GetSelectedItem
// Il2CppName: GetSelectedItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UIScrollableItem* (VROSC::UIScrollableContainer::*)()>(&VROSC::UIScrollableContainer::GetSelectedItem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "GetSelectedItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::SetSelectedItem
// Il2CppName: SetSelectedItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)(int)>(&VROSC::UIScrollableContainer::SetSelectedItem)> {
  static const MethodInfo* get() {
    static auto* selectedItem = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "SetSelectedItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectedItem});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::DeselectItem
// Il2CppName: DeselectItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)()>(&VROSC::UIScrollableContainer::DeselectItem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "DeselectItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::ResetSelectionBar
// Il2CppName: ResetSelectionBar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)()>(&VROSC::UIScrollableContainer::ResetSelectionBar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "ResetSelectionBar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::SetDisabled
// Il2CppName: SetDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::UIScrollableContainer::*)(::UnityEngine::GameObject*, bool)>(&VROSC::UIScrollableContainer::SetDisabled)> {
  static const MethodInfo* get() {
    static auto* disabler = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::UIScrollableContainer*), "SetDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disabler, state});
  }
};
// Writing MetadataGetter for method: VROSC::UIScrollableContainer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
