#include"Sandbox.h"
void Coder:: setUsername(string u)
{
	username = u;
}
void Coder:: setProblemSkillLevel(double p)
{
	skillLevel = p;
}
void Coder:: initChallenges()
{
	challengesSolved = 0;
}
void Coder:: solveChallenge()
{
	challengesSolved += 1;
}
string Coder:: getUsername()
{
	return username;
}
double Coder::getSkillLevel()
{
	return skillLevel;
}
int Coder::getChallengesSolved()
{
	return challengesSolved;
}

