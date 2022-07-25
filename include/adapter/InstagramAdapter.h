//!
//!
//!
//!

#include "ISocialAdapter.h"
#include "Instagram.h"

namespace Adapter {
class InstagramAdapter : public ISocialAdapter {
private:
  //!
  std::unique_ptr<Instagram> instagram_;

public:
  //!
  InstagramAdapter(std::unique_ptr<Instagram> &inst);

  //!
  void post_image(const std::string &img) override;

  //!
  void post_video(const std::string &video) override;

  //!
  void post_text(const std::string &text) override;
};
} // namespace Adapter
