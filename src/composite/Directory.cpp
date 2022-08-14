#include "composite/Directory.h"

#include <iostream>

namespace DesignPattern
{
namespace Composite
{
Directory::Directory(const std::string& name)
    : IFile(name)
{
}

void Directory::getInfo()
{
    std::cout << "** Directory: " << name_ << " content:\n";

    for (auto& element : this->fileList_)
    {
        element->getInfo();
    }
    std::cout << " End of directory " << this->name_ << std::endl;
}

void Directory::add(std::unique_ptr<IFile>& file)
{
   fileList_.push_back(std::move(file));
}

}
}