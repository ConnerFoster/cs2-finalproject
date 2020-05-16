// Program name :FinalProject.cpp
// Author : Conner Foster
// Date last updated : 5 / 15 / 2020
// Purpose : Car Dealership program for managing automobiles, sales, employees

//things to remember: top speed for sports cars, type of seats for luxury

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee //The employee class allows for the owner/manager to manage employees. For example, changing their salaries.
{
protected: //protected data members
    string lastName;
    string firstName;
    string employeeId;
    string ssn;
public:
    Employee(string last, string first, string id, string ss) 
    {
        lastName = last;
        firstName = first;
        employeeId = id;
        ssn = ss;
        cout << "Creating Employee " << first << " " << last << endl;
    }
    ~Employee()
    {
        cout << "Disposing of employee " << firstName << " " << lastName << endl;
    }
    string getName()  //employee class getter functions
    {
        return firstName + " " + lastName;
    }
    string getID()
    {
        return employeeId;
    }
    string getSSN()
    {
        return ssn;
    }
    void setFirstName(string newFName) //employee class setter functions
    {
        firstName = newFName;
    }
    void setLastName(string newLName)
    {
        lastName = newLName;
    }
    void setID(string newID)
    {
        employeeId= newID;
    }
    void setSSN(string newSSN)
    {
        ssn = newSSN;
    }

};

/*class Manager : public Employee {
private:
    double salary;

};*/

class Automobile //Automobile class is for entering cars in and editing their details. You can also sell them or get rid of them.
{
protected:
    string make;
    string model;
    string color;
    int year;
    double price;
public:
    Automobile(string mk, string md, string col, int yr, double p) 
    {
        make = mk;
        model = md;
        color = col;
        year = yr;
        price = p;
        cout << "Adding " << yr << " " << mk << " " << md << " to the lot.";
    }
    ~Automobile()
    {
        cout << "Destroying car " << endl;
    }
    string getMake()
    {
        return make;
    }
    string getModel()
    {
        return model;
    }
    string getColor()
    {
        return color;
    }
    int getYear()
    {
        return year;
    }
    double getPrice()
    {
        return price;
    }
    void setMake(string newMake)
    {
        make = newMake;
    }
    void setModel(string newModel)
    {
        model = newModel;
    }
    void setColor(string newColor)
    {
        color = newColor;
    }
    void setYear(int newYear)
    {
        year = newYear;
    }
    void setPrice(double newPrice)
    {
        price = newPrice;
    }
   
};

class SportsCar : public Automobile //sports car class. sports cars here at C-World are priced at $25,000 and up and they go fast.
{ 
private:
    double maxSpeed;
    bool convertible;
    string transmissionType;
    int horsePower;
public:
    SportsCar(string mk, string md, string col, int yr, double p, double max, bool conv, string tt, int hp) :
        Automobile(mk, md, col, yr, p)
    {
        cout << "Adding " << yr << " " << mk << " " << md << " to the lot.";
        maxSpeed = max;
        convertible = conv;
        transmissionType = tt;
        horsePower = hp;
    }
    ~SportsCar()
    {
        cout << "deleting sports car" << endl;
    }
    double getMaxSpeed()
    {
        return maxSpeed;
    }
    bool getConvertible()
    {
        return convertible;
    }
    string getTransmission()
    {
        return transmissionType;
    }
    int getHorsePower()
    {
        return horsePower;
    }
    void setMaxSpeed(double newMax)
    {
        if (newMax < 120)
        {
            throw invalid_argument("Sports cars here at C-World must have a top speed of at least 120 mph.");
        }
        else if (newMax > 300)
        {
            throw invalid_argument("Not likely the car is that fast. Speak to the owner. ");
        }
        else {
            maxSpeed = newMax;
        }
    }
    void setConvertible()
    {
        if (convertible = true)
        {
            convertible = false;
        }
        else
        {
            convertible = true;
        }
    }
    void setTransmission(string newTrans)
    {
        transmissionType = newTrans;
    }
    void setHorsePower(int newHP)
    {
        if (newHP > 1000)
    }
};


int main()
{
    cout << "Welcome to C-World Dealership Management Software" << endl;
    cout << "-------------------------------------------------" << endl;
}

