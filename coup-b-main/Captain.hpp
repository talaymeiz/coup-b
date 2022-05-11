#include <string>
#include <iostream>
#include<bits/stdc++.h> 
#include <vector>

#include "Game.hpp"

// #ifndef MY_HHEDER
// #define MY_HHEDER

using namespace std;

namespace coup{

    class Captain :public Player{
    
    private:
        int is_block;
    public:
        Captain(Game & game, string name);
        void block(Player p); //D block, privent steal of Captain 
        void steal(Player p);
        string role();
    };
}

// #endif