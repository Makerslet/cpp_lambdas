set(TARGET cpp11)

add_executable(${TARGET} main.cpp)
set_property(TARGET ${TARGET} PROPERTY CXX_STANDARD 11)
