#include <iostream>
using namespace std;
int main()
{
    int input;
    int max = 0;
    int min = 0;

    cout << "Enter number: ";
    while (input != -1)
    {
        cin >> input;
        if(input != -1)
        {
            if(input > max)
            {
                max = input;
            }

            if(input < min)
            {
                min = input;
            }
        }
    }
    cout <<"Max: " << max << " Min " << min << endl;
return 0;
}
