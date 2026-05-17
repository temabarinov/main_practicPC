cmake_minimum_required (VERSION 3.16)
project (Myproject LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.


add_library(common INTERFACE)

target_include_directories(common INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src/)



# Добавьте источник в исполняемый файл этого проекта.




add_executable(errfile src/errfile.cpp)
target_link_libraries(errfile PRIVATE common)

add_executable(smartarray src/raii/smartarray.cpp )
target_link_libraries(smartarray PRIVATE common)

add_executable(countsort src/algorithms/countsort.cpp )
target_link_libraries(countsort PRIVATE common)

add_executable(leetcodetest src/leetcodetest.cpp )
target_link_libraries(leetcodetest PRIVATE common)


add_executable(quicksort src/algorithms/qucksort.cpp )
target_link_libraries(quicksort PRIVATE common)
