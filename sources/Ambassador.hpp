#include <string>
#include "Game.hpp"

#ifndef AMBASSADOR_HEADER
#define AMBASSADOR_HEADER

using namespace std;

namespace coup{

    class Ambassador :public Player{ 
    
    public:
        Ambassador(Game & game, string name);
        void transfer(Player & p1,Player & p2);
        void block(Player & p); //override 
        ~Ambassador();
    };
}

#endif