# C++_Primer_Plus
file(GLOB SRCS PRIVATE
        *.cpp
)

foreach (source ${SRCS})
    get_filename_component(basename ${source} NAME_WE)
    add_executable(${basename} ${source})
    target_link_libraries(${basename} ${DEPEND_LIBS})
    add_test(NAME ${basename} COMMAND ${basename})
endforeach ()