#指定编译工具
# CC = arm-linux-gnueabihf-gcc
# CPP = arm-linux-gnueabihf-g++
# LINK = arm-linux-gnueabihf-g++
CC = gcc
CPP = g++
LINK = g++
 
LIBS = 
#编译.so 必须添加 -fPIC 和 -shared 选项  
CCFLAGS = -c -g -fPIC
CPPFLAGS = -c -g -fPIC

#期望得到的执行文件或动态库.so
#TARGET=libxx.so
TARGET=demo
 
INCLUDES = -I. #-I../../
 
CPPFILES = $(wildcard *.cpp )#遍历得到当前目录及上层目录中的所有.cpp文件
CFILES = $(wildcard *.c )#遍历得到当前目录及上层目录中的所有.c文件
 
OBJFILE = $(CFILES:.c=.o) $(CPPFILES:.cpp=.o)

all:$(TARGET)
 
$(TARGET):$(OBJFILE)
# 编译得到 .so 文件用下面的代码
#   $(LINK) $^ $(LIBS) -Wall -fPIC -shared -o $@
# 编译得到可执行文件用下面的代码
	$(LINK) $^ $(LIBS) -Wall -O2 -o $@

%.o:%.c
	$(CC) -o $@ $(CCFLAGS) $< $(INCLUDES)
 
%.o:%.cpp
	$(CPP) -o $@ $(CPPFLAGS) $< $(INCLUDES)
 
clean:
	rm -rf $(TARGET)
	rm -rf $(OBJFILE)
