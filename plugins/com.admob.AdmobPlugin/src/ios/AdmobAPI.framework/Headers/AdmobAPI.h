#import <Foundation/Foundation.h>
#import "AdmobWebPluginDelegate.h"
#import "GADBannerView.h"
@interface AdmobAPI : NSObject
@property(nonatomic,retain) id<AdmobWebPluginDelegate> plugin;
-(void) fireEvent:(NSString*) eventType withEventData:(NSString*) jsonString;

- (void)hideBanner;
- (void)showBannerAbsolute:(int) x withY:(int) y;
- (void)showBanner:(int) position;
- (void)initBanner:(NSString *)adid withWidth:(int)width withHeight:(int)height ;
- (void)initInterstitial:(NSString *)adid ;
- (BOOL)isInterstitialReady ;
- (void)showInterstitial;
- (void)cacheInterstitial;
- (NSString*)  netURL;
- (void) updateKey;
@end
