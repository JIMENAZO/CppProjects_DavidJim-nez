#include<iostream>
#include<time.h>
using namespace std;


enum class EnemyType { zombie, vampire, ghost, witch };

struct Enemy {

	EnemyType type;
	string name;
	int health;
				
};

void CreateRandomEnemy(string names[],Enemy enemies[]) {



	
}

bool operator== (Enemy a, Enemy b) {
	if (a == b)
	
		return true;

	else
		return false;

}

int main() {
	srand(time(NULL));
	string names[10] = {"David","Marta","Dani","Alex","Maria","Ramon","Alessandro","Sara","Angel","Oscar"};
	Enemy enemies[5];
	CreateRandomEnemy(names,enemies);




}