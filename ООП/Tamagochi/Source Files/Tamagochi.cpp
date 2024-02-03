#include "Tamagochi.h"
#include "MyException.h"

void Tamagochi::addToy(int color, std::string shape)
{
   if (shape == name)
   {
      throw MyException("����� ������� ��������� � ������ ���������!");
   }
   
   switch (color)
   {
   case 1:     favoriteToys.push_back(Toy{ red, shape});
               break;
   case 2:     favoriteToys.push_back(Toy{ green, shape });
               break;
   case 3:     favoriteToys.push_back(Toy{ blue, shape });
               break;
   default:    std::cout << "������ ����� ����!" << std::endl;
   }
}

   void Tamagochi::setSound(std::string mysound)
   {
      sound = mysound;
   }

   Tamagochi::Tamagochi(std::string name = "��� �����", int age = 0, std::string breed = "��� ������",
      std::string sound = " "):name(name), age(age), breed(breed)
   {
      setSound(sound);
   }

   Tamagochi::~Tamagochi()
   {
   }
