// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO::Compression
namespace System::IO::Compression {
  // Forward declaring type: InputBuffer
  class InputBuffer;
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Forward declaring type: OutputWindow
  class OutputWindow;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Compression::OutputWindow);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::OutputWindow*, "System.IO.Compression", "OutputWindow");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.OutputWindow
  // [TokenAttribute] Offset: FFFFFFFF
  class OutputWindow : public ::Il2CppObject {
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
    // private readonly System.Byte[] _window
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> window;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 _end
    // Size: 0x4
    // Offset: 0x18
    int end;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _bytesUsed
    // Size: 0x4
    // Offset: 0x1C
    int bytesUsed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly System.Byte[] _window
    ::ArrayW<uint8_t>& dyn__window();
    // Get instance field reference: private System.Int32 _end
    int& dyn__end();
    // Get instance field reference: private System.Int32 _bytesUsed
    int& dyn__bytesUsed();
    // public System.Int32 get_FreeBytes()
    // Offset: 0x1120C04
    int get_FreeBytes();
    // public System.Int32 get_AvailableBytes()
    // Offset: 0x1121188
    int get_AvailableBytes();
    // public System.Void Write(System.Byte b)
    // Offset: 0x1120C14
    void Write(uint8_t b);
    // public System.Void WriteLengthDistance(System.Int32 length, System.Int32 distance)
    // Offset: 0x1120C78
    void WriteLengthDistance(int length, int distance);
    // public System.Int32 CopyFrom(System.IO.Compression.InputBuffer input, System.Int32 length)
    // Offset: 0x1120AE8
    int CopyFrom(::System::IO::Compression::InputBuffer* input, int length);
    // public System.Int32 CopyTo(System.Byte[] output, System.Int32 offset, System.Int32 length)
    // Offset: 0x111F764
    int CopyTo(::ArrayW<uint8_t> output, int offset, int length);
    // public System.Void .ctor()
    // Offset: 0x111F6C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OutputWindow* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Compression::OutputWindow::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OutputWindow*, creationType>()));
    }
  }; // System.IO.Compression.OutputWindow
  #pragma pack(pop)
  static check_size<sizeof(OutputWindow), 28 + sizeof(int)> __System_IO_Compression_OutputWindowSizeCheck;
  static_assert(sizeof(OutputWindow) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::OutputWindow::get_FreeBytes
// Il2CppName: get_FreeBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::OutputWindow::*)()>(&System::IO::Compression::OutputWindow::get_FreeBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputWindow*), "get_FreeBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::OutputWindow::get_AvailableBytes
// Il2CppName: get_AvailableBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::OutputWindow::*)()>(&System::IO::Compression::OutputWindow::get_AvailableBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputWindow*), "get_AvailableBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::OutputWindow::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::OutputWindow::*)(uint8_t)>(&System::IO::Compression::OutputWindow::Write)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputWindow*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::OutputWindow::WriteLengthDistance
// Il2CppName: WriteLengthDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::OutputWindow::*)(int, int)>(&System::IO::Compression::OutputWindow::WriteLengthDistance)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputWindow*), "WriteLengthDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length, distance});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::OutputWindow::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::OutputWindow::*)(::System::IO::Compression::InputBuffer*, int)>(&System::IO::Compression::OutputWindow::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.IO.Compression", "InputBuffer")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputWindow*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, length});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::OutputWindow::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::OutputWindow::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Compression::OutputWindow::CopyTo)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::OutputWindow*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, offset, length});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::OutputWindow::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!