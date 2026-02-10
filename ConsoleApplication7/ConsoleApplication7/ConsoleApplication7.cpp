
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
    } while (number <= 0);
    return number;

}
void printnumber(int number)
{
    int remainder= 0;
    int g = 0;

 
    while (number > 0)
    {
        remainder = number % 10;
        g = g * 10 + remainder;
        number = number / 10;

        cout << g << endl;
    } 
  
    
}


int main()
{
  
    printnumber(Readnumber());
    
}


