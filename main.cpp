#include <cstdlib>
#include <iostream>
#include <bitset>
unsigned long long multiplier(unsigned long arg1, unsigned long arg2)
{
    std::bitset<32> foo (arg1);
    std::bitset<32> bar (arg2);
    unsigned long long output = 0;
    int i = 0;
    for(int j = 0; j < foo.size(); j++)
    {
        if (foo[j])
        {
           output += bar.to_ulong() << i;
        }
        i++;
    }
    return output;
}
int main(int argc, char ** argv)
{
    std::cout << multiplier(5ul,15ul) << '\n';//75
    return EXIT_SUCCESS;
}

