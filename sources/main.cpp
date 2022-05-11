// #include "Player.hpp"
// #include "Duke.hpp"
// #include "Assassin.hpp"
// #include "Ambassador.hpp"
// #include "Captain.hpp"
// #include "Contessa.hpp"
// #include "Game.hpp"

// #include <iostream>
// #include <vector>
// using namespace std;

// using namespace coup;

// int main(){

//     // cout << "start coup game" << endl;

//     Game game{};

//     cout << "creat Players" << endl;

//     Duke duke{game, "Moshe"};
// 	Assassin assassin{game, "Yossi"};
// 	Ambassador ambassador{game, "Meirav"};
// 	Captain captain{game, "Reut"};
// 	Contessa contessa{game, "Gilad"};

//     cout << "start game:" << endl;

// 	for (int i=0 ; i<7 ; i++){
// 		duke.income();
// 		assassin.income();
// 		ambassador.income();
// 		captain.income();
// 		contessa.income();
// 	}
// 	// each one has 7 coins, enough for using coup()

// 	duke.coup(assassin);
// 	ambassador.coup(contessa);
// 	captain.coup(ambassador);

// 	for (int i=0 ; i<7 ; i++){
// 		duke.income();
// 		captain.income();
// 	}
// 	// each one has 7 coins, enough for using coup()
// 	duke.coup(captain);

//     cout <<"and the winner is.." << endl;
//     cout << game.winner() << endl; //will be Moshe

//     return 0;
// }