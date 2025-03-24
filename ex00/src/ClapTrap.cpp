#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string& name)
  :mName(name)
  ,mHitPoints(10)
  ,mEnergyPoints(0)
  ,mAttackDamage(0)
{
  std::cout << "Hi this is the construcor\n";
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap)
  :mName(clapTrap.mName)
  ,mHitPoints(clapTrap.mHitPoints)
  ,mEnergyPoints(clapTrap.mEnergyPoints)
  ,mAttackDamage(clapTrap.mAttackDamage)
{
  std::cout << "Hi this is the copy constructor\n";
}

ClapTrap&  ClapTrap::operator=(const ClapTrap& clapTrap)
{
  mName = clapTrap.mName;
  mHitPoints = clapTrap.mHitPoints;
  mEnergyPoints = clapTrap.mEnergyPoints;
  mAttackDamage = clapTrap.mAttackDamage;
  return (*this);
}

ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap destroyed\n";
}

void  ClapTrap::attack(const std::string& target)
{
  if (mEnergyPoints > 0)
    std::cout << "ClapTrap " << mName << " attacks " <<
      target << " causing " << mAttackDamage << " points of damage !" << '\n';
  else
    std::cout << mName << " has not enought point to engage an attack\n";
}

void  ClapTrap::takeDamage(unsigned int amount)
{
  std::cout << "ClapTrap " << mName << " has taken " <<
    amount << " points of damage!" << '\n';
}

void  ClapTrap::beRepaired(unsigned int amount)
{
  if (mEnergyPoints > 0)
    std::cout << "ClapTrap " << mName << " is being repaired by " <<
      amount << " points !" << '\n';
  else
    std::cout << mName << " has not enough point to repair himself\n";
}
