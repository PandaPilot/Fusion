# Find all C++ sources (rename your .c files that contain C++ code to .cpp!)
file(GLOB_RECURSE files "*.cpp")

add_library(Fusion ${files})

# Request at least C++17 for this target
target_compile_features(Fusion PUBLIC cxx_std_17)

target_include_directories(Fusion
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include>
)

if(UNIX AND NOT APPLE)
    target_link_libraries(Fusion m) # link libm for Linux
endif()
