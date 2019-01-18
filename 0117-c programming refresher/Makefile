CC = cc
ARGS = -Wall

all: creditcard 

creditcard: cc_rules
	$(CC) -o ccvalidate $(ARGS) cc_validate.c cc_rules.o

cc_rules:
	$(CC) -c $(ARGS) cc_rules.c

clean: 
	rm -rf ccvalidate *.o

