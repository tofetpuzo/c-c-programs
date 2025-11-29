#include <iostream>
#include <chrono>


// chrono library provides three clocks 
// system_clock: measure "wall time" using the hardware system
// steady_clock: idealised clock which only goes forwards one tick at a time
// high_resolution_clock: clock with the shortest tick period supported by the system
// implemention-defined. usually an alias for system_clock or steady_clock
using namespace std;
using namespace std::chrono;
using namespace std::literals; // for suffixes

int main(){
    seconds s;   // undefined value

    // cout << "Uninitialized seconds variable has value: " << s << endl;"

    auto hour = 5h;
    auto mins = 10min;
    auto sec = 2s;
    auto millisec = 20ms;
    auto microsec = 30us;
    auto nanosec = 40ns;

    cout << "Hour: " << hour.count() << " hours\n";
    cout << "Minutes: " << mins.count() << " minutes\n";
    cout << "Seconds: " << sec.count() << " seconds\n";
    cout << "Milliseconds: " << millisec.count() << " milliseconds\n";
    cout << "Microseconds: " << microsec.count() << " microseconds\n";
    cout << "Nanoseconds: " << nanosec.count() << " nanoseconds\n" ;

    auto total_duration = hour + mins + sec + millisec + microsec + nanosec;
    cout << "Total duration in nanoseconds: "
         << duration_cast<minutes>(total_duration).count()
         << " nanoseconds\n";

    return 0;
}