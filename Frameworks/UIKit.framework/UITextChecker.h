/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextChecker : NSObject {
    id _reserved;
    int _usdt;
}

+ (BOOL)_forgetWord:(id)arg1 inDictionary:(id)arg2;
+ (BOOL)_isWord:(id)arg1 inDictionary:(id)arg2;
+ (BOOL)_learnWord:(id)arg1 inDictionary:(id)arg2;
+ (void)_setWords:(id)arg1 inDictionary:(id)arg2;
+ (id)_textCheckerBackgroundQueue;
+ (id)_wordsInDictionary:(id)arg1;
+ (id)availableLanguages;
+ (id)bestLanguageForString:(id)arg1 fromAlternatives:(id)arg2 currentLanguage:(id)arg3;
+ (id)bestLanguageForString:(id)arg1 fromAlternatives:(id)arg2 currentLanguage:(id)arg3 insertionPointIndex:(unsigned int)arg4 scriptForBestLanguage:(id*)arg5;
+ (struct __CFSet { }*)createDictHashTable:(BOOL)arg1;
+ (id)dictionaryInfo:(id)arg1;
+ (BOOL)hasLearnedWord:(id)arg1;
+ (void)learnWord:(id)arg1;
+ (id)openUserDictionary:(id)arg1;
+ (void)queryLocalUpdateAssets:(id /* block */)arg1;
+ (void)setString:(id)arg1 isExemptFromChecker:(BOOL)arg2;
+ (int)uniqueSpellDocumentTag;
+ (void)unlearnWord:(id)arg1;

- (id)_checker;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_chunkAndCheckGrammarInString:(id)arg1 language:(id)arg2 usingChecker:(id)arg3 details:(id*)arg4;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_chunkAndFindMisspelledWordInString:(id)arg1 language:(id)arg2 learnedDictionaries:(id)arg3 wordCount:(int*)arg4 correction:(id*)arg5 usingChecker:(id)arg6;
- (BOOL)_doneLoading;
- (id)_initWithAsynchronousLoading:(BOOL)arg1;
- (id)_nameOfDictionaryForDocumentTag:(int)arg1;
- (void)_setDocumentDictionaryName:(id)arg1;
- (void)_setLanguageDictionaryName:(id)arg1;
- (int)adjustOffsetToNextWordBoundaryInString:(id)arg1 startingAt:(int)arg2;
- (id)alternativesForPinyinInputString:(id)arg1;
- (BOOL)canChangeCaseOfFirstLetterInString:(id)arg1 toUpperCase:(BOOL)arg2 language:(id)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })checkGrammarOfString:(id)arg1 startingAt:(int)arg2 language:(id)arg3 wrap:(BOOL)arg4 details:(id*)arg5;
- (struct _NSRange { unsigned int x1; unsigned int x2; })checkSpellingOfString:(id)arg1 startingAt:(int)arg2 language:(id)arg3 wrap:(BOOL)arg4 correction:(id*)arg5;
- (id)completionsForPartialWordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inString:(id)arg2 language:(id)arg3;
- (id)correctionForWordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inString:(id)arg2 language:(id)arg3;
- (void)dealloc;
- (id)guessesForWordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inString:(id)arg2 language:(id)arg3;
- (void)ignoreWord:(id)arg1;
- (id)ignoredWords;
- (id)init;
- (void)initGlobals;
- (void)initUserDictionaries;
- (BOOL)isWordInUserDictionaries:(id)arg1 caseSensitive:(BOOL)arg2;
- (void)queryUpdateBundle;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfMisspelledWordInString:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 startingAt:(int)arg3 wrap:(BOOL)arg4 language:(id)arg5;
- (void)setIgnoredWords:(id)arg1;
- (id)stringForInputString:(id)arg1 language:(id)arg2;
- (id)suggestWordInLanguage:(id)arg1;

@end
