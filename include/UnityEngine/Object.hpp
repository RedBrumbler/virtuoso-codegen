// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: HideFlags
  struct HideFlags;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Object);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Object*, "UnityEngine", "Object");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Object
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 567618
  // [NativeHeaderAttribute] Offset: 567618
  // [NativeHeaderAttribute] Offset: 567618
  // [RequiredByNativeCodeAttribute] Offset: 567618
  class Object : public ::Il2CppObject {
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
    // private System.IntPtr m_CachedPtr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_CachedPtr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_CachedPtr;
    }
    // Get static field: static System.Int32 OffsetOfInstanceIDInCPlusPlusObject
    static int _get_OffsetOfInstanceIDInCPlusPlusObject();
    // Set static field: static System.Int32 OffsetOfInstanceIDInCPlusPlusObject
    static void _set_OffsetOfInstanceIDInCPlusPlusObject(int value);
    // static field const value: static private System.String objectIsNullMessage
    static constexpr const char* objectIsNullMessage = "The Object you want to instantiate is null.";
    // Get static field: static private System.String objectIsNullMessage
    static ::StringW _get_objectIsNullMessage();
    // Set static field: static private System.String objectIsNullMessage
    static void _set_objectIsNullMessage(::StringW value);
    // static field const value: static private System.String cloneDestroyedMessage
    static constexpr const char* cloneDestroyedMessage = "Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake.";
    // Get static field: static private System.String cloneDestroyedMessage
    static ::StringW _get_cloneDestroyedMessage();
    // Set static field: static private System.String cloneDestroyedMessage
    static void _set_cloneDestroyedMessage(::StringW value);
    // Get instance field reference: private System.IntPtr m_CachedPtr
    ::System::IntPtr& dyn_m_CachedPtr();
    // public System.String get_name()
    // Offset: 0x9C9140
    ::StringW get_name();
    // public System.Void set_name(System.String value)
    // Offset: 0x9CB740
    void set_name(::StringW value);
    // public UnityEngine.HideFlags get_hideFlags()
    // Offset: 0x9CC09C
    ::UnityEngine::HideFlags get_hideFlags();
    // public System.Void set_hideFlags(UnityEngine.HideFlags value)
    // Offset: 0x9CC0DC
    void set_hideFlags(::UnityEngine::HideFlags value);
    // static private System.Void .cctor()
    // Offset: 0x9CC454
    static void _cctor();
    // public System.Int32 GetInstanceID()
    // Offset: 0x9CB278
    int GetInstanceID();
    // static private System.Boolean CompareBaseObjects(UnityEngine.Object lhs, UnityEngine.Object rhs)
    // Offset: 0x9CB574
    static bool CompareBaseObjects(::UnityEngine::Object* lhs, ::UnityEngine::Object* rhs);
    // static private System.Boolean IsNativeObjectAlive(UnityEngine.Object o)
    // Offset: 0x9CB6A8
    static bool IsNativeObjectAlive(::UnityEngine::Object* o);
    // private System.IntPtr GetCachedPtr()
    // Offset: 0x9CB6F8
    ::System::IntPtr GetCachedPtr();
    // static public UnityEngine.Object Instantiate(UnityEngine.Object original, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x9CB820
    static ::UnityEngine::Object* Instantiate(::UnityEngine::Object* original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);
    // static public UnityEngine.Object Instantiate(UnityEngine.Object original)
    // Offset: 0x9CBADC
    static ::UnityEngine::Object* Instantiate(::UnityEngine::Object* original);
    // static public UnityEngine.Object Instantiate(UnityEngine.Object original, UnityEngine.Transform parent, System.Boolean instantiateInWorldSpace)
    // Offset: 0x9CBC1C
    static ::UnityEngine::Object* Instantiate(::UnityEngine::Object* original, ::UnityEngine::Transform* parent, bool instantiateInWorldSpace);
    // static public T Instantiate(T original)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T Instantiate(T original) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Object::Instantiate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "Object", "Instantiate", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(original)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, original);
    }
    // static public T Instantiate(T original, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T Instantiate(T original, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Object::Instantiate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "Object", "Instantiate", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(original), ::il2cpp_utils::ExtractType(position), ::il2cpp_utils::ExtractType(rotation)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, original, position, rotation);
    }
    // static public T Instantiate(T original, UnityEngine.Transform parent)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T Instantiate(T original, ::UnityEngine::Transform* parent) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Object::Instantiate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "Object", "Instantiate", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(original), ::il2cpp_utils::ExtractType(parent)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, original, parent);
    }
    // static public T Instantiate(T original, UnityEngine.Transform parent, System.Boolean worldPositionStays)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T Instantiate(T original, ::UnityEngine::Transform* parent, bool worldPositionStays) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Object::Instantiate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "Object", "Instantiate", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(original), ::il2cpp_utils::ExtractType(parent), ::il2cpp_utils::ExtractType(worldPositionStays)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, original, parent, worldPositionStays);
    }
    // static public System.Void Destroy(UnityEngine.Object obj, System.Single t)
    // Offset: 0x9CBDE0
    static void Destroy(::UnityEngine::Object* obj, float t);
    // static public System.Void Destroy(UnityEngine.Object obj)
    // Offset: 0x9CBE30
    static void Destroy(::UnityEngine::Object* obj);
    // static public System.Void DestroyImmediate(UnityEngine.Object obj, System.Boolean allowDestroyingAssets)
    // Offset: 0x9CBEB4
    static void DestroyImmediate(::UnityEngine::Object* obj, bool allowDestroyingAssets);
    // static public System.Void DestroyImmediate(UnityEngine.Object obj)
    // Offset: 0x9CBF04
    static void DestroyImmediate(::UnityEngine::Object* obj);
    // static public UnityEngine.Object[] FindObjectsOfType(System.Type type)
    // Offset: 0x9CBF88
    static ::ArrayW<::UnityEngine::Object*> FindObjectsOfType(::System::Type* type);
    // static public UnityEngine.Object[] FindObjectsOfType(System.Type type, System.Boolean includeInactive)
    // Offset: 0x9CC00C
    static ::ArrayW<::UnityEngine::Object*> FindObjectsOfType(::System::Type* type, bool includeInactive);
    // static public System.Void DontDestroyOnLoad(UnityEngine.Object target)
    // Offset: 0x9CC05C
    static void DontDestroyOnLoad(::UnityEngine::Object* target);
    // static public T[] FindObjectsOfType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::ArrayW<T> FindObjectsOfType() {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Object::FindObjectsOfType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "Object", "FindObjectsOfType", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public T FindObjectOfType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T FindObjectOfType() {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Object::FindObjectOfType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "Object", "FindObjectOfType", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static private System.Void CheckNullArgument(System.Object arg, System.String message)
    // Offset: 0x9CB9E8
    static void CheckNullArgument(::Il2CppObject* arg, ::StringW message);
    // static public UnityEngine.Object FindObjectOfType(System.Type type)
    // Offset: 0x9CC12C
    static ::UnityEngine::Object* FindObjectOfType(::System::Type* type);
    // static public UnityEngine.Object FindObjectOfType(System.Type type, System.Boolean includeInactive)
    // Offset: 0x9CC1D0
    static ::UnityEngine::Object* FindObjectOfType(::System::Type* type, bool includeInactive);
    // static private System.Int32 GetOffsetOfInstanceIDInCPlusPlusObject()
    // Offset: 0x9CB3B8
    static int GetOffsetOfInstanceIDInCPlusPlusObject();
    // static private UnityEngine.Object Internal_CloneSingle(UnityEngine.Object data)
    // Offset: 0x9CBBDC
    static ::UnityEngine::Object* Internal_CloneSingle(::UnityEngine::Object* data);
    // static private UnityEngine.Object Internal_CloneSingleWithParent(UnityEngine.Object data, UnityEngine.Transform parent, System.Boolean worldPositionStays)
    // Offset: 0x9CBD88
    static ::UnityEngine::Object* Internal_CloneSingleWithParent(::UnityEngine::Object* data, ::UnityEngine::Transform* parent, bool worldPositionStays);
    // static private UnityEngine.Object Internal_InstantiateSingle(UnityEngine.Object data, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0x9CBA38
    static ::UnityEngine::Object* Internal_InstantiateSingle(::UnityEngine::Object* data, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot);
    // static private System.String ToString(UnityEngine.Object obj)
    // Offset: 0x9CC300
    static ::StringW ToString(::UnityEngine::Object* obj);
    // static private System.String GetName(UnityEngine.Object obj)
    // Offset: 0x9CB700
    static ::StringW GetName(::UnityEngine::Object* obj);
    // static private System.Void SetName(UnityEngine.Object obj, System.String name)
    // Offset: 0x9CB7D0
    static void SetName(::UnityEngine::Object* obj, ::StringW name);
    // static UnityEngine.Object FindObjectFromInstanceID(System.Int32 instanceID)
    // Offset: 0x9CC414
    static ::UnityEngine::Object* FindObjectFromInstanceID(int instanceID);
    // static private UnityEngine.Object Internal_InstantiateSingle_Injected(UnityEngine.Object data, ref UnityEngine.Vector3 pos, ref UnityEngine.Quaternion rot)
    // Offset: 0x9CC3BC
    static ::UnityEngine::Object* Internal_InstantiateSingle_Injected(::UnityEngine::Object* data, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);
    // public System.Void .ctor()
    // Offset: 0x9C7380
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Object* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Object::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Object*, creationType>()));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x9CB3EC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x9CB3F4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.String ToString()
    // Offset: 0x9CC280
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngine.Object
  #pragma pack(pop)
  static check_size<sizeof(Object), 16 + sizeof(::System::IntPtr)> __UnityEngine_ObjectSizeCheck;
  static_assert(sizeof(Object) == 0x18);
  // static public System.Boolean op_Equality(UnityEngine.Object x, UnityEngine.Object y)
  // Offset: 0x9CB504
  bool operator ==(::UnityEngine::Object* x, ::UnityEngine::Object& y);
  // static public System.Boolean op_Inequality(UnityEngine.Object x, UnityEngine.Object y)
  // Offset: 0x9CC340
  bool operator !=(::UnityEngine::Object* x, ::UnityEngine::Object& y);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Object::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Object::*)()>(&UnityEngine::Object::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::set_name
// Il2CppName: set_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Object::*)(::StringW)>(&UnityEngine::Object::set_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "set_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::get_hideFlags
// Il2CppName: get_hideFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::HideFlags (UnityEngine::Object::*)()>(&UnityEngine::Object::get_hideFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "get_hideFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::set_hideFlags
// Il2CppName: set_hideFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Object::*)(::UnityEngine::HideFlags)>(&UnityEngine::Object::set_hideFlags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "HideFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "set_hideFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Object::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::GetInstanceID
// Il2CppName: GetInstanceID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Object::*)()>(&UnityEngine::Object::GetInstanceID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "GetInstanceID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::CompareBaseObjects
// Il2CppName: CompareBaseObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Object*, ::UnityEngine::Object*)>(&UnityEngine::Object::CompareBaseObjects)> {
  static const MethodInfo* get() {
    static auto* lhs = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* rhs = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "CompareBaseObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lhs, rhs});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::IsNativeObjectAlive
// Il2CppName: IsNativeObjectAlive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Object*)>(&UnityEngine::Object::IsNativeObjectAlive)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "IsNativeObjectAlive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::GetCachedPtr
// Il2CppName: GetCachedPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (UnityEngine::Object::*)()>(&UnityEngine::Object::GetCachedPtr)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "GetCachedPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::Instantiate
// Il2CppName: Instantiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(::UnityEngine::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&UnityEngine::Object::Instantiate)> {
  static const MethodInfo* get() {
    static auto* original = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "Instantiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{original, position, rotation});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::Instantiate
// Il2CppName: Instantiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(::UnityEngine::Object*)>(&UnityEngine::Object::Instantiate)> {
  static const MethodInfo* get() {
    static auto* original = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "Instantiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{original});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::Instantiate
// Il2CppName: Instantiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(::UnityEngine::Object*, ::UnityEngine::Transform*, bool)>(&UnityEngine::Object::Instantiate)> {
  static const MethodInfo* get() {
    static auto* original = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* instantiateInWorldSpace = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "Instantiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{original, parent, instantiateInWorldSpace});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::Instantiate
// Il2CppName: Instantiate
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Object::Instantiate
// Il2CppName: Instantiate
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Object::Instantiate
// Il2CppName: Instantiate
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Object::Instantiate
// Il2CppName: Instantiate
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Object::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*, float)>(&UnityEngine::Object::Destroy)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, t});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::Destroy
// Il2CppName: Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*)>(&UnityEngine::Object::Destroy)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::DestroyImmediate
// Il2CppName: DestroyImmediate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*, bool)>(&UnityEngine::Object::DestroyImmediate)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* allowDestroyingAssets = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "DestroyImmediate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, allowDestroyingAssets});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::DestroyImmediate
// Il2CppName: DestroyImmediate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*)>(&UnityEngine::Object::DestroyImmediate)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "DestroyImmediate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::FindObjectsOfType
// Il2CppName: FindObjectsOfType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Object*> (*)(::System::Type*)>(&UnityEngine::Object::FindObjectsOfType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "FindObjectsOfType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::FindObjectsOfType
// Il2CppName: FindObjectsOfType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Object*> (*)(::System::Type*, bool)>(&UnityEngine::Object::FindObjectsOfType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* includeInactive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "FindObjectsOfType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, includeInactive});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::DontDestroyOnLoad
// Il2CppName: DontDestroyOnLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*)>(&UnityEngine::Object::DontDestroyOnLoad)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "DontDestroyOnLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::FindObjectsOfType
// Il2CppName: FindObjectsOfType
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Object::FindObjectOfType
// Il2CppName: FindObjectOfType
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Object::CheckNullArgument
// Il2CppName: CheckNullArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::StringW)>(&UnityEngine::Object::CheckNullArgument)> {
  static const MethodInfo* get() {
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "CheckNullArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg, message});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::FindObjectOfType
// Il2CppName: FindObjectOfType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(::System::Type*)>(&UnityEngine::Object::FindObjectOfType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "FindObjectOfType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::FindObjectOfType
// Il2CppName: FindObjectOfType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(::System::Type*, bool)>(&UnityEngine::Object::FindObjectOfType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* includeInactive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "FindObjectOfType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, includeInactive});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::GetOffsetOfInstanceIDInCPlusPlusObject
// Il2CppName: GetOffsetOfInstanceIDInCPlusPlusObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::Object::GetOffsetOfInstanceIDInCPlusPlusObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "GetOffsetOfInstanceIDInCPlusPlusObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::Internal_CloneSingle
// Il2CppName: Internal_CloneSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(::UnityEngine::Object*)>(&UnityEngine::Object::Internal_CloneSingle)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "Internal_CloneSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::Internal_CloneSingleWithParent
// Il2CppName: Internal_CloneSingleWithParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(::UnityEngine::Object*, ::UnityEngine::Transform*, bool)>(&UnityEngine::Object::Internal_CloneSingleWithParent)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* worldPositionStays = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "Internal_CloneSingleWithParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, parent, worldPositionStays});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::Internal_InstantiateSingle
// Il2CppName: Internal_InstantiateSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(::UnityEngine::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&UnityEngine::Object::Internal_InstantiateSingle)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "Internal_InstantiateSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, pos, rot});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Object*)>(&UnityEngine::Object::ToString)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::GetName
// Il2CppName: GetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Object*)>(&UnityEngine::Object::GetName)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "GetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::SetName
// Il2CppName: SetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*, ::StringW)>(&UnityEngine::Object::SetName)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "SetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::FindObjectFromInstanceID
// Il2CppName: FindObjectFromInstanceID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(int)>(&UnityEngine::Object::FindObjectFromInstanceID)> {
  static const MethodInfo* get() {
    static auto* instanceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "FindObjectFromInstanceID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instanceID});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::Internal_InstantiateSingle_Injected
// Il2CppName: Internal_InstantiateSingle_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(::UnityEngine::Object*, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::Object::Internal_InstantiateSingle_Injected)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "Internal_InstantiateSingle_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, pos, rot});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Object::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Object::*)()>(&UnityEngine::Object::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Object::*)(::Il2CppObject*)>(&UnityEngine::Object::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Object::*)()>(&UnityEngine::Object::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Object*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Object::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Object::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!