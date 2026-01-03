
#include <iostream>
#include<string>
using namespace std;
void MultiplictionChall()
{
   
    cout << "\n           Multipliaction Table From 1 to 10 " << endl;
    cout << "\n";
    cout << "\t1\t 2\t 3\t 4\t 5\t 6\t 7\t 8\t 9\t 10\t" << endl;
    cout << "___________________________________________________________________________________\a_\n";
}
void FuncationMultiplaction()
{
    int i = 1;
    while (i <= 10)
    {
        cout << i << "\t";

       
        int a = 1;
        while (a <= 10)
        {
           
            int b = a * i;
            a++;

            cout << b << "\t";

        }
        i++;

        cout << endl;
    }
}
int main()
{
    MultiplictionChall();
    FuncationMultiplaction();
}

