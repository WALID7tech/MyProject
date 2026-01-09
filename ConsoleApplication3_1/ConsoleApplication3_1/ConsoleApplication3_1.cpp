
#include <iostream>
#include <string>
using namespace std;
int readnumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;

    } while (number <0);
    return number;
}
bool isPerfectNumber(int number)
{
    int sum = 0;
    for (int i=1;i<number;i++)
    {
        if (number % i == 0)

        {
            sum += i;
        }
    }
    return number==sum;
}
void PrintNumber(int number)
{
    if (isPerfectNumber(number))
    {
        cout << number << "\n" << "it is perfect number .";
    }
    else
        cout << number << "\n" << "it is not perfect number";
}

int main()
{
    PrintNumber(readnumber("Please enter a positive number : "));
}


