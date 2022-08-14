#ifndef COMPOSITE_FILE_H
#define COMPOSITE_FILE_H

#include "composite/IFile.h"

namespace DesignPattern
{
namespace Composite
{
class File : public IFile
{
public:
    File(const std::string& name);
    void getInfo() override;
    void add(std::unique_ptr<IFile>& file) override;
};
} // namespace Composite
} // namespace DesignPattern
#endif // !COMPOSITE_FILE_H
