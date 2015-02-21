//
//  StudentTableViewCell.h
//  IOSCoreDataExample
//
//  Created by AppsbeeTechnology on 21/02/15.
//  Copyright (c) 2015 AppsbeeTechnology. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StudentTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *name;
@property (weak, nonatomic) IBOutlet UIImageView *pic;

@property (weak, nonatomic) IBOutlet UILabel *age;
@property (weak, nonatomic) IBOutlet UILabel *classLabel;
@property (weak, nonatomic) IBOutlet UILabel *rollNoLabel;

@end
