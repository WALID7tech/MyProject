#include <iostream>
#include <string>
using namespace std;

enum enPrimNotPrime { Prim = 1, NotPrim = 2 };
int ReadNumber()
{
    int number = 1;
    do
    {
        cout << "Please Enter Number :" << endl;
        cin >> number;

    } while (number <= 0);
    return number;
}
int checkprim(int number)
{
    int M = (number / 2);
    for (int counter = 2; counter <= M; counter++)
    {
        if (number % counter == 0)
            return enPrimNotPrime::NotPrim;
    }
    return enPrimNotPrime::Prim;
}
    void PrintPrimNumber(int number)
{
    if (checkprim(number)==Prim)
    {
        int i = 2;
        do
        {
            i++;
            if (checkprim(i) == Prim)      
            cout << i << endl;
        } while (i <number);
    }
}



int main()

{
    PrintPrimNumber(ReadNumber());
}
