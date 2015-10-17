#import <Preferences/Preferences.h>

@interface NoSlowAnimationsSettingsListController: PSListController {
}
@end

@implementation NoSlowAnimationsSettingsListController
- (id)specifiers {
	if(_specifiers == nil) {
		_specifiers = [[self loadSpecifiersFromPlistName:@"NoSlowAnimationsSettings" target:self] retain];
	}
	return _specifiers;
}

-(void) donate: (id)arg1 {
[[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"https://www.paypal.me/joemerlino"]];
}

-(void)twitter:(id)arg1 {
    [[UIApplication sharedApplication]openURL:[NSURL URLWithString:@"http://twitter.com/joe_merlino"]];
    
}

-(void) sendEmailTo: (id)arg1 {
[[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"mailto:merlino.giuseppe1@gmail.com"]];
}



@end

// vim:ft=objc
