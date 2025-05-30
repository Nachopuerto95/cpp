#include <iostream>

class Hello
{
    public:
        void Print(void);
        void Print(std::string msg);
};

void Hello::Print(void)
{
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
};

void Hello::Print(std::string msg)
{
    int i = 0;
    char c;

    while (msg[i])
    {
        if (msg[i] >= 'a' && msg[i] <= 'z')
        {
            c = msg[i] - 32;
            std::cout << c;
        }
        else
            std::cout << msg[i];
        i++;
    }
   
};

int main(int argc, char **argv)
{
    Hello my_obj;
    if (argc > 1)
    {
        argv++;
        while (*argv)
        {
            my_obj.Print(*argv);
            argv++;
        }
        std::cout << std::endl;
    }
    else
    {
        my_obj.Print();
    }

    return 0;
}