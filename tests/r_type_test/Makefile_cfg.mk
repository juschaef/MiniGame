NAME = r_type
RENDU_PATH = ~/annee01/minigame/r_type
FRAMEWORK_PATH = ../moulitest/testframework/v3
CC_LIBS = 
CC_SOURCE_EXTRA = $(shell find $(RENDU_PATH) -name "*.c" | grep -v main.c)