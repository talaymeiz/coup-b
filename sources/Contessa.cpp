#include "Player.hpp"
#include "Contessa.hpp"
#include "Game.hpp"

using namespace std;

using namespace coup;

    //constructor, update only role
    Contessa:: Contessa(Game & game, string name):Player(game, std::move(name)){
        this->set_role("Contessa");
 
    }
    
    // block function- overide
    void Contessa:: block(Player p){ // block the coup os assassin
    
        //chacks
        if(p.get_coup_r()== nullptr){
            throw std::domain_error("p dosent coup");
        }
        if(!(p.get_coup3())){
            throw std::domain_error("coup by 7 not 3");
        }
        //block
        p.get_coup_r()->set_in_game(true);
        this->coins();
    }
    
    Contessa::~Contessa(){}