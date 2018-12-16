project(DbNetworkLib)

find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Network CONFIG REQUIRED)
find_package(Qt5LinguistTools CONFIG REQUIRED)

set(HEADERS
    dbnetworklib_global.h
    utils/netutils.h
)

set(SOURCES
    utils/netutils.cpp
)

set(TRANSLATIONS
    translations/dbnetworklib_en.ts
    translations/dbnetworklib_de.ts
)

set_source_files_properties(${TRANSLATIONS} PROPERTIES OUTPUT_LOCATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/translations)
QT5_CREATE_TRANSLATION(TRANSLATIONS_C ${TRANSLATIONS} ${HEADERS} ${SOURCES} OPTIONS -no-obsolete)
#QT5_ADD_TRANSLATION(TRANSLATIONS_C ${TRANSLATIONS})

add_library(dbnetworklib SHARED ${HEADERS} ${SOURCES} ${TRANSLATIONS_C})

target_compile_definitions(dbnetworklib PRIVATE DBNETWORKLIB_LIBRARY)

target_link_libraries(dbnetworklib Qt5::Core Qt5::Network)

target_include_directories(dbnetworklib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_dependencies(libs dbnetworklib)
