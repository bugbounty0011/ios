//
//  PastebinEditorViewController.h
//
//  Copyright (C) 2015 IRCCloud, Ltd.
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
#import "BuffersDataSource.h"

@interface PastebinEditorViewController : UITableViewController<UITextFieldDelegate,UITextViewDelegate> {
    UITextField *_filename;
    UITextView *_message;
    UITextView *_text;
    int _sayreqid;
    Buffer *_buffer;
    NSString *_pasteID;
    UISegmentedControl *_type;
    UILabel *_messageFooter;
}
+(NSString *)pastebinType:(NSString *)extension;
-(id)initWithBuffer:(Buffer *)buffer;
-(id)initWithPasteID:(NSString *)pasteID;
@property NSString *extension;
@end
