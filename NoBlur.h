@interface SBDockView
-(void)setBackgroundAlpha:(CGFloat)arg1;
@end

@interface _UIBackdropViewSettings : NSObject
@property(nonatomic)CGFloat blurRadius;
@property(nonatomic)CGFloat grayscaleTintAlpha;
-(void)setBlurRadius:(CGFloat)arg1 ;
-(void)setColorTintAlpha:(CGFloat)arg1 ;
-(void)setColorTintLevel:(CGFloat)arg1 ;
-(void)setColorTintLevel:(CGFloat)arg1 ;
-(void)setGrayscaleTintLevel:(CGFloat)arg1;
-(void)setSaturationDeltaFactor:(CGFloat)arg1;
-(void)setScale:(CGFloat)arg1;
+(id)settingsForStyle:(long long)arg1 ;
+(id)settingsForStyle:(long long)arg1 graphicsQuality:(long long)arg2 ;
-(id)backdrop;
-(CGFloat)grayscaleTintAlpha;
-(CGFloat)grayscaleTintLevel;
-(CGFloat)colorTintAlpha;
@end

@interface _UIBackdropView : UIView
@property(retain, nonatomic) _UIBackdropViewSettings *inputSettings;
-(void)transitionToSettings:(id)arg1;
-(void)_setBlursBackground:(BOOL)arg1;
- (void)transitionToStyle:(int)style;
-(void)setColorMatrixGrayscaleTintAlpha:(CGFloat)arg1;
-(CGFloat)colorMatrixGrayscaleTintAlpha;
-(void)setBlurRadius:(CGFloat)arg1 ;
-(CGFloat)blurRadius;
-(int)style;
@end

@interface SBControlCenterContentContainerView : UIView
-(_UIBackdropView *)backdropView;
@end

@interface SBNotificationCenterViewController : UIViewController
-(_UIBackdropView *)backdropView;
@end

@interface SBBannerContextView : UIView
@property (nonatomic,retain,readonly) _UIBackdropView * backdrop;
@end

@interface _UINavigationBarBackground : UIView
-(_UIBackdropView *)_adaptiveBackdrop;
@end