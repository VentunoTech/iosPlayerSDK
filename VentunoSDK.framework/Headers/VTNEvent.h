//
//  VTNEvent.h
//  VentunoSDK
//
//  Created by ventuno on 02/03/17.
//  Copyright © 2017 Ventuno. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VTNEventType.h"


@interface VTNEvent : NSObject {
    
}

@property (nonatomic, readonly) VTNEventType        type;
@property (nonatomic, readonly) NSString            *name;

- (id)initWithType:(VTNEventType)t;

@end
