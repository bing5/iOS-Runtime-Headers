/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFDictationOptions : NSObject <NSCopying, NSSecureCoding> {
    NSString *_applicationName;
    NSString *_applicationVersion;
    AFSiriContext *_context;
    NSString *_fieldIdentifier;
    NSString *_fieldLabel;
    NSString *_interactionIdentifier;
    int _keyboardType;
    NSString *_languageCodeOverride;
    NSString *_postfixText;
    NSString *_prefixText;
    int _returnKeyType;
    NSString *_selectedText;
    int _transcriptionMode;
}

@property (nonatomic, copy) NSString *applicationName;
@property (nonatomic, copy) NSString *applicationVersion;
@property (nonatomic, retain) AFSiriContext *context;
@property (nonatomic, copy) NSString *fieldIdentifier;
@property (nonatomic, copy) NSString *fieldLabel;
@property (nonatomic, copy) NSString *interactionIdentifier;
@property (nonatomic) int keyboardType;
@property (nonatomic, copy) NSString *languageCodeOverride;
@property (nonatomic, copy) NSString *postfixText;
@property (nonatomic, copy) NSString *prefixText;
@property (nonatomic) int returnKeyType;
@property (nonatomic, copy) NSString *selectedText;
@property (nonatomic) int transcriptionMode;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationName;
- (id)applicationVersion;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictationOptionsWithoutTextContext;
- (void)encodeWithCoder:(id)arg1;
- (id)fieldIdentifier;
- (id)fieldLabel;
- (id)initWithCoder:(id)arg1;
- (id)interactionIdentifier;
- (int)keyboardType;
- (id)languageCodeOverride;
- (id)postfixText;
- (id)prefixText;
- (int)returnKeyType;
- (id)selectedText;
- (void)setApplicationName:(id)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFieldIdentifier:(id)arg1;
- (void)setFieldLabel:(id)arg1;
- (void)setInteractionIdentifier:(id)arg1;
- (void)setKeyboardType:(int)arg1;
- (void)setLanguageCodeOverride:(id)arg1;
- (void)setPostfixText:(id)arg1;
- (void)setPrefixText:(id)arg1;
- (void)setReturnKeyType:(int)arg1;
- (void)setSelectedText:(id)arg1;
- (void)setTranscriptionMode:(int)arg1;
- (int)transcriptionMode;

@end
