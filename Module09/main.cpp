#include "BitcoinExchange.hpp"

int main(int ac, char **av){
    if (ac != 2){
        std::cout << "Usage: " << av[0] << " <input.txt>" << std::endl;
        return 1;
    }
  try {
    BitcoinExchange btc;
    btc.open_read_db("data.csv");
    btc.open_read_input(av[1]);

  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }
    return 0;
}

