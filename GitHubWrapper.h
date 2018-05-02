/* 
 * File:   GitHubWrapper.h
 * Author: Jack L. Clements
 *
 * Created on 02 May 2018, 14:20
 */

//put pre-processor directives here

#include <string>
#include <vector>
#include <Event.h>
#ifndef GITHUBWRAPPER_H
#define GITHUBWRAPPER_H

using namespace std;

class GitHubWrapper{
private:
    string username; //aiming for minimal overhead so no need to pass memory location
    vector<Event> events; //will be initialised via constructor so no need to store memory
public:
    //constructors/destructor
    GitHubWrapper();
    GitHubWrapper(string username);
    GitHubWrapper(const GitHubWrapper  &wrapper); //copy constructor
    ~GitHubWrapper();
    void getEvents(); //populate events
    Event *getLastEvent(); //double check, but return a pointer to last event
};

#endif /* GITHUBWRAPPER_H */

