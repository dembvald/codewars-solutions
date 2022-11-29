#include <string>
#include <vector>

std::vector<std::string> towerBuilder(unsigned nFloors) {
     std::string star ("*");
     std::string p1;
     std::string p2;
     std::string p;
     for(int i = 1;i < nFloors;i++)
     {
         p1 += ' ';
         p2 += ' ';
     }
     std::vector<std::string> res;
     for(int i = 0;i < nFloors;i++)
     {
         p += p1;
         p += star;
         p += p2;
         p1.pop_back();
         p2.pop_back();
         res.push_back(p);
         star += "**";
         p.erase();
     }
  return res;
}