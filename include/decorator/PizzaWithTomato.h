//!
//!

#ifndef DECORATOR_PIZZA_WITH_TOMATO_H
#define DECORATOR_PIZZA_WITH_TOMATO_H

#include "PizzaDecorator.h"

namespace DesignPattern
{
namespace Decorator
{
//! brief WithChees class to add chees to pizza Ingredients.
class PizzaWithTomato : public PizzaDecorator
{
public:
    //! Constructor.
    //! @param [in] base
    explicit PizzaWithTomato(std::unique_ptr<Pizza>&& base);

    //! Returns pizza with Chees desc.
    //!  @return The desc.
    std::string getDesc() override;

    //! Returns the feature cost
    //! @return The cost.
    double getCost() override;
};
} // namespace Decorator
} // namespace DesignPattern
#endif // !DECORATOR_PIZZA_WITH_TOMATO_H