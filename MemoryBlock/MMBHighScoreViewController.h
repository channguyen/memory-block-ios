//
//  MMBHighScoreViewController.h
//  MemoryBlock
//
//  Created by chan on 4/20/14.
//  Copyright (c) 2014 chan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MMBHighScoreViewController : UITableViewController {
    NSMutableArray *_highScoreArray;
}

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
