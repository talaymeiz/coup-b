#include <string>
#include <iostream>
#include "Game.hpp"

#ifndef PLAYER_HEADER
#define PLAYER_HEADER

using namespace std;

namespace coup{

    //represent the last action of each player
    const int NO = 0;
    const int FOREIGN_AID = 1;
    const int INCOM = 2;
    const int COUP = 3;
    const int TAX = 4;
    const int SEVEN = 7;
    const int SIX = 6;
    const int TEN = 10;

    class Game;
    class Player{
    
    protected:
        Game* game;
        std::string name; //name of player
        string my_role; //role of player
        int coin;
        bool in_game; //true if the player in the game
        int last_act;
        Player * steal_from;
        Player * coup_r;
        bool coup3; //for the assassin and contessa

    public:
        Player(Game & game, string name);
        void income ();
        void foreign_aid();
        virtual void coup(Player & p);
        string role();
        int coins() const;
        virtual void block(Player & p); //throw exseption if not overide
        ~Player();

        //geters and seters:
        void set_coin(int num);
        void set_coin_minus(int num);
        Player* get_steal_from();
        Player* get_coup_r();
        string get_name();
        bool get_in_game() const;
        void set_in_game(bool val);
        void set_last_act(int n);
        int get_last_act() const;
        void set_role(string r);
        bool get_coup3() const;
        void set_coup3(bool val);

    };
}

#endif