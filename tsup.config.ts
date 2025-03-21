import { defineConfig } from "tsup";

export default defineConfig({
  entry: ["./src/index.ts"],
  minify: true,
  outDir: "lib",
  dts: true,
  sourcemap: true,
  clean: true,
});
