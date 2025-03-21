#ifndef Sandbox_h
#define Sandbox_h
#include<string>
using namespace std;
class Coder
{
private:
	string username;
	double skillLevel;
	int challengesSolved;

public:
	void setUsername(string);
	void setProblemSkillLevel(double);
	void initChallenges();
	void solveChallenge();
	string getUsername();
	double getSkillLevel();
	int getChallengesSolved();
};
#endif
