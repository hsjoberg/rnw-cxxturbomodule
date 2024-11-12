
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRn76Spec.h"

@interface Rn76 : NSObject <NativeRn76Spec>
#else
#import <React/RCTBridgeModule.h>

@interface Rn76 : NSObject <RCTBridgeModule>
#endif

@end
