//
// Created by WolfPlay on 4/10/2024.
//

#include "Item.h"

Item::Item(std::string name, std::string description, float price, Item::ItemType type, Rarity rarity) :
    _name(std::move(name)),
    _description(std::move(description)),
    _price(price),
    _type(type),
    _rarity(rarity)
{};

std::string Item::getName() const {
    return _name;
}

std::string Item::getDescription() const {
    return _description;
}

float Item::getPrice() const {
    return _price;
}

Item::Rarity Item::getRarity() const {
    return _rarity;
}

Item::ItemType Item::getType() const {
    return _type;
}

void Item::setPrice(float price) {
    _price = price;
}