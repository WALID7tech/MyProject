
#include <iostream>
#include<string>
using namespace std;
void MultiplictionChall()
{
    cout << "\n";
    cout << "\n           Multipliaction Table From 1 to 10 " << endl;
    cout << "\n";
    cout << "        1    " << "    2  " << "     3  " << "     4   " << "    5   " << "    6   " << "    7   " << "    8   " << "    9   " << "    10   " << endl;
    cout << "_____________________________________________________________________________________\n";

 }
void FuncationMultiplaction()
{

    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
        for (int a = 1; a <= 10; a++)
        {
            int b = a * i;
            cout << b <<"\t " ;
        }
        cout << endl;


    }
  

    

}

 int main()
{
     MultiplictionChall();
     FuncationMultiplaction();
}

