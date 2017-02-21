#include<iostream>
#include<time.h>
using namespace std;


enum class EnemyType { ZOMBIE, VAMPIRE, GHOST, WITCH,MAX };

struct Enemy {

	EnemyType type;
	string name;
	int health;

	string getEnemyTypeString()
	{
		switch (type) {
		case EnemyType::ZOMBIE: return "zombie";
		case EnemyType::VAMPIRE: return "vampire";
		case EnemyType::GHOST: return "ghost";
		case EnemyType::WITCH: return "witch";
		default: return"";




		}



	}
				
};


bool operator== (const Enemy &a, const Enemy &b) {

	return a.name == b.name && a.type == b.type;

}

static Enemy CreateRandomEnemy() {
	static const int MAX_LIFE{ 500 };
	static const string NAMES[]{ "Gertrudiz","Pancracia","Anacleto","Hipo","Eusa","Fush" };
	return Enemy{
		static_cast<EnemyType>(rand()%static_cast<int>(EnemyType ::MAX)),NAMES[rand()%(sizeof NAMES/sizeof string)],rand()% MAX_LIFE

	};


}

int main() {
	srand(static_cast<unsigned>(time(nullptr)));
	const int MAX_ENEMIES{ 5 };
	Enemy enemies[MAX_ENEMIES];
	
	int i{ 0 };
	while (i < MAX_ENEMIES)
	{
		enemies [i]



	}



}