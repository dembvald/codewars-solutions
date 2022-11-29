#include <string>

std::string DNAStrand(const std::string& dna)
{
  std::string an = "";
 for(auto i : dna){
    if(i == 'A') an += 'T';
    if(i == 'T') an += 'A';
    if(i == 'G') an += 'C';
    if(i == 'C') an += 'G';
   }
  return an;
}