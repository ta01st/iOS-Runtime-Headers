/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIApplicationRotationFollowingWindow : UIWindow

+ (BOOL)_isSystemWindow;

- (void)_commonApplicationRotationFollowingWindowInit;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 attached:(BOOL)arg2;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)applicationWindowRotated:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isInterfaceAutorotationDisabled;

@end