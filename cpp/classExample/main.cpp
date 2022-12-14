#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

class Game {
    int money = 100;
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
    
    int getFactories() {
        return factories;
    }

    int getPencils() {
        return pencils;
    }

    int getGold() {
        return gold;
    }

    void sellPencils() {
        cout << "Selling pencils!" << " You made " << pencils * 3 << "$" << endl;
        money += pencils * 3;
        pencils = 0;
    }

    void sellGold() {
        cout << "Selling gold!" << " You made " << gold * 100 << "$" << endl;
        money += gold * 100;
        gold = 0;
    }
    

    void printReport() {
        cout << "****************** Industry report ******************" << endl;
        cout << "Money: " << money << "$" << endl;
        cout << "Pencil Factories: " << factories << " | Pencils: " << pencils << endl;
        cout << "Gold Mines: " << mines << " | Lbs of gold: " << gold; 
        cout << "\n******************  End of report  ******************\n\n";
    }

    void buyFactory() {
        if (money >= 100) {
            factories++;
            money -= 100;
            cout << "Congrats! You bought a factory!" << endl;
        } else {
            cout << "Silly goose! You can't afford a factory!" << endl;
        }
    }

    void buyMine() {
        if (money >= 10000) {
            mines++;
            money -= 10000;
            cout << "Congrats! You bought a factory!" << endl;
        } else {
            cout << "Silly goose! You can't afford a factory!" << endl;
        }
    }
    
    void mine() {
        cout << "Mining in progress";
        for (int i = 0; i < 3; i++) {
            cout << ".";
            sleep(.5);
        }
        int randomGold = 0;
        for (int i = 0; i < mines; i++ ) randomGold += rand() % 5 + 1;
        cout << " You mined " << randomGold << " pieces of gold!\n\n";
        gold += randomGold;
    }

    void produce() {
        cout << "Production in progress";
        for (int i = 0; i < 3; i++) {
            cout << ".";
            cout.flush();
            sleep(.5);
        }
        cout << " You produced " << factories*10 << " pencils!\n\n";
        pencils += factories*10;
    }

};

void strategy(Game &game) {
    /*
    object.methodName();
    */
    game.printReport();

    // make a variable that tells how much money you have 
    int money = game.getMoney();
    
    // how to buy a factory
    game.buyFactory();

    /* TASK
        buy a factory every turn, if you have enough money    
    */

}

int main() {
    Game game = Game();
    while(1) {
        strategy(game);
        sleep(.5);
        if (game.getMoney() >= 1000000) {
            for (int i = 0; i < 10000) cout << "YOU WIN" << endl;
            break;
        }
    }
    return 0;
}
