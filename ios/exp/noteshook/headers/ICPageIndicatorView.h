//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface ICPageIndicatorView : UIView
{
    long long _numberOfPages;
    long long _currentPage;
    unsigned long long _circleWidth;
    unsigned long long _circleSpacing;
}

@property(nonatomic) unsigned long long circleSpacing; // @synthesize circleSpacing=_circleSpacing;
@property(nonatomic) unsigned long long circleWidth; // @synthesize circleWidth=_circleWidth;
- (void)commonInit;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;

@end

