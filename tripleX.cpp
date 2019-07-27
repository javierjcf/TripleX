#include <iostream>

void PrintIntroduction()
{
    std::cout << "Hello, Agent X!\n";
    std::cout << "Enter the correct code to continue! \n\n";
}


bool PlayGame()
{

    // Print welcome messages to the terminal
    PrintIntroduction();

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    /* Print the sum
       and print the product
     */
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "+ There are 3 numbers in the code: ";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct;

    std::cout << "\n\n+ Enter the three numbers of a code separated by spaces: \n";
    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA  >> GuessB >> GuessC;

    std::cout << "You entered: " << GuessA << GuessB << GuessC;

    const int GuessSum = GuessA + GuessB + GuessC;
    const int GuessProduct = GuessA * GuessB * GuessC;

    // Check if player guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou Win!\n\n\n";
        return true;
    }
    else
    {
        std::cout << "\nYou Loose!\n\n\n";
        return false;
    }
}


int main()
{
    while(true)
    {
        bool bLevelComplete = PlayGame();
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer
        PlayGame();
    }
    return 0;
}