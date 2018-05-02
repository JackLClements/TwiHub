/*
 */

#include "GitHubWrapper.h"

GitHubWrapper::GitHubWrapper(string username){
    this->username = username;
}

void GitHubWrapper::getEvents(){ //is setting up/tearing down per call the best way to do this?
    //Note - set up a webhook with a url/IP address to recieve a call for the event
    
}

