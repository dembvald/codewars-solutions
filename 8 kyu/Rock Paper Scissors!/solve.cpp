#include <string>

std::string rps(const std::string& p1, const std::string& p2)
{
  if (p1=="paper" && p2=="rock" || p1=="rock" && p2=="scissors" || p1=="scissors" && p2=="paper")
    {
   return std::string ("Player 1 won!");
  }
  else if(p1=="paper" && p2=="paper" || p1=="rock" && p2=="rock" || p1=="scissors" && p2=="scissors")
    {
    return std::string("Draw!");
  }
  else
    {
    return std::string("Player 2 won!");
  }
}