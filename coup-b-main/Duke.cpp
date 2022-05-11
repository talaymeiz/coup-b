#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"

#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

using namespace coup;

    Duke:: Duke(Game & game, string name):Player(game,name){}
    void Duke:: income(){} //D incom, foreign_aid
    void Duke:: block(Player p){} //D block
    void Duke:: tax(){} //?
