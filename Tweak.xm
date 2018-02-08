#import "NoBlur.h"

%hook _UIBackdropView
-(void)applySettings:(_UIBackdropViewSettings*)arg1 {
		_UIBackdropViewSettings *settings = [_UIBackdropViewSettings settingsForStyle:[self style]];
		settings.grayscaleTintAlpha = 0.45;
		//settings.scale = 1.0;
		settings.blurRadius = 0.0;
		%orig(settings);
}
%end

%hook _UIBackdropViewSettings
-(CGFloat)blurRadius {
	return (enabled && blur && blurOkay) ? 0.0 : %orig;
}
-(CGFloat)grayscaleTintAlpha {
	return (enabled && blur && blurOkay && otint) ? utint : %orig;
}
-(CGFloat)colorTintAlpha {
	return (enabled && blur && blurOkay && otint) ? utint : %orig;
}
-(CGFloat)grayscaleTintLevel {
	return (enabled && blur && blurOkay && olevel) ? ulevel : %orig;
}
-(CGFloat)scale {
	return (enabled && blur && blurOkay) ? 1.0 : %orig;
}
%end
