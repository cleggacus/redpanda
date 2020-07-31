include_directories(${RedPanda_SOURCE_DIR}/vendor/spdlog/include)
include_directories(${RedPanda_SOURCE_DIR}/include/redpanda)

add_library(
  RP SHARED
  application.cpp
  log.cpp
)

target_include_directories(RP PUBLIC "${RedPanda_SOURCE_DIR}/include")