#include <iostream>
#include <string> //to represent sequence of characters  as an object of class
using namespace std;

class Message //Create abstract class
{
	private:
		//private attribute
		string Header;
	public:
		Message(const string Header)
		{
			setHeader(Header);
		}
		
		string getHeader() const
		{
			return Header;
		}
		
		void setHeader(const string value)
		{
			Header = value;
		}
		
		void Send()
		{
			cout << getHeader();
		}
};

class Email : public Message //create derived class Email
{
	public:
		Email() : Message("Email") {} //print output
};

int main()
{
	Email *check = new Email(); //create object check
	check->Send(); //call abstract method
	
	delete check; //dellocate object check
	
	return 0;
}
