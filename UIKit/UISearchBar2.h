/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UISearchBar.h>
#import <UIKit/UIView.h>
#import <Availability2.h>

@class UILabel, UIButton, NSArray, UIImageView, NSString, UITextField, UIColor;
@protocol UISearchBarDelegate;

@interface UISearchBar ()
// -(id)initWithFrame:(CGRect)frame;
// -(id)initWithCoder:(id)coder;
-(void)_populateArchivedSubviews:(id)subviews;
// -(void)encodeWithCoder:(id)coder;
// -(void)dealloc;
-(void)setController:(id)controller;
-(id)controller;
-(id)searchField;
// -(void)willMoveToSuperview:(id)superview __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
// -(void)movedToSuperview:(id)superview __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
-(void)_updateRightView __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_2);
-(void)_hideShowAnimationDidFinish;
-(void)_setShowsCancelButton:(BOOL)button;
-(void)setBackgroundImage:(id)image;
-(id)backgroundImage;
-(void)setDrawsBackground:(BOOL)background;
-(BOOL)drawsBackground;
-(void)setCombinesLandscapeBars:(BOOL)bars;
-(BOOL)combinesLandscapeBars;
-(void)setUsesEmbeddedAppearance:(BOOL)appearance;
-(BOOL)usesEmbeddedAppearance;
-(void)setCancelButton:(id)button;
-(id)cancelButton;
// -(CGSize)sizeThatFits:(CGSize)fits;
-(void)_setShowsSeparator:(BOOL)separator;
// -(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)inset;
-(UIEdgeInsets)contentInset;
-(void)_setUpScopeBar;
-(void)_scopeChanged:(id)changed;
@end

@interface UISearchBar (UISearchBarStatic)
-(void)_updateSearchFieldArt;
-(void)_setupSearchField;
-(void)_updateOpacity;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(BOOL)textFieldShouldEndEditing:(id)textField;
-(void)_setupPromptLabel;
-(void)_setCancelButtonText:(id)text;
-(void)_setAutoDisableCancelButton:(BOOL)button;
-(void)_setupCancelButton;
-(void)_destroyCancelButton;
-(void)_cancelButtonPressed;
-(void)_bookmarkButtonPressed;
-(void)_searchFieldBeginEditing;
-(void)_searchFieldEndEditing;
-(void)_searchFieldReturnPressed;
-(void)_searchFieldEditingChanged;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)canBecomeFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(BOOL)pretendsIsInBar;
-(void)setPretendsIsInBar:(BOOL)bar;
-(BOOL)_isInBar;
-(void)_resultsListButtonPressed;
#endif
@end

@interface UISearchBar (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

