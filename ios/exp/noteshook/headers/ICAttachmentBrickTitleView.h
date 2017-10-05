//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ICLabel, NSAttributedString, NSLayoutConstraint, NSString;

@interface ICAttachmentBrickTitleView : UIView
{
    _Bool _titleBold;
    _Bool _adjustCenteringForDescender;
    long long _titleMaxNumberOfLines;
    long long _subtitleMaxNumberOfLines;
    long long _subtitleFontSize;
    ICLabel *_titleView;
    ICLabel *_subtitleView;
    struct UIView *_textBlockView;
    NSLayoutConstraint *_textBlockCenterConstraint;
    NSLayoutConstraint *_heightConstraint;
}

+ (void)contentSizeCategoryChanged:(id)arg1;
+ (void)initialize;
+ (double)maxTextBoxHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool adjustCenteringForDescender; // @synthesize adjustCenteringForDescender=_adjustCenteringForDescender;
- (void)contentSizeCategoryDidChange;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutText;
@property(copy, nonatomic) NSAttributedString *subtitleAttributedString;
@property(nonatomic) long long subtitleFontSize; // @synthesize subtitleFontSize=_subtitleFontSize;
@property(nonatomic) long long subtitleMaxNumberOfLines; // @synthesize subtitleMaxNumberOfLines=_subtitleMaxNumberOfLines;
@property(copy, nonatomic) NSString *subtitleString; // @dynamic subtitleString;
@property(retain, nonatomic) ICLabel *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) NSLayoutConstraint *textBlockCenterConstraint; // @synthesize textBlockCenterConstraint=_textBlockCenterConstraint;
@property(retain, nonatomic) UIView *textBlockView; // @synthesize textBlockView=_textBlockView;
@property(copy, nonatomic) NSAttributedString *titleAttributedString;
@property(nonatomic) _Bool titleBold; // @synthesize titleBold=_titleBold;
@property(nonatomic) long long titleMaxNumberOfLines; // @synthesize titleMaxNumberOfLines=_titleMaxNumberOfLines;
@property(copy, nonatomic) NSString *titleString; // @dynamic titleString;
@property(retain, nonatomic) ICLabel *titleView; // @synthesize titleView=_titleView;
- (void)updateHeightConstraint;

@end

