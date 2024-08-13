#include "register_types.h"
#include "youtubedl_ios_plugin.h"
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/godot.hpp>

using namespace godot;

void initialize_youtubedl_ios_plugin(ModuleInitializationLevel p_level) {
    if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }
    ClassDB::register_class<YoutubeDLiOSPlugin>();
}

void uninitialize_youtubedl_ios_plugin(ModuleInitializationLevel p_level) {
    // Nothing to do here
}
