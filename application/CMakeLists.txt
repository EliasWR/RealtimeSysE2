add_executable(RealtimeSysE2 main.cpp)
target_include_directories(RealtimeSysE2 PUBLIC "${CMAKE_SOURCE_DIR}/include")
target_link_libraries(RealtimeSysE2 PUBLIC fmt::fmt)
target_link_libraries(RealtimeSysE2 PUBLIC ${OpenCV_LIBRARIES})