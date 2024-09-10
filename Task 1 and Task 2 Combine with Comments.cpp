//******************************************TASK 1*********************************************

// Libraries
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
//Defining Structures

struct vehicle //choosing vehicle over given objects
{
	string category;
	string company;
	char model[100]; //character defining array
	int model_year;
	float fuel_consumption;
	double highest_speed;
	double price;
	int safety_rate;

};
//Functtions for Scanning and Printing

vehicle inputdetails(vehicle v) //input details
{
	cout << "Enter the Category sports bike (SB) or sports car (SC) : ";

	cin >> v.category;
	cout << "Enter the Company : ";

	cin >> v.company;
	cout << "Enter the Model of selected vehicle : ";
	cin.ignore();
	cin.getline(v.model, 100);
	cout << "Enter the Model Year : ";
	cin >> v.model_year;
	cout << "Enter the fuel consumption of vehicle : ";
	cin >> v.fuel_consumption;
	cout << "Enter the Highest speed : ";
	cin >> v.highest_speed;
	cout << "Enter the price of Vehicle : ";
	cin >> v.price;
	cout << "Enter the safety rate of Vehicle : ";
	cin >> v.safety_rate;

	return v;
}


void outputdetails(vehicle v)
{
	cout << endl << endl;
	cout << "Category of Vehicle  : " << v.category << endl;
	cout << "Company of Vehicle  : " << v.company << endl;
	cout << "Model of the Vehicle  : " << v.model << endl;
	cout << "Model Year of Vehicle  : " << v.model_year << endl;
	cout << "Fuel Consumption of Vehicle  : " << v.fuel_consumption << " %" << endl;
	cout << "Highest Speed of Vehicle  : " << v.highest_speed << " km/h" << endl;
	cout << "Price of " << v.company << " " << v.model << " is $ " << v.price << endl;
	cout << "Safety rate of Vehicle is : " << v.safety_rate << " %" << endl;
}
// Main Function

int main()
{
	vehicle v1, v2;

	cout << "Enter the details of Vehicle 1 " << endl << endl;
	v1 = inputdetails(v1);
	cout << endl;
	cout << "Enter the details of Vehicle 2  " << endl << endl;
	v2 = inputdetails(v2);

	cout << endl << endl;
	cout << "The details of Vehicle 1 and Vehicle 2 are given below " << endl << endl;
	outputdetails(v1);
	cout << endl << endl;
	outputdetails(v2);

	cout << endl << endl;
	//condition for comparing safety rates of vehicle 1 and vehicle 2

	if (v1.safety_rate > v2.safety_rate)
	{
		cout << v1.company << " " << v1.model << " is safer then " << v2.company << " " << v2.model << endl;
	}
	else if (v1.safety_rate == v2.safety_rate)
	{
		cout << v1.company << " " << v1.model << " is equal safer to " << v2.company << " " << v2.model << endl;
	}
	else
	{
		cout << v2.company << " " << v2.model << " is safer then " << v1.company << " " << v1.model << endl;
	}

	return 0;
}


//******************************************TASK 2*********************************************


// Libraries
/*#include <iostream>
#include <cstring>
#include <string>

using namespace std;
//Defining Structures

struct vehicle //choosing vehicle over given objects
{
	string category;
	string company;
	char model[100]; //character defining array
	int model_year;
	float fuel_consumption;
	double highest_speed;
	double price;
	int safety_rate;

};
//Functtions for Scanning and Printing

vehicle inputdetails(vehicle v) //input details making 
{
	cout << "Enter the Category sports bike (SB) or sports car (SC) : ";

	cin >> v.category;
	cout << "Enter the Company : ";

	cin >> v.company;
	cout << "Enter the Model of selected vehicle : ";
	cin.ignore();
	cin.getline(v.model, 100);
	cout << "Enter the Model Year : ";
	cin >> v.model_year;
	cout << "Enter the fuel consumption of vehicle : ";
	cin >> v.fuel_consumption;
	cout << "Enter the Highest speed : ";
	cin >> v.highest_speed;
	cout << "Enter the price of Vehicle : ";
	cin >> v.price;
	cout << "Enter the safety rate of Vehicle : ";
	cin >> v.safety_rate;

	return v;
}


void outputdetails(vehicle* v) // Using pass by reference method
{
	cout << endl << endl;
	cout << "Category of Vehicle  : " << v->category << endl;
	cout << "Company of Vehicle  : " << v->company << endl;
	cout << "Model of the Vehicle  : " << v->model << endl;
	cout << "Model Year of Vehicle  : " << v->model_year << endl;
	cout << "Fuel Consumption of Vehicle  : " << v->fuel_consumption << " %" << endl;
	cout << "Highest Speed of Vehicle  : " << v->highest_speed << " km/h" << endl;
	cout << "Price of " << v->company << " " << v->model << " is $ " << v->price << endl;
	cout << "Safety rate of Vehicle is : " << v->safety_rate << " %" << endl;
}
// Main Function

int main()
{
	vehicle v1, v2;

	cout << "Enter the details of Vehicle 1 " << endl << endl;
	v1 = inputdetails(v1); //pass by value used to avoid garbage values / over write values
	cout << endl;
	cout << "Enter the details of Vehicle 2  " << endl << endl;
	v2 = inputdetails(v2);

	cout << endl << endl;
	cout << "The details of Vehicle 1 and Vehicle 2 are given below " << endl << endl;
	outputdetails(&v1); // pass by reference method use
	cout << endl << endl;
	outputdetails(&v2); // pass by reference method use

	cout << endl << endl;
	//condition for comparing safety rates of vehicle 1 and vehicle 2

	if (v1.safety_rate > v2.safety_rate)
	{
		cout << v1.company << " " << v1.model << " is safer then " << v2.company << " " << v2.model << endl;
	}
	else if (v1.safety_rate == v2.safety_rate)
	{
		cout << v1.company << " " << v1.model << " is equal safer to " << v2.company << " " << v2.model << endl;
	}
	else
	{
		cout << v2.company << " " << v2.model << " is safer then " << v1.company << " " << v1.model << endl;
	}

	return 0;
}
*/