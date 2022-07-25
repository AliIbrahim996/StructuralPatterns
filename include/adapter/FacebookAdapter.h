//!
//!
//!
//!
//!

#include "Facebook.h"
#include "ISocialAdapter.h"

namespace Adapter {
class FacebookAdapter : public ISocialAdapter, public Facebook {
public:
  //!
  //!
  void post_image(const std::string &img) override;
  //!
  //!
  void post_video(const std::string &video) override;
  //!
  //!
  void post_text(const std::string &text) override;
}; //! FacebookAdapter
} // namespace Adapter
