cmake_minimum_required(VERSION 3.10)
project(Wzxx)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/_build/exe)

set(SRC_FILES
    controller/BaseController.cpp
    controller/HomeController.cpp
    controller/RoleController.cpp
    controller/BagController.cpp
    
    data/RoleData.cpp
    
    main/Main.cpp
    main/json.hpp

    model/HomeModel.cpp
    model/RoleModel.cpp
    model/BagModel.cpp
    
    view/HomeView.cpp
    view/RoleView.cpp
    view/BagView.cpp
)

set(HEADER_FILES
    controller/BaseController.h
    controller/HomeController.h
    controller/RoleController.h
    controller/BagController.h
    
    data/RoleData.h
    
    main/Main.h
    
    model/HomeModel.h
    model/RoleModel.h
    model/BagModel.h
    
    view/HomeView.h
    view/RoleView.h
    view/BagView.h
)

add_executable(WenZiXiuXian ${SRC_FILES} ${HEADER_FILES})

target_include_directories(WenZiXiuXian PRIVATE
    ${CMAKE_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/main
    ${CMAKE_SOURCE_DIR}/controller
    ${CMAKE_SOURCE_DIR}/data
    ${CMAKE_SOURCE_DIR}/model
    ${CMAKE_SOURCE_DIR}/view
)