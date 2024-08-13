#include "youtubedl_ios_plugin.h"
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#import <YoutubeDL/YoutubeDL-Swift.h>

String YoutubeDLiOSPlugin::download_video(String url) {
    YoutubeDL *downloader = [[YoutubeDL alloc] init];
    [downloader setVideoURL:url.utf8().get_data()];
    [downloader download];
    return String(downloader.outputPath.UTF8String);
}

void YoutubeDLiOSPlugin::_bind_methods() {
    ClassDB::bind_method(D_METHOD("download_video", "url"), &YoutubeDLiOSPlugin::download_video);
}
