.SILENT:
CURR := ch21

run: build
	@echo "Running ${pwd}/cprog_ama/$(CURR)/run..." && ${pwd}/cprog_ama/$(CURR)/run

build:
	@gcc -Wall -Wextra -std=c11 -o ${pwd}/cprog_ama/$(CURR)/run ${pwd}/cprog_ama/$(CURR)/main.c \
	${pwd}/cprog_ama/$(CURR)/test_offsetof.c