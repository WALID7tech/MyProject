#include <iostream>
#include <string>
using namespace std;
int Readnumber()
{
    int number;
    cout << "Please enter number :" << endl;
    cin >> number;
    return number;
}
int SumoAllDivisors(int number)
{
    int sum = 0;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
        }

    }
    if (sum == number)
    {
        cout <<  "\n" << "it is perfect number .";
    }
    else
        cout <<  "\n" << "it is not perfect number";
    return number;
}


int main()
{
    int number = Readnumber();
    SumoAllDivisors(number);
    for (long long s = 1; s <= number; s++)
    {


        if (SumoAllDivisors(s))
        {
            cout << s << endl;
        }

    }
}


