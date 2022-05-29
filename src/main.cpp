#include <exception>
#include <iostream>

#include "app.hpp"

int main(int argc, char *argv[]) {
  App app("Vulkan Template", 800, 600);

  try {
    app.run();
  } catch (std::exception e) {
    std::cerr << "Caught exception: " << e.what() << std::endl;
    return 1;
  }
  return 0;
}