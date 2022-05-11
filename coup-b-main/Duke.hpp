#include <string>
#include <iostream>
#include<bits/stdc++.h> 
#include <vector>

#include "Game.hpp"

// #ifndef MY_HHEDER
// #define MY_HHEDER

using namespace std;

namespace coup{

    class Duke :public Player{ //דוקס
    
    private:
    public:
        Duke(Game & game, string name);
        void income (); //D incom, foreign_aid
        void block(Player p); //D block
        void tax(); //?
        string role();
    };
}

// #endif