#include <iostream>

int main() {
  // Earth weight varibale for Little Mac
  float earth_weight;
  // Planet Little Mac chooses to fight on
  int assigned_planet;

  // Storing Little Mac's earth weight
  std::cout << "What is your earth weight?\n";
  std::cin >> earth_weight;

  // Enter number of planet you would like to fight on
  std::cout << "Enter a number to determine which planet you'll fight on: ";
  std::cin >> assigned_planet;

  // Return the Assigned Planet and computed weight
  switch(assigned_planet) {
    case 1:
     std::cout << "Planet: Mercury\n" << "Relative Gravity: 0.38\n" << "Earth Weight\n" << earth_weight * 0.38;
     break;
    case 2:
     std::cout << "Planet: Venus\n" << "Relative Gravity: 0.91\n"<< "Earth Weight:\n" << earth_weight * 0.91;
     break;
    case 3:
     std::cout << "Planet: Mars\n " << "Relative Gravity: 0.38\n" << "Earth Weight:\n" << earth_weight * 0.38;
     break;
    case 4:
     std::cout << "Planet: Jupiter\n" << "Relative Gravity: 2.34\n" << "Earth Weight:\n" << earth_weight * 2.34;
     break;
    case 5:
     std::cout << "Planet: Mercury\n" << "Relative Gravity: 1.06\n " << "Earth Weight:\n" << earth_weight * 1.06;
     break;
    case 6:
     std::cout << "Planet: Uranus\n" << "Relative Gravity: 0.92\n " << "Earth Weight:\n" << earth_weight * 0.92;
     break;
    case 7:
     std::cout << "Planet: Neptune\n" << "Relative Gravity: 0.38\n" << "Earth Weight:\n" << earth_weight * 1.19;
     break;


  }
