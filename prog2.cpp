#include<iostream>
#include<string>
using namespace std;

class person 
{
private:
    string name;
    int age;
    string address;

public:
    void setdetails()
    {
        cout<<"Enter Name of Person: ";
        cin >> name;

        cout<<"Enter Age: ";
        cin >> age;

        cout<<"Enter Address: ";
        cin >> address;
    }

    void getdetails()
    {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

int main()
{
    int n;
    cout << "Enter Total Persons: ";
    cin >> n;

    person p[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Person " << i + 1 << endl;
        p[i].setdetails();
    }

    cout<<"\n------- Details -------\n";
    
    for(int i = 0; i < n; i++)
    {
        cout<< endl << "Person " << i + 1 ;
        p[i].getdetails();
    }

    return 0;
}
