//
//  ViewController.h
//  CalendarPlus
//
//  Created by Howon Song on 10/19/14.
//  Copyright (c) 2014 Howon Song. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TimesSquare/TimesSquare.h>

@interface ViewController : UIViewController

@property (nonatomic, strong) NSCalendar *calendar;
@property (strong, nonatomic) IBOutlet TSQCalendarView *myCalendarView;

@end

