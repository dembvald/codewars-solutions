#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
   unsigned long a =  *std::min_element(std::begin(numbers), std::end(numbers));
     numbers.erase(std::min_element(std::begin(numbers), std::end(numbers)));
    a += *std::min_element(std::begin(numbers), std::end(numbers));
    return a;
}