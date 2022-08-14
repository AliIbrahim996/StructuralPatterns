#ifndef COMPOSITE_DIRECTORY_H
#define COMPOSITE_DIRECTORY_H

#include "composite/IFile.h"
#include <list>

namespace DesignPattern
{
namespace Composite
{
class Directory : public IFile
{
public:
    Directory(const std::string& name);
    void getInfo() override;
    void add(std::unique_ptr<IFile>& file) override;

private:
    std::list<std::unique_ptr<IFile>> fileList_{};
};
} // namespace Composite
} // namespace DesignPattern
#endif // !COMPOSITE_DIRECTORY_H
