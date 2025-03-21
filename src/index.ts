import { NitroModules } from "react-native-nitro-modules";
import type { NitroAppleAdAttribution as NitroAppleAdsSpec } from "./specs/NitroAppleAdAttribution.nitro";

export const NitroAppleAdAttribution =
  NitroModules.createHybridObject<NitroAppleAdsSpec>("NitroAppleAdAttribution");
