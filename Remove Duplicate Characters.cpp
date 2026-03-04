#include <iostream>
#include <string>
using namespace std;

int main()
{
    char text[200];
    char result[200];

    cin.getline(text, 200);

    int unique = 0;

    for (int index = 0; text[index] != '\0'; index++)
    {
        bool is_present = false;
        for (int check = 0; check < unique; check++)
        {
            if (text[index == result[check]])
            {
                is_present = true;
                break;
            }
        }

        if (is_present)
        {
            result[unique] = text[index];
            unique++;
        }
    }

    result[unique] = '\0';

    cout << result << endl;

    return 0;
}

