#ifndef DECORATOR_PIZZA_H
#define DECORATOR_PIZZA_H

#include <string>
namespace DesignPattern
{
namespace Decorator
{
//! @brief Pizza Interface
class Pizza
{
public:
    //! Returns the pizza's cost.
    //!  @return The cost.
    virtual double getCost() = 0;

    //! Returns the pizza's Description.
    //!  @return The description.
    virtual std::string getDesc() = 0;
};
} // namespace Decorator
} // namespace DesignPattern

#endif // !DECORATOR_PIZZA_H
