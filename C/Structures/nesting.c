#include <stdio.h>
#include <string.h>
int main() {
	typedef struct pokemon{
		int attack;
		int hp;
		int speed;
		char tier;
		char name[20];
	} pokemon;
	typedef struct legendarypokemon{
		pokemon normal;
		char special[45];
	} legendarypokemon;
	legendarypokemon mewtwo;
	mewtwo.normal.attack=150;
	mewtwo.normal.hp=100;
	mewtwo.normal.tier='S';
	mewtwo.normal.speed=145;
	strcpy(mewtwo.normal.name,"Mewtwo");
	strcpy(mewtwo.special,"Ultra Beam");
	printf("%s\n%d\n%c\n%s\n\n",mewtwo.normal.name,mewtwo.normal.attack,mewtwo.normal.tier,mewtwo.special);

	typedef struct godpokemon{
		legendarypokemon legend;
		char hiddenability[50];
	} godpokemon;
	godpokemon arceus;
	arceus.legend.normal.attack=250;
	arceus.legend.normal.hp=245;
	arceus.legend.normal.speed=300;
	arceus.legend.normal.tier='G';
	strcpy(arceus.legend.normal.name,"Arceus");
	strcpy(arceus.legend.special,"Time Control");
	strcpy(arceus.hiddenability,"Inter-Dimension Movement");

	printf("%s\n%d\n%d\n%d\n%c\n%s\n%s",arceus.legend.normal.name,arceus.legend.normal.attack,arceus.legend.normal.hp,arceus.legend.normal.speed,arceus.legend.normal.tier,arceus.legend.special,arceus.hiddenability);
	return 0;
}