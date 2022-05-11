#include "Player.hpp"
#include "Ambassador.hpp"
#include "Game.hpp"

using namespace std;
using namespace coup;

    //constructor, update only role
    Ambassador:: Ambassador(Game & game, string name):Player(game, std::move(name)){
        this->set_role("Ambassador");
    }

    // transfer function
    void Ambassador:: transfer(Player & p1,Player & p2){

        //chack
        if(p1.coins()<1){
            throw std::domain_error("p1 dont have enough coins");            
        }
        p1.set_coin_minus(1);
        p2.set_coin(1);
        this->game->next();
    }

    // block function- overide
    void Ambassador:: block(Player & p){ //block the steal of Captain
    
        this->coins();
        p.set_coin_minus(2);
        p.get_steal_from()->set_coin(2);       
    }
    
    Ambassador::~Ambassador(){}