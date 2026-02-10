
#include <iostream>
#include<string>
using namespace std;
int Readnumber()
{
    int number = 0;
    do
    {
        cout << "Please Enter Number   :" << endl;
        cin >> number;
       
    } while (number<=0);
    return number;
}
void  printnumber(int number)
{
    int remainder=0;
    int digit=0;
    int count = 0;
    cout << "PLease enter Digit :" << endl;
    cin >> digit;

    while (number > 0)
    {
        remainder =number % 10;
      
        number = number / 10;

        if (digit == remainder)
        {
            count = count + 1;
        }
    }
    cout <<" digit "<< digit <<" frequency is :"<< count<<" time " << endl;

}
int main()
{
   printnumber(Readnumber());
}


