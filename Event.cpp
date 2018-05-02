/*
 */


#include "Event.h"

string Event::toString(){
    //note cast event type to something more readable
    string allInfo = actor.display_login + " " + type + " ";
    if(type == "PushEvent"){ //could use .compare, but we don't need substrings
        allInfo += " to " + repo.name + " \"" + commits.message + "\""; //note add case for dif. author
    } 
    allInfo += " at " + repo.url; //add case for push where url links to specific commit
    return allInfo;
}

long Event::getID(){
    return id;
}

string Event::getType(){
    return type;
}

bool Event::getPublic(){
    return isPublic;
}

time_t Event::getTime(){
    return time;
}
