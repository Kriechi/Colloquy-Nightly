#import "CQPreferencesTableViewController.h"

@class CQTextView;

@protocol CQPreferencesTextEditViewDelegate <NSObject>
@optional
- (NSString *) stringForFooterWithTextView:(CQTextView *) textView;
- (NSInteger) integerForCountdownInFooterWithTextView:(CQTextView *) textView;
@end

@interface CQPreferencesTextEditViewController : CQPreferencesTableViewController {
@protected
	id <CQPreferencesTextEditViewDelegate> __weak _delegate;

	NSString *_listItemText;
	NSString *_listItemPlaceholder;

	NSInteger _charactersRemainingBeforeDisplay;

	UILabel *_footerLabel;
}
@property (nonatomic, weak) id <CQPreferencesTextEditViewDelegate> delegate;
@property (nonatomic, copy) NSString *listItem;
@property (nonatomic, copy) NSString *listItemPlaceholder;
@property (nonatomic) NSInteger charactersRemainingBeforeDisplay;
@end
