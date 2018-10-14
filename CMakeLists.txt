project(DbNetworkLib)

set(HEADERS
    dbnetworklib_global.h
    utils/netutils.h
)

set(SOURCES
    utils/netutils.cpp
)

add_library(dbnetworklib SHARED ${HEADERS} ${SOURCES})

target_compile_definitions(dbnetworklib PRIVATE DBNETWORKLIB_LIBRARY)

target_link_libraries(dbnetworklib Qt5::Core Qt5::Network)

target_include_directories(dbnetworklib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_dependencies(libs dbnetworklib)
