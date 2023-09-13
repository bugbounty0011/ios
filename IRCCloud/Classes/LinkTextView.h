//
//  LinkTextView.h
//
//  Copyright (C) 2016 IRCCloud, Ltd.
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import <UIKit/UIKit.h>

@protocol LinkTextViewDelegate;

@interface LinkTextView : UITextView<UIGestureRecognizerDelegate> {
    UITapGestureRecognizer *_tapGesture;
    NSMutableArray *_links;
}
@property (unsafe_unretained) id <LinkTextViewDelegate> linkDelegate;
@property (strong) NSDictionary *linkAttributes;

- (void)addLinkToURL:(NSURL *)url withRange:(NSRange)range;
- (void)addLinkWithTextCheckingResult:(NSTextCheckingResult *)result;
- (NSTextCheckingResult *)linkAtPoint:(CGPoint)p;

+(CGFloat)heightOfString:(NSAttributedString *)text constrainedToWidth:(CGFloat)width;
@end

@protocol LinkTextViewDelegate
- (void)LinkTextView:(LinkTextView *)label didSelectLinkWithTextCheckingResult:(NSTextCheckingResult *)result;
@end
