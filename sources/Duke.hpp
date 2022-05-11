#include <string>
#include "Game.hpp"

#ifndef DUKE_HEADER
#define DUKE_HEADER

using namespace std;

namespace coup{

    class Duke :public Player{ 
    
    public:
        Duke(Game & game, string name);
        void block(Player p); //override
        void tax(); 

        ~Duke();
    };
}

#endif