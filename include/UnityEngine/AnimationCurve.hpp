// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Keyframe
#include "UnityEngine/Keyframe.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AnimationCurve);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationCurve*, "UnityEngine", "AnimationCurve");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AnimationCurve
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 564B18
  // [DefaultMemberAttribute] Offset: 564B18
  // [RequiredByNativeCodeAttribute] Offset: 564B18
  class AnimationCurve : public ::Il2CppObject/*, public ::System::IEquatable_1<::UnityEngine::AnimationCurve*>*/ {
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
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::AnimationCurve*>
    operator ::System::IEquatable_1<::UnityEngine::AnimationCurve*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::AnimationCurve*>*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: System.IntPtr m_Ptr
    ::System::IntPtr& dyn_m_Ptr();
    // public UnityEngine.Keyframe get_Item(System.Int32 index)
    // Offset: 0xE2ED7C
    ::UnityEngine::Keyframe get_Item(int index);
    // public System.Int32 get_length()
    // Offset: 0xE2EE98
    int get_length();
    // public System.Void .ctor(params UnityEngine.Keyframe[] keys)
    // Offset: 0xE2F088
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationCurve* New_ctor(::ArrayW<::UnityEngine::Keyframe> keys) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AnimationCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationCurve*, creationType>(keys)));
    }
    // static private System.Void Internal_Destroy(System.IntPtr ptr)
    // Offset: 0xE2EBC0
    static void Internal_Destroy(::System::IntPtr ptr);
    // static private System.IntPtr Internal_Create(UnityEngine.Keyframe[] keys)
    // Offset: 0xE2EC00
    static ::System::IntPtr Internal_Create(::ArrayW<::UnityEngine::Keyframe> keys);
    // private System.Boolean Internal_Equals(System.IntPtr other)
    // Offset: 0xE2EC40
    bool Internal_Equals(::System::IntPtr other);
    // public System.Single Evaluate(System.Single time)
    // Offset: 0xE2ED2C
    float Evaluate(float time);
    // private UnityEngine.Keyframe GetKey(System.Int32 index)
    // Offset: 0xE2EE18
    ::UnityEngine::Keyframe GetKey(int index);
    // static public UnityEngine.AnimationCurve Linear(System.Single timeStart, System.Single valueStart, System.Single timeEnd, System.Single valueEnd)
    // Offset: 0xE2EF30
    static ::UnityEngine::AnimationCurve* Linear(float timeStart, float valueStart, float timeEnd, float valueEnd);
    // static public UnityEngine.AnimationCurve EaseInOut(System.Single timeStart, System.Single valueStart, System.Single timeEnd, System.Single valueEnd)
    // Offset: 0xE2F0F8
    static ::UnityEngine::AnimationCurve* EaseInOut(float timeStart, float valueStart, float timeEnd, float valueEnd);
    // public System.Boolean Equals(UnityEngine.AnimationCurve other)
    // Offset: 0xE2F35C
    bool Equals(::UnityEngine::AnimationCurve* other);
    // private System.Void GetKey_Injected(System.Int32 index, out UnityEngine.Keyframe ret)
    // Offset: 0xE2EED8
    void GetKey_Injected(int index, ByRef<::UnityEngine::Keyframe> ret);
    // public System.Void .ctor()
    // Offset: 0xE2F234
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationCurve* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AnimationCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationCurve*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0xE2EC90
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0xE2F284
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE2F428
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.AnimationCurve
  #pragma pack(pop)
  static check_size<sizeof(AnimationCurve), 16 + sizeof(::System::IntPtr)> __UnityEngine_AnimationCurveSizeCheck;
  static_assert(sizeof(AnimationCurve) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Keyframe (UnityEngine::AnimationCurve::*)(int)>(&UnityEngine::AnimationCurve::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AnimationCurve::*)()>(&UnityEngine::AnimationCurve::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Internal_Destroy
// Il2CppName: Internal_Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::AnimationCurve::Internal_Destroy)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Internal_Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Internal_Create
// Il2CppName: Internal_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::ArrayW<::UnityEngine::Keyframe>)>(&UnityEngine::AnimationCurve::Internal_Create)> {
  static const MethodInfo* get() {
    static auto* keys = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Keyframe"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Internal_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keys});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Internal_Equals
// Il2CppName: Internal_Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationCurve::*)(::System::IntPtr)>(&UnityEngine::AnimationCurve::Internal_Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Internal_Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Evaluate
// Il2CppName: Evaluate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AnimationCurve::*)(float)>(&UnityEngine::AnimationCurve::Evaluate)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Evaluate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::GetKey
// Il2CppName: GetKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Keyframe (UnityEngine::AnimationCurve::*)(int)>(&UnityEngine::AnimationCurve::GetKey)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "GetKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Linear
// Il2CppName: Linear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (*)(float, float, float, float)>(&UnityEngine::AnimationCurve::Linear)> {
  static const MethodInfo* get() {
    static auto* timeStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* valueStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* timeEnd = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* valueEnd = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Linear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeStart, valueStart, timeEnd, valueEnd});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::EaseInOut
// Il2CppName: EaseInOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (*)(float, float, float, float)>(&UnityEngine::AnimationCurve::EaseInOut)> {
  static const MethodInfo* get() {
    static auto* timeStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* valueStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* timeEnd = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* valueEnd = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "EaseInOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeStart, valueStart, timeEnd, valueEnd});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationCurve::*)(::UnityEngine::AnimationCurve*)>(&UnityEngine::AnimationCurve::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::GetKey_Injected
// Il2CppName: GetKey_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationCurve::*)(int, ByRef<::UnityEngine::Keyframe>)>(&UnityEngine::AnimationCurve::GetKey_Injected)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Keyframe")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "GetKey_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationCurve::*)()>(&UnityEngine::AnimationCurve::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationCurve::*)(::Il2CppObject*)>(&UnityEngine::AnimationCurve::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationCurve::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AnimationCurve::*)()>(&UnityEngine::AnimationCurve::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationCurve*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
