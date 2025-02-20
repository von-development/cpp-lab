#include <iostream>
#include <iomanip>  // For formatting output

/*
 * Question Name: Time Class Implementation
 * 
 * Description:
 * Create a class called `Time` that:
 * - Has separate `int` member data for hours, minutes, and seconds.
 * - Provides:
 *   1. A constructor to initialize time to `0:0:0`.
 *   2. A constructor to initialize time to specific values.
 *   3. A method to display the time in `hh:mm:ss` format.
 *   4. A method to add another `Time` object to the current object.
 *   5. Setter and Getter methods.
 * 
 * Implementation Steps:
 * 1. Define a `Time` class with private data members for hours, minutes, and seconds.
 * 2. Implement constructors (default and parameterized).
 * 3. Implement methods for:
 *    - Displaying time
 *    - Adding two `Time` objects
 *    - Setters and Getters
 * 4. Test the `Time` class in `main()` by:
 *    - Creating three objects (two initialized, one default)
 *    - Adding the two initialized times
 *    - Displaying the result
 */

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // 1. Default constructor (initializes time to 00:00:00)
    Time() : hours(0), minutes(0), seconds(0) {}

    // 2. Parameterized constructor (initializes time to specific values)
    Time(int h, int m, int s) {
        setTime(h, m, s); // Ensures valid time values
    }

    // 3. Setter method to set time with validation
    void setTime(int h, int m, int s) {
        hours = (h >= 0 && h < 24) ? h : 0;     // Ensures valid hours (0-23)
        minutes = (m >= 0 && m < 60) ? m : 0;   // Ensures valid minutes (0-59)
        seconds = (s >= 0 && s < 60) ? s : 0;   // Ensures valid seconds (0-59)
    }

    // 4. Getter methods
    int getHours() const { return hours; }
    int getMinutes() const { return minutes; }
    int getSeconds() const { return seconds; }

    // 5. Display time in hh:mm:ss format
    void displayTime() const {
        std::cout << std::setw(2) << std::setfill('0') << hours << ":"
                  << std::setw(2) << std::setfill('0') << minutes << ":"
                  << std::setw(2) << std::setfill('0') << seconds << std::endl;
    }

    // 6. Add another Time object to the current object
    void addTime(const Time& t) {
        seconds += t.seconds;
        minutes += seconds / 60; // Carry over from seconds to minutes
        seconds %= 60;

        minutes += t.minutes;
        hours += minutes / 60;  // Carry over from minutes to hours
        minutes %= 60;

        hours += t.hours;
        hours %= 24;  // Keep within 24-hour format
    }
};

// Main function to test the Time class
int main() {
    // Creating two initialized Time objects
    Time time1(10, 45, 30); // 10:45:30
    Time time2(2, 30, 40);  // 02:30:40

    // Creating an uninitialized Time object (defaults to 00:00:00)
    Time resultTime;

    // Display initial times
    std::cout << "Time 1: ";
    time1.displayTime();

    std::cout << "Time 2: ";
    time2.displayTime();

    // Adding time1 and time2, storing result in resultTime
    resultTime = time1; // Copy time1 into resultTime
    resultTime.addTime(time2); // Add time2 to resultTime

    // Displaying the result
    std::cout << "Result after adding Time 1 and Time 2: ";
    resultTime.displayTime();

    return 0;
}
