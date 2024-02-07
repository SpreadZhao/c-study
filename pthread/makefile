CFLAGS+=-pthread
LDFLAGS+=-pthread
OUT_DIR=out

cleanup:cleanup.c
	gcc cleanup.c -o ${OUT_DIR}/cleanup

create1:create1.c
	gcc create1.c -o ${OUT_DIR}/create1

primer:primer.c
	gcc primer.c -o ${OUT_DIR}/primer

thread_compete:thread_compete.c
	gcc thread_compete.c -o ${OUT_DIR}/thread_compete

clean:
	rm ${OUT_DIR}/*