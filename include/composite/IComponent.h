//!
//!

#ifndef COMPOSITE_ICOMPONENT_H
#define COMPOSITE_ICOMPONENT_H

#include <string>

namespace DesignPattern
{
namespace Composite
{
class IComponent
{

public:
    IComponent(const std::string& name)
        : name_{name} {};
    virtual void displayInfo() = 0;
    virtual void addComponent(std::unique_ptr<IComponent>& component) = 0;

protected:
    std::string name_;

}; //! IComponent
} // namespace Composite
} // namespace DesignPattern
#endif // !COMPOSITE_ICOMPONENT_H
