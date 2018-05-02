# TwiHub
A tool to post a user's new (public) GitHub events to their Twitter account. Upcoming API change willing.

## Objective
Right now, the main objective is to get a system to fetch all public events associated with a specified GitHub account.
This can be done by sending a GET request to https://api.github.com/users/[username]/events, but an actual solution would require polling.
As such, I am experimenting with a way to jury-rig a solution using GitHub's webhooks, which as of right now are specific to a repository or organisation.

Should this prove infeasible (or my requests to GitHub's API team prove fruitless), I shall change the project scope somewhat.
Feel free to follow me at http://twitter.com/JCMakesStuff for more frequent updates on this project, as I shall only be pushing to fix bugs or add features. 
