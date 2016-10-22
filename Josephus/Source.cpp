#include<iostream>
#include<string>
using namespace std;
bool checkString(string peoplePar);
int main() {
	string people = "";
	int userPeople = 0;
	int userNum = 0;
	int counter = -1;
	int positionCounter;
	cout << "How many people would you like there to be?: ";
	cin >> userPeople;
	for (int i = 0; i < userPeople; i++)
	{
		people = people + "O";
	}
	cout << people << endl;
	cout << "Witch number N would you like to use to kill people: ";
	cin >> userNum;
	while (checkString(people))
	{
		for (int i = 0; i < userNum; i++)
		{
			myLable:
			counter++;
			if (counter == people.length())
			{
				counter = 0;
			}
			if (people.at(counter) == '-')
			{

				goto myLable;
			}
			
		}
		if (people.at(counter) != '-')
		{
			people.replace(counter, 1, "-");
		}
			cout << people << endl;
	}
	system("pause>nul");
	return 0;
}
bool checkString(string peoplePar) {
	int oCounter = 0;
	for (int i = 0; i < peoplePar.length(); i++)
	{
		if (peoplePar.at(i) == 'O')
		{
			oCounter++;
		}
	}
	if (oCounter > 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}