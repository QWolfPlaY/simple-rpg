//
// Created by WolfPlay on 4/10/2024.
//

#ifndef POLYMORPHISM_SWORD_H
#define POLYMORPHISM_SWORD_H

#include "Enemy.class/Enemy.h"
#include "Item.class/Item.h"
#include "Weapon.abstract/Weapon.h"

class Sword : public Weapon {
public:
    Sword(
            std::string name,
            std::string description,
            float price,
            Rarity rarity,
            float damage,
            float armorPenetration,
            float attackSpeed
        );
    
    ~Sword();
};


#endif //POLYMORPHISM_SWORD_H
