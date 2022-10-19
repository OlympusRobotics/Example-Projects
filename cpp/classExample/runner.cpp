

int main() {
    Game game = Game();
    while(1) {
        strategy(game);
    }
    return 0;
}


void strategy(Game &game) {
    game.printReport();
}