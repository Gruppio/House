//
//  CommandFactory.cpp
//  Ambrogio
//
//  Created by Gruppioni Michele on 20/11/2016.
//  Copyright © 2016 Michele Gruppioni. All rights reserved.
//

#include <string.h>
#include "CommandFactory.h"
#include "CommandsName.h"
#include "LedPanelOnCommand.h"
#include "LedPanelOffCommand.h"
#include "AukeyCommand.h"

CommandFactory::CommandFactory(RemoteController *remoteController) {
    this->remoteController = remoteController;
}

Command* CommandFactory::createCommand(const char* commandName) {
    if (strcmp(commandName, LED_PANEL_ON) == 0) {
        return new LedPanelOnCommand();
    }
    
    if (strcmp(commandName, LED_PANEL_OFF) == 0) {
        return new LedPanelOffCommand();
    }
    
    if (strcmp(commandName, LIVING_ROOM_LAMP_ON) == 0) {
        return new AukeyCommand(remoteController, AUKEY_LIVING_ROOM_LAMP_ON_COMMAND_CODE, "Turned on the living room lamp");
    }
    
    if (strcmp(commandName, LIVING_ROOM_LAMP_OFF) == 0) {
        return new AukeyCommand(remoteController, AUKEY_LIVING_ROOM_LAMP_OFF_COMMAND_CODE, "Turned off the living room lamp");
    }
    
    if (strcmp(commandName, LED_STRIP_LEFT_ON) == 0) {
        return new AukeyCommand(remoteController, AUKEY_LED_STRIP_LEFT_ON_COMMAND_CODE, "Turned on the kitchen left led strip");
    }
    
    if (strcmp(commandName, LED_STRIP_LEFT_OFF) == 0) {
        return new AukeyCommand(remoteController, AUKEY_LED_STRIP_LEFT_OFF_COMMAND_CODE, "Turned off the kitchen left led strip");
    }
    
    if (strcmp(commandName, LED_STRIP_RIGHT_ON) == 0) {
        return new AukeyCommand(remoteController, AUKEY_LED_STRIP_RIGHT_ON_COMMAND_CODE, "Turned on the kitchen right led strip");
    }
    
    if (strcmp(commandName, LED_STRIP_RIGHT_OFF) == 0) {
        return new AukeyCommand(remoteController, AUKEY_LED_STRIP_RIGHT_OFF_COMMAND_CODE, "Turned off the kitchen right led strip");
    }
    
    if (strcmp(commandName, COFFEE_MACHINE_ON) == 0) {
        return new AukeyCommand(remoteController, AUKEY_COFFEE_MACHINE_ON_COMMAND_CODE, "Turned on the coffee machine");
    }
    
    if (strcmp(commandName, COFFEE_MACHINE_OFF) == 0) {
        return new AukeyCommand(remoteController, AUKEY_COFFEE_MACHINE_OFF_COMMAND_CODE, "Turned off the coffee machine");
    }
    
    if (strcmp(commandName, CHRISTMAS_TREE_ON) == 0) {
        return new AukeyCommand(remoteController, AUKEY_CHRISTMAS_TREE_ON_COMMAND_CODE, "Turned on the christmas tree");
    }
    
    if (strcmp(commandName, CHRISTMAS_TREE_OFF) == 0) {
        return new AukeyCommand(remoteController, AUKEY_CHRISTMAS_TREE_OFF_COMMAND_CODE, "Turned off the christmas tree");
    }
    
    return new NullCommand();
}
