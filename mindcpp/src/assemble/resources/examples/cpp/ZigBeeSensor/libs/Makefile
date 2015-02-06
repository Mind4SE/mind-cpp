MOD=FlashMngExt
SRC=$(MOD).cpp
LIB=lib$(MOD).a

all: clean $(LIB)

$(MOD).o : $(SRC)
	g++ -c $^

$(LIB) : $(MOD).o
	ar ru $@ $^

clean:
	rm -f $(MOD).o $(LIB)
	
