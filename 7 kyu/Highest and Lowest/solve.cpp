#include <string>

std::string highAndLow(const std::string& numbers){
std::string tmp;
  std::vector<int> vvv;
  for (auto c : numbers)
    {
      if (c == ' ')
        {
          vvv.push_back(stoi(tmp));
          tmp.clear();
        }
      else
        {
          tmp += c;
        }
    }
  vvv.push_back(stoi(tmp));
  std::sort(  std::rbegin(vvv), std::rend(vvv));
  tmp = std::to_string(vvv[0]) + " " + std::to_string(vvv[vvv.size()-1]);
  return tmp;
}