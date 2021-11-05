.PHONY: all clean install

all:final.txt

1.txt: 1-1.txt 1-2.txt
	cat 1-1.txt 1-2.txt > 1.txt

2.txt: 2-1.txt 2-2.txt
	cat $^ > $@

final.txt: 1.txt 2.txt
	cat $^ > $@

clean:
	-rm 1.txt 2.txt final.txt