libgasoline = shared_library(
    'gasoline',
    [ 'FuelCan.cpp', 'GasStation.cpp'],
    include_directories : inc,
    install : true)

libcar = shared_library(
    'car', 
    'Car.cpp',
    include_directories : inc,
    link_with : libgasoline,
    install : true) 

example = executable(
    'example', 
    ['main.cpp'],
    include_directories : inc, 
    link_with : [libcar, libgasoline],
    install : true) 
