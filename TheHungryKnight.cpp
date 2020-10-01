/*Name: Tyler Nichols
* Class: CS 231
* Program: The Hungry Knight
* This program is meant to calculate how much silver the Hungry Knight owes the Innkeeper*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Welcome to the Knight's Inn and Tavern, Sir. We are honored to serve the King's men during these trying days as our Kingdom readies itself for War. Your warhorses shall be looked after at our stable and your rooms prepared for you once you have broken your fast with us for the night. Please free to encourage your men to eat and drink as much as desired, Sir Knight. The Crown will pay for your meal and lodging for you and your horses, Sir. ";

	//Variable Declarations
	string name;
	string title;
	float pheasant;
	float stew;
	float bread;
	float fruit;
	int pheasant_am;
	int stew_am;
	int bread_am;
	int fruit_am;
	float subtotal;
	float tax;
	float total;

	//Variable Assignments
	pheasant = 15.10;
	stew = 3.49;
	bread = 5.17;
	fruit = 1.19;


	cout << " May I ask for your name and title seperated by spaces for my records, Sir Knight?";
	cin >> name;
	cin >> title;

	cout << "How many plates of Roast Pheasant will your party require us to prepare, Sir " << name << " the " << title << "?";
	cin >> pheasant_am;

	cout << "How many bowls of Beef Stew will your party require us to prepare, Sir " << name << " the " << title << "?";
	cin >> stew_am;

	cout << "How many loafs of fine bread will your party require us to prepare, Sir " << name << " the " << title << "?";
	cin >> bread_am;

	cout << "How many pieces of fresh fruit will your party require us to prepare, Sir " << name << " the " << title << "?";
	cin >> fruit_am;

	//Computatations
	subtotal = pheasant * pheasant_am + stew * stew_am + bread * bread_am + fruit * fruit_am;
	tax = subtotal * 0.05;
	total = subtotal + tax;

	//Results
	cout << "The final tally for the meal tonight is: " << total << " silver pieces.";

}