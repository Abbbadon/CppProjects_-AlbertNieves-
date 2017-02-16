#include <iostream>
#include <math.h>
using namespace std;

enum EnemyType { zombie, vampire, ghost, witch };
struct Enemy { EnemyType type; string name; int health; };

bool operator == (Enemy A, Enemy B) 
{
	if (A.type == B.type && A.name == B.name) {
		
	}
}