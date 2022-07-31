//!
//!

#ifndef COMPOSITE_IFILE_H
#define COMPOSITE_IFILE_H

#include <string>
#include <memory>

namespace DesignPattern
{
namespace Composite
{
class IFile
{
protected:
    std::string name_;

public:
    IFile(const std::string& name)
        : name_{name} {};
    virtual void getInfo() = 0;
    virtual void add(std::unique_ptr<IFile>& file) = 0;
    virtual ~IFile() = 0;
};
} // namespace Composite
} // namespace DesignPattern
#endif // !COMPOSITE_IFILE_H
