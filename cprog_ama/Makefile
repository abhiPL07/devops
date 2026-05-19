.SILENT:
CURR := ch22

run: build
	@echo "Running ${pwd}/cprog_ama/$(CURR)/main..." && ${pwd}/cprog_ama/$(CURR)/main /cprog_ama/ch22/testCanOpen.dat

build:
	@gcc -Wall -Wextra -std=c11 -o ${pwd}/cprog_ama/$(CURR)/main ${pwd}/cprog_ama/$(CURR)/main.c \
	${pwd}/cprog_ama/$(CURR)/canopen.c