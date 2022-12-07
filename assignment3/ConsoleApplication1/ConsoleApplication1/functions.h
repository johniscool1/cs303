#pragma once
#include <queue>
#include<string>
using namespace std;

void move_to_rear(queue<string> &queueA) {
	//adds the front value to the back of the queue
	queueA.push(queueA.front());
	//then pops the original front value
	queueA.pop();
	
}


void printq(queue<string> queueb)
{
	//create a new temporary queue 
	queue<string> queuec = queueb;
	//go thru the temporary queue, print the front vlaue, then pop it and keeps going thru them
	while (queuec.size() != 0) {
		cout << queuec.front() << " ";
		queuec.pop();
	}
	cout << "\n";
}


//takes in the word and the the first and last index of the word
bool palindrom(string word, int front, int back) {
	//this is one of the ending conditions. If the word is odd in length, it will check up to the 2 inner letters of the word
	if ((word.size()) % 2 == 0 && back  == (front-1)) {
		if (word[front] == word[back]) {
			return true;
		}
		else {
			return false;
		}
	}
	//second ending condition, if the rod is even in lenght it will stop checking when it gets to the middle
	if ((word.size()) % 2 == 1 && back == front) {
		if (word[front] == word[back]) {
			return true;
		}
		else {
			return false;
		}

	}
	//if the letters are equal, keep interatiung, if it isn't it isnt a palindrom
	if (word[front] == word[back]) {
		front += 1;
		back -= 1;
		
		return palindrom(word, front, back);
	}
	else {
		return false;
	}
}

