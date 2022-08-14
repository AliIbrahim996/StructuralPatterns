//!
//!

#ifndef COMPOSITE_ALBUM_H
#define COMPOSITE_ALBUM_H

#include "composite/IComponent.h"
#include <list>

namespace DesignPattern
{
namespace Composite
{
class Album : public IComponent
{
public:
    Album(const std::string& name);
    void displayInfo() override;
    void addComponent(std::unique_ptr<IComponent>& component) override;

private:
    std::list<std::unique_ptr<IComponent>> songs_{};
};
} // namespace Composite
} // namespace DesignPattern

#endif // !COMPOSITE_ALBUM_H
