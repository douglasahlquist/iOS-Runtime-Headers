/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMLogging : NSObject {
}

+ (id)dateFormatter;
+ (void)enableConsoleLoggingForLevel:(int)arg1;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4 arguments:(void*)arg5;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(BOOL)arg4 format:(id)arg5;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(BOOL)arg4 format:(id)arg5 arguments:(void*)arg6;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(BOOL)arg4 simpleLogString:(id)arg5;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(BOOL)arg4 simpleLogString:(id)arg5 format:(id)arg6 arguments:(void*)arg7 time:(unsigned long long)arg8;
+ (void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(BOOL)arg4 simpleLogString:(id)arg5 time:(unsigned long long)arg6;
+ (id)logFileDirectory;
+ (void)logString:(id)arg1 toFolder:(id)arg2 toFileNamed:(id)arg3;
+ (BOOL)loggingEnabledForLevel:(int)arg1;
+ (id)stringForDate;
+ (id)timeFormatter;

@end