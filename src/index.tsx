const Rn76 = require('./NativeRn76').default;

export function multiply(a: number, b: number): number {
  return Rn76.multiply(a, b);
}
