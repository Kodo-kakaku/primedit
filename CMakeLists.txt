cmake_minimum_required (VERSION 3.8)

set(THIS primedit)

if (DEFINED ENV{TRAVIS_BUILD_NUMBER})
    project(${THIS} VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER})
else()
    project(${THIS} VERSION 0.0.1)
endif()

set(CMAKE_CXX_STANDARD 17)

include_directories(lib)
include_directories(src)

add_executable(prim src/main.cpp lib/primitive.h lib/editor.h lib/document.h)
set_target_properties(prim PROPERTIES CMAKE_CXX_STANDARD 17  CXX_STANDARD_REQUIRED ON)
target_include_directories(prim PRIVATE "${CMAKE_BINARY_DIR}")


if (MSVC)
    target_compile_options(prim PRIVATE
            /W4
            )
else ()
    target_compile_options(prim PRIVATE
            -Wall -Wextra -pedantic -Werror
            )
endif()



install(TARGETS prim RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT example@example.com)

include(CPack)