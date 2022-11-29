#include <string>

std::string no_space(const std::string& x)
{
   std::string y;
   for(size_t i=0; i<x.size();i++)
   {
       if(x[i] != ' ')
       {
           y += x[i];
       }
   }
   return y;
}