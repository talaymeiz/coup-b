#include <string>
#include <iostream>
#include<bits/stdc++.h> 
#include <vector>

#include "Game.hpp"


// #ifndef MY_HHEDER
// #define MY_HHEDER

using namespace std;

namespace coup{

    class Player{
    
    private:
        Game* game;
        string name;
        int coin;
        int block_foreign_aid;
        bool in_game;
        vector<string> last_act;

    public:
        Player(Game & game, string name);
        virtual void income ();
        virtual void foreign_aid();
        void coup(Player p);
        virtual string role()=0;
        int coins();
        virtual void block(Player p); //throw exseption
        void set_last_act(string name, string act);

    };
}

// #endif