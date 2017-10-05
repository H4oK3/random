//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICNoteBaseUserActivityState.h"

@class NSDate, NSString;

@interface NoteUserActivityState : ICNoteBaseUserActivityState
{
    _Bool _editing;
    _Bool _contentPlainText;
    NSString *_noteID;
    NSDate *_modificationDate;
    NSDate *_creationDate;
    NSString *_title;
    NSString *_content;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (id)initWithNote:(id)arg1;
@property(nonatomic, getter=isContentPlainText) _Bool contentPlainText; // @synthesize contentPlainText=_contentPlainText;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(copy, nonatomic) NSString *noteID; // @synthesize noteID=_noteID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)updateUserActivity:(id)arg1;

@end

