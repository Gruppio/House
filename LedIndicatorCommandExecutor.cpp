//
//  LedIndicatorCommandExecutor.cpp
//  Ambrogio
//
//  Created by Gruppioni Michele on 21/11/2016.
//  Copyright © 2016 Michele Gruppioni. All rights reserved.
//

#include "LedIndicatorCommandExecutor.h"
#include "Particle.h"
#include "Pinout.h"

LedIndicatorCommandExecutor::LedIndicatorCommandExecutor(CommandExecutor *commandExecutor)
: CommandExecutorDecorator(commandExecutor) {
}

void LedIndicatorCommandExecutor::executeCommand(Command *command) {
    digitalWrite(PIN_ONBOARD_LED, HIGH);
    commandExecutor->executeCommand(command);
    digitalWrite(PIN_ONBOARD_LED, LOW);
}
