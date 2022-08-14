#ifndef DECORATOR_BASE_PIZZA__H
#define DECORATOR_BASE_PIZZA__H

#include "Pizza.h"

namespace DesignPattern
{
namespace Decorator
{
//! Base pizza class to make a base pizza without Ingredients .
class BaseDecorator : public Pizza
{
public:
    //! Returns the base pizza's desc.
    //! @return The desc.
    std::string getDesc() override;

    //! Returns the base pizza's cost.
    //! @return The cost.
    double getCost() override;
};
} // namespace Decorator
} // namespace DesignPattern
#endif // !DECORATOR_BASE_PIZZA__H