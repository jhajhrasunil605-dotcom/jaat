#include<iostream>
using namespace std;

class student
{
    private:
    string name;
    int marks;

    public:

    void input()
    {
        cout << "Enter marks:";
        cin >> marks;
    }
};
int main()
{
    int n;

    cout << "Enter number of student:";
    cin >> n;

    student* student = new student[n];

    for(int i=0;i<n;i++)
    {
        cout << "\nstudent"<<i+1<<endl;
        student[i].input();
    }

    cout <<"\nstudent Details\n";

    for(int i = 0;i <n;i++)
    {
        student[i].display();
    }
    delete[] student;

    return 0;
}