//! 
//! 

#ifndef DECORATOR_PIZZA_WITH_CHEES_H
#define DECORATOR_PIZZA_WITH_CHEES_H

#include "PizzaDecorator.h"

namespace DesignPattern
{
namespace Decorator
{
//! brief WithChees class to add chees to pizza Ingredients.
class PizzaWithChees : public PizzaDecorator
{
public:
    //! Constructor.
    //! @param [in] base
    explicit PizzaWithChees(std::unique_ptr<Pizza>&& base);
    
    //! Returns pizza with Chees desc.
    //!  @return The desc.
    std::string getDesc() override;

    //!Returns the feature cost
    //! @return The cost.
    double getCost() override;
};
}
} // namespace DesignPattern
#endif // !DECORATOR_PIZZA_WITH_CHEES_H