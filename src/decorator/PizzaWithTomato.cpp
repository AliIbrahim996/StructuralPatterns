#include "decorator/PizzaWithTomato.h"

namespace DesignPattern
{
namespace Decorator
{
PizzaWithTomato::PizzaWithTomato(std::unique_ptr<Pizza>&& base)
    : PizzaDecorator(std::move(base)){};

std::string PizzaWithTomato::getDesc()
{
    return PizzaDecorator::getDesc().append(" with tomato");
}

double PizzaWithTomato::getCost()
{
    return PizzaDecorator::getCost() + 2.5;
}
}
} // namespace DesignPattern