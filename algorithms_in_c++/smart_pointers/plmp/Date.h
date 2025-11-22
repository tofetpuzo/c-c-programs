#ifndef Date_H
#define Date_H
#include <memory> // for std::unique_ptr

class Date_impl; // forward declaration

class Date {
    // Date_impl* pImpl; // pointer to implementation
    std::unique_ptr<Date_impl> pImpl; // using smart pointer for automatic memory management
public:
    Date(int d, int m, int y);
    ~Date(); // destructor
    // move operator
    Date(Date&&) noexcept;
    Date& operator=(Date&&) noexcept;

    void set_date(int d);
    void print();
};
#endif // Date_H