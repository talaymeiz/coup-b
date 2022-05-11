#include "Player.hpp"
#include "Duke.hpp"
#include "Game.hpp"

using namespace std;

using namespace coup;

    //constructor, update only role
    Duke:: Duke(Game & game, string name):Player(game,std::move(name)){
        this->set_role("Duke");
    }

    // block function- overide
    void Duke:: block(Player p){ //block the FOREIGN_AID act

        if(this->get_in_game()){ // if p in game
            if (p.get_last_act() == FOREIGN_AID){  //if his last act was FOREIGN_AID
                p.set_coin(-2);
                p.set_last_act(INCOM);
            }
        //checks
            else{
                throw std::domain_error("can not block this player");
            }
        }
        else{
            throw std::domain_error("this player not in game");           
        }
    }
    
    // tax function
    void Duke:: tax(){

        this->coin= (this->coin)+3;
        this->set_last_act(TAX);
        this->game->next();
    }
    
    Duke::~Duke(){}