#include <iostream>
#include <ctime>
#include "PrintIntroduction.cpp"
#include "PrintRiddle.cpp"

bool PlayGame(int CurrentLevel, int MaxLevels)
{
    // Checks for first level to print introduction message
    if (CurrentLevel == 1)
    {
        PrintIntroduction(MaxLevels);
    }
    
    // Declare 3 number code
    const int CodeA = rand() % CurrentLevel + CurrentLevel;
    const int CodeB = rand() % CurrentLevel + CurrentLevel;
    const int CodeC = rand() % CurrentLevel + CurrentLevel;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    PrintRiddle(CurrentLevel, MaxLevels, CodeSum, CodeProduct);

    // Store player guesses and receive the input
    int GuessA, GuessB, GuessC;
    
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Evaluate if the input is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
        {
            return true;
        }
    else
        {
            std::cout << "\n\"Pathetic, you are banished from my realm!\"\n";
            return false;
        }
}