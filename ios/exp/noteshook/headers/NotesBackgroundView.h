//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NotesTextureScrolling.h"

@class NSString, NotesTextureBackgroundView, NotesTextureView;

@interface NotesBackgroundView : UIView <NotesTextureScrolling>
{
    _Bool _contentViewVisible;
    _Bool _topViewVisible;
    UIView *_contentView;
    NotesTextureBackgroundView *_textureView;
    NotesTextureBackgroundView *_topTextureView;
    NotesTextureBackgroundView *_bottomTextureView;
}

- (void).cxx_destruct;
- (void)addConstraintsForTopLayoutGuide:(id)arg1 bottomLayoutGuide:(id)arg2 toContainer:(id)arg3;
- (void)addSubview:(id)arg1;
@property(readonly, nonatomic) NotesTextureView *backgroundView;
@property(retain, nonatomic) NotesTextureBackgroundView *bottomTextureView; // @synthesize bottomTextureView=_bottomTextureView;
- (void)commonInit;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isContentViewVisible) _Bool contentViewVisible; // @synthesize contentViewVisible=_contentViewVisible;
@property(nonatomic, getter=isTopViewVisible) _Bool topViewVisible; // @synthesize topViewVisible=_topViewVisible;
- (void)scrollView:(id)arg1 didChangeContentOffset:(struct CGPoint)arg2;
- (id)scrollViewDescendantOfView:(id)arg1;
- (void)setAlphaForTopAndBottomBars:(double)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) NotesTextureBackgroundView *textureView; // @synthesize textureView=_textureView;
@property(retain, nonatomic) NotesTextureBackgroundView *topTextureView; // @synthesize topTextureView=_topTextureView;
- (void)snapshotContentIntoSnapshotView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

