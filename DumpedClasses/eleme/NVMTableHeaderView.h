//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class NSString, UIColor, UIFont;

@interface NVMTableHeaderView : UITableViewHeaderFooterView
{
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
}

+ (id)reuseIdentifier;
+ (id)tableHeaderLabelWithTitle:(id)arg1;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

