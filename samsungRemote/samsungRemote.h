//
//  samsungRemote.h
//  samsungRemote
//
//  Created by colossus on 4/19/14.
//  Copyright (c) 2014 colossus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TV.h"

@interface samsungRemote : NSObject<TVDelegate>
+(id)sharedInstance;
-(void)sendCommand:(NSString*)command;

@property (atomic, strong) TV* tv;
@property (atomic, strong) NSString* tvIp;

/*Available Commands
 
 #Normal remote keys
 #KEY_0
 #KEY_1
 #KEY_2
 #KEY_3
 #KEY_4
 #KEY_5
 #KEY_6
 #KEY_7
 #KEY_8
 #KEY_9
 #KEY_UP
 #KEY_DOWN
 #KEY_LEFT
 #KEY_RIGHT
 #KEY_MENU
 #KEY_PRECH
 #KEY_GUIDE
 #KEY_INFO
 #KEY_RETURN
 #KEY_CH_LIST
 #KEY_EXIT
 #KEY_ENTER
 #KEY_SOURCE
 #KEY_AD
 #KEY_PLAY
 #KEY_PAUSE
 #KEY_MUTE
 #KEY_PICTURE_SIZE
 #KEY_VOLUP
 #KEY_VOLDOWN
 #KEY_TOOLS
 #KEY_POWEROFF
 #KEY_CHUP
 #KEY_CHDOWN
 #KEY_CONTENTS
 #KEY_W_LINK #Media P
 #KEY_RSS #Internet
 #KEY_MTS #Dual
 #KEY_CAPTION #Subt
 #KEY_REWIND
 #KEY_FF
 #KEY_REC
 #KEY_STOP
 
 #Bonus buttons not on the normal remote:
 #KEY_TV
 
 #Don't work/wrong codes:
 #KEY_CONTENT
 #KEY_INTERNET
 #KEY_PC
 #KEY_HDMI1
 #KEY_OFF
 #KEY_POWER
 #KEY_STANDBY
 #KEY_DUAL
 #KEY_SUBT
 #KEY_CHANUP
 #KEY_CHAN_UP
 #KEY_PROGUP
 #KEY_PROG_UP
 
 
 */
@end
