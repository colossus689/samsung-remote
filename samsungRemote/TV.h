//
//  TV.h
//  TV Remote 2
//
//  Created by colossus on 4/19/14.
//  Copyright (c) 2014 colossus. All rights reserved.
//
#import <Foundation/Foundation.h>
#define SAMSUNG_REMOTE_PORT 55000

@protocol TVDelegate <NSObject>
-(NSString*)tvip;
@end

@interface TV : NSObject
{
    NSOutputStream* oStream;
    NSString* keyToSend;
}

-(void)sendKey:(NSString*)key;

+ (NSString *)base64String:(NSString *)str;

@property (nonatomic, weak) id<TVDelegate> delegate;
@end
