#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:        toaster
//  action 1:    turn on heating element
toaster.activateHeat();
//  action 2:    turn off heating element
toaster.deactivateHeat();
//  action 3:    eject toast
toaster.eject();
//  2)
//  Noun:        latch
//  action 1:    set to on position
latch.setOn();
//  action 2:    set to off position
latch.setOff();
//  action 3:    toggle position
latch.toggle();
//  3)
//  Noun:        plant
//  action 1:    convert sunlight to energy
plant.photosynthesize();
//  action 2:    grow fruit
plant.growFruit();
//  action 3:    drop fruit
plant.dropFruit();
//  4)
//  Noun:        ceiling fan
//  action 1:    toggle light bulb power
ceilingFan.toggleLight();
//  action 2:    cycle through fan power states
ceilingFan.incrementFanPowerState();
//  action 3:    detach from ceiling
ceilingFan.detach();
//  5)
//  Noun:        fire alarm
//  action 1:    activate siren
fireAlarm.activateSiren();
//  action 2:    activate lights
fireAlarm.activateLights();
//  action 3:    notify fire department
fireAlarm.notifyFireDept();
//  6)
//  Noun:        goat
//  action 1:    eat
goat.eat();
//  action 2:    vocalize
goat.vocalize();
//  action 3:    fart
goat.fart();
//  7)
//  Noun:        rocket
//  action 1:    launch
rocket.launch();
//  action 2:    detach primary thrusters
rocket.detachPrimaryThrusters();
//  action 3:    activate secondary thrusters
rocket.activateSecondaryThrusters();
//  8)
//  Noun:        star
//  action 1:    emit radiation
star.emitRadiation();
//  action 2:    spawn solar flare
star.spawnFlare();
//  action 3:    supernova
star.supernova();
//  9)
//  Noun:        worker ant
//  action 1:    follow scent trail
workerAnt.followTrail();
//  action 2:    pick up food
workerAnt.carryFood();
//  action 3:    run in panic
workerAnt.runInPanic();
//  10)
//  Noun:        alarm clock
//  action 1:    set alarm
alarmClock.setAlarmTime();
//  action 2:    activate alarm
alarmClock.activateAlarm();
//  action 3:    pass time
alarmClock.tick();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
