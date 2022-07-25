#include "adapter/Facebook.h"
#include <iostream>

namespace Adapter {
void Facebook::post_facebook_image(const std::string &img) {
  std::cout << "Facebook Image: " << img << std::endl;
}

void Facebook::post_facebook_video(const std::string &video) {
  std::cout << "Facebook Video: " << video << std::endl;
}

void Facebook::post_facebook_text(const std::string &text) {
  std::cout << "Facebook text: " << text << std::endl;
}
} // namespace Adapter
