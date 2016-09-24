/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface GEOEncyclopedicInfoUserLocation : NSObject <GEOEncyclopedicInfo> {
    MKMapItem * _mapItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOMapItemAttribution *encyclopedicAttribution;
@property (nonatomic, readonly) NSArray *factoids;
@property (nonatomic, readonly) BOOL hasPairOfFactoids;
@property (nonatomic, readonly) BOOL hasTextBlock;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *textBlockText;
@property (nonatomic, readonly) NSString *textBlockTitle;

- (void).cxx_destruct;
- (id)encyclopedicAttribution;
- (id)factoids;
- (BOOL)hasPairOfFactoids;
- (BOOL)hasTextBlock;
- (id)initWithMapItem:(id)arg1;
- (id)mapItem;
- (void)setMapItem:(id)arg1;
- (id)textBlockText;
- (id)textBlockTitle;

@end