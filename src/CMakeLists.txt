# CMakeLists.txt

# Create the libraries
add_library(Animal Animal.cpp)
add_library(AnimalSkin AnimalSkin.cpp)

# Create the executable
add_executable(testAnimals main.cpp)
target_link_libraries(testAnimals LINK_PUBLIC Animal)
target_link_libraries(testAnimals LINK_PUBLIC AnimalSkin)
