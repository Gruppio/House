//
//  AukeyCommandCodes.h
//  Ambrogio
//
//  Created by Gruppioni Michele on 21/11/2016.
//  Copyright © 2016 Michele Gruppioni. All rights reserved.
//

#ifndef AukeyCommandCodes_h
#define AukeyCommandCodes_h

#define AUKEY_PROTOCOL_CODE 24

// Remote 1
#define AUKEY_REMOTE_1_SWITCH_1_ON_COMMAND_CODE 15802527
#define AUKEY_REMOTE_1_SWITCH_1_OFF_COMMAND_CODE 15802526

#define AUKEY_REMOTE_1_SWITCH_2_ON_COMMAND_CODE 15802525
#define AUKEY_REMOTE_1_SWITCH_2_OFF_COMMAND_CODE 15802524

#define AUKEY_REMOTE_1_SWITCH_3_ON_COMMAND_CODE 15802523
#define AUKEY_REMOTE_1_SWITCH_3_OFF_COMMAND_CODE 15802522

#define AUKEY_REMOTE_1_SWITCH_4_ON_COMMAND_CODE 15802519
#define AUKEY_REMOTE_1_SWITCH_4_OFF_COMMAND_CODE 15802518

#define AUKEY_REMOTE_1_SWITCH_ALL_ON_COMMAND_CODE 15802514
#define AUKEY_REMOTE_1_SWITCH_ALL_OFF_COMMAND_CODE 15802513

// Remote 2
#define AUKEY_REMOTE_2_SWITCH_1_ON_COMMAND_CODE 5802143
#define AUKEY_REMOTE_2_SWITCH_1_OFF_COMMAND_CODE 5802142

#define AUKEY_REMOTE_2_SWITCH_2_ON_COMMAND_CODE 5802141
#define AUKEY_REMOTE_2_SWITCH_2_OFF_COMMAND_CODE 5802140

#define AUKEY_REMOTE_2_SWITCH_3_ON_COMMAND_CODE 5802139
#define AUKEY_REMOTE_2_SWITCH_3_OFF_COMMAND_CODE 5802138

#define AUKEY_REMOTE_2_SWITCH_4_ON_COMMAND_CODE 5802135
#define AUKEY_REMOTE_2_SWITCH_4_OFF_COMMAND_CODE 5802134

#define AUKEY_REMOTE_2_SWITCH_ALL_ON_COMMAND_CODE 5802130
#define AUKEY_REMOTE_2_SWITCH_ALL_OFF_COMMAND_CODE 5802129

// Remote 3 ( Bulbs ) SET PULSE LENGHT 170
#define BULBS_REMOTE_BUTTON_1_COMMAND_CODE 5313987
#define BULBS_REMOTE_BUTTON_2_COMMAND_CODE 5313840
#define BULBS_REMOTE_BUTTON_3_COMMAND_CODE 5313804


// Binding

// Living Room Lamp
#define AUKEY_LIVING_ROOM_LAMP_ON_COMMAND_CODE AUKEY_REMOTE_1_SWITCH_1_ON_COMMAND_CODE
#define AUKEY_LIVING_ROOM_LAMP_OFF_COMMAND_CODE AUKEY_REMOTE_1_SWITCH_1_OFF_COMMAND_CODE

// Led Strip Left
#define AUKEY_LED_STRIP_LEFT_ON_COMMAND_CODE AUKEY_REMOTE_1_SWITCH_2_ON_COMMAND_CODE
#define AUKEY_LED_STRIP_LEFT_OFF_COMMAND_CODE AUKEY_REMOTE_1_SWITCH_2_OFF_COMMAND_CODE

// Led Strip Right
#define AUKEY_LED_STRIP_RIGHT_ON_COMMAND_CODE AUKEY_REMOTE_1_SWITCH_3_ON_COMMAND_CODE
#define AUKEY_LED_STRIP_RIGHT_OFF_COMMAND_CODE AUKEY_REMOTE_1_SWITCH_3_OFF_COMMAND_CODE

// Cooffee Machine
#define AUKEY_COFFEE_MACHINE_ON_COMMAND_CODE AUKEY_REMOTE_1_SWITCH_4_ON_COMMAND_CODE
#define AUKEY_COFFEE_MACHINE_OFF_COMMAND_CODE AUKEY_REMOTE_1_SWITCH_4_OFF_COMMAND_CODE

// TV
#define AUKEY_TV_ON_COMMAND_CODE AUKEY_REMOTE_2_SWITCH_1_ON_COMMAND_CODE
#define AUKEY_TV_OFF_COMMAND_CODE AUKEY_REMOTE_2_SWITCH_1_OFF_COMMAND_CODE

// Christmas Tree
#define AUKEY_CHRISTMAS_TREE_ON_COMMAND_CODE AUKEY_REMOTE_2_SWITCH_2_ON_COMMAND_CODE
#define AUKEY_CHRISTMAS_TREE_OFF_COMMAND_CODE AUKEY_REMOTE_2_SWITCH_2_OFF_COMMAND_CODE

// Fan
#define AUKEY_FAN_ON_COMMAND_CODE AUKEY_REMOTE_2_SWITCH_2_ON_COMMAND_CODE
#define AUKEY_FAN_OFF_COMMAND_CODE AUKEY_REMOTE_2_SWITCH_2_OFF_COMMAND_CODE

// Livingroom Lights
#define AUKEY_LIVINGROOM_LIGHT_1_ON_COMMAND_CODE BULBS_REMOTE_BUTTON_1_COMMAND_CODE
#define AUKEY_LIVINGROOM_LIGHT_1_OFF_COMMAND_CODE BULBS_REMOTE_BUTTON_1_COMMAND_CODE

#define AUKEY_LIVINGROOM_LIGHT_2_ON_COMMAND_CODE BULBS_REMOTE_BUTTON_2_COMMAND_CODE
#define AUKEY_LIVINGROOM_LIGHT_2_OFF_COMMAND_CODE BULBS_REMOTE_BUTTON_2_COMMAND_CODE

#define AUKEY_LIVINGROOM_LIGHT_3_ON_COMMAND_CODE BULBS_REMOTE_BUTTON_3_COMMAND_CODE
#define AUKEY_LIVINGROOM_LIGHT_3_OFF_COMMAND_CODE BULBS_REMOTE_BUTTON_3_COMMAND_CODE

#endif /* AukeyCommandCodes_h */
