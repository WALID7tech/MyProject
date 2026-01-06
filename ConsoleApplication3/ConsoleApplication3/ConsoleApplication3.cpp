

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

    for (int i=1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;   
        }

    } 
    if (sum == number)
    {
        cout << number << "\n"<< "it is perfect number .";
    }
    else
        cout << number<< "\n" << "it is not perfect number";
    return number;
}


int main()
{
    SumoAllDivisors(Readnumber());

}

