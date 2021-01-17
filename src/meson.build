libcar = shared_library(
    'car', 
    ['Car.cpp', 'FuelCan.cpp', 'GasStation.cpp'], 
    include_directories : inc, 
    install : true) 

example = executable(
    'example', 
    'main.cpp', 
    include_directories : inc, 
    link_with : libcar, 
    install : true) 
