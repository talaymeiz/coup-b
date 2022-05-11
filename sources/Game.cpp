#include "Player.hpp"
#include "Game.hpp"

using namespace std;

using namespace coup;

    //constructer
    Game:: Game(){
        this->curnt_turn=0;
        this->win="0";
        this->Participants = {};
        this->start = false;
    }
    
    // turn function
    string Game:: turn(){
        return this->Participants.at((unsigned long)this->curnt_turn)->get_name(); //return the name of the player in place of curnt_turn
    }
    
    // players function
    vector<string> Game:: players(){
        vector<string> vec;  //creat new vector
        for (int i = 0; i < this->Participants.size(); ++i) { // add to this vector every name player how is alive
            if(this->Participants.at((unsigned long)i)->get_in_game()){
                string name= this->Participants.at((unsigned long)i)->get_name();
                vec.push_back(name);
            }
        }
        return vec;
    }
    
    // winner function
    string Game:: winner(){

        if(this->players().size() == 1 && this->start){
            this->win= this->players().at((unsigned long)0); //if there was only one player left
        }
        if(this->win=="0"){ //if the winner didnt update yet
            throw std::domain_error("the game is not over yet, there is no winner");
        }
        return this->win;
    }
    
    // next- promote the turn to next player 
    void Game:: next(){ 

        bool next_in_game= false;
        int num=0;
        while (!next_in_game && num<= SIX){
            if (this->curnt_turn < this->Participants.size()-1){
                this->curnt_turn += 1;
            }
            else{
                this->curnt_turn = 0;
            }
            next_in_game= this->Participants.at((unsigned long)curnt_turn)->get_in_game();
            num +=1;
        }
    }

    // add_player- add player to the game, use only in player constructer
    void Game::add_p(Player *p){
 
        this->Participants.push_back(p);
    }
    
    //geters and seters:
    
    void Game:: set_start(bool val){
        this->start= val;
    }
    bool Game:: get_start() const{
        return this->start;
    }

    Game::~Game(){}
