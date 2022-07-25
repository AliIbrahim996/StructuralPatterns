//!
//!
//!
//!
//!

#include <string>

namespace Adapter {
class Facebook {
public:
  //!
  //!
  void post_facebook_image(const std::string &img);
  //!
  //!
  void post_facebook_video(const std::string &video);
  //!
  //!
  void post_facebook_text(const std::string &text);

}; //! Facebook
} // namespace Adapter
