// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.ParseFlags
#include "System/ParseFlags.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.ParseFailureKind
#include "System/ParseFailureKind.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: Calendar
  class Calendar;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: DateTimeResult
  struct DateTimeResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeResult, "System", "DateTimeResult");
// Type namespace: System
namespace System {
  // Size: 0x60
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.DateTimeResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct DateTimeResult/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Int32 Year
    // Size: 0x4
    // Offset: 0x0
    int Year;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Month
    // Size: 0x4
    // Offset: 0x4
    int Month;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Day
    // Size: 0x4
    // Offset: 0x8
    int Day;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Hour
    // Size: 0x4
    // Offset: 0xC
    int Hour;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Minute
    // Size: 0x4
    // Offset: 0x10
    int Minute;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Second
    // Size: 0x4
    // Offset: 0x14
    int Second;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Double fraction
    // Size: 0x8
    // Offset: 0x18
    double fraction;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // System.Int32 era
    // Size: 0x4
    // Offset: 0x20
    int era;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.ParseFlags flags
    // Size: 0x4
    // Offset: 0x24
    ::System::ParseFlags flags;
    // Field size check
    static_assert(sizeof(::System::ParseFlags) == 0x4);
    // System.TimeSpan timeZoneOffset
    // Size: 0x8
    // Offset: 0x28
    ::System::TimeSpan timeZoneOffset;
    // Field size check
    static_assert(sizeof(::System::TimeSpan) == 0x8);
    // System.Globalization.Calendar calendar
    // Size: 0x8
    // Offset: 0x30
    ::System::Globalization::Calendar* calendar;
    // Field size check
    static_assert(sizeof(::System::Globalization::Calendar*) == 0x8);
    // System.DateTime parsedDate
    // Size: 0x8
    // Offset: 0x38
    ::System::DateTime parsedDate;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // System.ParseFailureKind failure
    // Size: 0x4
    // Offset: 0x40
    ::System::ParseFailureKind failure;
    // Field size check
    static_assert(sizeof(::System::ParseFailureKind) == 0x4);
    // Padding between fields: failure and: failureMessageID
    char __padding12[0x4] = {};
    // System.String failureMessageID
    // Size: 0x8
    // Offset: 0x48
    ::StringW failureMessageID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Object failureMessageFormatArgument
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppObject* failureMessageFormatArgument;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.String failureArgumentName
    // Size: 0x8
    // Offset: 0x58
    ::StringW failureArgumentName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: DateTimeResult
    constexpr DateTimeResult(int Year_ = {}, int Month_ = {}, int Day_ = {}, int Hour_ = {}, int Minute_ = {}, int Second_ = {}, double fraction_ = {}, int era_ = {}, ::System::ParseFlags flags_ = {}, ::System::TimeSpan timeZoneOffset_ = {}, ::System::Globalization::Calendar* calendar_ = {}, ::System::DateTime parsedDate_ = {}, ::System::ParseFailureKind failure_ = {}, ::StringW failureMessageID_ = {}, ::Il2CppObject* failureMessageFormatArgument_ = {}, ::StringW failureArgumentName_ = {}) noexcept : Year{Year_}, Month{Month_}, Day{Day_}, Hour{Hour_}, Minute{Minute_}, Second{Second_}, fraction{fraction_}, era{era_}, flags{flags_}, timeZoneOffset{timeZoneOffset_}, calendar{calendar_}, parsedDate{parsedDate_}, failure{failure_}, failureMessageID{failureMessageID_}, failureMessageFormatArgument{failureMessageFormatArgument_}, failureArgumentName{failureArgumentName_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.Int32 Year
    int& dyn_Year();
    // Get instance field reference: System.Int32 Month
    int& dyn_Month();
    // Get instance field reference: System.Int32 Day
    int& dyn_Day();
    // Get instance field reference: System.Int32 Hour
    int& dyn_Hour();
    // Get instance field reference: System.Int32 Minute
    int& dyn_Minute();
    // Get instance field reference: System.Int32 Second
    int& dyn_Second();
    // Get instance field reference: System.Double fraction
    double& dyn_fraction();
    // Get instance field reference: System.Int32 era
    int& dyn_era();
    // Get instance field reference: System.ParseFlags flags
    ::System::ParseFlags& dyn_flags();
    // Get instance field reference: System.TimeSpan timeZoneOffset
    ::System::TimeSpan& dyn_timeZoneOffset();
    // Get instance field reference: System.Globalization.Calendar calendar
    ::System::Globalization::Calendar*& dyn_calendar();
    // Get instance field reference: System.DateTime parsedDate
    ::System::DateTime& dyn_parsedDate();
    // Get instance field reference: System.ParseFailureKind failure
    ::System::ParseFailureKind& dyn_failure();
    // Get instance field reference: System.String failureMessageID
    ::StringW& dyn_failureMessageID();
    // Get instance field reference: System.Object failureMessageFormatArgument
    ::Il2CppObject*& dyn_failureMessageFormatArgument();
    // Get instance field reference: System.String failureArgumentName
    ::StringW& dyn_failureArgumentName();
    // System.Void Init()
    // Offset: 0xCA50C8
    void Init();
    // System.Void SetDate(System.Int32 year, System.Int32 month, System.Int32 day)
    // Offset: 0xCA50E8
    void SetDate(int year, int month, int day);
    // System.Void SetFailure(System.ParseFailureKind failure, System.String failureMessageID, System.Object failureMessageFormatArgument)
    // Offset: 0xCA50F4
    void SetFailure(::System::ParseFailureKind failure, ::StringW failureMessageID, ::Il2CppObject* failureMessageFormatArgument);
    // System.Void SetFailure(System.ParseFailureKind failure, System.String failureMessageID, System.Object failureMessageFormatArgument, System.String failureArgumentName)
    // Offset: 0xCA5100
    void SetFailure(::System::ParseFailureKind failure, ::StringW failureMessageID, ::Il2CppObject* failureMessageFormatArgument, ::StringW failureArgumentName);
  }; // System.DateTimeResult
  #pragma pack(pop)
  static check_size<sizeof(DateTimeResult), 88 + sizeof(::StringW)> __System_DateTimeResultSizeCheck;
  static_assert(sizeof(DateTimeResult) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::DateTimeResult::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::DateTimeResult::*)()>(&System::DateTimeResult::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeResult), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeResult::SetDate
// Il2CppName: SetDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::DateTimeResult::*)(int, int, int)>(&System::DateTimeResult::SetDate)> {
  static const MethodInfo* get() {
    static auto* year = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* month = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* day = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeResult), "SetDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{year, month, day});
  }
};
// Writing MetadataGetter for method: System::DateTimeResult::SetFailure
// Il2CppName: SetFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::DateTimeResult::*)(::System::ParseFailureKind, ::StringW, ::Il2CppObject*)>(&System::DateTimeResult::SetFailure)> {
  static const MethodInfo* get() {
    static auto* failure = &::il2cpp_utils::GetClassFromName("System", "ParseFailureKind")->byval_arg;
    static auto* failureMessageID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* failureMessageFormatArgument = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeResult), "SetFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failure, failureMessageID, failureMessageFormatArgument});
  }
};
// Writing MetadataGetter for method: System::DateTimeResult::SetFailure
// Il2CppName: SetFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::DateTimeResult::*)(::System::ParseFailureKind, ::StringW, ::Il2CppObject*, ::StringW)>(&System::DateTimeResult::SetFailure)> {
  static const MethodInfo* get() {
    static auto* failure = &::il2cpp_utils::GetClassFromName("System", "ParseFailureKind")->byval_arg;
    static auto* failureMessageID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* failureMessageFormatArgument = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* failureArgumentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeResult), "SetFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failure, failureMessageID, failureMessageFormatArgument, failureArgumentName});
  }
};
