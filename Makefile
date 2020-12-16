FINALPACKAGE=1

include $(THEOS)/makefiles/common.mk
export ARCHS = armv7 armv7s arm64 arm64e
TOOL_NAME = tai
tai_FILES = main.m $(wildcard taiprefs/functions/*.m)
tai_FRAMEWORKS = UIKit
tai_CODESIGN_FLAGS = -Sent.plist
tai_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tool.mk
SUBPROJECTS += taiprefs
include $(THEOS_MAKE_PATH)/aggregate.mk