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

    Contessa:: Contessa(Game & game, string name):Player(game, name){}
    void Contessa:: block(Player p){} //D block, block Assassin(is_block)
