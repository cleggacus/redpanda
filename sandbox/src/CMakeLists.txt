include_directories(${RedPandaWorkspace_SOURCE_DIR}/redpanda/vendor/spdlog/include)

add_executable(sandbox main.cpp)

target_link_libraries(sandbox PRIVATE RP)