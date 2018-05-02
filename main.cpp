/* 
 * File:   main.cpp
 * Author: Jack L. Clements
 *
 * Created on 01 May 2018, 18:49
 */

#include <cstdlib>
#include <iostream>
#include <curl/curl.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Hello World!" << endl;
    
    CURL *curl;
    CURLcode res;
    
    curl = curl_easy_init();
    if(curl){
        //setup
        curl_easy_setopt(curl, CURLOPT_URL, "https://api.github.com/users/jacklclements/events");
        
        //set user agent
        curl_easy_setopt(curl, CURLOPT_USERAGENT, "JackLClements"); //github requests all need a user agent
        
        //follow redirect
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        
        //Perform GET request
        res = curl_easy_perform(curl);
        //error checking
        if(res != CURLE_OK){
            cout << "Failed - " << curl_easy_strerror(res) << endl;
        }
        else{
            cout << "worked" << endl;
        }
        //cleanup
        curl_easy_cleanup(curl);
    }
    
    return 0;
}

