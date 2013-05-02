//
//  FBCDMasterViewController.h
//  FailedBankCD
//
//  Created by Max Woolf on 02/05/2013.
//  Copyright (c) 2013 Max Woolf. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDMasterViewController : UITableViewController
@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;
@property (nonatomic, strong) NSArray *failedBankInfos;
@end
