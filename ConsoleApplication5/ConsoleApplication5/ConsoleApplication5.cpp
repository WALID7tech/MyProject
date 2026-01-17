
#include <iostream>
#include<string>
using namespace std; 
int Readnumber()   
{
    int number=0;
    do
    {
       cout << "Please Enter Number   :" << endl;
        cin >> number;
    } while (number <= 0);
   return number;
 
}
int Printnum(int number)
{
    for (;number!=0;number=number/10)
    {
        int s = 0;
        if (s=number % 10 )
        {
            cout << s << endl;
        }
    }
    
    return number ;
}

int main()
{
    Printnum(Readnumber());
 
}

