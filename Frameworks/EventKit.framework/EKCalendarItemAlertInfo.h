/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class <EKTravelAdvice>, NSDate, NSString, NSTimeZone, NSURL;

@interface EKCalendarItemAlertInfo : NSObject <NSCopying> {
    BOOL _acknowledged;
    NSURL *_action;
    NSString *_alarmID;
    BOOL _allDay;
    NSString *_dismissalID;
    NSDate *_endDate;
    NSURL *_entityID;
    NSDate *_eventDate;
    NSTimeZone *_eventTimeZone;
    NSString *_externalID;
    NSDate *_firstDateAlertedForTravelAdvice;
    struct { 
        double latitude; 
        double longitude; 
    } _geoLocationCoordinates;
    BOOL _hasGeoLocationCoordinates;
    BOOL _hasOrganizerThatIsNotCurrentUser;
    BOOL _isOffsetFromTravelTimeStart;
    NSDate *_lastFireTimeOfAlertOffsetFromTravelTime;
    <EKTravelAdvice> *_latestTravelAdvice;
    NSString *_location;
    NSString *_organizerEmailAddress;
    int _proximity;
    NSString *_publisherBulletinID;
    NSString *_startLocationRouting;
    BOOL _tentative;
    NSString *_title;
}

@property(readonly) BOOL acknowledged;
@property(readonly) NSURL * action;
@property(readonly) NSString * alarmID;
@property(readonly) BOOL allDay;
@property(readonly) NSString * dismissalID;
@property(readonly) NSDate * endDate;
@property(readonly) NSURL * entityID;
@property(readonly) NSDate * eventDate;
@property(readonly) NSTimeZone * eventTimeZone;
@property(readonly) NSString * externalID;
@property(retain) NSDate * firstDateAlertedForTravelAdvice;
@property struct { double x1; double x2; } geoLocationCoordinates;
@property BOOL hasGeoLocationCoordinates;
@property BOOL hasOrganizerThatIsNotCurrentUser;
@property(readonly) BOOL isOffsetFromTravelTimeStart;
@property(retain) NSDate * lastFireTimeOfAlertOffsetFromTravelTime;
@property(retain) <EKTravelAdvice> * latestTravelAdvice;
@property(readonly) NSString * location;
@property(retain) NSString * organizerEmailAddress;
@property(readonly) int proximity;
@property(readonly) NSString * publisherBulletinID;
@property(readonly) NSString * recordID;
@property(retain) NSString * startLocationRouting;
@property(readonly) BOOL tentative;
@property(readonly) NSString * title;

- (BOOL)acknowledged;
- (id)action;
- (id)alarmID;
- (BOOL)allDay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dismissalID;
- (id)endDate;
- (id)entityID;
- (id)eventDate;
- (id)eventTimeZone;
- (id)externalID;
- (id)firstDateAlertedForTravelAdvice;
- (struct { double x1; double x2; })geoLocationCoordinates;
- (BOOL)hasGeoLocationCoordinates;
- (BOOL)hasOrganizerThatIsNotCurrentUser;
- (unsigned int)hash;
- (id)initWithTitle:(id)arg1 location:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 allDay:(BOOL)arg6 tentative:(BOOL)arg7 publisherBulletinID:(id)arg8 entityID:(id)arg9 action:(id)arg10 proximity:(int)arg11 externalID:(id)arg12 acknowledged:(BOOL)arg13 dismissalID:(id)arg14 alarmID:(id)arg15 isOffsetFromTravelTimeStart:(BOOL)arg16;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isOffsetFromTravelTimeStart;
- (id)lastFireTimeOfAlertOffsetFromTravelTime;
- (id)latestTravelAdvice;
- (id)location;
- (id)organizerEmailAddress;
- (int)proximity;
- (id)publisherBulletinID;
- (id)recordID;
- (void)setFirstDateAlertedForTravelAdvice:(id)arg1;
- (void)setGeoLocationCoordinates:(struct { double x1; double x2; })arg1;
- (void)setHasGeoLocationCoordinates:(BOOL)arg1;
- (void)setHasOrganizerThatIsNotCurrentUser:(BOOL)arg1;
- (void)setLastFireTimeOfAlertOffsetFromTravelTime:(id)arg1;
- (void)setLatestTravelAdvice:(id)arg1;
- (void)setOrganizerEmailAddress:(id)arg1;
- (void)setStartLocationRouting:(id)arg1;
- (id)startLocationRouting;
- (BOOL)tentative;
- (id)title;

@end