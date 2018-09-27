/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCPreviewInteractionPresenter : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegatePrivate> {
    unsigned long long  _backgroundMaterialOptions;
    MTMaterialView * _backgroundMaterialView;
    UIView * _containerView;
    NCPreviewInteractionPresenterContentView * _contentView;
    <NCPreviewInteractionPresenterDelegate> * _delegate;
    bool  _didSendBeginInteraction;
    NSString * _groupName;
    long long  _materialRecipe;
    unsigned long long  _overlayMaterialOptions;
    bool  _presented;
    NCPreviewInteractionPresentedControl * _presentedControl;
    UIPreviewInteraction * _previewInteraction;
    UIView * _sourceView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceViewVisibleRect;
    NCTouchEaterGestureRecognizer * _touchEater;
    bool  _transitioning;
}

@property (nonatomic, readonly) unsigned long long backgroundMaterialOptions;
@property (getter=_backgroundMaterialView, nonatomic, readonly) MTMaterialView *backgroundMaterialView;
@property (getter=_containerView, nonatomic, readonly) UIView *containerView;
@property (getter=_contentView, nonatomic, readonly) NCPreviewInteractionPresenterContentView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCPreviewInteractionPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_didSendBeginInteraction, setter=_setDidSendBeginInteraction:, nonatomic) bool didSendBeginInteraction;
@property (nonatomic, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long materialRecipe;
@property (nonatomic, readonly) unsigned long long overlayMaterialOptions;
@property (getter=isPresented, setter=_setPresented:, nonatomic) bool presented;
@property (getter=_presentedControl, nonatomic, readonly) NCPreviewInteractionPresentedControl *presentedControl;
@property (getter=_previewInteraction, nonatomic, readonly) UIPreviewInteraction *previewInteraction;
@property (nonatomic, readonly) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceViewVisibleRect;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (getter=_touchEater, nonatomic, readonly) NCTouchEaterGestureRecognizer *touchEater;
@property (getter=_isTransitioning, setter=_setTransitioning:, nonatomic) bool transitioning;

- (void).cxx_destruct;
- (void)_animateTransitionWithProgress:(double)arg1 ended:(bool)arg2 cancelled:(bool)arg3 completion:(id /* block */)arg4;
- (id)_backgroundMaterialView;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (void)_configureContainerViewIfNecessary;
- (void)_configureContentViewIfNecessary;
- (void)_configurePresentedControlIfNecessaryWithTitle:(id)arg1;
- (id)_containerView;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_contentView;
- (bool)_didSendBeginInteraction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_finalPresentedViewFrame;
- (double)_frictionForTransitionProgress:(double)arg1 ended:(bool)arg2 cancelled:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_initialPresentedViewFrame;
- (bool)_isTransitioning;
- (void)_performCancel;
- (id)_presentedControl;
- (id)_previewInteraction;
- (id)_previewInteractionHighlighterForPreviewTransition:(id)arg1;
- (bool)_previewInteractionShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (void)_setDidSendBeginInteraction:(bool)arg1;
- (void)_setPresented:(bool)arg1;
- (void)_setTransitioning:(bool)arg1;
- (void)_setUpBackgroundMaterialView;
- (void)_setUpContainerView;
- (void)_setUpContentView;
- (void)_setUpPresentedControl;
- (void)_tearDown;
- (double)_tensionForTransitionProgress:(double)arg1 ended:(bool)arg2 cancelled:(bool)arg3;
- (id)_touchEater;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_transitionalPresentedViewFrameWithProgress:(double)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (unsigned long long)backgroundMaterialOptions;
- (void)dealloc;
- (id)delegate;
- (bool)dismissModalFullScreenIfNeeded;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)groupName;
- (void)handleEatenTouch:(id)arg1;
- (id)initWithTitle:(id)arg1 sourceView:(id)arg2 materialRecipe:(long long)arg3 backgroundMaterialOptions:(unsigned long long)arg4 overlayMaterialOptions:(unsigned long long)arg5;
- (bool)isPresented;
- (long long)materialRecipe;
- (unsigned long long)overlayMaterialOptions;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (bool)previewInteractionShouldBegin:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setSourceViewVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)sourceView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceViewVisibleRect;
- (id)title;

@end