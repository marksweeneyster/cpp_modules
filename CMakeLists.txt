cmake_minimum_required(VERSION 3.26)
project(cpp_modules)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "2182bf5c-ef0d-489a-91da-49dbc3090d2a")
set(CMAKE_EXPERIMENTAL_CXX_MODULE_DYNDEP 1)

add_library(speech STATIC)
target_link_libraries(speech)

target_sources(speech
        PUBLIC
        FILE_SET cxx_modules TYPE CXX_MODULES FILES
        speech/speech.cpp
)
target_sources(speech
        PUBLIC
        speech/speech_impl.cpp
)

add_executable(speech_main main.cpp)
target_link_libraries(speech_main PRIVATE speech)