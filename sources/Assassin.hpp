#include <string>

#include "Game.hpp"

#ifndef ASSASSIN_HEADER
#define ASSASSIN_HEADER

using namespace std;

namespace coup{

    class Assassin :public Player{ 
            
    public:
        Assassin(Game & game, string name);
        void coup(Player & p); //overide
        ~Assassin(); 

    };
}

#endif