// Create an employee class, basing it on Exercise 4 of Chapter 4. 
// The member data should comprise an int for storing the employee number and a float for storing the employee’s compensation. 
// Member functions should allow the user to enter this data and display it.
// Write a main() that allows the user to enter data for three employees and display it.
/////////////////////////////////////////////////////////////////////////////////////////
// Chapter 4 : Exercise 4 :
// Create a structure called employee that contains two members: an employee number
// (type int) and the employee’s compensation (in dollars; type float). Ask the user to fill
// in this data for three employees, store it in three variables of type struct employee, and
// then display the information for each employee.

//libraries used in the program
#include <iostream>
using namespace std;

//class employee, it is a sample of how we could store simple data about employees in organizations. 
class employee
{
    private:
        int id;
        float compensation;
    public:
        employee() : id(0) , compensation(0)
            {}
        void addData()
        {
            cout<<"Enter ID : ";  cin>>id;
            cout<<"Enter Salary : ";  cin>>compensation;
        }
        void showData()const{
            cout<<"Employee ID : "<<id<<endl;
            cout<<"Employee Salary : "<<compensation<<endl;
        }
};

int main()
{
//Define variables used in the program and it represent 4 employees. 
    employee Ahmed;
    employee Mohamed;
    employee Abdulrahman;
    employee Mostafa;
    string Name;

    //Giving the user general information about the program and how to use it.
    cout<<"This is AL_DELTA company, and you are working as HR employee and there is a four employees in financial department.\n";
    cout<<"you need to put data about these employees\n";

    cout<<"First employee : Ahmed \n";
        Ahmed.addData();
    cout<<"Second employee : mohamed\n";
        Mohamed.addData();
    cout<<"Third employee : abdulrahman\n";
        Abdulrahman.addData();
    cout<<"Fourth employee : mostafa\n";
        Mostafa.addData();

    cout<<"Enter the name of the employee you want to display : "; cin>>Name;
    if(Name=="ahmed")
        Ahmed.showData();
    else if(Name=="mohamed")
        Mohamed.showData();
    else if(Name=="abdulrahman")
        Abdulrahman.showData();
    else
        Mostafa.showData();

    return 0;       
}