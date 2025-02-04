/*
 * Copyright 2020. Huawei Technologies Co., Ltd. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, BookManagerAddBookType) {
    BookManagerAddBookTypeBookNmae,
    BookManagerAddBookTypeAuthor,
    BookManagerAddBookTypePrice,
    BookManagerAddBookTypePublishingHouse,
    BookManagerAddBookTypePublishingTime,
    BookManagerAddBookTypeQueryCount
};

@class BookInfo;

@protocol BookManagerAddTableViewCellTextFieldDelegate <NSObject>

- (void)textFieldTextChange:(NSString *)text textType:(BookManagerAddBookType)textType;

@end

@interface BMAddDataTableViewCell : UITableViewCell

@property (nonatomic, weak) id<BookManagerAddTableViewCellTextFieldDelegate> delegate;

- (void)setTitleWithText:(NSString *)text textType:(BookManagerAddBookType)textType;

- (void)setContentTextWithBookInfo:(BookInfo *)bookInfo index:(NSInteger)index;

@end

NS_ASSUME_NONNULL_END
