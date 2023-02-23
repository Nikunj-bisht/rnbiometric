
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNFirstnativemodSpec.h"

@interface Firstnativemod : NSObject <NativeFirstnativemodSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Firstnativemod : NSObject <RCTBridgeModule>
#endif

@end
