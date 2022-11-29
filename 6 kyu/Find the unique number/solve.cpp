float find_uniq(const std::vector<float> &v)
{
      float maxi = *std::max_element(std::begin(v), std::end(v));
      float mini = *std::min_element(std::begin(v), std::end(v));
       float count_maxi = count(v.begin(),v.end(),maxi);
       float count_mini = count(v.begin(),v.end(),mini);
        if(count_maxi < count_mini)
        {
            return maxi;
        }
        else
        {
            return mini;
        }
  }