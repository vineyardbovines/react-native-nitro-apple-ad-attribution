///
/// HybridNitroAppleAdAttributionSpec.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/// See ``HybridNitroAppleAdAttributionSpec``
public protocol HybridNitroAppleAdAttributionSpec_protocol: HybridObject {
  // Properties
  

  // Methods
  func getAdServicesAttributionData() throws -> Promise<AdServicesAttributionDataResponse>
}

/// See ``HybridNitroAppleAdAttributionSpec``
public class HybridNitroAppleAdAttributionSpec_base {
  private weak var cxxWrapper: HybridNitroAppleAdAttributionSpec_cxx? = nil
  public func getCxxWrapper() -> HybridNitroAppleAdAttributionSpec_cxx {
  #if DEBUG
    guard self is HybridNitroAppleAdAttributionSpec else {
      fatalError("`self` is not a `HybridNitroAppleAdAttributionSpec`! Did you accidentally inherit from `HybridNitroAppleAdAttributionSpec_base` instead of `HybridNitroAppleAdAttributionSpec`?")
    }
  #endif
    if let cxxWrapper = self.cxxWrapper {
      return cxxWrapper
    } else {
      let cxxWrapper = HybridNitroAppleAdAttributionSpec_cxx(self as! HybridNitroAppleAdAttributionSpec)
      self.cxxWrapper = cxxWrapper
      return cxxWrapper
    }
  }
}

/**
 * A Swift base-protocol representing the NitroAppleAdAttribution HybridObject.
 * Implement this protocol to create Swift-based instances of NitroAppleAdAttribution.
 * ```swift
 * class HybridNitroAppleAdAttribution : HybridNitroAppleAdAttributionSpec {
 *   // ...
 * }
 * ```
 */
public typealias HybridNitroAppleAdAttributionSpec = HybridNitroAppleAdAttributionSpec_protocol & HybridNitroAppleAdAttributionSpec_base
