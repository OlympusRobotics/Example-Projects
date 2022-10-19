#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

class Game {
    int money = 0;
    int factories = 0, mines = 0;
    int pencils = 0, gold = 0;
    public:
        Game(){
            // cout is buffered and won't print until it gets flushed (usually endl), so we disable the buffer here
            // causing it to always refresh, alternative is to use cout.flush()
            setvbuf(stdout, NULL, _IONBF, 0);
            cout << "Game Started!\n" << endl;
        }
    
    int getMoney(){
        return money;
    }
    void printReport() {
        cout << "****************** Industry report ******************" << endl;
        cout << "Money: " << money << "$" << endl;
        cout << "Pencil Factories: " << factories << " | Pencils: " << pencils << endl;
        cout << "Gold Mines: " << mines << " | Lbs of gold: " << gold; 
        cout << "\n******************  End of report  ******************\n\n";
    }

    void buyFactory() {
        if (money > 100) {
            factories++;
            cout << "Congrats! You bought a factory!" << endl;
        } else {
            cout << "Silly goose! You can't afford a factory!" << endl;
        }
    }

    void buyMine() {
        if (money > 10000) {
            mines++;
            cout << "Congrats! You bought a factory!" << endl;
        } else {
            cout << "Silly goose! You can't afford a factory!" << endl;
        }
    }
    
    void mine() {
        cout << "Mining in progress";
        for (int i = 0; i < 3; i++) {
            cout << ".";
            sleep(1);
        }
        int randomGold = rand() % 5 + 1;
        cout << " You mined " << randomGold << " pieces of gold!\n\n";
        gold += randomGold;
    }

};

void strategy(Game &game) {
    game.mine();
    game.printReport();

}

int main() {
    Game game = Game();
    while(1) {
        strategy(game);
        sleep(1);
    }
    return 0;
}

