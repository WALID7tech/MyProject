

#include <iostream>
#include <string>
using namespace std;
int Readnumber()
{
    int number=0;
    do {
        cout << "Please enter number :" << endl;
        cin >> number;
        } while (number <= 0);
    return number;
}
void printnumber(int number)
{
    int remainder = 0; 
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;     
        cout <<remainder<< endl;        
    }
}
int main()
{
    printnumber(Readnumber());
}

