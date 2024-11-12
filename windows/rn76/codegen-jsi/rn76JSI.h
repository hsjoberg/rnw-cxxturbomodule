/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleH.js
 */

#pragma once

#include <ReactCommon/TurboModule.h>
// #include <react/bridging/Bridging.h>
#include "bridging/Bridging.h"

namespace facebook::react {


  class JSI_EXPORT NativeRn76CxxSpecJSI : public TurboModule {
protected:
  NativeRn76CxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker);

public:
  virtual double multiply(jsi::Runtime &rt, double a, double b) = 0;

};

template <typename T>
class JSI_EXPORT NativeRn76CxxSpec : public TurboModule {
public:
  jsi::Value get(jsi::Runtime &rt, const jsi::PropNameID &propName) override {
    return delegate_.get(rt, propName);
  }

  static constexpr std::string_view kModuleName = "Rn76Cxx";

protected:
  NativeRn76CxxSpec(std::shared_ptr<CallInvoker> jsInvoker)
    : TurboModule(std::string{NativeRn76CxxSpec::kModuleName}, jsInvoker),
      delegate_(reinterpret_cast<T*>(this), jsInvoker) {}


private:
  class Delegate : public NativeRn76CxxSpecJSI {
  public:
    Delegate(T *instance, std::shared_ptr<CallInvoker> jsInvoker) :
      NativeRn76CxxSpecJSI(std::move(jsInvoker)), instance_(instance) {

    }

    double multiply(jsi::Runtime &rt, double a, double b) override {
      static_assert(
          bridging::getParameterCount(&T::multiply) == 3,
          "Expected multiply(...) to have 3 parameters");

      return bridging::callFromJs<double>(
          rt, &T::multiply, jsInvoker_, instance_, std::move(a), std::move(b));
    }

  private:
    friend class NativeRn76CxxSpec;
    T *instance_;
  };

  Delegate delegate_;
};

} // namespace facebook::react
