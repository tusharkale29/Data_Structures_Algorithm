// Write a menu driven program in C to create a structure employee having fields empid, empname, salary. 
//Accept the details of 'n' Employees from user and perform the following operations using function.

// - Search by Emp-Id.
// - Display All employees details.
// - Display Names of Employee having Salary > 10000.

// Solution:

#include <iostream>
using namespace std;

struct details
{
    char name[30];
    int eid;
    int salary;

}emp[5];

void greater_EMP(int n)
{
    int i;

    cout << " Details Of Employee Whose Salary is <= 10000 " << endl;
    cout << "-------------------------------------------------------------" << endl;

    for(i=0; i<n; i++)
    {
        if(emp[i].salary >= 10000)
        {
            
            cout << " Employee name : " << emp[i].name << endl 
            << " Employee ID : " << emp[i].eid << endl 
            << "Employee salary : " << emp[i].salary << endl;

        }
    }

}
void emp_ID_search(int n)
{
    int id,i;
    cout << " Enter the employee ID to be search : " << endl;
    cin >> id;

    cout << "-------------------------------------------------------------" << endl;
    for(i=0; i<n; i++)
    {
        if(emp[i].eid == id)
        {
            cout << " Employee name : " << emp[i].name << endl 
            << " Employee ID : " << emp[i].eid << endl 
            << "Employee salary : " << emp[i].salary << endl;

        }
    }

}

void Display(int n)
{
    int i;
    for(i=0; i<n; i++)
    {

        cout << endl << " employee name : " << emp[i].name << endl
         << " Employee ID : " << emp[i].eid << endl
         << " Employee Salary : " << emp[i].salary <<endl;
    }
}

int main()
{
    int n,i,ch;
    cout << "-------------------------------------------------------------" << endl;
    cout << " How Many Employee Record You Want to Add : " << endl;
    cin >> n;

    for(i=0; i<n; i++)
    {
    cout << "--------------------------------------------------------------" << endl;
    cout << " Enter the details of employee : " << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << " Enter the name of Employee : " << endl;
    cin >> emp[i].name;
    cout << " Enter the Employe's  ID number : "<< endl;
    cin >> emp[i].eid;
    cout << " Enter the Salary Of Employee : " << endl;
    cin >> emp[i].salary;

    }

    while(1)
    {
        cout << "-------------------------------------------------------------" << endl;
        cout << " \t \t Menu " << endl;
        cout << "-------------------------------------------------------------" << endl;
        cout << " 1: Display the Details of all employees " << endl;
        cout << " 2: Search Employee by E-ID " <<endl;
        cout << " 3: Display Employee Name whose Salary > 10000  " << endl;
        cout << " 4: Exit " << endl;

        cout << "-------------------------------------------------------------" << endl;
        cout << " Enter your choice : " <<endl;
        cin >> ch;

        switch (ch)
        {
            case 1: Display(n); 
            break;

            case 2: emp_ID_search(n);
            break;

            case 3: greater_EMP(n);
            break;
            case 4: exit(0);
        }        

    }
}