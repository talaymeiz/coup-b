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

    Ambassador:: Ambassador(Game & game, string name):Player(game, name){}
    void Ambassador:: transfer(Player p1,Player p2){}
    void Ambassador:: block(Player p){} //D block, privent steal of Captain 
    
