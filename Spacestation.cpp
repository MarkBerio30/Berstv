#include <iostream>
using namespace std;

class Spacestation // Create abstract class
{
	public:
		void Firelaser(); // create abstract method Firelaser
};

class Deathstar : Spacestation //create derived class deathstar
{
	public:
		void Firelaser() //implement method
		{
			cout << "Pew Pew"; // print output
		}	
};

int main()
{
	Deathstar *check = new Deathstar(); //create object check
	check->Firelaser(); //call abstract method
	
	delete check; // dellocate object check
	
	return 0;
}
