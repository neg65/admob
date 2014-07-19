#import <Foundation/Foundation.h>
#import "GADInterstitialDelegate.h"
#import "AdmobAPI.h"
@interface AdmobFullDelege : NSObject <GADInterstitialDelegate>{
}
@property (nonatomic,retain) AdmobAPI* context;
@end
