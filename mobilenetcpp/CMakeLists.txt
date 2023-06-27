
set(LIB_NAME mobilenet)
add_library(${LIB_NAME})

target_sources(${LIB_NAME}
        PRIVATE
        src/mobilenet.cpp
        )
target_compile_options(${LIB_NAME} PRIVATE -Wall -Wextra -Wpedantic -Werror)
target_include_directories(${LIB_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
