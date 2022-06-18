#ifndef DATE_DATE_H
#define DATE_DATE_H

#include <array>
#include <ostream>
#include <string>

class Date {
public:
    Date();

    Date(unsigned int year, unsigned int month, unsigned int day);

    virtual ~Date();

    void setDate(unsigned int y, unsigned int m, unsigned int d);

    [[nodiscard]] unsigned int getYear() const;

    void setYear(unsigned int y);

    [[nodiscard]] unsigned int getMonth() const;

    void setMonth(unsigned int m);

    [[nodiscard]] unsigned int getDay() const;

    void setDay(unsigned int d);

    friend std::ostream &operator<<(std::ostream &os, const Date &date);

private:
    unsigned int year{1970};
    unsigned int month{1};
    unsigned int day{1};

    static bool validDate(unsigned int year, unsigned int month, unsigned int day);

    static std::string getMonthName(unsigned int month);
};

#endif //DATE_DATE_H
