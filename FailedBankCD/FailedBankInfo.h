//
//  FailedBankInfo.h
//  FailedBankCD
//
//  Created by Max Woolf on 02/05/2013.
//  Copyright (c) 2013 Max Woolf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "FailedBankDetails.h"


@interface FailedBankInfo : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) FailedBankDetails *details;

@end
