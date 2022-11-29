#include <iostream>
#include <string>

std::string incrementString(const std::string &str)
{
    std::string new_str = str;
    if(new_str.size() == 0)return "1";
    if(new_str[new_str.size()-1] > '9')return new_str + '1';
    if(new_str[new_str.size()-1] <= '9')
    {
        for(int i = new_str.size()-1;i >= 0;i--)
        {
            if(new_str[i] < '9')
            {
                new_str[i] = new_str[i] + 1;
                break;
            }
          if(new_str[i-1] > '9')
            {
              if(new_str[i] == '0')
                {
                    new_str[i] = '1';
                    break;
                }
                new_str[i] = '1';
                new_str += '0';
                break;
            }
            new_str[i] = '0';
        }
    }
    return new_str;
}