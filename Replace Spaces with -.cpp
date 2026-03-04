#include <iostream>
#include <string>
using namespace std;

int main()
{
    char sentence[200];

    cin.getline(sentence, 200);

    for (int index = 0; sentence[index] != '\0'; index++)
    {
        if (sentence[index] == ' ')
        {
            sentence[index] = '-';
        }
    }

    cout << sentence << endl;

    return 0;
}

