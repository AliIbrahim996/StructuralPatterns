#include "composite/Album.h"
#include <iostream>
namespace DesignPattern
{
namespace Composite
{
Album::Album(const std::string& name)
    : IComponent(name)
{
}

void Album::displayInfo()
{
    std::cout << "Album: " << name_ << " {\n";
    for (auto& component : songs_)
    {
        component->displayInfo();
    }
    std::cout << "}\n";
}

void Album::addComponent(std::unique_ptr<IComponent>& component)
{
    songs_.push_back(std::move(component));
}

} // namespace Composite
} // namespace DesignPattern