//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GAValidator : NSObject
{
}

+ (_Bool)validateClientTs:(double)arg1;
+ (_Bool)validateBirthyear:(long long)arg1;
+ (_Bool)validateGender:(id)arg1;
+ (_Bool)validateFacebookId:(id)arg1;
+ (_Bool)validateArrayOfStringsWithArray:(id)arg1 andMaxCount:(unsigned long long)arg2 andMaxStringLength:(unsigned long long)arg3 andAllowNoValues:(_Bool)arg4 andTag:(id)arg5;
+ (_Bool)validateDimension03:(id)arg1;
+ (_Bool)validateDimension02:(id)arg1;
+ (_Bool)validateDimension01:(id)arg1;
+ (_Bool)validateResourceItemTypesWithResourceItemTypes:(id)arg1;
+ (_Bool)validateResourceCurrenciesWithResourceCurrencies:(id)arg1;
+ (_Bool)validateCustomDimensionsWithCustomDimensions:(id)arg1;
+ (_Bool)validateEngineVersion:(id)arg1;
+ (_Bool)validateCustomUserId:(id)arg1;
+ (_Bool)validateBuild:(id)arg1;
+ (_Bool)validateSdkWrapperVersion:(id)arg1;
+ (_Bool)validateLongString:(id)arg1 andCanBeEmpty:(_Bool)arg2;
+ (_Bool)validateLongString:(id)arg1;
+ (_Bool)validateString:(id)arg1 andCanBeEmpty:(_Bool)arg2;
+ (_Bool)validateString:(id)arg1;
+ (_Bool)validateShortString:(id)arg1 andCanBeEmpty:(_Bool)arg2;
+ (_Bool)validateShortString:(id)arg1;
+ (_Bool)validateEventIdCharacters:(id)arg1;
+ (_Bool)validateEventIdLength:(id)arg1;
+ (_Bool)validateEventPartCharacters:(id)arg1;
+ (_Bool)validateEventPartLength:(id)arg1 andAllowNull:(_Bool)arg2;
+ (_Bool)validateCurrency:(id)arg1;
+ (_Bool)validateKeysWithGameKey:(id)arg1 gameSecret:(id)arg2;
+ (_Bool)validateErrorEventWithSeverity:(long long)arg1 andMessage:(id)arg2;
+ (_Bool)validateDesignEventWithEventId:(id)arg1 andValue:(id)arg2;
+ (_Bool)validateProgressionEventWithProgressionStatus:(long long)arg1 andProgression01:(id)arg2 andProgression02:(id)arg3 andProgression03:(id)arg4;
+ (_Bool)validateResourceEventWithFlowType:(long long)arg1 andCurrency:(id)arg2 andAmount:(id)arg3 andItemType:(id)arg4 andItemId:(id)arg5;
+ (_Bool)validateBusinessEventWithCurrency:(id)arg1 andAmount:(long long)arg2 andCartType:(id)arg3 andItemType:(id)arg4 andItemId:(id)arg5 andReceipt:(id)arg6;

@end
