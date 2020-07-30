CC = g++

IFLAGS = -I../redpanda/include -I../vendor/spdlog/include
CXXFLAGS = -std=c++11 -Wall -g $(IFLAGS)
LDFLAGS = -L../redpanda -Wl,-rpath=../redpanda -lRP 

APPNAME = redpanda-sandbox
EXT = .cpp
SRCDIR = src
OBJDIR = obj

SRC = $(wildcard $(SRCDIR)/*$(EXT)) $(wildcard $(SRCDIR)/*/*$(EXT)) $(wildcard $(SRCDIR)/*/*/*$(EXT))
OBJ = $(SRC:$(SRCDIR)/%$(EXT)=$(OBJDIR)/%.o)
DEP = $(OBJ:$(OBJDIR)/%.o=%.d)

PRE = cd ../redpanda && make && cd ../sandbox && cp ../redpanda/libRP.so .

RM = rm
DELOBJ = $(OBJ)

DEL = del
EXE = .exe
WDELOBJ = $(SRC:$(SRCDIR)/%$(EXT)=$(OWBJDIR)\\%.o)


all: $(APPNAME)

$(APPNAME): $(OBJ)
	$(PRE) && $(CC) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

-include $(DEP)

$(OBJDIR)/%.o: $(SRCDIR)/%$(EXT)
	$(CC) $(CXXFLAGS) -o $@ -c $<

.PHONY: clean
clean:
	$(RM) $(DELOBJ) $(DEP) $(APPNAME)

.PHONY: cleandep
cleandep:
	$(RM) $(DEP)
	