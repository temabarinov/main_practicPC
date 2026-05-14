cmake_minimum_required (VERSION 3.16)
project (Myproject LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.


add_library(common INTERFACE)
target_include_directories(common INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)



# Добавьте источник в исполняемый файл этого проекта.




add_executable(tabs src/tabs.cpp)
target_link_libraries(tabs PRIVATE common)

add_executable(qucksort src/algorithms/qucksort.cpp)
target_link_libraries(qucksort PRIVATE common)

add_executable(countsort src/algorithms/countsort.cpp)
target_link_libraries(countsort PRIVATE common)