#include <iostream>

void PrintIntroduction()
{
    //Print introduction messages to the terminal
    std::cout << "\nYou wake up in a strange place composed entirely of geometric shapes.\n";
    std::cout << "A complex geometric form approaches you and you hear it speak in your mind:\n\n";

    std::cout << "\"I am Hedronax, the Math Lord. You are in The Hyperplane.\"\n";
    std::cout << "\"All that lives here is perfect math. To prove you belong here, I will ask you to solve riddles of math.\"\n";
    std::cout << "\"Answer wrongly, even once, and you will be banished!\"\n\n";
}

bool PlayGame()
{
    PrintIntroduction();
    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 16;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    
    // Print sum and product to the terminal
    std::cout << "\"There are three numbers in the code.\"\n";
    std::cout << "\"The codes add up to: " << CodeSum << "\"\n";
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
    while(true)
    {
        bool bLevelComplete = PlayGame();
        PlayGame();
        std::cin.clear();
        std::cin.ignore();
    }
    
    return 0;
}