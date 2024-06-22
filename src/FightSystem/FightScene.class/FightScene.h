//
// Created by WolfPlay on 4/29/2024.
//

#ifndef RPG_FIGHTSCENE_H
#define RPG_FIGHTSCENE_H

#include <vector>

#include "Player.class/Player.h"
#include "Enemy.class/Enemy.h"


// To future me:
// good luck with debugging this code UwU
// your sanity will probably be at the worst state possible with the way im implementing ticks, actions and events 💀

class FightScene
{
public:
    typedef struct {
        unsigned short size;
        Enemy* enemies;
    } EnemiesCollection;

private:
    Player *_player;

    unsigned short _enemyCount;
    Enemy* _enemies;

    EnemiesCollection enemiesCollection;

public:
    FightScene(Player *player, EnemiesCollection enemiesCollection);

    ~FightScene() = default;

    Player* getPlayerPtr();
};


#endif //RPG_FIGHTSCENE_H