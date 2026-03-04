#include <iostream>
#include <string>
using namespace std;

int main()
{
    char text[200];

    cin.getline(text, 200);

    char first = '\0';

    for (int index = 0; text[index] != '\0'; index++)
    {
        int count = 0;

        for (int scan = 0; text[scan] != '\0'; scan++)
        {
            if (text[index] == text[scan])
            {
                count++;
            }
        }

        if (count == 1)
        {
            first = text[index];
            break;
        }
    }

    if (first == '\0')
    {
        cout << "None" << endl;
    }
    else
    {
        cout << first << endl;
    }

    return 0;
}

