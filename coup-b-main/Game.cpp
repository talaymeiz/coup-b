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

    Game:: Game(){
        this->curnt_turn=0;
        this->win="0";
    }
    string Game:: turn(){
        return this->p[this->curnt_turn]->name;
    }
    vector<string> Game:: players(){
        vector<double> vec;
        for (int i = 0; i < this->p.size(); ++i) {
            if(this->p[(unsigned long)i]->in_gamme){
            string name= this->p[(unsigned long)i]->name;
            vec.push_back(name);
            }
        }
        return vec;
    }
    string Game:: winner(){
        if(this->win=="0"){
            throw std::domain_error("the game is not over yet, there is no winner");
        }
        return this->win;
    }
    void Game:: next(){ //promote the turn to next player

        if (this->curnt_turn < this->p.size-1){
            this->curnt_turn += 1;
        }
        else{
            this->curnt_turn = 0;
        }
    
    }
    void add_p(Player p){
        
    }
        void add_p_name(string name);

