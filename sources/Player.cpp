#include "Player.hpp"
#include "Game.hpp"

using namespace std;

using namespace coup;

        //constractor
        Player:: Player(Game & game, string name){
            if (game.Participants.size()<SIX && !game.get_start()){
                this->game= &game;
                this->name = std::move(name);
                this->my_role= "no role";
                this->coin = 0;
                this->in_game = true;
                game.add_p(this);  //add this player to the game
                this->last_act= NO;  //at start the player have no privies actions=0
                this->steal_from= nullptr; 
                this->coup_r= nullptr;
                this->coup3 = false;

            }
            else{
                throw std::domain_error("It is not possible to add another player, the game is full");
            }
        }

        //income function
        void Player:: income (){
            //checks
            if(!(this->game->turn()==this->name)){
                throw std::domain_error("this is not my turn");
            }
            if(!( this->in_game)){
                throw std::domain_error("not in game");
            }
            if(this->game->players().size()<2){
                throw std::domain_error("there isnt enough players to start the game");
            }
            if(this->coins()>=TEN){
                throw std::domain_error("coup");
            }
            //add one coin to cois of player and updete
            this->coin= this->coin+1;
            this->game->next(); 
            this->last_act= INCOM;
            this->game->set_start(true); // if one player done an act the game is started
            
        }
        
        //foreign_aid function
        void Player:: foreign_aid(){
            //chacks
            if(this->game->players().size()<2){
                throw std::domain_error("there isnt enough players to start the game");
            }
            if(this->game->turn()==this->name && this->in_game){
                if(this->coins()>=TEN){
                    throw std::domain_error("coup");
                }
                // same as imcome but with 2
                this->coin= this->coin+2;
                this->game->next();
                this->last_act= FOREIGN_AID;
                this->game->set_start(true);
            }
            else{
                throw std::domain_error("this is not my turn or not in game");
            }
        }
        
        //coup function     
        void Player:: coup(Player & p){
            //checks
            if (!(p.get_in_game())){
                throw std::domain_error("p alredy remove");           
            }
            if(!(this->game->turn()==this->name)){
                throw std::domain_error("this is not my turn");
            }
            if(!( this->in_game)){
                throw std::domain_error("not in game");
            }
                if(this->coin>=SEVEN){  //if the player have enough coins to do the coup
                    p.set_in_game(false);
                    this->coin -= SEVEN;
                    this->coup_r= &p;  //save the player how died in case of block
                    this->game->next();
                    this->last_act= COUP;
                }
                else{
                    throw std::domain_error("there is not enough coins");
                }

        }

        //role function         
        string Player:: role(){
            return this->my_role;  //return the role of the player' update in the constractors
        }
        
        //coins function         
        int Player:: coins() const{
            return this->coin;
        }
        
        //block function         
        void Player:: block(Player & p){
            throw std::domain_error("can not block"); //every player how can block have to overide this fanction
        }
        
        //geters and seters

        void Player:: set_coin(int num){
            this->coin += num;
        }
        void Player:: set_coin_minus(int num){
            this->coin -= num;
        }
        Player* Player:: get_steal_from(){
            return this->steal_from;
        }
        Player* Player:: get_coup_r(){
            return this->coup_r;
        }
        string Player:: get_name(){
            return this->name;
        }
        bool Player:: get_in_game() const{
            return this->in_game;
        }
        void Player:: set_in_game(bool val){
            this->in_game= val;
        }
        void Player:: set_last_act(int n){
            this->last_act= n;
        }
        int Player:: get_last_act() const{
            return this->last_act;
        }
        void Player:: set_role(string r){
            this->my_role=std::move(r);
        }
        bool Player:: get_coup3() const{
            return this->coup3;
        }
        void Player:: set_coup3(bool val){
            this->coup3=val;
        }
        
        Player::~Player(){}


