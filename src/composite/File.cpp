#include "composite/File.h"

#include <iostream>

namespace DesignPattern
{
namespace Composite
{
File::File(const std::string& name)
    : IFile(name)
{
}

void File::getInfo()
{
    std::cout << " File: " << name_ << std::endl;
}

void File::add(std::unique_ptr<IFile>&)
{
    throw std::runtime_error("this functionality is not available for files!\n");
}

}
} // namespace DesignPattern