SUBDIRS = src doc
EXTRA_DIST = \
	MAINTAINERS \
	HACKING \
	VERSION \
	THANKS \
	TODO \
	show_sources.sh \
	m4 \
	doc \
	.git \
	.gitignore


CLEANFILES = \
	*~

ACLOCAL_AMFLAGS = -I m4

flash_firmware:
	make
	`arm-none-eabi-objcopy src/template-stm3210fx2.axf -O binary src/firmware-stm3210fx2.bin`
	`sudo openocd -s ./src/common/`

details:
	@echo "Building from:"
	@echo "build_cpu = $(build_cpu), build_os = $(build_os), build_vendor = $(build_vendor)"
	@echo "To:"
	@echo "host_cpu = $(host_cpu), host_os = $(host_os), host_vendor = $(host_vendor)"


doxygen-doc:
	`cd doc ; doxygen Doxyfile ; cd ../`
