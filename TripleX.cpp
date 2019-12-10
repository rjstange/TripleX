#include <iostream>
#include "PlayGame.cpp"

int main()
{
    // Seeds rand by current time
    srand(time(NULL));

    const int MaxLevels = 5;
    int CurrentLevel = 1;

    while (CurrentLevel <= MaxLevels) // Loop the game until all levels are completed
    {
        bool bLevelComplete = PlayGame(CurrentLevel, MaxLevels);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer
        
        if (bLevelComplete)
        {
            ++CurrentLevel;
        }
    }
    
    std::cout << "\n\"You have answered all of my the riddles; proving yourself worthy to dwell in my presence!\"\n";
    std::cout << "\nTHE END\n";
    
    return 0;
}