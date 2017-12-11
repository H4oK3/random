//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ScrollViewKeyboardResizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSString, NotesBackgroundView, ScrollViewKeyboardResizer;

@interface ICScrollViewDelegateViewController : UIViewController <ScrollViewKeyboardResizerDelegate, UIScrollViewDelegate>
{
    _Bool _scrollViewDecelerating;
    ScrollViewKeyboardResizer *_scrollViewResizer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NotesBackgroundView *backgroundView;
- (double)consumedBottomAreaForResizer:(id)arg1;
- (void)pauseIndexing;
@property(nonatomic) _Bool scrollViewDecelerating; // @synthesize scrollViewDecelerating=_scrollViewDecelerating;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) ScrollViewKeyboardResizer *scrollViewResizer; // @synthesize scrollViewResizer=_scrollViewResizer;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setupScrollViewKeyboardResizer;
- (double)topInsetForResizer:(id)arg1;
- (void)unpauseIndexing;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
