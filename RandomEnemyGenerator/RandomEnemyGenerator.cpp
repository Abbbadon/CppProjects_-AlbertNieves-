#include <iostream>
#include <math.h>
using namespace std;

enum EnemyType 
{ 
	zombie, 
	vampire, 
	ghost, 
	werewolf,
	max
};

struct Enemy 
{ 
	EnemyType type;
	std::string name;
	int health; 

	std::string getEnemyTypeString()
	{
		switch (type){
		case EnemyType::zombie:		return "zombie";
		case EnemyType::vampire:	return "vampire";
		case EnemyType::ghost:		return "ghost";
		case EnemyType::werewolf:	return "werewolf";
		default: return"";
		}
	}
};

bool operator == (Enemy &A, Enemy &B) 
{
	return A.name == B.name && A.type == B.type;
}

static Enemy CreateRandomEnemy()
{
	static const int MAX_LIFE{ 500 };
	static const std::string Names[]{
		"Uno",
		"Dos",
		"Tres",
		"Cuatro",
		"Cinco",
		"Seis",
	};

	return Enemy{
		static_cast<EnemyType>(rand() % static_cast<int>(EnemyType::max)),
		Names[rand() % (sizeof Names / sizeof std::string)],
		rand() % MAX_LIFE
	};
}

