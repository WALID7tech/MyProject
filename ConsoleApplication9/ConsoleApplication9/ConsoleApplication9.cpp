
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
void  printnumber(int number)
{

    int remainder = 0;
    
    for (int digite = 0; digite <= 9; digite++)
    {
        int temp = number;
        int count = 0;
        while (temp > 0)
        {
            remainder = temp % 10;
            temp = temp / 10;

            if (remainder == digite)
            {
                count = count + 1;
            }
        }
        if (count > 0)
        {
            cout << " digit " << digite << " frequency is :" << count << " time " << endl;
        }

    }

    
 
   

}

 
 
int main()
{
    printnumber(Readnumber());
}