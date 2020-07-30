CC = g++

IFLAGS = -Iinclude/redpanda -I../vendor/spdlog/include
CXXFLAGS = -std=c++11 -fPIC -Wall -g $(IFLAGS)
LDFLAGS =  -shared #-L/usr/local/lib -lGLU -lGLEW -lXi -lm -lGL -lm -lpthread -ldl -ldrm -lXdamage -lX11-xcb -lxcb-glx -lxcb-dri2 -lglfw3 -lrt -lm -ldl -lXrandr -lXinerama -lXxf86vm -lXext -lXcursor -lXrender -lXfixes -lX11 -lpthread -lxcb -lXau -lXdmcp

APPNAME = libRP.so
EXT = .cpp
SRCDIR = src
OBJDIR = obj

SRC = $(wildcard $(SRCDIR)/*$(EXT)) $(wildcard $(SRCDIR)/*/*$(EXT)) $(wildcard $(SRCDIR)/*/*/*$(EXT))
OBJ = $(SRC:$(SRCDIR)/%$(EXT)=$(OBJDIR)/%.o)
DEP = $(OBJ:$(OBJDIR)/%.o=%.d)

RM = rm
DELOBJ = $(OBJ)

DEL = del
EXE = .exe
WDELOBJ = $(SRC:$(SRCDIR)/%$(EXT)=$(OWBJDIR)\\%.o)

all: $(APPNAME)

$(APPNAME): $(OBJ)
	$(CC) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
 

$(OBJDIR)/%.o: $(SRCDIR)/%$(EXT)
	$(CC) $(CXXFLAGS) -o $@ -c $<

.PHONY: clean
clean:
	$(RM) $(DELOBJ) $(DEP) $(APPNAME)

.PHONY: cleandep
cleandep:
	$(RM) $(DEP)
