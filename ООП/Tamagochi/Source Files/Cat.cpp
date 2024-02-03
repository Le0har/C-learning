#include "Cat.h"
#include "Tamagochi.h"

   void Cat::voice() 
   {
      std::cout << "����� " << name << " ������ ���� " << sound << std::endl;
   }

   void Cat::play() 
   {
      if (favoriteToys.empty() == true)
      {
         std::cout << "� ����� " << name << " ���� ���� �������!" << std::endl;
         return;
      }
      Toy randomToy = favoriteToys[rand() % favoriteToys.size()];
      std::cout << "����� " << name << " ������ � " << randomToy.shape << " ����� "
         << randomToy.color << std::endl;
   }

   Cat::Cat(): Tamagochi("��� �����", 0, "��� ������", "���!")
   {
      countCat++;
   }

   Cat::Cat(std::string name, int age, std::string breed): Tamagochi(name, age, breed, "���!")
   {
      countCat++;
   }

   Cat::Cat(const Cat& c): Tamagochi(c.name, c.age, c.breed, "���!")
   {
      for(int i=0; i<favoriteToys.size(); i++)
      {
         favoriteToys[i] = c.favoriteToys[i];
      }
      countCat++;
   }

   Cat& Cat::operator=(const Cat& c)
   {
      if(this == &c)
      {
         return *this;
      }
      name = c.name;
      age = c.age;
      breed = c.breed;

      for(int i=0; i<favoriteToys.size(); i++)
      {
         favoriteToys[i] = c.favoriteToys[i];
      }
      return *this;
   }

   Cat::~Cat()
   {
      countCat--;
   }
