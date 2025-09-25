#include <iostream>
#include <cmath>
using namespace std;
// list the prime factorization of a given positive integer 20: 2^2 * 5^1
bool checkprime(int n);

int main()
{
    int x = 0;
    cout<<"Input a number for its prime factorization: ";
    cin>>x;
    // Check if x is prime
    if (checkprime(x)){
        cout<<x<<" is prime!"<<endl;
    }
    else{
        cout<<x<<": ";
        int xcheck=x;
        // Check for prime divisors
        for (int i=1;i<=x/2;i++){
            // If i is prime and is a factor of x
            if (checkprime(i) && x%i==0){
                int p = 0; // Set a variable for the power
                cout<<i<<"^";
                // Check how many powers of i can fit in x
                // While xcheck is still divisible by i
                while (xcheck%i==0){
                    xcheck = xcheck/i; // divide xcheck by i
                    p++;
                }
                cout<<p;
                // If x can be factored further
                if (xcheck>1){
                    cout<<" * ";
                }
            }
        }
    }
    
    return 0;
}
bool checkprime(int n){
    int count = 1;// Account for the number itself
    for (int i=1;i<=n/2;i++){
        if (n%i==0 && n!=1){
            count++;
        }
    }
    // If exactly 2 factors, is prime!
    if (count==2){
        return true;
    }
    return false;
}
