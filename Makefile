ct:
	gcc time.c -o time.out && rm time.out
br:
	gcc time.c -o time.out && ./time.out main1.c main2.c
clean:
	rm time.out;
