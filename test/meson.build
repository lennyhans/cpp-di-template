testexe = executable(
    'testexe', 
    'car_test.cpp', 
    include_directories : inc, 
    link_with : libcar) 

test('Car test', testexe) 

test('Car test with args and env', testexe, args : ['arg1', 'arg2'], env : ['FOO=bar']) 

