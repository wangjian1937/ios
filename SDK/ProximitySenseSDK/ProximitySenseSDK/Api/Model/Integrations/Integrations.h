//
//  IntegrationsBootstrapper.h
//  BlueBarSDK
//
//  Created by Vladimir Petrov on 14/12/2014.
//  Copyright (c) 2014 Blue Sense Networks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ContentManagement.h"
#import "AudienceMonitor.h"

@interface Integrations : NSObject

+ (void) registerCommonActionTypes;

+ (Integrations *) instance;

+ (ContentManagement*) ContentManagement;
+ (AudienceMonitor*) AudienceMonitor;

@end
