# react-native-nitro-apple-ads

Nitro Module to access Apple's [AdServices Attribution](https://developer.apple.com/documentation/adservices/aaattribution) data.

## Installation

Works for React Native >=0.76.

```bash
npm install react-native-nitro-apple-ads
# peer dependencies
npm install react-native-nitro-modules
```

If you're using Expo, you'll need to [create a development build](https://docs.expo.dev/develop/development-builds/create-a-build/).

## Usage

AAA requires a token to receive data; this module handles token generation and passing automatically.

```typescript
import { NitroAppleAdAttribution } from "react-native-nitro-apple-ad-attribution";

const attributionData = await NitroAppleAdAttribution.getAdServicesAttributionData()

// {
//   attribution: boolean
//   orgId: number
//   campaignId: number
//   conversionType: string
//   clickDate?: string // ISO
//   adGroupId: number
//   countryOrRegion: string
//   keywordId: number
//   adId: number
// }
```

Refer to the [API docs](https://developer.apple.com/documentation/adservices/aaattribution/attributiontoken()) for more info on the attribution payload.