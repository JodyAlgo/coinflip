// mersenne_twister_engine::operator()
#include <iostream>
#include <chrono>
#include <random>
#include <string>
using std::string;
int max = 2;
int min = 0;
int givenVALUE;
int headsCount = 0;
int tailsCount = 0;
int main ()
{
	std::cout << "How many coin flips would you like there to be? \n" << std::endl;
	std::cin >> givenVALUE;
	//std::cout << givenVALUE << std::endl;
  // obtain a seed from the system clock:
	int i;
	//Begin loop to count the flips
	for(i=0;i<givenVALUE;i++){
		//std::cout << i << std::endl;
		 unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
		 std::mt19937 generator (seed);  // mt19937 is a standard mersenne_twister_engine
		 if (generator() % max == 0){ 
		 	headsCount+=1;
		 }
		 else if(generator() % max==1){
		 	tailsCount+=1;
		 }
	}
	std::cout << "The number of flips that were heads:" << headsCount<<"\n" << std::endl;
	std::cout<< "The number of flips that were tails:"<< tailsCount<<"\n" << std::endl;
  // unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

  // std::mt19937 generator (seed);  // mt19937 is a standard mersenne_twister_engine
  //create loop for heads tails input

  // std::cout << "Random value: " << generator() % max<< std::endl;

  return 0;
}