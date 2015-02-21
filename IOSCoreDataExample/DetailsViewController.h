//
//  DetailsViewController.h
//  IOSCoreDataExample
//
//  Created by AppsbeeTechnology on 21/02/15.
//  Copyright (c) 2015 AppsbeeTechnology. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface DetailsViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *name;
@property (weak, nonatomic) IBOutlet UITextField *stdClass;
@property (weak, nonatomic) IBOutlet UITextField *rollno;
@property (weak, nonatomic) IBOutlet UITextField *age;
- (IBAction)cancel:(id)sender;
- (IBAction)save:(id)sender;
@property (strong) NSManagedObject *students;

@end
