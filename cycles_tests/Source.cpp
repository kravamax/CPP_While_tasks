#include<iostream>
using namespace std;

int main() {

	//Task1. Calculator with using do-while
	/*int act, A, B, res;

	do
	{
		cout << "The menu:\n";
		cout << "1 for use +"<<endl;
		cout << "2 for use -"<< endl;
		cout << "3 for use *"<< endl;
		cout << "4 for use /" << endl;
		cout << "0 for exit.\n" << endl;

		cout<<"Enter the action: ";
		cin >> act;
		
		switch (act)
		{
		case 1:
			cout << "Enter the first and second number: ";
			cin >> A >> B;
			res = A + B;
			cout << res<<endl;
			break;
		case 2:
			cout << "Enter the first and second number: ";
			cin >> A >> B;
			res = A - B;
			cout << res << endl;
			break;
		case 3:
			cout << "Enter the first and second number: ";
			cin >> A >> B;
			res = A * B;
			cout << res << endl;
			break;
		case 4:
			cout << "Enter the first and second number: ";
			cin >> A >> B;
			res = A / B;
			cout << res << endl;
			break;
		case 0:
			cout << "It's exit!!!"<<endl;
			break;
		default:
			cout<<"You enter wrong number!"<<endl;
			break;
		}
		

	} while (act != 0);

	cout << "Good bue!";*/

	//=====================================================================================================
	//Task2. Programm calculate the sum of numbers
	/*int begin, end, sum;

	cout << "Enter the first number: \n";
	cin >> begin;
	cout << "Enter the last number: \n";
	cin >> end;
	
	sum = 0;

	while (begin <= end) {
		sum += begin;
		begin++;
	}

	cout << "\nThe sum your diapasone is: " << sum;*/
	
	//=====================================================================================================
	//Task3. Programm displays the set number of stars
	/*int amount, i;

	i = 0;

	cout << "Enter the set number of stars: \n";
	cin >> amount;
	cout << endl;

	while (i < amount) {
		cout << '*';
		i++;
	}

	cout << "\nYour stars is over.";*/

	//=====================================================================================================
	//Task4. Program output line of symbols. 
	//The user selects the number of symbols, type of symbols and the vertical or horizontal line.

	/*int count, i, type_line;
	char symbol;

	i = 0;

	do
	{	
		cout << "Enter the symbol: " << endl;
		cin >>symbol;
			
		cout << "\nEnter 1 for vertical line.\n";
		cout << "Enter 0 for horizontal line.\n\n";
		cin >> type_line;
		
		cout << "Enter the number of symbols(0 for exit): \n";
		cin >> count;
		
		while (i<count)
		{
			i++;
			if (type_line == 1){cout <<symbol<<"\n";}
			else if(type_line == 0){cout << symbol;}
			else { cout << "The wrong choice!"; }
		}
		cout << "\n\n";
		i = 0;
	} while (count != 0);
	
	cout << "\nYou choose exit!\n";
	cout << "Ok. Bye!";*/
	
	//=====================================================================================================
	//Task5. The program counts the sum of all odd integers.
	/*int begin, i, end, sum;


	cout << "Enter the begin and last number: \n";
	cin >> begin >> end;

	sum = 0;
	i = begin;
	i--;

	while (i < end) {
		i++;
		if (i % 2 == 0) {
			continue;
		}
		sum += i;
	}
	
	cout << "Sum of numbers is " << sum;*/
	
	//=====================================================================================================
	//Task6. The program for determining the factorial of a non-negative integer.
	/*int factorial, begin, answer;
	
	begin = 0;
	answer = 1;

	cout << "Enter the factorial: ";
	cin >> factorial;

	while (factorial < 0) {
		cout << "You must enter the positive integer!\n";
		cin >> factorial;
	}

	do{
		begin++;
		answer *= begin;
	}
	while (begin < factorial);

	cout << "\nFactorial of " << factorial << "! is " << answer;*/

	//=====================================================================================================
	//Task7. We have the length of the canvas L. We have to make pillows of length P. 
	//The width of the pillows and the length of the canvas are equal. 
	//Determine how many pillows we can make, multiplication and division not to use.

	/*float canvas, pillow;
	int count;

	count = 0;

	cout << "Enter the length of the canvas and pillow: \n";
	cin >> canvas >> pillow;

	while (canvas - pillow >= 0)
	{
		canvas -= pillow;
		count++;
	}

	cout << "You can made " << count << " pillows";*/

	//=====================================================================================================
	//Task8. There are several boxes in warehouse. We have to clean the warehouse. 
	//Cars take turns approaching the warehouse and pick up the boxes. Determine how much drove up to the warehouse.
	/*int count, boxes, car_with_box, i;

	count = 0;

	cout << "Enter the number of boxes: ";
	cin >> boxes;
	i = boxes;
	if (boxes > 0) {
		while (i >= 0)
		{
			cout << "Enter the number of boxes that the car picked up: ";
			cin >> car_with_box;
			i -= car_with_box;
			count++;
		}
		if (i <= 0) { cout << "\nThe boxes is over.\n"; }

		cout << "\nAt the warehouse was: " << boxes<< " boxes.\n";
		cout << "Were used: " << count<< " cars.\n";
	}
	else {
		cout << "\nThere are no boxes at the warehous.";
	}*/

	//=====================================================================================================
	//Task9. The user enter the number. Program display the mirror of this number.

		/*int number, digits;

		cout << "enter a number: ";
		cin >> number;

		for (int i = number; i > 0; i /= 10){
			digits = i % 10;
			cout << digits;
		}*/

	//=====================================================================================================
	//Task 10. Program display the sum of these numbers. 

	//int  num, sum = 0, digits = 0;
	//
	//cout << "Enter the number: ";	
	//cin >> num;
	//
	//num *= 10;

	//for (int i = num; i > 0; i /= 10)
	//{
	//	digits = i % 10;			//write one number in a variable
	//	sum += digits;
	//}

	//cout << endl<< sum;

	//=====================================================================================================
	//Task 11. On the first day, the snail crawled 15 cm. 
	//Every next day it crawled 2 cm further.
	//Determine what total distance the snail crawls in N days.

	/*int days, road_distance = 15, sum = 0;

	cout << "Enter the number of the days: ";
	cin >> days;

	for (int i = 0; i < days; i++)
	{
		sum += road_distance + i * 2;
	}

	cout << endl << "Snail crawled " << sum << "cm";*/

	//=====================================================================================================
	//Task 12. the student tossed a coin 9 times.
	//If as a result the number of coins dropped out by the “eagle” side (1) was an even number
	//he made a decision in the positive direction, otherwise (0) in the negative.
	
	/*int coin=0, sum=0;

	for (int i = 1; i <= 9; i++)
	{
		cout << "Toss a coin: ";
		cin >> coin;
		sum += coin;
	}
	if (sum % 2 == 0) cout << "Yes!";
	else cout << "No";*/

	//=====================================================================================================
	//Task 13. Calendar

	int month, first_day, value_month, count=0, weekends=0;

	cout << "Enter the number of the month: ";
	cin >> month;

	cout << "Enter the number of the first day ";
	cin >> first_day;

	switch (month)
	{
	case 1: cout << "\n\n\t\t\tJanuary"; value_month = 31; break;
	case 2: cout << "\n\n\t\t\tFebruary"; value_month = 28; break;
	case 3: cout << "\n\n\t\t\tMarch"; value_month = 31; break;
	case 4: cout << "\n\n\t\t\tApril"; value_month = 30; break;
	case 5: cout << "\n\n\t\t\tMay"; value_month = 31; break;
	case 6: cout << "\n\n\t\t\tJune"; value_month = 30; break;
	case 7: cout << "\n\n\t\t\tJuly"; value_month = 31; break;
	case 8: cout << "\n\n\t\t\tAugust"; value_month = 31; break;
	case 9: cout << "\n\n\t\t\tSeptember"; value_month = 30; break;
	case 10: cout << "\n\n\t\t\tOctober"; value_month = 31; break;
	case 11: cout << "\n\n\t\t\tNovember"; value_month = 30; break;
	case 12: cout << "\n\n\t\t\tDecember"; value_month = 31; break;

	default: cout<<"Uknown month";	break;
	}

	cout << "\n\n\tMo\tTu\tWe\tTh\tFr\tSa\tSu\t\n";

	for (int i = 1; i <= first_day-1; i++)
	{
		cout << "\t_";
		count++;
	}
	cout << "\b";
	for (int i = 1; i <= value_month; i++)
	{
		if ((count+i-1)% 7 == 0)
		{
			cout << "\n";
		}
		cout << "\t" << i;
		weekends += ((count + i - 1) % 7 == 0) + ((count + i + 1) % 7 == 0);
	}

	cout << "\n\nWeekends: " << weekends;



	cout << "\n\n";
	system("pause");

}