#include <string>
#include <vector>
#include <math.h>

std::string range_extraction(std::vector<int> args) 
{
	std::vector <int> token;
	std::string res;
	for(size_t i = 0; i < args.size(); i++)
	{
		token.push_back(args[i]);
		if(args[i] + 1 != args[i+1])
		{
			int tSize = token.size();
			if(tSize > 0)
			{
				if(tSize >= 3)
				{
					int t0 = token[0];
					int tend = token[token.size()-1];
					res += std::to_string(t0);
					res += '-' ;
					res += std::to_string(tend);
					res += ',';
					token.clear();
				}
				else 
				{
					for(auto s : token)
					{
						res += std::to_string(s);
						res += ',';
					}
					token.clear();
				}
			}
		}
	}
  res.pop_back();
  return res;
}