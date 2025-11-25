#include <iostream>
using namespace std;

void TH(int disk, char source, char helper, char target)
{
    // Base case
    if (disk==1)
    {
        cout<<source<<" to "<<target<<endl;
        return;
    }
    // Move the top (disk-1) disks to helper so that the bottom disk can move to target
    TH(disk-1, source, target, helper);
    // Move bottom disk to target
    cout<<source<<" to "<<target<<endl;
    // Treat the problem as if there were (disk-1) disks originally, and repeat
    TH(disk-1, helper, source, target);
}

int main()
{
    int num_disks;
    cout<<"Enter the number of disks: ";
    cin>>num_disks;
    
    TH(num_disks, 'S', 'H', 'T');

    return 0;
}
