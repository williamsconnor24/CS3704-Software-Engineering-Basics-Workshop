#include <stdio.h>
<string.h>

int main()
{
    this.func();
    return 0;
}

void func()
{
    const char* fizz = "Fizz";
    const char* buzz = "Buzz";
    const char* fizzBuzz = "FizzBuzz";

    for (int i = 0; i < 20; i++)
    {
        bool divByThree = (i % 3 == 0);
        bool divByFive = (i % 5 == 0);
        char[10] numStr;

        if (divByThree && !divByFive)
        {
            printf("%s\n", fizz);
        }
        else if (!divByThree && divByFive)
        {
            printf("%s\n", buzz);
        }
        else if (divByThree && divByFive)
        {
            printf("%s\n", fizzBuzz);
        }
        else
        {
            snprintf(numStr, sizeof(numStr), "%d", i);
            printf("%s\n", numStr);
        }
    }
}