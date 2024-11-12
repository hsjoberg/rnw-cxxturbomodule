#include "pch.h"
#include "rn76-jsi.h"

namespace facebook::react {

double Rn76::multiply(jsi::Runtime &rt, double a, double b) {
    return a * b;
}

} // namespace facebook::react