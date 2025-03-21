///
/// NitroAppleAdAttribution-Swift-Cxx-Bridge.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#include "NitroAppleAdAttribution-Swift-Cxx-Bridge.hpp"

// Include C++ implementation defined types
#include "HybridNitroAppleAdAttributionSpecSwift.hpp"
#include "NitroAppleAdAttribution-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::nitroappleadattribution::bridge::swift {

  // pragma MARK: std::function<void(const AdServicesAttributionDataResponse& /* result */)>
  Func_void_AdServicesAttributionDataResponse create_Func_void_AdServicesAttributionDataResponse(void* _Nonnull swiftClosureWrapper) {
    auto swiftClosure = NitroAppleAdAttribution::Func_void_AdServicesAttributionDataResponse::fromUnsafe(swiftClosureWrapper);
    return [swiftClosure = std::move(swiftClosure)](const AdServicesAttributionDataResponse& result) mutable -> void {
      swiftClosure.call(result);
    };
  }
  
  // pragma MARK: std::function<void(const std::exception_ptr& /* error */)>
  Func_void_std__exception_ptr create_Func_void_std__exception_ptr(void* _Nonnull swiftClosureWrapper) {
    auto swiftClosure = NitroAppleAdAttribution::Func_void_std__exception_ptr::fromUnsafe(swiftClosureWrapper);
    return [swiftClosure = std::move(swiftClosure)](const std::exception_ptr& error) mutable -> void {
      swiftClosure.call(error);
    };
  }
  
  // pragma MARK: std::shared_ptr<margelo::nitro::nitroappleadattribution::HybridNitroAppleAdAttributionSpec>
  std::shared_ptr<margelo::nitro::nitroappleadattribution::HybridNitroAppleAdAttributionSpec> create_std__shared_ptr_margelo__nitro__nitroappleadattribution__HybridNitroAppleAdAttributionSpec_(void* _Nonnull swiftUnsafePointer) {
    NitroAppleAdAttribution::HybridNitroAppleAdAttributionSpec_cxx swiftPart = NitroAppleAdAttribution::HybridNitroAppleAdAttributionSpec_cxx::fromUnsafe(swiftUnsafePointer);
    return std::make_shared<margelo::nitro::nitroappleadattribution::HybridNitroAppleAdAttributionSpecSwift>(swiftPart);
  }
  void* _Nonnull get_std__shared_ptr_margelo__nitro__nitroappleadattribution__HybridNitroAppleAdAttributionSpec_(std__shared_ptr_margelo__nitro__nitroappleadattribution__HybridNitroAppleAdAttributionSpec_ cppType) {
    std::shared_ptr<margelo::nitro::nitroappleadattribution::HybridNitroAppleAdAttributionSpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::nitroappleadattribution::HybridNitroAppleAdAttributionSpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"HybridNitroAppleAdAttributionSpec\" is not implemented in Swift!");
    }
  #endif
    NitroAppleAdAttribution::HybridNitroAppleAdAttributionSpec_cxx& swiftPart = swiftWrapper->getSwiftPart();
    return swiftPart.toUnsafe();
  }

} // namespace margelo::nitro::nitroappleadattribution::bridge::swift
