/* Generated by ./xlat/gen.sh from ./xlat/bootflags1.in; do not edit. */

static const struct xlat bootflags1[] = {
#if defined(LINUX_REBOOT_MAGIC1) || (defined(HAVE_DECL_LINUX_REBOOT_MAGIC1) && HAVE_DECL_LINUX_REBOOT_MAGIC1)
	XLAT(LINUX_REBOOT_MAGIC1),
#endif
	XLAT_END
};