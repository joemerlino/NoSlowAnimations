/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <WebKit/DOMHTMLInputElement.h>
#import <Availability2.h>

@interface DOMHTMLInputElement (UIWebViewAdditions)	// Note: the category name is UITextInputAdditions in 3.2.
-(id)textInputTraits;
-(id)text;
-(BOOL)isSecure;
-(BOOL)isTextControl;
-(int)keyboardType __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
-(void)setSelectionWithPoint:(CGPoint)point __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_2);
@end

@interface DOMHTMLInputElement (UIWebInteraction)
-(BOOL)isLikelyToBeginPageLoad;
-(BOOL)nodeCanBecomeFirstResponder;
@end

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@interface DOMHTMLInputElement (UIWebBrowserViewPrivate)
-(void)_startAssistingDocumentView:(id)view;
-(void)_stopAssistingDocumentView:(id)view;
-(BOOL)_isAssistable;
-(BOOL)_requiresAccessoryView;
-(BOOL)_requiresInputView;
-(BOOL)_supportsAutoFill;
@end
#else
@interface DOMHTMLInputElement (UIWebFormAssistantExtras)
-(id)createPeripheral;
@end
#endif

