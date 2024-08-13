#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/object.hpp>

using namespace godot;

class YoutubeDLiOSPlugin : public Object {
    GDCLASS(YoutubeDLiOSPlugin, Object);

public:
    String download_video(String url);

protected:
    static void _bind_methods();
};
