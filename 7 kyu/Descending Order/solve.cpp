#include <cinttypes>
#include <string>
#include <vector>
#include <algorithm>

uint64_t descendingOrder(uint64_t a)
{
 std::vector <uint64_t> vek;
 std::string h = std::to_string(a);
 for(auto i : h)
 {
     int g = i - '0';
     vek.push_back(g);
 }
 std::sort(std::begin(vek), std::end(vek),std::greater<>());
 std::string H;
for(auto i : vek){
    H += std::to_string(i);
}
 uint64_t G = std::stoul(H, nullptr, 0);
return G;
}