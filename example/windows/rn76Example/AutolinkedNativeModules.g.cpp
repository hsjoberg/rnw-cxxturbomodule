// AutolinkedNativeModules.g.cpp contents generated by "npx @react-native-community/cli autolink-windows"
// clang-format off
#include "pch.h"
#include "AutolinkedNativeModules.g.h"

// Includes from rn76
#include <winrt/rn76.h>

namespace winrt::Microsoft::ReactNative
{

void RegisterAutolinkedNativeModulePackages(winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::ReactNative::IReactPackageProvider> const& packageProviders)
{ 
    // IReactPackageProviders from rn76
    packageProviders.Append(winrt::rn76::ReactPackageProvider());
}

}
