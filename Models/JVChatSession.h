#import "JVChatTranscript.h"

@interface JVChatSession : NSObject <JVChatTranscriptElement> {
	@protected
	/* xmlNode */ void *_node;
	NSScriptObjectSpecifier *_objectSpecifier;
	__weak JVChatTranscript *_transcript;
	NSDate *_startDate;
}
- (/* xmlNode */ void *) node;
- (JVChatTranscript *) transcript;
- (NSDate *) startDate;
@end
