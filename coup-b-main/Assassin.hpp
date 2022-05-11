#include <string>
#include <iostream>
#include<bits/stdc++.h> 
#include <vector>

#include "Game.hpp"

// #ifndef MY_HHEDER
// #define MY_HHEDER

using namespace std;

namespace coup{

    class Assassin :public Player{ //מתנקש
    
    private:
        int is_block;
    public:
        Assassin(Game & game, string name);
        void coup3(Player p);
        string role(); 

    };
}

// #endif