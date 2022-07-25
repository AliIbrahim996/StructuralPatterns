//!
//!
//!

#include <string>

namespace Adapter {
class ISocialAdapter {
public:
  //!
  //! @param[in] img
  virtual void post_image(const std::string &img) = 0;

  //!
  //! @param[in] video
  virtual void post_video(const std::string &video) = 0;

  //!
  //! @param[in] text.
  virtual void post_text(const std::string &text) = 0;

}; // ISocialAdapter
} // namespace Adapter
