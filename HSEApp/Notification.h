//
//  Notification.h
//  HSEApp
//
//  Created by Kirill Korolev on 21/01/17.
//  Copyright © 2017 Kirill Korolev. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Notification : NSObject

@property (strong, nonatomic) NSString* title;
@property (strong, nonatomic) NSString* descriptionText;

-(id)initWithTitle:(NSString*)headerTitle descriptionText:(NSString*) text;

@end
