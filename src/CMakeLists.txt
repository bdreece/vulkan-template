find_package(Vulkan REQUIRED)
find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)

add_executable(main main.cpp app.cpp)
target_include_directories(main PUBLIC ../inc)
target_link_libraries(main ${Vulkan_LIBRARY} glfw glm)