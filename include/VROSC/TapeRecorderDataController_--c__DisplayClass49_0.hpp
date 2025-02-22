// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.TapeRecorderDataController
#include "VROSC/TapeRecorderDataController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::TapeRecorderDataController::$$c__DisplayClass49_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TapeRecorderDataController::$$c__DisplayClass49_0*, "VROSC", "TapeRecorderDataController/<>c__DisplayClass49_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.TapeRecorderDataController/VROSC.<>c__DisplayClass49_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TapeRecorderDataController::$$c__DisplayClass49_0 : public ::Il2CppObject {
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
    // public System.Action`2<System.Boolean,System.Single> onSuccess
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_2<bool, float>* onSuccess;
    // Field size check
    static_assert(sizeof(::System::Action_2<bool, float>*) == 0x8);
    // public System.Single normalizeMultiplier
    // Size: 0x4
    // Offset: 0x18
    float normalizeMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Action`2<System.Boolean,System.Single> onSuccess
    ::System::Action_2<bool, float>*& dyn_onSuccess();
    // Get instance field reference: public System.Single normalizeMultiplier
    float& dyn_normalizeMultiplier();
    // System.Void <SaveAudioPreview>b__0()
    // Offset: 0x134F7E8
    void $SaveAudioPreview$b__0();
    // public System.Void .ctor()
    // Offset: 0x134F7E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TapeRecorderDataController::$$c__DisplayClass49_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::TapeRecorderDataController::$$c__DisplayClass49_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TapeRecorderDataController::$$c__DisplayClass49_0*, creationType>()));
    }
  }; // VROSC.TapeRecorderDataController/VROSC.<>c__DisplayClass49_0
  #pragma pack(pop)
  static check_size<sizeof(TapeRecorderDataController::$$c__DisplayClass49_0), 24 + sizeof(float)> __VROSC_TapeRecorderDataController_$$c__DisplayClass49_0SizeCheck;
  static_assert(sizeof(TapeRecorderDataController::$$c__DisplayClass49_0) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::$$c__DisplayClass49_0::$SaveAudioPreview$b__0
// Il2CppName: <SaveAudioPreview>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::TapeRecorderDataController::$$c__DisplayClass49_0::*)()>(&VROSC::TapeRecorderDataController::$$c__DisplayClass49_0::$SaveAudioPreview$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VROSC::TapeRecorderDataController::$$c__DisplayClass49_0*), "<SaveAudioPreview>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VROSC::TapeRecorderDataController::$$c__DisplayClass49_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
