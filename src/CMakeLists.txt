find_package(Vulkan REQUIRED)

add_executable(${PROJECT_NAME} application.cpp main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
# target_link_libraries(${PROJECT_NAME} Vulkan)