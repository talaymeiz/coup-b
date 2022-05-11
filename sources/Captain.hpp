#include <string>
#include "Game.hpp"

#ifndef CAPTAIN_HEADER
#define CAPTAIN_HEADER

using namespace std;

namespace coup{

    class Captain :public Player{
    
    public:
        Captain(Game & game, string name);
        void block(Player p); //override 
        void steal(Player & p);
        ~Captain();
    };
}

#endif