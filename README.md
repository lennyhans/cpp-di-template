# Summary
This is a basic c++ project template using meson and doctest

The code is a compilation of useful resources about using Meson as a build 
system and Doctest (or catch) to test. Also I tried to get started with
dependency injection on cpp.

To run you need to install [meson](https://mesonbuild.com/SimpleStart.html) and download the latest doctest header 
usually on  [github](https://raw.githubusercontent.com/onqtam/doctest/master/doctest/doctest.h)

See also: [Doctest Tutorial](https://github.com/onqtam/doctest/blob/master/doc/markdown/tutorial.md)

## Build
Prepare dependencies:
````shell
sudo apt install build-essential meson ninja-build
````

Compile it
````
meson compile -C builddir
````

If you have version problem with the generated files (after an update),
reconfigure then build again
````
meson --reconfigure builddir
````

## References
Reference and useful code (to me) :
* [www.codymorterud.com](https://www.codymorterud.com/design/2018/09/07/dependency-injection-cpp.html)
* [vladris.com/blog](https://vladris.com/blog/2016/07/06/dependency-injection-in-c.html)
