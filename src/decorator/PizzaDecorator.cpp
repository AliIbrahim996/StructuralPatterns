#include "decorator/PizzaDecorator.h"

namespace DesignPattern
{
namespace Decorator
{
PizzaDecorator::PizzaDecorator(std::unique_ptr<Pizza>&& p)
    : pizza_{std::move(p)}
{
}

double PizzaDecorator::getCost()
{
    if (pizza_ != nullptr)
        return pizza_->getCost();
    else
        return 0;
}

std::string PizzaDecorator::getDesc()
{
    if (pizza_ != nullptr)
        return pizza_->getDesc();
    else
        return "";
}
} // namespace Decorator
} // namespace DesignPattern