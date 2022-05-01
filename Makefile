
all: main
	./$<

main: try.cpp
	g++ $^ -o $@


clean:
	rm -rf ./main
