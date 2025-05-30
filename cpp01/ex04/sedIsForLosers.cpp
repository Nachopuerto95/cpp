#include "sedIsForLosers.h"

void sedIsForLosers(std::ifstream& infile, std::ofstream& outfile, std::string s1, std::string s2)
{
    char c;
    int i = 0;
    std::string buffer;

    while (infile.get(c))
    {
        if (c == s1[i])
        {
            buffer += c;
            i++;
            if (i == (int)s1.length())
            {
                outfile << s2;
                buffer.clear();
                i = 0;
            }
        }
        else
        {
            if (i > 0)
            {
                outfile << buffer[0];
                buffer.erase(0, 1);
                i--;
                infile.unget();
            }
            else
                outfile << c;
        }
    }
    outfile << buffer;
}