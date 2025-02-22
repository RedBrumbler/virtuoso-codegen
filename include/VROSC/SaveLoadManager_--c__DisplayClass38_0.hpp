// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VROSC.SaveLoadManager
#include "VROSC/SaveLoadManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: VROSC
namespace VROSC {
  // Forward declaring type: Error
  struct Error;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VROSC::SaveLoadManager::$$c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SaveLoadManager::$$c__DisplayClass38_0*, "VROSC", "SaveLoadManager/<>c__DisplayClass38_0");
// Type namespace: VROSC
namespace VROSC {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VROSC.SaveLoadManager/VROSC.<>c__DisplayClass38_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SaveLoadManager::$$c__DisplayClass38_0 : public ::Il2CppObject {
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
    // public System.String sessionName
    // Size: 0x8
    // Offset: 0x10
    ::StringW sessionName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return sessionName;
    }
    // Get instance field reference: public System.String sessionName
    ::StringW& dyn_sessionName();
    // System.Void <DownloadPreviewFromCloudSuccess>b__0(UnityEngine.AudioClip audioClip)
    // Offset: 0x1346518
    void $DownloadPreviewFromCloudSuccess$b__0(::UnityEngine::AudioClip* audioClip);
    // System.Void <DownloadPreviewFromCloudSuccess>b__1(VROSC.Error error)
    // Offset: 0x13465A8
    void $DownloadPreviewFromCloudSuccess$b__1(::VROSC::Error error);
    // public System.Void .ctor()
    // Offset: 0x1346510
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaveLoadManager::$$c__DisplayClass38_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VROSC::SaveLoadManager::$$c__DisplayClass38_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaveLoadManager::$$c__DisplayClass38_0*, creationType>()));
    }
  }; // VROSC.SaveLoadManager/VROSC.<>c__DisplayClass38_0
  #pragma pack(pop)
  static check_size<sizeof(SaveLoadManager::$$c__DisplayClass38_0), 16 + sizeof(::StringW)> __VROSC_SaveLoadManager_$$c__DisplayClass38_0SizeCheck;
  static_assert(sizeof(SaveLoadManager::$$c__DisplayClass38_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$$c__DisplayClass38_0::$DownloadPreviewFromCloudSuccess$b__0
// Il2CppName: <DownloadPreviewFromCloudSuccess>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::$$c__DisplayClass38_0::*)(::UnityEngine::AudioClip*)>(&VROSC::SaveLoadManager::$$c__DisplayClass38_0::$DownloadPreviewFromCloudSuccess$b__0)> {
  static const MethodInfo* get() {
    static auto* audioClip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager::$$c__DisplayClass38_0*), "<DownloadPreviewFromCloudSuccess>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioClip});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$$c__DisplayClass38_0::$DownloadPreviewFromCloudSuccess$b__1
// Il2CppName: <DownloadPreviewFromCloudSuccess>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VROSC::SaveLoadManager::$$c__DisplayClass38_0::*)(::VROSC::Error)>(&VROSC::SaveLoadManager::$$c__DisplayClass38_0::$DownloadPreviewFromCloudSuccess$b__1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("VROSC", "Error")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VROSC::SaveLoadManager::$$c__DisplayClass38_0*), "<DownloadPreviewFromCloudSuccess>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: VROSC::SaveLoadManager::$$c__DisplayClass38_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
