#include <iostream>
using namespace std;
#include <string>

int main()
{
    char word[100];
    cin >> word;

    int length = 0;
    while (word[length] != '\0')
    {
        length++;
    }

    int left = 0;
    int right = (length - 1);

    bool is_palidrome = true;

    while (left < right)
    {
        if (word[left] != word[right])
        {
            is_palidrome = false;
            break;
        }
        left++;
        right--;
    }

    if (is_palidrome)
    {
        cout << "Palidrome" << endl;
    }
    else
    {
        cout << "Not Palidrome" << endl;
    }

    return 0;

}

