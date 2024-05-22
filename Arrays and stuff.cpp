// Arrays and stuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Arrays and stuff.h"


//int PassbyReference(int boi[]) //parameteres is an array 
//{
//    int total = 0;
//    for (int i = 0; i < 5; i++) 
//    {
//        total += boi[i];
//        boi[i] /= 2;
//
//    }
//    return total;
//}
//
//int main()
//{
//    const int i = 3;
//    int data[5] = { 0 };
//
//    data[1] = 56;
//    data[0] = data[1];
//
//
//    data[data[1] / 14] = 99;  //56/14 = 4, data[4] accessed =  99
//    data[i] = data[0] + data[1];
//
//    for (int r = 0; r < 5; r++) {
//        std::cout << data[r] << std::endl;
//    }
//
//
//    std::cout << PassbyReference(data) << std::endl;
//    std::cout << data[4] << std::endl;
//
//
//}

//funciton time 

//void Input(int  storage[10])
//{
//	for (int i = 0; i < 10; i++) {
//		std::cout << "input numbers go go go #" << (i + 1) << " ";
//		std::cin >> storage[i];
//	}
//}
//
//void PrintOrder(int  storage[10])
//{
//	std::cout << "In order ";
//	for (int i = 0; i < 10; i++) {
//		std::cout << storage[i] << " ";
//	}
//
//	std::cout << std::endl;
//}
//
//
//void PrintReverse(int  storage[10])
//{
//	std::cout << "Reverse: ";
//	for (int i = 9; i >= 0; i--) {
//		std::cout << storage[i] << " ";
//	}
//
//	std::cout << std::endl;
//}
//
//void PrintOdd(int number[]) {
//
//	int count = 0;
//	bool odd[i];
//
//
//	//initalize parallel array to all false
//	for (int i = 0; i < 10; i++) {
//		odd[i] = false;
//	}
//	//print number of odd
//	for (int i = 0; i < 10; i++) {
//		if (number[i]%2 != 0) {
//			count++;
//			odd[i] = true;
//		}
//	}
//	//print count 
//	std::cout << count << " ( ";
//	//print out all odd
//	for (int i = 0; i < 10; i++) {
//		if (odd[i])
//			std::cout << number[i] << std::endl;
//	}
//}
//
//
//
//
//
//int main () {
//
//	//Define variable
//	int storage[10] = { 0 };
//
//	Input(storage);
//
//	PrintOrder(storage); ///wow
//
//	PrintReverse(storage);
//
//
//
//	//////even 
//	//std::cout << "even ";
//	//for (int i = 0; i < 10; i++) {
//	//	int test = storage[i];
//	//	if (test%2 == 0) 
//	//	{
//	//		std::cout << storage[i] << " ";
//	//	}
//	//}
//	//std::cout << std::endl;
//	////odd
//	//std::cout << "odd ";
//	//for (int i = 0; i < 10; i++) {
//	//	int test = storage[i];
//	//	if (test % 2 != 0)
//	//	{
//	//		std::cout << storage[i] << " ";
//	//	}
//	//}
//
//
//
//	
//	return 0;
//}








//int main() {
//
//	//variables
//	int response;
//	int number[5] = { 0,0,0,0,0 };
//	int count = 0; //count number of unqiue variables
//	int duplicate = false;
//
//	do {
//		//input integer
//		std::cout << "Enter num pls: ";
//		std::cin >> response;
//
//		if (response != 0)
//		{
//			duplicate = false;
//			//check for duplicate
//			for (int i = 0; i < 5; i++) 
//			{
//				if (number[i] == response) {
//					duplicate = true;
//				}
//			}
//			if (duplicate) 
//			{
//				if (count < 5) {
//					number[count] = response;//count used as index
//					count++;
//				}
//			}
//		}
//
//		//chekc if still have space for unique numbers
//	} while (response != 0);
//
//	//display 5 unique numbers
//	for (int i = 0; i < count; i++) {
//		std::cout << number[i] << " ";
//	}
//	std::cout << std::endl;
//}

////Go understand
//void countLetters(std::string input, int counts[]) {
//	for (int i = 0; i < 26; i++) //reset all count to 0
//	{
//		counts[i] = 0;
//	}
//	for (char letter : input) //loop through each letter in string
//	{
//		char check = tolower(letter);
//		int index = check - 'a'; //char - char = number 
//		counts[index]++;  //goes to that index, adds value
//	
//	}
//}
//
//
//int main() {
//	int repeat[26];
//	std::string sentence;
//	std::cout << "Enter sentance no space: ";
//	std::cin >> sentence;
//
//	if (sentence.length() > 20) {
//		std::cout << "Limit";
//	}
//	else {
//		countLetters(sentence, repeat);
//		for (int i = 0; i < 26; i++) {
//			if (repeat[i] != 0)  // skips those that occurance is zero
//			{
//				std::cout << static_cast<char>('a' + i) << " = " << repeat[i] << std::endl;
//			}
//		}
//
//
//	}
//
//
//	return 0;
//}

