#include <string>
#include <iostream>
#include<bits/stdc++.h> 
#include <vector>

#include "Game.hpp"

// #ifndef MY_HHEDER
// #define MY_HHEDER

using namespace std;

namespace coup{

    class Ambassador :public Player{ //שגריר
    
    private:
    public:
        Ambassador(Game & game, string name);
        void transfer(Player p1,Player p2);
        void block(Player p); //D block, privent steal of Captain 
        string role();
    };
}

// #endif