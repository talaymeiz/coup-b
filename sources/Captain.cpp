#include "Player.hpp"
#include "Captain.hpp"
#include "Game.hpp"

using namespace std;
using namespace coup;

    //constructor, update only role
    Captain:: Captain(Game & game, string name):Player(game, std::move(name)){
        this->set_role("Captain");
    }
    
    // block function- overide
    void Captain:: block(Player p){ //block the steal of other Captain

        //chack
        if(p.get_steal_from()== nullptr){
            throw std::domain_error("p dosent steal");
        }
        //block
        p.set_coin(-2);
        p.get_steal_from()->set_coin(2);
        this->coins();
    }
    
    // steal function
    void Captain:: steal(Player & p){

        //chack
        if(!(this->game->turn()==this->name)){
            throw std::domain_error("this is not my turn");
        }
        // if p dont have 2 coins
        if (p.coins()==1){
            this->set_coin(1);
            p.set_coin_minus(1);
        }
        // if p have 2 coins
        if (p.coins()>=2){
            this->set_coin(2);
            p.set_coin_minus(2);
        }
        this->steal_from= &p;
        this->game->next();
    }
    
    Captain::~Captain(){}

