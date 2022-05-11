#include <string>
#include <iostream>
#include<bits/stdc++.h> 
#include <vector>

#pragma once
// #ifndef MY_HHEDER
// #define MY_HHEDER

using namespace std;

namespace coup{

    class Game{
    
    private:
        // vector<string> players_; //names
        vector<*Player> p;
        int curnt_turn;
        // int num_of_Participants;
        // vector<string> states;
        string win;

    public:
        Game();
        string turn();
        vector<string> players();
        string winner();
        void next(); //promote the turn to next player
        void add_p(Player p);
        void add_p_name(string name);
        

    };
}

// #endif