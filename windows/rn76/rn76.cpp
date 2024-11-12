#include "pch.h"

#include "rn76.h"

namespace winrt::rn76
{

// See https://microsoft.github.io/react-native-windows/docs/native-modules for details on writing native modules

void Rn76::Initialize(React::ReactContext const &reactContext) noexcept {
  m_context = reactContext;
}

double Rn76::multiply(double a, double b) noexcept {
  return a * b;
}

} // namespace winrt::rn76