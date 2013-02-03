/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardInputMode, NSArray, NSString, NSMutableArray, <UIKeyboardInputModeControllerDelegate>;

@interface UIKeyboardInputModeController : NSObject {
    UIKeyboardInputMode *_currentInputMode;
    <UIKeyboardInputModeControllerDelegate> *_delegate;
    NSArray *_inputModesWithoutHardwareSupport;
    NSMutableArray *_supportedInputModeIdentifiers;
    NSString *currentLanguage;
    NSString *currentLocale;
    NSArray *defaultInputModes;
    NSArray *defaultKeyboardInputModes;
    NSArray *defaultNormalizedInputModes;
    NSArray *enabledInputModes;
    NSArray *keyboardInputModes;
    NSArray *normalizedInputModes;
}

@property(readonly) BOOL containsDictationSupportedInputMode;
@property(retain) UIKeyboardInputMode * currentInputMode;
@property(retain) NSString * currentLanguage;
@property(retain) NSString * currentLocale;
@property(retain) NSArray * defaultInputModes;
@property(retain) NSArray * defaultKeyboardInputModes;
@property(retain) NSArray * defaultNormalizedInputModes;
@property <UIKeyboardInputModeControllerDelegate> * delegate;
@property(readonly) NSArray * enabledInputModeIdentifiers;
@property(readonly) NSArray * enabledInputModeLanguages;
@property(retain) NSArray * enabledInputModes;
@property(readonly) NSArray * inputModesWithoutHardwareSupport;
@property(retain) NSArray * keyboardInputModes;
@property(readonly) NSArray * normalizedEnabledInputModeIdentifiers;
@property(retain) NSArray * normalizedInputModes;
@property(readonly) NSArray * supportedInputModeIdentifiers;

+ (id)sharedInputModeController;

- (id)activeInputModes;
- (void)clearCachedValues;
- (BOOL)containsDictationSupportedInputMode;
- (id)currentInputMode;
- (id)currentLanguage;
- (id)currentLocale;
- (void)dealloc;
- (id)defaultEnabledInputModesForCurrentLocale:(BOOL)arg1;
- (id)defaultInputModes;
- (id)defaultKeyboardInputModes;
- (id)defaultNormalizedInputModes;
- (id)delegate;
- (id)enabledInputModeIdentifiers:(BOOL)arg1;
- (id)enabledInputModeIdentifiers;
- (id)enabledInputModeLanguages;
- (id)enabledInputModes;
- (id)inputModeWithIdentifier:(id)arg1;
- (id)inputModesWithoutHardwareSupport;
- (id)keyboardInputModes;
- (id)normalizedEnabledInputModeIdentifiers;
- (id)normalizedInputModes;
- (void)setCurrentInputMode:(id)arg1;
- (void)setCurrentLanguage:(id)arg1;
- (void)setCurrentLocale:(id)arg1;
- (void)setDefaultInputModes:(id)arg1;
- (void)setDefaultKeyboardInputModes:(id)arg1;
- (void)setDefaultNormalizedInputModes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabledInputModes:(id)arg1;
- (void)setKeyboardInputModes:(id)arg1;
- (void)setNormalizedInputModes:(id)arg1;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startDictationConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (id)supportedInputModeIdentifiers;
- (void)updateCurrentInputMode:(id)arg1;

@end