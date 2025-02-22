// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DG::Tweening::Plugins::Core
namespace DG::Tweening::Plugins::Core {
  // Forward declaring type: ITweenPlugin
  class ITweenPlugin;
  // Forward declaring type: ABSTweenPlugin`3<T1, T2, TPlugOptions>
  template<typename T1, typename T2, typename TPlugOptions>
  class ABSTweenPlugin_3;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Skipping declaration: ValueType because it is already included!
}
// Forward declaring namespace: DG::Tweening::Plugins::Options
namespace DG::Tweening::Plugins::Options {
  // Forward declaring type: IPlugOptions
  class IPlugOptions;
}
// Completed forward declares
// Type namespace: DG.Tweening.Plugins.Core
namespace DG::Tweening::Plugins::Core {
  // Forward declaring type: PluginsManager
  class PluginsManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DG::Tweening::Plugins::Core::PluginsManager);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Plugins::Core::PluginsManager*, "DG.Tweening.Plugins.Core", "PluginsManager");
// Type namespace: DG.Tweening.Plugins.Core
namespace DG::Tweening::Plugins::Core {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DG.Tweening.Plugins.Core.PluginsManager
  // [TokenAttribute] Offset: FFFFFFFF
  class PluginsManager : public ::Il2CppObject {
    public:
    // Get static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _floatPlugin
    static ::DG::Tweening::Plugins::Core::ITweenPlugin* _get__floatPlugin();
    // Set static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _floatPlugin
    static void _set__floatPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin* value);
    // Get static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _doublePlugin
    static ::DG::Tweening::Plugins::Core::ITweenPlugin* _get__doublePlugin();
    // Set static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _doublePlugin
    static void _set__doublePlugin(::DG::Tweening::Plugins::Core::ITweenPlugin* value);
    // Get static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _intPlugin
    static ::DG::Tweening::Plugins::Core::ITweenPlugin* _get__intPlugin();
    // Set static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _intPlugin
    static void _set__intPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin* value);
    // Get static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _uintPlugin
    static ::DG::Tweening::Plugins::Core::ITweenPlugin* _get__uintPlugin();
    // Set static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _uintPlugin
    static void _set__uintPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin* value);
    // Get static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _longPlugin
    static ::DG::Tweening::Plugins::Core::ITweenPlugin* _get__longPlugin();
    // Set static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _longPlugin
    static void _set__longPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin* value);
    // Get static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _ulongPlugin
    static ::DG::Tweening::Plugins::Core::ITweenPlugin* _get__ulongPlugin();
    // Set static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _ulongPlugin
    static void _set__ulongPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin* value);
    // Get static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _vector2Plugin
    static ::DG::Tweening::Plugins::Core::ITweenPlugin* _get__vector2Plugin();
    // Set static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _vector2Plugin
    static void _set__vector2Plugin(::DG::Tweening::Plugins::Core::ITweenPlugin* value);
    // Get static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _vector3Plugin
    static ::DG::Tweening::Plugins::Core::ITweenPlugin* _get__vector3Plugin();
    // Set static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _vector3Plugin
    static void _set__vector3Plugin(::DG::Tweening::Plugins::Core::ITweenPlugin* value);
    // Get static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _vector4Plugin
    static ::DG::Tweening::Plugins::Core::ITweenPlugin* _get__vector4Plugin();
    // Set static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _vector4Plugin
    static void _set__vector4Plugin(::DG::Tweening::Plugins::Core::ITweenPlugin* value);
    // Get static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _quaternionPlugin
    static ::DG::Tweening::Plugins::Core::ITweenPlugin* _get__quaternionPlugin();
    // Set static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _quaternionPlugin
    static void _set__quaternionPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin* value);
    // Get static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _colorPlugin
    static ::DG::Tweening::Plugins::Core::ITweenPlugin* _get__colorPlugin();
    // Set static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _colorPlugin
    static void _set__colorPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin* value);
    // Get static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _rectPlugin
    static ::DG::Tweening::Plugins::Core::ITweenPlugin* _get__rectPlugin();
    // Set static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _rectPlugin
    static void _set__rectPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin* value);
    // Get static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _rectOffsetPlugin
    static ::DG::Tweening::Plugins::Core::ITweenPlugin* _get__rectOffsetPlugin();
    // Set static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _rectOffsetPlugin
    static void _set__rectOffsetPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin* value);
    // Get static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _stringPlugin
    static ::DG::Tweening::Plugins::Core::ITweenPlugin* _get__stringPlugin();
    // Set static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _stringPlugin
    static void _set__stringPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin* value);
    // Get static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _vector3ArrayPlugin
    static ::DG::Tweening::Plugins::Core::ITweenPlugin* _get__vector3ArrayPlugin();
    // Set static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _vector3ArrayPlugin
    static void _set__vector3ArrayPlugin(::DG::Tweening::Plugins::Core::ITweenPlugin* value);
    // Get static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _color2Plugin
    static ::DG::Tweening::Plugins::Core::ITweenPlugin* _get__color2Plugin();
    // Set static field: static private DG.Tweening.Plugins.Core.ITweenPlugin _color2Plugin
    static void _set__color2Plugin(::DG::Tweening::Plugins::Core::ITweenPlugin* value);
    // static field const value: static private System.Int32 _MaxCustomPlugins
    static constexpr const int _MaxCustomPlugins = 20;
    // Get static field: static private System.Int32 _MaxCustomPlugins
    static int _get__MaxCustomPlugins();
    // Set static field: static private System.Int32 _MaxCustomPlugins
    static void _set__MaxCustomPlugins(int value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,DG.Tweening.Plugins.Core.ITweenPlugin> _customPlugins
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::DG::Tweening::Plugins::Core::ITweenPlugin*>* _get__customPlugins();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,DG.Tweening.Plugins.Core.ITweenPlugin> _customPlugins
    static void _set__customPlugins(::System::Collections::Generic::Dictionary_2<::System::Type*, ::DG::Tweening::Plugins::Core::ITweenPlugin*>* value);
    // static DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> GetDefaultPlugin()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T1, class T2, class TPlugOptions>
    static ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1, T2, TPlugOptions>* GetDefaultPlugin() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TPlugOptions>, ::DG::Tweening::Plugins::Options::IPlugOptions> && std::is_convertible_v<TPlugOptions, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::Plugins::Core::PluginsManager::GetDefaultPlugin");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("DG.Tweening.Plugins.Core", "PluginsManager", "GetDefaultPlugin", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPlugOptions>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPlugOptions>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1, T2, TPlugOptions>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> GetCustomPlugin()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TPlugin, class T1, class T2, class TPlugOptions>
    static ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1, T2, TPlugOptions>* GetCustomPlugin() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TPlugin>, ::DG::Tweening::Plugins::Core::ITweenPlugin>);
      static_assert(std::is_convertible_v<std::remove_pointer_t<TPlugOptions>, ::DG::Tweening::Plugins::Options::IPlugOptions> && std::is_convertible_v<TPlugOptions, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::DG::Tweening::Plugins::Core::PluginsManager::GetCustomPlugin");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("DG.Tweening.Plugins.Core", "PluginsManager", "GetCustomPlugin", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPlugin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPlugOptions>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPlugin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPlugOptions>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1, T2, TPlugOptions>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static System.Void PurgeAll()
    // Offset: 0x1095284
    static void PurgeAll();
  }; // DG.Tweening.Plugins.Core.PluginsManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DG::Tweening::Plugins::Core::PluginsManager::GetDefaultPlugin
// Il2CppName: GetDefaultPlugin
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: DG::Tweening::Plugins::Core::PluginsManager::GetCustomPlugin
// Il2CppName: GetCustomPlugin
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: DG::Tweening::Plugins::Core::PluginsManager::PurgeAll
// Il2CppName: PurgeAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&DG::Tweening::Plugins::Core::PluginsManager::PurgeAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DG::Tweening::Plugins::Core::PluginsManager*), "PurgeAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
