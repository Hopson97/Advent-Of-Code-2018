cmake_minimum_required(VERSION 3.10)


function(setup_target target)
    #Set C++17
    target_compile_features(${target} PUBLIC cxx_std_17)
    set_target_properties(${target} PROPERTIES CXX_EXTENSIONS OFF)

    #Set flags
    if(MSVC)
        target_compile_options(${target} PRIVATE 
            /W4 /WX)
    else()
        target_compile_options(${target} PRIVATE 
            -Wall -Wextra -pedantic -Werror)		#Warning flags
    endif()

    target_include_directories(
        ${target}
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include/
    )

    #Find libraries
    find_package(Threads)

    #Finally
    target_link_libraries(${target}
        Threads::Threads 
    )
endfunction()

add_subdirectory(2018)
