#pragma once

#include <iostream>
#include <functional>
#include <chrono>

namespace UptimeFunc {

    template <class T>
    T timeFunction(
        std::function<T()> fn,
        std::chrono::microseconds* duration) {

        auto startTime = std::chrono::high_resolution_clock::now();
        T returnValue = fn();
        auto stopTime = std::chrono::high_resolution_clock::now();
        *duration = std::chrono::duration_cast<std::chrono::microseconds>(stopTime - startTime);

        return returnValue;
    }

    template <class T>
    T timeFunction(
        std::function<T()> fn,
        std::chrono::microseconds* duration,
        std::ostream* logger) {

        T returnValue = timeFunction(fn, duration);

        *logger << "UptimeFunc::timeFunction: Funtion resolvd in " << (*duration).count() << " microseconds" << std::endl;
        
        return returnValue;
    }

}