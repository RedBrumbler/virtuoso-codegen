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
// Forward declaring namespace: Oculus::Platform::Samples::VrBoardGame
namespace Oculus::Platform::Samples::VrBoardGame {
  // Forward declaring type: GameController
  class GameController;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: ProductList
  class ProductList;
  // Forward declaring type: PurchaseList
  class PurchaseList;
  // Forward declaring type: Purchase
  class Purchase;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Samples.VrBoardGame
namespace Oculus::Platform::Samples::VrBoardGame {
  // Forward declaring type: IAPManager
  class IAPManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Samples::VrBoardGame::IAPManager);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::VrBoardGame::IAPManager*, "Oculus.Platform.Samples.VrBoardGame", "IAPManager");
// Type namespace: Oculus.Platform.Samples.VrBoardGame
namespace Oculus::Platform::Samples::VrBoardGame {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Samples.VrBoardGame.IAPManager
  // [TokenAttribute] Offset: FFFFFFFF
  class IAPManager : public ::UnityEngine::MonoBehaviour {
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
    // private Oculus.Platform.Samples.VrBoardGame.GameController m_gameController
    // Size: 0x8
    // Offset: 0x18
    ::Oculus::Platform::Samples::VrBoardGame::GameController* m_gameController;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Samples::VrBoardGame::GameController*) == 0x8);
    // private UnityEngine.UI.Text m_priceText
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Text* m_priceText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String CONSUMABLE_1
    static constexpr const char* CONSUMABLE_1 = "PowerballPack1";
    // Get static field: static private System.String CONSUMABLE_1
    static ::StringW _get_CONSUMABLE_1();
    // Set static field: static private System.String CONSUMABLE_1
    static void _set_CONSUMABLE_1(::StringW value);
    // Get instance field reference: private Oculus.Platform.Samples.VrBoardGame.GameController m_gameController
    ::Oculus::Platform::Samples::VrBoardGame::GameController*& dyn_m_gameController();
    // Get instance field reference: private UnityEngine.UI.Text m_priceText
    ::UnityEngine::UI::Text*& dyn_m_priceText();
    // private System.Void Start()
    // Offset: 0x9673A0
    void Start();
    // public System.Void FetchProductPrices()
    // Offset: 0x9673C4
    void FetchProductPrices();
    // private System.Void GetProductsBySKUCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.ProductList> msg)
    // Offset: 0x9675CC
    void GetProductsBySKUCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::ProductList*>* msg);
    // public System.Void FetchPurchasedProducts()
    // Offset: 0x967508
    void FetchPurchasedProducts();
    // private System.Void GetViewerPurchasesCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.PurchaseList> msg)
    // Offset: 0x967AE8
    void GetViewerPurchasesCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>* msg);
    // public System.Void BuyPowerBallsPressed()
    // Offset: 0x967F14
    void BuyPowerBallsPressed();
    // private System.Void LaunchCheckoutFlowCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase> msg)
    // Offset: 0x967FF0
    void LaunchCheckoutFlowCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>* msg);
    // public System.Void .ctor()
    // Offset: 0x9680DC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IAPManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Samples::VrBoardGame::IAPManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IAPManager*, creationType>()));
    }
  }; // Oculus.Platform.Samples.VrBoardGame.IAPManager
  #pragma pack(pop)
  static check_size<sizeof(IAPManager), 32 + sizeof(::UnityEngine::UI::Text*)> __Oculus_Platform_Samples_VrBoardGame_IAPManagerSizeCheck;
  static_assert(sizeof(IAPManager) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::IAPManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::IAPManager::*)()>(&Oculus::Platform::Samples::VrBoardGame::IAPManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::IAPManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::IAPManager::FetchProductPrices
// Il2CppName: FetchProductPrices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::IAPManager::*)()>(&Oculus::Platform::Samples::VrBoardGame::IAPManager::FetchProductPrices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::IAPManager*), "FetchProductPrices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::IAPManager::GetProductsBySKUCallback
// Il2CppName: GetProductsBySKUCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::IAPManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::ProductList*>*)>(&Oculus::Platform::Samples::VrBoardGame::IAPManager::GetProductsBySKUCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "ProductList")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::IAPManager*), "GetProductsBySKUCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::IAPManager::FetchPurchasedProducts
// Il2CppName: FetchPurchasedProducts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::IAPManager::*)()>(&Oculus::Platform::Samples::VrBoardGame::IAPManager::FetchPurchasedProducts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::IAPManager*), "FetchPurchasedProducts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::IAPManager::GetViewerPurchasesCallback
// Il2CppName: GetViewerPurchasesCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::IAPManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*)>(&Oculus::Platform::Samples::VrBoardGame::IAPManager::GetViewerPurchasesCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "PurchaseList")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::IAPManager*), "GetViewerPurchasesCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::IAPManager::BuyPowerBallsPressed
// Il2CppName: BuyPowerBallsPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::IAPManager::*)()>(&Oculus::Platform::Samples::VrBoardGame::IAPManager::BuyPowerBallsPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::IAPManager*), "BuyPowerBallsPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::IAPManager::LaunchCheckoutFlowCallback
// Il2CppName: LaunchCheckoutFlowCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Samples::VrBoardGame::IAPManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*)>(&Oculus::Platform::Samples::VrBoardGame::IAPManager::LaunchCheckoutFlowCallback)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "Purchase")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Samples::VrBoardGame::IAPManager*), "LaunchCheckoutFlowCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Samples::VrBoardGame::IAPManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
