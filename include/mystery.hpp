#ifndef __MYSTERY__
#define __MYSTERY__

#include <string>

namespace Mystery
{
    std::string shuffleWord(std::string word) noexcept;
    std::string readWordFromFile() noexcept;
    void guessWord() noexcept;

    static const std::string TITLE = R"(
         _   .-')      ('-.                                          (`\ .-') /`             _  .-')  _ .-') _   
( '.( OO )_   ( OO ).-.                                       `.( OO ),'            ( \( -O )( (  OO) )  
 ,--.   ,--.) / . --. /  ,----.     ,-.-')   .-----.       ,--./  .--.   .-'),-----. ,------. \     .'_  
 |   `.'   |  | \-.  \  '  .-./-')  |  |OO) '  .--./       |      |  |  ( OO'  .-.  '|   /`. ',`'--..._) 
 |         |.-'-'  |  | |  |_( O- ) |  |  \ |  |('-.       |  |   |  |, /   |  | |  ||  /  | ||  |  \  ' 
 |  |'.'|  | \| |_.'  | |  | .--, \ |  |(_//_) |OO  )      |  |.'.|  |_)\_) |  |\|  ||  |_.' ||  |   ' | 
 |  |   |  |  |  .-.  |(|  | '. (_/,|  |_.'||  |`-'|       |         |    \ |  | |  ||  .  '.'|  |   / : 
 |  |   |  |  |  | |  | |  '--'  |(_|  |  (_'  '--'\       |   ,'.   |     `'  '-'  '|  |\  \ |  '--'  / 
 `--'   `--'  `--' `--'  `------'   `--'     `-----'       '--'   '--'       `-----' `--' '--'`-------'
    )";

};

#endif