#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

class Game {
    int money = 0;
    int factories, mines = 0;
    int pencils, gold = 0;
    public:
        Game(){
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
    }

};
