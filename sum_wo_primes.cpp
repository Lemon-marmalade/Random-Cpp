#include <iostream>
#include <cmath>
using namespace std;

bool primecheck (int n)
{
    int count=0;
    for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                count++;
        }
        // If n is divisible by more than 2 numbers, it's not prime
        if (count > 0 || n==1)
            return false;
        else
            return true;
}

int main()
{
    int sum, upper;
    cout<<"Sum numbers from 1 to: ";
    cin>>upper;
    for (int i=1; i<=upper; i++) {
        if (primecheck(i)!=1)
            sum = sum + i;
    }
    
    cout<<"The value of the sum of numbers 1 to "<<upper<<" excluding prime numbers is: "<<sum;
    return 0;
}
