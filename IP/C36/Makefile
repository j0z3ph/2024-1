ifdef OS
	APP = arduino.exe
	EXECCMD = .\arduino.exe
else
	APP = arduino.out
	EXECCMD = ./arduino.out
endif
MAIN = main.c
TOOLS = tools.c
SERIALLIB = serial.c
COMPILER = gcc

all: $(APP)
	$(EXECCMD)

$(APP): $(MAIN) $(TOOLS) $(SERIALLIB)
	$(COMPILER) $(MAIN) $(TOOLS) $(SERIALLIB) -o $(APP)