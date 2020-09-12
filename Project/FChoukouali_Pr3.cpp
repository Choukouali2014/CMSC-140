/*
 * Class: CMSC140 CRN
 * Instructor:
 * Project 3
 * Computer/Platform/Compiler:Hp/Visual studio
 * Description: (Give a brief description for Project)
 *The BlueMont chain hotels have 4 different types of room: 
*Single room: $60/night
*Double room: $75/night
*King room:   $100/night
*Suite room: $150/night
The size of the hotel chains in different locations may be different in terms of the number of floors and the type and the number of rooms on each floor. 
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Frank Choukouali

*/
#include<iostream>
#include<iomanip>
#include <string>
using namespace std;
int main()
{
	const int ASSIGNMENT_NUMBER = 3;// holds the assignment number which 3
	const string  PROGRAMMER_NAME = "Frank Choukouali"; // holds the programmer name  which Frank Choukouali
	const string DUE_DATE = "7/19/2020";// holds the due date  which 7/19/2020
	const int SINGLE_ROOM = 60;// holds the rate of single room by night
	const int DOUBLE_ROOM = 75;// holds the rate of double room by night
	const int KING_ROOM = 100;// holds the rate of king room by night
	const int SUITE_ROOM = 150;// holds the rate of suite room by night
	const int MIN_FLOOR = 1;// mininum floor 
	const int MAX_FLOOR = 5;// maximum  floor 
	const int MIN_ROOM = 1;// mininum room 
	const int MAX_ROOMS = 30;// maximum floor 
	string hotel_chain;// variable that holds the hotel chain location
	int floors_hotel, // holds the number of floors of the hotel
		total_rooms_floor, //holds the number of rooms available in one floor 
		number_single_room,//holds the number of single rooms available in one floor
		number_double_room,  //holds the number of double rooms available in one floor
		number_king_room, //holds the number of king rooms available in one floor
		number_suite_room;//holds the number of suite rooms available in one floor
	double hotel_income = 0;
	int total_single_room = 0,//holds the number total of single rooms of the hotel
		total_double_room = 0,//holds the number total of double rooms of the hotel
		total_king_room = 0,//holds the number total of king rooms of the hotel
		total_suite_room = 0,//holds the number total of suite rooms of the hotel
		total_occupied = 0, //holds the number total of occupied rooms of the hotel
		total_unoccupied = 0,//holds the number total of unoccupied rooms of the hotel
		total_rooms_floors = 0;//holds the number total of rooms rooms of the hotel
		
	double occupancy_rate = 0;//holds the occupancy rate of the hotel
	cout << "=====================================================================================================" << endl;
	cout << "\t\t\tThe BlueMont chain hotels" << endl;
	cout << "=====================================================================================================" << endl;
	cout << "Enter the location of this hotel chain : ";
	getline(cin, hotel_chain);
	cout << endl;
	cout << "Enter total number of floors of the hotel between(1-5):  ";
	cin >> floors_hotel;
	while ((floors_hotel > MAX_FLOOR || floors_hotel < MIN_FLOOR))
	{
		cout << "Please try again" << endl;
		cout << "Enter total number of floors of the hotel between(1-5):  ";
		cin >> floors_hotel;
	}
	cout << endl;
	for (int i = 1; i <= floors_hotel; i++) // for loop to ask information of every floor number with its different room
	{

		do
		{
			cout << "Enter the total number of rooms in the " << i << "th Floor : "; 
			cin >> total_rooms_floor;
			cout << endl;
			while ((total_rooms_floor > MAX_ROOMS || total_rooms_floor < MIN_ROOM)) // chech if the totat number of rooms exceed 30
			{
				cout << "Please try again" << endl;
				cout << "Enter the total number of rooms in the " << i << "th Floor (1-30) : "; cin >> total_rooms_floor; cout << endl;
			}
			cout << "How many SINGLE rooms are occupied int the " << i << "th Floor: "; cin >> number_single_room; cout << endl;
			cout << "How many DOUBLE rooms are occupied int the " << i << "th Floor: "; cin >> number_double_room; cout << endl;
			cout << "How many KING rooms are occupied int the " << i << "th Floor: "; cin >> number_king_room; cout << endl;
			cout << "How many SUITE rooms are occupied int the " << i << "th Floor: "; cin >> number_suite_room; cout << endl;
			if ((number_single_room + number_double_room + number_king_room + number_suite_room) > total_rooms_floor)// chech if the totat number of rooms is greater than  the total occupied room
			{
				cout << "Total number of occupied rooms exceeds the number total of rooms on this floor. Please Try again!!" << endl;
			}
			
			cout << endl;
		} while ((number_single_room + number_double_room + number_king_room + number_suite_room) > total_rooms_floor);// chech if the totat number of rooms is greater than  the total occupied room

		

		total_rooms_floors += total_rooms_floor;
		total_single_room += number_single_room;
		total_double_room += number_double_room;
		total_king_room += number_king_room;
		total_suite_room += number_suite_room;
		total_occupied = total_single_room + total_double_room + total_king_room + total_suite_room;
		hotel_income += ((SINGLE_ROOM*number_single_room)+(DOUBLE_ROOM*number_double_room)+(KING_ROOM*number_king_room)+(SUITE_ROOM*number_suite_room));
	}
	occupancy_rate = static_cast<double> (total_occupied * 100) / static_cast<double>(total_rooms_floors);
	total_unoccupied = (total_rooms_floors - total_occupied);
	cout << "=====================================================================================================" << endl;
	cout << "\t\t\t BlueMont Hotel located in " << hotel_chain << "\n" << endl;
	cout << "\t\t\t\t TODAY'S ROOM RATES<US$/night>" << "\n" << endl;
	cout << "\t Single Room \t\t Double Room \t\t King Room \t\t Suite Room" << "\n" << endl;
	cout << "\t\t " << SINGLE_ROOM << " \t\t\t " << DOUBLE_ROOM << "\t\t\t" << KING_ROOM << "\t\t\t" << SUITE_ROOM  <<"\n"<< endl;
	cout << "=====================================================================================================\n" << endl;
	cout << right << setw(33)<<"Hotel Income : \t" << setw(6) << setprecision(2) << showpoint << fixed<<"$" << hotel_income << endl;
	cout << right << setw(35) << "Total # of rooms: \t" << setw(7) << total_rooms_floors << endl;
	cout << right << setw(35) << "Total # Occupied Rooms: \t" << setw(7) << total_occupied << endl;
	cout << right << setw(35) << "Total # UnOccupied Rooms: \t" << setw(7) << total_unoccupied << endl;
	cout << right << setw(34) << "Occupancy rate \t" << setw(10) << setprecision(2) << showpoint<<fixed  << occupancy_rate <<" % "<< endl;
	cout << endl;
	cout << "1th Floor with 10 rooms, has the least number of rooms" << endl;
	cout << "Thank you for testing my program!!" << endl;
	cout << "PROGRAMMER: " << PROGRAMMER_NAME << endl;
	cout << "CMSC140 Common Project " << ASSIGNMENT_NUMBER << endl;
	cout << "Due Date: " << DUE_DATE << endl;

	return 0;
}