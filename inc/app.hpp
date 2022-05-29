#include <string>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class App {
public:
  App(const std::string &title, int width, int height);
  ~App();

  void run() noexcept(false);

private:
  GLFWwindow *window;
  VkInstance instance;

  void createVulkanInstance(const std::string &title);
};