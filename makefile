build = build
src = src

main = src/main.c

mainBuild = build/CpuSim.o

comp = gcc -o

clean:

	rm -rf $(build)
	mkdir $(build)

	$(comp) $(mainBuild) $(main) 