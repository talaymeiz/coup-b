#include <string>
#include <vector>

#pragma once
#ifndef GAME_HEADER
#define GAME_HEADER

using namespace std;

namespace coup{

    class Player;
    class Game{
    
    private:
        int curnt_turn;
        string win;
        bool start;

    public:

        Game();
        vector<Player*> Participants;
        string turn();
        vector<string> players();
        string winner();
        void next(); //promote the turn to next player
        void add_p(Player *p);
        ~Game();
        
        //geters and seters:
        void set_start(bool val);
        bool get_start() const;
        

    };
}

#endif