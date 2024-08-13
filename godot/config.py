def can_build(env, platform):
    return platform == "ios"

def configure(env):
    pass

def get_doc_classes():
    return [
        "YoutubeDLiOSPlugin",
    ]

def get_doc_path():
    return "doc_classes"
