#ifndef DECORATOR_PIZZA_DECORATOR_H
#define DECORATOR_PIZZA_DECORATOR_H

#include "Pizza.h"
#include <memory>

namespace DesignPattern
{
namespace Decorator
{
//! Pizza decorator is an abstract class in order to inheriht pizza kinds from it.
class PizzaDecorator : public Pizza
{
protected:
    std::unique_ptr<Pizza> pizza_;

public:
    //! Constructor.
    //! @param [in] p , refers to The Pizza type
    explicit PizzaDecorator(std::unique_ptr<Pizza>&& p);

    //! Returns the pizza's cost.
    //!  @return The cost.
    virtual double getCost();

    //! Returns the pizza's Description.
    //!  @return The description.
    virtual std::string getDesc();
};
} // namespace Decorator
} // namespace DesignPattern
#endif // !DECORATOR_PIZZA_DECORATOR_H