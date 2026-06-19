.SILENT:
CURR := ch22
WORKDIR := $(CURDIR)/$(CURR)

run: build
	@echo "Running $(WORKDIR)/main..." && $(WORKDIR)/main

build: clean
	@gcc -Wall -Wextra -std=c11 -o $(WORKDIR)/main $(WORKDIR)/main1.c

clean:
	@rm -rf $(WORKDIR)/main