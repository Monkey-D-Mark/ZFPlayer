#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "ZFAVPlayerManager.h"
#import "UIImageView+ZFCache.h"
#import "UIView+ZFFrame.h"
#import "ZFLandScapeControlView.h"
#import "ZFLoadingView.h"
#import "ZFPlayerControlView.h"
#import "ZFPortraitControlView.h"
#import "ZFSliderView.h"
#import "ZFSmallFloatControlView.h"
#import "ZFUtilities.h"
#import "ZFVolumeBrightnessView.h"
#import "UIScrollView+ZFPlayer.h"
#import "UIViewController+ZFPlayerRotation.h"
#import "ZFFloatView.h"
#import "ZFKVOController.h"
#import "ZFOrientationObserver.h"
#import "ZFPlayer.h"
#import "ZFPlayerController.h"
#import "ZFPlayerGestureControl.h"
#import "ZFPlayerMediaControl.h"
#import "ZFPlayerMediaPlayback.h"
#import "ZFPlayerNotification.h"
#import "ZFPlayerView.h"
#import "ZFReachabilityManager.h"
#import "KSMediaPlayerManager.h"

FOUNDATION_EXPORT double ZFPlayerVersionNumber;
FOUNDATION_EXPORT const unsigned char ZFPlayerVersionString[];

