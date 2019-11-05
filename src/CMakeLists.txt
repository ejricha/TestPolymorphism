# CMakeLists.txt

# Create the library
add_library(Animal Animal.cpp)

# Create the executable
add_executable(testAnimals main.cpp)
target_link_libraries(testAnimals LINK_PUBLIC Animal)
