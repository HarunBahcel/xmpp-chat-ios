//
//  TCUtility.h
//  TChat
//
//  Created by SWATI KIRVE on 08/07/2014.
//  Copyright (c) 2014 Tusk Solutions. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TCUtility : NSObject

+ (UIColor *)colorWithHexString:(NSString *)stringToConvert;
+(BOOL )createUser:(NSString *)username password:(NSString *)password name:(NSString *)name email:(NSString *)email;
+(NSString *)dayLabelForMessage:(NSDate *)msgDate;
+ (NSString*) createUniqueFileNameWithoutExtension;
+ (BOOL)saveToKeyChain:(NSString*)username andPassword:(NSString*)password;

+(NSString*) formattedDateFor:(NSDate*)msg_date;
+(NSString *)getDateFromString:(NSString *)string;
+(NSInteger) numberOfDaysBetDates:(NSString *)dateString;
+ (NSString *)GetUUID;

@end
