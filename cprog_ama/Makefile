.SILENT:
CURR := ch20

run: build
	@echo "Running ${pwd}/cprog_ama/$(CURR)/run..." && ${pwd}/cprog_ama/$(CURR)/run

build:
	@gcc -Wall -Wextra -std=c11 -o ${pwd}/cprog_ama/$(CURR)/run ${pwd}/cprog_ama/$(CURR)/main.c