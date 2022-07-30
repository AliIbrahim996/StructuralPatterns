#ifndef COMPOSITE_DIRECTORY_H
#define COMPOSITE_DIRECTORY_H

#include "composite/IFile.h"
#include <vector>

namespace DesignPattern
{
namespace Composite
{
class Directory : public IFile
{
private:
    std::vector<std::unique_ptr<IFile>> fileList_{};

public:
    Directory(const std::string& name);
    void getInfo() override;
    void add(std::unique_ptr<IFile>& file) override;
};
} // namespace Composite
} // namespace DesignPattern
#endif // !COMPOSITE_DIRECTORY_H
