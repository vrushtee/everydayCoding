#pragma once

class textBased
{
public:
	char plyrName;
	int rounds;
	int rnd;
	int plyrScore = 0;
	int compScore = 0;
	int plyrChoice;
	int compChoice;
	int levelChoice;
	void levelSelection();
	void levelOne();
	void levelTwo();
	void levelThree();


};

