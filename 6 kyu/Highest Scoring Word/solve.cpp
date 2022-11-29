#include <string>

std::string highestScoringWord(const std::string &str)
  {
   std::string word;
     std::vector<std::string> words;
     std::vector<int> word_coin;
     int coin = 0;
     for(size_t i = 0;i <= str.size();i++)
     {
         if(str[i] == ' ' || i == str.size())
         {
             words.push_back(word);
             word.clear();
             word_coin.push_back(coin);
             coin = 0;
         }
         else
         {
             word += str[i];
             coin += str[i];
             coin -= 'a';
             coin++;
         }
     }
     int max_coin = *std::max_element(std::begin(word_coin), std::end(word_coin));
     for(size_t i = 0;i < word_coin.size(); i++)
     {
         if(word_coin[i] == max_coin)
         {
             return words[i];
         }
     }
}