#pragma once

#include "codegen-jsi/rn76JSI.h"

#include <winrt/Microsoft.ReactNative.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <TurboModuleProvider.h>

namespace facebook::react {

struct Rn76 : public NativeRn76CxxSpec<Rn76> {
    Rn76(std::shared_ptr<CallInvoker> jsInvoker) 
        : NativeRn76CxxSpec<Rn76>(std::move(jsInvoker)) {}

    double multiply(jsi::Runtime &rt, double a, double b);
};

struct Rn76PackageProvider
    : winrt::implements<Rn76PackageProvider, winrt::Microsoft::ReactNative::IReactPackageProvider> {
    void CreatePackage(winrt::Microsoft::ReactNative::IReactPackageBuilder const &packageBuilder) noexcept {
        winrt::Microsoft::ReactNative::AddTurboModuleProvider<Rn76>(packageBuilder, L"Rn76Cxx");
    }
};

}
