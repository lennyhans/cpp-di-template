project(
    'dependency-injection-example', # project name
    'cpp', # C++ project, e.g: for C project
    version : '0.1.0',
    license : 'GPL-3.0',
    default_options : ['cpp_std=c++11']) # compile for C++

# it will be referred from subdir projects
inc = include_directories('include')

# meson will try to find a meson.build file inside following directories
subdir('include')
subdir('src')
subdir('test')
