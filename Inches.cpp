#include <iostream>

int main()
{
    double length_inch, length_meters, milimeters, meters, sentimeters;
  std::cout<<"Task2"<<std::endl;
  std::cout<<"How many inches?"<<std::endl;
  std::cin >> length_inch;
    length_meters = 25.4 * length_inch; //перевожу в метры

    meters = int(length_meters / 1000); //нахожу количество целых метров
    sentimeters = int((length_meters - meters * 1000) / 10); //нахожу количество целых сантиметров

    milimeters = (length_meters - meters * 1000 - sentimeters * 10); //нахожу количество нецелых миллиметров, с точностью до десятых
    std::cout<<length_inch<< " inches are ";
   std::cout << meters<<" meters " <<sentimeters<< " sentimeters "<< milimeters<< " milimeters ";


}
