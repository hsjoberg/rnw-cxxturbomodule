#pragma once

#include "pch.h"
#include "resource.h"

#if __has_include("codegen/NativeRn76DataTypes.g.h")
  #include "codegen/NativeRn76DataTypes.g.h"
#endif
#include "codegen/NativeRn76Spec.g.h"

#include "NativeModules.h"

namespace winrt::rn76
{

REACT_MODULE(Rn76)
struct Rn76
{
  using ModuleSpec = rn76Codegen::Rn76Spec;

  REACT_INIT(Initialize)
  void Initialize(React::ReactContext const &reactContext) noexcept;

  REACT_SYNC_METHOD(multiply)
  double multiply(double a, double b) noexcept;

private:
  React::ReactContext m_context;
};

} // namespace winrt::rn76