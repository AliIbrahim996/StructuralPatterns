#include "decorator/PizzaWithMashroom.h"

namespace DesignPattern
{
namespace Decorator
{
PizzaWithMashroom::PizzaWithMashroom(std::unique_ptr<Pizza>&& base)
    : PizzaDecorator(std::move(base)){}

std::string PizzaWithMashroom::getDesc()
{
    return PizzaDecorator::getDesc().append(" with mashroom");
}
double PizzaWithMashroom::getCost()
{
    return PizzaDecorator::getCost() + 2.0;
}
} // namespace Decorator
} // namespace DesignPattern