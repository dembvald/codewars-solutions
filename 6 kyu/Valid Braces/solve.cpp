bool valid_braces(std::string braces) 
{
    std::string bro;
    for(size_t i = 0;i < braces.size();i++)
    {
        if(braces[i] == '(' || braces[i] == '[' || braces[i] == '{')
            {
               bro += braces[i];
               continue;
            }
            if(bro.size() == 0)return false;
            if((braces[i] == ')' && bro[bro.size()-1] == '(') ||
                (braces[i] == ']' && bro[bro.size()-1] == '[') ||
                (braces[i] == '}' && bro[bro.size()-1] == '{')) bro.erase(bro.size()-1);
            else  return false;
    }
    if (bro.size() == 0)return true;
    else return false;
 }