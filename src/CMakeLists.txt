file(GLOB_RECURSE RestAPIService_SRCS *.cpp *.h)

set(RestAPIService_SRCS
    ${RestAPIService_SRCS}
    ${TEMPLATES_SRC}
)

# Create the application
add_library(RestAPIService SHARED ${RestAPIService_SRCS})

# Link to Cutelyst
target_link_libraries(RestAPIService
    Cutelyst::Core
    Qt5::Core
    Qt5::Network
)

