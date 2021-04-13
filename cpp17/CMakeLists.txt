set(TARGET cpp17)

add_executable(${TARGET} main.cpp)
set_property(TARGET ${TARGET} PROPERTY CXX_STANDARD 17)
