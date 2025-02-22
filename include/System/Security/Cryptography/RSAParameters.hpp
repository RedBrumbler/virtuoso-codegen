// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSAParameters
  struct RSAParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAParameters, "System.Security.Cryptography", "RSAParameters");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Security.Cryptography.RSAParameters
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 57B854
  struct RSAParameters/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Byte[] Exponent
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<uint8_t> Exponent;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] Modulus
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<uint8_t> Modulus;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] P
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> P;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] Q
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> Q;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] DP
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> DP;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] DQ
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> DQ;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] InverseQ
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> InverseQ;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] D
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint8_t> D;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating value type constructor for type: RSAParameters
    constexpr RSAParameters(::ArrayW<uint8_t> Exponent_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> Modulus_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> P_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> Q_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> DP_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> DQ_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> InverseQ_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> D_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr))) noexcept : Exponent{Exponent_}, Modulus{Modulus_}, P{P_}, Q{Q_}, DP{DP_}, DQ{DQ_}, InverseQ{InverseQ_}, D{D_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Byte[] Exponent
    ::ArrayW<uint8_t>& dyn_Exponent();
    // Get instance field reference: public System.Byte[] Modulus
    ::ArrayW<uint8_t>& dyn_Modulus();
    // Get instance field reference: public System.Byte[] P
    ::ArrayW<uint8_t>& dyn_P();
    // Get instance field reference: public System.Byte[] Q
    ::ArrayW<uint8_t>& dyn_Q();
    // Get instance field reference: public System.Byte[] DP
    ::ArrayW<uint8_t>& dyn_DP();
    // Get instance field reference: public System.Byte[] DQ
    ::ArrayW<uint8_t>& dyn_DQ();
    // Get instance field reference: public System.Byte[] InverseQ
    ::ArrayW<uint8_t>& dyn_InverseQ();
    // Get instance field reference: public System.Byte[] D
    ::ArrayW<uint8_t>& dyn_D();
  }; // System.Security.Cryptography.RSAParameters
  #pragma pack(pop)
  static check_size<sizeof(RSAParameters), 56 + sizeof(::ArrayW<uint8_t>)> __System_Security_Cryptography_RSAParametersSizeCheck;
  static_assert(sizeof(RSAParameters) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
