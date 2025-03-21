import type { HybridObject } from 'react-native-nitro-modules'

/**
 * attribution data from Apple's AdServices API
 * @see https://developer.apple.com/documentation/adservices/aaattribution/attributiontoken()
 */
export type AppleAdsAttributionData = {
  attribution: boolean
  orgId: number
  campaignId: number
  conversionType: string
  clickDate?: string // ISO
  adGroupId: number
  countryOrRegion: string
  keywordId: number
  adId: number
}

export type AdServicesAttributionDataResponse = {
  data: AppleAdsAttributionData
  error: Error
}

export interface NitroAppleAdAttribution extends HybridObject<{ ios: "swift" }> {
  getAdServicesAttributionData(): Promise<AdServicesAttributionDataResponse>
}
