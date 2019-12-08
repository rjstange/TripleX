#include <iostream>

int main()
{
    //Print introduction messages to the terminal
    std::cout << "You wake up in a world in a strange place composed of geometric shapes.";
    std::cout << std::endl;
    std::cout << "A complex geometric form approaches you and you hear it speak in your mind:";
    std::cout << std::endl;
    std::cout << "\"I am Hedronax, the Math Lord. You are in The Hyperplane.\"";
    std::cout << std::endl;
    std::cout << "\"All that lives here is perfect math. To prove you belong here, I will ask you to solve riddles of math.\"";
    std::cout << std::endl;
    std::cout << "\"Answer wrongly, even once, and you will cease to exist!\"" << std::endl;

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 16;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    
    // Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "There are three numbers in the code." << std::endl;
    std::cout << "The codes add up to: " << CodeSum << std::endl;
    std::cout << "The codes multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "Correct! You are worthy to dwell in The Hyperplane!";
    }

    else
    {
        std::cout << "Pathetic, you are banished from my realm!";
    }

    return 0;
}