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

        Player:: Player(Game & game, string name){
            if (game->p.size()<6){
            this->game= &game;
            this->name=name;
            this->coin=0;
            this->block_foreign_aid=0;
            this->in_game= true;
            game.add_p(this);
            // game->num_of_Participants += 1; 
            // game.add_p_name(name);
            }
            else{
                throw std::domain_error("It is not possible to add another player, the game is full");
            }
        }

        void Player:: income (){
            if(this->game->turn()==this->name && this->in_game){
                this->coin= this->coin+1;
                this->game->next();
            }
            else{
                throw std::domain_error("this is not my turn or not in game");
            }
        }
        void Player:: foreign_aid(){
            if(this->game->turn()==this->name && this->in_game){
                this->coin= this->coin+2;
                this->game->next();
            }
            else{
                throw std::domain_error("this is not my turn or not in game");
            }
        }
        void Player:: coup(Player p){
            if(this->game->turn()==this->name && this->in_game){
                if(this->coin>=7){
                    p->in_game= false;
                    this->coin= this->coin-7;
                    this->game->next();
                }
                else{
                    throw std::domain_error("there is not enough coins");
                }
            }
            else{
                throw std::domain_error("this is not my turn or not in game");
            }
        }
        }
        string Player:: role(){
            return "no role";
        }
        int Player:: coins(){
            return this->coin;
        }
        void Player:: block(Player p){
            throw std::domain_error("can not block");
        }
        void set_last_act(string name, string act){
            vector<string> vec;
            vec.push_back(name);
            vec.push_back(act);
            this->last_act= vec;
        }
