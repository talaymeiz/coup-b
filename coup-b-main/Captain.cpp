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

    Captain:: Captain(Game & game, string name):Player(game, name){
        this->is_block=0;
    }
    void Captain:: block(Player p){} //D block, privent steal of Captain 
    void Captain:: steal(Player p){}
