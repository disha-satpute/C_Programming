#include<iostream>
using namespace  std;
//object oriented programming
//Method overridding : 
//is possible only through inheritance
//Inheritance is implmented through child parent class hiearchy

//we need to establish relation between two classes:
// 1. Association----------------has a  relationship
// 2. Inheritance----------------is a relationship

/*
Inheritance:
Manager inherits from Employee, reusing its functionality and adding its own.

Method Overriding: The Manager class overrides the ComputePay() method to calculate the manager's pay differently (with a bonus).

*/


class Date {
	private :
		int day,  month, year;
	public :
		Date(int d, int m, int y):day(d),month(m),year(y) {}
		void display(){
			cout << day<<"/"<<month<<"/"<<year<<endl;
		}
};

//Base Class
class Employee {
	protected:
		string name;
		double basicSalary;
		int workingDays;
		double dailyAllowance;
		//Date joinDate;
	public:
		  Employee(string empName, double empSalary, int days, double da){
		  	this->name=empName;
		  	this->basicSalary=empSalary;
		  	this->dailyAllowance=da;
		  	this->workingDays=days;
		  }

		  //virutal keyword mentions that
		  //following method in child class could be overrided
		  virtual  double ComputePay(){
		  	cout<<"\n Employee ComputePay is called...";
		  	double package=basicSalary + (workingDays * dailyAllowance);
		  	return package;
		  }
};

//Derived Class  : is a relationship
class Manager:public Employee {

	private:
			double bonus;
	public:
		    //Member Initialized List
			Manager(string mgrName, double mgrBasicSalary, int days, double da, double incentive):Employee(mgrName,mgrBasicSalary,days, da){	
				this->bonus=incentive;
			}

			//Method overrriding :Changing the behavious of parent class method in derived class

			double  ComputePay() override   {
			  	cout<<"\n Manager ComputePay is called...";
			 	double package=basicSalary + (workingDays * dailyAllowance) + bonus;
			 	return package;
			}
};

class Director:public Employee{
	private:
		 int shareholding;
		 int earningPerShare;

	public :
			Director(string mgrName, double mgrBasicSalary, int days, double da, int  shares):Employee(mgrName,mgrBasicSalary,days, da){
				this->shareholding=shares;
				this->earningPerShare=10;

			}
		//form
		 double ComputePay() override{
		  	cout<<"\n Director ComputePay is called...";
		  	double package=basicSalary + (workingDays * dailyAllowance) + (shareholding * (earningPerShare));
		  	return package;
		  }
};

 class CEO:public Employee {
	private:
		 double  monthlyIncentive;

	public :
			CEO(string mgrName, double mgrBasicSalary, int days, double da, double  incentive):Employee(mgrName,mgrBasicSalary,days, da){	
				this->monthlyIncentive=incentive;
			}
		//form
		 double ComputePay() override{
		  	cout<<"\n CEO ComputePay is called...";
		  	double package=basicSalary + (workingDays * dailyAllowance) + monthlyIncentive;
		  	return package;
		  }
};

int main(){

	Employee emp1("DISHA SATPUTE",15000,25,500);
	double result=emp1.ComputePay();
	cout<< "\n Employee Salary="<<result;

	Manager mgr1= Manager("SANIKA BHOR",23000, 25, 1000,3000);
	double mgrResult=mgr1.ComputePay();
	cout<< "\n Manager Salary="<<mgrResult;

	Employee *pEmployee = new Manager("PRADNYA GADE",33000, 20, 1500,8000);
	Employee *pEmployee2=  new Director("KIRTI KALE",56000, 25, 2000,56000);
	Employee *pEmployee3=  new CEO("NIKITA SANE",89000,20,15000,7860000);

	//Polymorphism: invoking the behaviour of  overriable method which belong to class , whose object is created.

	cout<< "\n Employee Salary="<<pEmployee->ComputePay()<< endl;   // form of Manager.computepay
	cout<< "\n Employee Salary="<<pEmployee2->ComputePay()<< endl;  //fors of Director.ComputePay
	cout<< "\n Employee Salary="<<pEmployee3->ComputePay()<< endl;  //form of CEO.ComputePay

}

// Relationship between classes  defiend using two ways
// 1.Association (Containment, composition):  has a relationship
// 2.Inheritance :  is a realtionship

//Why we go for inheritnace: reusibility
//Inheritnace also allows us to implement Polymorphsim

//Polymorphism ?
// means, the ability of something to take multiple forms.
// means ability of a single function, method, or object  behave differently  depending
// on the context   or type os data it's working.

// There are two types of classes
//  one class is called abstract class  ( we can not create object from a class)
//  another type of class is called  concrete class ( we can create object from class)
