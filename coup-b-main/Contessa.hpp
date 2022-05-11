#include <string>
#include <iostream>
#include<bits/stdc++.h> 
#include <vector>

#include "Game.hpp"

// #ifndef MY_HHEDER
// #define MY_HHEDER

using namespace std;

namespace coup{

    class Contessa :public Player{
    
    private:
    public:
        Contessa(Game & game, string name);
        void block(Player p); //D block, block Assassin(is_block)
        string role();
    };
}

// #endif