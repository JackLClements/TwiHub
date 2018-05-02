/* 
 * File:   Event.h
 * Author: Jack L. Clements
 *
 * Created on 02 May 2018, 14:26
 */

#include <string>
#include <time.h>
#ifndef EVENT_H
#define EVENT_H

using namespace std;
//check best practices for syntax later, they definitely don't need to be full classes though
//Structs used mainly for encapsulation, unsure if they need defining in another header
struct Actor{
    string id;
    string login;
    string display_login;
    string gravatar_id;
    string url;
    string avatar_url;
};

struct Repo{
    string id;
    string name;
    string url;
};

struct Payload{
    string ref;
    string ref_type;
    string master_branch;
    string description;
    string pusher_type;
};

struct Author{
    string email;
    string name;
};

struct Commits{
    string sha;
    Author author;
    string message;
    bool distinct;
    string url;
};



class Event{
private:
    long id; //double check, may use uint
    string type;
    Actor actor;
    Repo repo;
    Payload payload; //pointers or references? check later
    Commits commits;
    bool isPublic;
    time_t time;
public:
    //constructors/destructors
    Event();
    Event(string JSONEntry);
    Event(const Event &event);
    ~Event();
    
    //mutator methods
    string toString();
    
    //getters - note, do we need structs or just struct representation?
    long getID();
    string getType();
    bool getPublic();
    time_t getTime();
    
};

#endif /* EVENT_H */

