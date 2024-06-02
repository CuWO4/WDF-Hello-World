wdf_hello_world: wdf_hello_world.c
	clang -o $@ $<

.PHONY: generate
generate: wdf_hello_world
	./$<
	chmod 777 hello
