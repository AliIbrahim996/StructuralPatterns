#include "decorator/BasePizza.h"

namespace DesignPattern
{
namespace Decorator
{
std::string BaseDecorator::getDesc()
{
    return "Base pizza ";
}
double BaseDecorator::getCost()
{
    return 1.0;
}
} // namespace Decorator
}