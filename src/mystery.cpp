#include "../include/mystery.hpp"

#include <iostream>
#include <fstream>

#define FILEPATH "file\\words.txt"

std::fstream file{FILEPATH};
auto lives{3};

std::string Mystery::shuffleWord(std::string word) noexcept
{
    std::string shuffledWord{""};

    while (!word.empty())
    {
        auto randomCharacter{rand() % std::size(word)};
        shuffledWord.push_back(word[randomCharacter]);

        word.erase(randomCharacter, 1);
    }

    for (size_t &&i{0}; i < std::size(shuffledWord); i++)
        shuffledWord[i] = std::toupper(shuffledWord[i]);

    return shuffledWord;
}

std::string Mystery::readWordFromFile() noexcept
{
    auto fileLines{0};
    auto line{0};

    std::string word{""};

    while (!file.eof())
    {
        file >> word;
        fileLines++;
    }

    file.clear();
    file.seekg(0, std::ios::beg);

    auto randomWordIndex{rand() % fileLines + 1};

    while (line < randomWordIndex)
    {
        file >> word;
        line++;
    }

    file.close();

    for (size_t &&i{0}; i < std::size(word); i++)
        word[i] = std::toupper(word[i]);

    return word;
}

void Mystery::guessWord() noexcept
{
    std::string word{readWordFromFile()};
    std::string shuffledWord{shuffleWord(word)};

    std::string answer{""};

    std::cout << shuffledWord << "\n";

    do
    {

        std::getline(std::cin, answer);

        if (answer != word)
        {
            lives--;
            std::cout << "Wrong! Remains " << lives << " chance!\n";
        }

        else
            break;

    } while (lives > 0);

    if (lives <= 0)
        std::cout << "The word was " << word << "." << std::endl;

    else
        std::cout << "Bravo!" << std::endl;
}