TOP_DIR = ../../..
sinclude $(TOP_DIR)/tools/w800/conf.mk

ifndef PDIR
GEN_LIBS = libtinyml$(LIB_EXT)
COMPONENTS_libtinyml = TinyMaix/libTinyMaix$(LIB_EXT)
endif

#DEFINES +=

sinclude $(TOP_DIR)/tools/w800/rules.mk

INCLUDES := $(INCLUDES) -I $(PDIR)include
PDIR := ../$(PDIR)
sinclude $(PDIR)Makefile