// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Net.Security.BufferOffsetSize
#include "Mono/Net/Security/BufferOffsetSize.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Forward declaring type: BufferOffsetSize2
  class BufferOffsetSize2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::Security::BufferOffsetSize2);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::BufferOffsetSize2*, "Mono.Net.Security", "BufferOffsetSize2");
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.BufferOffsetSize2
  // [TokenAttribute] Offset: FFFFFFFF
  class BufferOffsetSize2 : public ::Mono::Net::Security::BufferOffsetSize {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public readonly System.Int32 InitialSize
    // Size: 0x4
    // Offset: 0x28
    int InitialSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return InitialSize;
    }
    // Get instance field reference: public readonly System.Int32 InitialSize
    int& dyn_InitialSize();
    // public System.Void .ctor(System.Int32 size)
    // Offset: 0xE69600
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BufferOffsetSize2* New_ctor(int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Net::Security::BufferOffsetSize2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BufferOffsetSize2*, creationType>(size)));
    }
    // public System.Void Reset()
    // Offset: 0xE69674
    void Reset();
    // public System.Void MakeRoom(System.Int32 size)
    // Offset: 0xE696FC
    void MakeRoom(int size);
    // public System.Void AppendData(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0xE697BC
    void AppendData(::ArrayW<uint8_t> buffer, int offset, int size);
  }; // Mono.Net.Security.BufferOffsetSize2
  #pragma pack(pop)
  static check_size<sizeof(BufferOffsetSize2), 40 + sizeof(int)> __Mono_Net_Security_BufferOffsetSize2SizeCheck;
  static_assert(sizeof(BufferOffsetSize2) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::BufferOffsetSize2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::Security::BufferOffsetSize2::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::BufferOffsetSize2::*)()>(&Mono::Net::Security::BufferOffsetSize2::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::BufferOffsetSize2*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::BufferOffsetSize2::MakeRoom
// Il2CppName: MakeRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::BufferOffsetSize2::*)(int)>(&Mono::Net::Security::BufferOffsetSize2::MakeRoom)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::BufferOffsetSize2*), "MakeRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::BufferOffsetSize2::AppendData
// Il2CppName: AppendData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::BufferOffsetSize2::*)(::ArrayW<uint8_t>, int, int)>(&Mono::Net::Security::BufferOffsetSize2::AppendData)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::BufferOffsetSize2*), "AppendData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
