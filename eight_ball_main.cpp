#include <iostream>
#include <string>
#include <chrono>


int main()
{

    int counter = 0;

while (counter < 10)
{
counter++;

double number_1;

 using Clock = std::chrono::high_resolution_clock;

  std::cout << "I will tell your fortune 10 times at most. To have your fortune told think about your question and enter your lucky number: \n";
  auto start = Clock::now();
  std::cin >> number_1;

  auto end = Clock::now();
  auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();


int magic_number = ms * 3.14; 
int magic_modulo = magic_number % 10;

switch (magic_modulo)
{
case 0:
    std::cout << "You are not going to like how this ends. \n";
    break;

case 1:
    std::cout << "Sounds legit to me. \n";

case 2:
    std::cout << "Yaas bitch. \n";
    break;

case 3:
    std::cout << "Please no. \n";
    break;

case 4:
    std::cout << "Fuck that one. \n";
    break;

case 5:
    std::cout << "Why are you even asking \n";
    break;

case 6:
    std::cout << "As good as married. \n";
    break;

case 7:
    std::cout << "You might be gay. \n";
    break;

case 8:
    std::cout << "Sounds straight to me. \n";
    break;

case 9:
    std::cout << "Forgive yourself. \n";
    break;

default:
    std::cout << "You are only human. \n";
    break;
}
}

}