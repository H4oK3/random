//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface NotesQuickLookActivityItem : NSObject
{
    NSArray *_previewItems;
    unsigned long long _firstItemIndex;
    id <NotesQuickLookActivityItemDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NotesQuickLookActivityItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long firstItemIndex; // @synthesize firstItemIndex=_firstItemIndex;
@property(retain, nonatomic) NSArray *previewItems; // @synthesize previewItems=_previewItems;

@end
