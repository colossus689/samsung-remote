//
//  Data.h
//  TV Remote 2
//
//  Created by colossus on 4/19/14.
//  Copyright (c) 2014 colossus. All rights reserved.
//

#import <Foundation/Foundation.h>

enum
{
    DATA_MAX = 1000,
};

@interface Data : NSObject
{
    uint8_t data[DATA_MAX];
    uint32_t length;
}


-(uint8_t*) data;
-(uint32_t) length;

- (id)init;
-(void) addNSString:(NSString*) string;
-(void) addChar:(char)oneChar;
-(void) addData:(Data*)otherData;

@end
