#include "Player.hpp"
#include "Assassin.hpp"
#include "Game.hpp"

using namespace std;
using namespace coup;

    //constructor, update only role
    Assassin:: Assassin(Game & game, string name):Player(game, std::move(name)){
        this->set_role("Assassin");
    }
    
    // coup function- overide
    void Assassin:: coup(Player & p){ // can do coup with 3 coins insted 7

        //chacks:
        if (this->coin<3){  // if have less then 3
            throw std::domain_error("dont have enough coins for coup");           
        }
        if (!(p.get_in_game())){  //if p not in game
            throw std::domain_error("p alredy remove");           
        }
        //if have less then 7
        if (this->coin<SEVEN){
            p.set_in_game(false);
            this->coin= this->coin-3;
            this->coup_r= &p;
            this->game->next();
            this->set_coup3(true);            
        }
        //if have 7 or more
        else {
            p.set_in_game(false);
            this->coin= this->coin-SEVEN;
            this->coup_r= &p;
            this->game->next();
            this->set_coup3(false);
        }
    }
    
    Assassin::~Assassin(){}
