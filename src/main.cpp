#include "../include/mystery.hpp"

#include <iostream>

using namespace Mystery;

using std::cin;
using std::cout;
using std::endl;

int main()
{
    srand(time(NULL));

    cout << TITLE << "\n";

    cout << "Try to guess the word! \n";

    Mystery::guessWord();
}
