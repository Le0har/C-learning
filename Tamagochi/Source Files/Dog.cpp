#include "Dog.h"
#include "Tamagochi.h"

   void Dog::voice() 
   {
      std::cout << "������ " << name << " ������ ���� " << sound << std::endl;
   }

   void Dog::play() 
   {
      if (favoriteToys.empty() == true)
      {
         std::cout << "� ������ " << name << " ���� ���� �������!" << std::endl;
         return;
      }
      Toy randomToy = favoriteToys[rand() % favoriteToys.size()];
      std::cout << "������ " << name << " ����� �� " << randomToy.shape << " ����� "
         << randomToy.color << std::endl;
   }

   void Dog::chewBone()
   {
      std::cout << "������ " << name << " ����� �����" << std::endl;
   }

   Dog::Dog(): Tamagochi("��� �����", 0, "��� ������", "���!")
   {
      countDog++;
   }

   Dog::Dog(std::string name, int age, std::string breed): Tamagochi(name, age, breed, "���!")
   {
      countDog++;
   }

   Dog::Dog(const Dog& d): Tamagochi(d.name, d.age, d.breed, "���!")
   {
      for(int i=0; i<favoriteToys.size(); i++)
      {
         favoriteToys[i] = d.favoriteToys[i];
      }
      countDog++;
   }

   Dog& Dog::operator=(const Dog& d)
   {
      if(this == &d)
      {
         return *this;
      }
      name = d.name;
      age = d.age;
      breed = d.breed;

      for(int i=0; favoriteToys.size(); i++)
      {
         favoriteToys[i] = d.favoriteToys[i];
      }
      return *this;
   }

   Dog::~Dog()
   {
      countDog--;
   }
