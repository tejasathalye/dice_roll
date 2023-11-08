#include <iostream>
#include <cstdlib>
#include <ctime>

void drawDie(int value) {
    std::cout << "+-------+" << std::endl;
    std::cout << "|       |" << std::endl;
    std::cout << "|   " << value << "   |" << std::endl;
    std::cout << "|       |" << std::endl;
    std::cout << "+-------+" << std::endl;
}

int rollDice() {
    return (rand() % 6) + 1;
}

int main() {
    srand(time(nullptr));

    char rollAgain;
    do {
        std::cout << "Rolling the dice..." << std::endl;

        int die1 = rollDice();
        int die2 = rollDice();

        std::cout << "You rolled two dice:" << std::endl;
        drawDie(die1);
        drawDie(die2);
        std::cout << "Total: " << (die1 + die2) << std::endl;

        std::cout << "Want to roll again? (y/n): ";
        std::cin >> rollAgain;
    } while (rollAgain == 'y' || rollAgain == 'Y');

    return 0;
}
