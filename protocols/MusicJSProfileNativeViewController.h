/* Generated by RuntimeBrowser.
 */

@protocol MusicJSProfileNativeViewController <JSExport, MusicJSNativeViewController>

@required

- (void)presentBiographyEditorDocument:(IKDOMDocument *)arg1 :(NSDictionary *)arg2;
- (void)presentShareDocument:(IKDOMDocument *)arg1 :(NSDictionary *)arg2;
- (void)setAvailableContentFlags:(NSDictionary *)arg1;
- (void)setFollowerCountText:(NSString *)arg1 :(NSString *)arg2;
- (void)setMoreRelatedContentDocument:(IKDOMDocument *)arg1 :(NSDictionary *)arg2;
- (void)setNumberOfFollowers:(unsigned int)arg1;
- (void)setProfileEntityValueProvider:(NSDictionary *)arg1;
- (void)setRelatedContentDocument:(IKDOMDocument *)arg1 :(NSDictionary *)arg2;
- (void)setReportingInformation:(NSDictionary *)arg1;
- (void)setSegmentDocument:(NSString *)arg1 :(IKDOMDocument *)arg2 :(NSDictionary *)arg3;
- (void)setSelectedSegment:(NSString *)arg1;
- (void)setSocialHidden:(BOOL)arg1;
- (void)setVisibleSegments:(NSArray *)arg1;
- (BOOL)supportsRelatedContentDocument;

@end