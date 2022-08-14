#include "decorator/PizzaWithChees.h"

namespace DesignPattern
{
namespace Decorator
{
PizzaWithChees::PizzaWithChees(std::unique_ptr<Pizza>&& base)
    : PizzaDecorator(std::move(base)){}

std::string PizzaWithChees::getDesc()
{
    return PizzaDecorator::getDesc().append(" with chees");
}
double PizzaWithChees::getCost()
{
    return PizzaDecorator::getCost() + 3.5;
};

}
} // namespace DesignPattern