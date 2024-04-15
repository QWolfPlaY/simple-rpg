//
// Created by WolfPlay on 4/15/2024.
//

#include "Chestplate.h"

Chestplate::Chestplate(std::string name,
                       std::string description,
                       float price,
                       type type,
                       rarity rarity,
                       float baseDefence,
                       float baseResistance)
        : Armor(name, description, price, type, rarity, baseDefence, baseResistance)
{
}

Chestplate::~Chestplate() = default;

float Chestplate::calculateMeleeDamageReduction(float damage) const
{
    return (damage - (damage * (getBaseDefence() / 100.0))) * 0.4;
}

float Chestplate::calculateMagicDamageReduction(float damage) const
{
    return (damage - (damage * (getBaseResistance() / 100.0))) * 0.3;
}