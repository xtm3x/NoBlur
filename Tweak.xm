#import "NoBlur.h"

%hook _UIBackdropView
-(void)applySettings:(_UIBackdropViewSettings*)settings {
		_UIBackdropViewSettings *noBlurSettings = [_UIBackdropViewSettings settingsForStyle:[self style]];
		noBlurSettings.grayscaleTintAlpha = 0.45;
		noBlurSettings.scale = 1.0;
		noBlurSettings.blurRadius = 0.0;
		%orig(noBlurSettings);
}
%end
