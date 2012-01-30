SUBDIRS = lib app 


.PHONY : clean all $(SUBDIRS) help

all:$(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

app:lib

help:
	@echo "usage: "
	@echo "	make app -- build app and lib"
	@echo "	make lib -- build lib: "
	@echo "	make drv -- build driver"
	@echo "	make     -- build all: "
	@echo "	make clean -- clean all( app/lib/drv)"


	

clean:
	for dir in $(SUBDIRS);do \
		$(MAKE) -C $$dir clean; \
	done
	$(RM) *.o 


