#include <string>
#include "Game.hpp"

#ifndef CONTESSA_HEADER
#define CONTESSA_HEADER

using namespace std;

namespace coup{

    class Contessa :public Player{
    
    public:
        Contessa(Game & game, string name);
        void block(Player p);  //override
        ~Contessa();
    };
}

#endif