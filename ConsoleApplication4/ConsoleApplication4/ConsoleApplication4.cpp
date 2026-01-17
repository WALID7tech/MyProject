
#include <iostream>
#include <string>
using namespace std;


long long readnumber(string message)
{
    long long number = 0;
    do
    {
        cout << message << endl;
        cin >> number;

    } while (number < 0);
    return number;
}
bool isPerfectNumber(long long number)
{
    long long sum = 0;

    for (long long i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum += i;  
        }
    }
    return number==sum;
} 
void Printnumber(long long number)
{
    if (isPerfectNumber(number))
    {
        cout << number << "\n" << "it is perfect number .";
        
    }
    else
        cout << number << "\n" << "it is not perfect number"<<"\n";
   
} 
int main()
{
    long long number = readnumber("Please enter a positive number");
    Printnumber(number);
    for (long long s = 1; s <= number; s++)
    {
     

        if (isPerfectNumber(s))
        {   
            cout<< s << endl;   
        }
        
    }
}

