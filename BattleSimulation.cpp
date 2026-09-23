#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cin >> input;

    for(int i = 0; i < input.length(); i++)
    {
        //If found combo, replace those 3 chars with 'C'
        //Do bounds checking to make sure at least 3 characters left in the string,
        //then replace with a C if all 3 characters are different
        if((input.length() - i) >= 3 && input[i] != input[i + 1] && input[i] != input[i + 2] && input[i + 1] != input[i + 2])
        {
            input.erase(i, 2);
            input[i] = 'C';
        }

        //If not a combo, just do basic swaps
        else if(input[i] == 'R')
            input[i] = 'S';

        else if(input[i] == 'B')
            input[i] = 'K';

        else if(input[i] == 'L')
        input[i] = 'H';
    }

    cout << input;
}