#include <iostream>
#include "PrintIntroduction.cpp"
using namespace std;

bool PlayGame(int Difficulty, int EndGame)
{
    PrintIntroduction(Difficulty, EndGame);
    
    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 16;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print sum and product to the terminal
    cout << "\"Riddle #" << Difficulty << ":\n";
    cout << "There are three numbers:\n";
    cout << "They add up to: " << CodeSum << "\n";
    cout << "And multiply to give: " << CodeProduct << "\"" << endl;

    // Store player guesses and receive the input
    int GuessA, GuessB, GuessC;
    
    cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Checks if the game is not on the last level
    if (Difficulty < EndGame)
    {
        if (GuessSum == CodeSum && GuessProduct == CodeProduct)
            {
                cout << "\n\"Now for the next riddle.\"\n";
                return true;
            }
        else
            {
                cout << "\n\"Pathetic, you are banished from my realm!\"\n";
                return false;
            }
    }
    // Final level
    else
    {
        if (GuessSum == CodeSum && GuessProduct == CodeProduct)
            {
                return true;
            }
        else
            {
                cout << "\n\"Pathetic, you are banished from my realm!\"\n";
                return false;
            }
    }
}