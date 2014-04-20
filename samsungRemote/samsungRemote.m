//
//  samsungRemote.m
//  samsungRemote
//
//  Created by colossus on 4/19/14.
//  Copyright (c) 2014 colossus. All rights reserved.
//

#import "samsungRemote.h"
#ifdef DEBUG
#   define DLog(...) NSLog(__VA_ARGS__)
#else
#   define DLog(...)
#endif

@implementation samsungRemote
@synthesize tv;
@synthesize tvIp;

+(id)sharedInstance
{
    static samsungRemote *sharedRemote = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedRemote = [[self alloc] init];
        sharedRemote.tv = [[TV alloc] init];
        [sharedRemote.tv setDelegate:sharedRemote];
        
    });
    return sharedRemote;
}


-(void)sendCommand:(NSString*)command
{
    if(tvIp){
        NSRunLoop* runloop = [NSRunLoop currentRunLoop];
        [self.tv sendKey:command];
    }else{
        DLog(@"[samsungRemote] err - attempting to send without setting IP");
    }
    
}

#pragma mark - TV Delegate Methods
-(NSString*)tvip
{
    return self.tvIp;
}
@end
