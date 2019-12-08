#include <iostream>

void PrintIntroduction(int Difficulty)
{
    // First level introduction
    if (Difficulty == 1)
    {
        // Print introduction messages to the terminal
        std::cout << "\nYou wake up in a strange place composed entirely of geometric shapes.\n";
        std::cout << "A complex geometric form approaches you and you hear it speak in your mind:\n\n";

        std::cout << "\"I am Hedronax, the Math Lord. You are in The Hyperplane.\"\n";
        std::cout << "\"All that lives here is perfect math. To prove you belong here, I will ask you to solve riddles of math.\"\n";
        std::cout << "\"Answer wrongly, even once, and you will be banished!\"\n\n";
    }
    else
    {
        std::cout << "\"Well done! Now for the next question.\"\n"
        std::cout << "\"Remember, if you answer wrongly, you will be banished!\"\n\n"
    }
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 16;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    
    // Print sum and product to the terminal
    std::cout << "\"Riddle #" << Difficulty << ":\"\n";
    std::cout << "\"There are three numbers:\"\n";
    std::cout << "\"They add up to: " << CodeSum << "\"\n";
    std::cout << "\"And multiply to give: " << CodeProduct << "\"" << std::endl;

    // Store player guesses and receive the input
    int GuessA, GuessB, GuessC;
    
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the player's guess is correct or not
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n\"Correct! You are worthy to dwell in The Hyperplane!\"\n";
        return true;
    }
    else
    {
        std::cout << "\n\"Pathetic, you are banished from my realm!\"\n";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;

    while(true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer
        
        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }
    
    return 0;
}