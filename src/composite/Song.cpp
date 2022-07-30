#include "composite/Song.h"
#include <iostream>
namespace DesignPattern
{
namespace Composite
{
Song::Song(const std::string& name)
    : IComponent(name)
{
}

void Song::displayInfo()
{
    std::cout << "Song: " << name_ << std::endl;
}

void Song::addComponent(std::unique_ptr<IComponent>&)
{
    throw std::runtime_error("this operation is not supported!\n");
}

} // namespace Composite
} // namespace DesignPattern