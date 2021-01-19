test_libgasoline = executable(
    'test_libgasoline-bin',
    ['fuelcan_test.cpp'],
    include_directories : inc, 
    link_with : libgasoline)

test_libcar = executable(
    'test_libcar-bin',
    ['car_test.cpp'],
    include_directories : inc,
    link_with : [libcar, libgasoline])

test('Gasoline test', test_libgasoline)

test('Car test', test_libcar)

# test('Car test with args and env', testexe, args : ['arg1', 'arg2'], env : ['FOO=bar'])

