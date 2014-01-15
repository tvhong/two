add_library(init_screen init_screen.cpp)
target_link_libraries(init_screen ${SFML_LIBRARIES})

install(TARGETS init_screen DESTINATION lib)
