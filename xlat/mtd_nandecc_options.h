/* Generated by ./xlat/gen.sh from ./xlat/mtd_nandecc_options.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat mtd_nandecc_options in mpers mode

#else

static
const struct xlat mtd_nandecc_options[] = {
#if defined(MTD_NANDECC_OFF) || (defined(HAVE_DECL_MTD_NANDECC_OFF) && HAVE_DECL_MTD_NANDECC_OFF)
  XLAT(MTD_NANDECC_OFF),
#endif
#if defined(MTD_NANDECC_PLACE) || (defined(HAVE_DECL_MTD_NANDECC_PLACE) && HAVE_DECL_MTD_NANDECC_PLACE)
  XLAT(MTD_NANDECC_PLACE),
#endif
#if defined(MTD_NANDECC_AUTOPLACE) || (defined(HAVE_DECL_MTD_NANDECC_AUTOPLACE) && HAVE_DECL_MTD_NANDECC_AUTOPLACE)
  XLAT(MTD_NANDECC_AUTOPLACE),
#endif
#if defined(MTD_NANDECC_PLACEONLY) || (defined(HAVE_DECL_MTD_NANDECC_PLACEONLY) && HAVE_DECL_MTD_NANDECC_PLACEONLY)
  XLAT(MTD_NANDECC_PLACEONLY),
#endif
#if defined(MTD_NANDECC_AUTOPL_USR) || (defined(HAVE_DECL_MTD_NANDECC_AUTOPL_USR) && HAVE_DECL_MTD_NANDECC_AUTOPL_USR)
  XLAT(MTD_NANDECC_AUTOPL_USR),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
