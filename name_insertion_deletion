#include <iostream>
using namespace std;
int main()
{
    string s_name[1000];
    int n;
    cout<< "How many students in the class?: ";
    cin>>n;
    //string s_name[n];
    for (int i=0; i<n; i++)
    {
        cout<< "Enter name for student "<<i+1<<": ";
        cin>>s_name[i];
    }
    // When a new student enters
    cout<< "Enter the new student who joined the class: ";
    string new_student;
    cin>>new_student;
    /*
    s_name[n] = new_student;
    n++; // Need to update student count
    */
    // Alphabet add
    int loc=0;
    // Move people if needed
    for (int i=n-1; i>=0; i--)
    {
        if (new_student<s_name[i]) // If comes before in alphabet (lower ASCII value)
            s_name[i+1]=s_name[i];
        else
        {
            loc = i+1;
            break;
        }
    }
    s_name[loc] = new_student;
    n++; // Don't forget this line!
    
    cout<< "The following students are in the class: "<< endl;
    for (int i=0; i<n; i++)
    {
        cout<<s_name[i]<<endl;
    }
    
    string to_del;
    cout<< "Enter the student to remove: ";
    cin>>to_del;
    
    // Loop through list to find student to remove
    for (int i=0; i<n; i++)
    {
        if (s_name[i]==to_del)
        {
            for (int j=i;j<=n;j++)
            {
                s_name[j]=s_name[j+1];
            }
            break;
        }
    }
    n--;
    // Print out student list
    cout<< "The following students are in the class: "<< endl;
    for (int i=0; i<n; i++)
    {
        cout<<s_name[i]<<endl;
    }

    return 0;
}
