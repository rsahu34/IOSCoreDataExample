//
//  StudentTableViewCell.m
//  IOSCoreDataExample
//
//  Created by AppsbeeTechnology on 21/02/15.
//  Copyright (c) 2015 AppsbeeTechnology. All rights reserved.
//

#import "StudentTableViewCell.h"

@implementation StudentTableViewCell
 @synthesize name, classLabel, rollNoLabel, age, pic;

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
