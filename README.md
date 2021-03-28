![uptimeFunc logo](https://raw.githubusercontent.com/DjoleM/uptimeFunc/master/UptimeFuncLogo.png)
# uptimeFunc

uptimeFunc is a c++ library which helps record funtion execution times by providing a generic timing wrapper for functions of any number of arguments and return type

## Usage

Code examples can be found in `examples/examples.cpp`

1. Load the `uptimeFunc.h` file

2. Declare a `std::chrono::microseconds`constant or variable, which will store the time in microseconds (see future upgrades for more) like so:

`std::chrono::microseconds exampleFuncTime`

3. Pass an `std::bind` object alongside the pointer to the just declared time variable to `UptimeFunc::timeFunction<T>` specifying your function's return type, the value returned by the function will also be returned by `UptimeFunc::timeFuntion`, the time will be stored in your time variable you passed in

`std::string returnVal = UptimeFunc::timeFunction<std::string>(std::bind(exampleFunc, arg1, arg2), &exampleFuncTime);`

4. To add logging, simply include a pointer to your logging `osstream` as a third argument

`std::string returnVal = UptimeFunc::timeFunction<std::string>(std::bind(exampleFunc, arg1, arg2), &exampleFuncTime, &logger);`

### Future Upgrades

- Generalise timeFunction templates to accept any unit of time
- Allow customisation of the log string
- ASCII art?


