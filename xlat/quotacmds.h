/* Generated by ./xlat/gen.sh from ./xlat/quotacmds.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat quotacmds in mpers mode

#else

static
const struct xlat quotacmds[] = {
#if defined(Q_V1_QUOTAON) || (defined(HAVE_DECL_Q_V1_QUOTAON) && HAVE_DECL_Q_V1_QUOTAON)
  XLAT(Q_V1_QUOTAON),
#endif
#if defined(Q_V1_QUOTAOFF) || (defined(HAVE_DECL_Q_V1_QUOTAOFF) && HAVE_DECL_Q_V1_QUOTAOFF)
  XLAT(Q_V1_QUOTAOFF),
#endif
#if defined(Q_V1_GETQUOTA) || (defined(HAVE_DECL_Q_V1_GETQUOTA) && HAVE_DECL_Q_V1_GETQUOTA)
  XLAT(Q_V1_GETQUOTA),
#endif
#if defined(Q_V1_SETQUOTA) || (defined(HAVE_DECL_Q_V1_SETQUOTA) && HAVE_DECL_Q_V1_SETQUOTA)
  XLAT(Q_V1_SETQUOTA),
#endif
#if defined(Q_V1_SETUSE) || (defined(HAVE_DECL_Q_V1_SETUSE) && HAVE_DECL_Q_V1_SETUSE)
  XLAT(Q_V1_SETUSE),
#endif
#if defined(Q_V1_SYNC) || (defined(HAVE_DECL_Q_V1_SYNC) && HAVE_DECL_Q_V1_SYNC)
  XLAT(Q_V1_SYNC),
#endif
#if defined(Q_SETQLIM) || (defined(HAVE_DECL_Q_SETQLIM) && HAVE_DECL_Q_SETQLIM)
  XLAT(Q_SETQLIM),
#endif
#if defined(Q_V1_GETSTATS) || (defined(HAVE_DECL_Q_V1_GETSTATS) && HAVE_DECL_Q_V1_GETSTATS)
  XLAT(Q_V1_GETSTATS),
#endif
#if defined(Q_V1_RSQUASH) || (defined(HAVE_DECL_Q_V1_RSQUASH) && HAVE_DECL_Q_V1_RSQUASH)
  XLAT(Q_V1_RSQUASH),
#endif
#if defined(Q_V2_GETQUOTA) || (defined(HAVE_DECL_Q_V2_GETQUOTA) && HAVE_DECL_Q_V2_GETQUOTA)
  XLAT(Q_V2_GETQUOTA),
#endif
#if defined(Q_V2_SETQUOTA) || (defined(HAVE_DECL_Q_V2_SETQUOTA) && HAVE_DECL_Q_V2_SETQUOTA)
  XLAT(Q_V2_SETQUOTA),
#endif
#if defined(Q_V2_SETUSE) || (defined(HAVE_DECL_Q_V2_SETUSE) && HAVE_DECL_Q_V2_SETUSE)
  XLAT(Q_V2_SETUSE),
#endif
#if defined(Q_V2_GETINFO) || (defined(HAVE_DECL_Q_V2_GETINFO) && HAVE_DECL_Q_V2_GETINFO)
  XLAT(Q_V2_GETINFO),
#endif
#if defined(Q_V2_SETINFO) || (defined(HAVE_DECL_Q_V2_SETINFO) && HAVE_DECL_Q_V2_SETINFO)
  XLAT(Q_V2_SETINFO),
#endif
#if defined(Q_V2_SETGRACE) || (defined(HAVE_DECL_Q_V2_SETGRACE) && HAVE_DECL_Q_V2_SETGRACE)
  XLAT(Q_V2_SETGRACE),
#endif
#if defined(Q_V2_SETFLAGS) || (defined(HAVE_DECL_Q_V2_SETFLAGS) && HAVE_DECL_Q_V2_SETFLAGS)
  XLAT(Q_V2_SETFLAGS),
#endif
#if defined(Q_V2_GETSTATS) || (defined(HAVE_DECL_Q_V2_GETSTATS) && HAVE_DECL_Q_V2_GETSTATS)
  XLAT(Q_V2_GETSTATS),
#endif
#if defined(Q_SYNC) || (defined(HAVE_DECL_Q_SYNC) && HAVE_DECL_Q_SYNC)
  XLAT(Q_SYNC),
#endif
#if defined(Q_QUOTAON) || (defined(HAVE_DECL_Q_QUOTAON) && HAVE_DECL_Q_QUOTAON)
  XLAT(Q_QUOTAON),
#endif
#if defined(Q_QUOTAOFF) || (defined(HAVE_DECL_Q_QUOTAOFF) && HAVE_DECL_Q_QUOTAOFF)
  XLAT(Q_QUOTAOFF),
#endif
#if defined(Q_GETFMT) || (defined(HAVE_DECL_Q_GETFMT) && HAVE_DECL_Q_GETFMT)
  XLAT(Q_GETFMT),
#endif
#if defined(Q_GETINFO) || (defined(HAVE_DECL_Q_GETINFO) && HAVE_DECL_Q_GETINFO)
  XLAT(Q_GETINFO),
#endif
#if defined(Q_SETINFO) || (defined(HAVE_DECL_Q_SETINFO) && HAVE_DECL_Q_SETINFO)
  XLAT(Q_SETINFO),
#endif
#if defined(Q_GETQUOTA) || (defined(HAVE_DECL_Q_GETQUOTA) && HAVE_DECL_Q_GETQUOTA)
  XLAT(Q_GETQUOTA),
#endif
#if defined(Q_SETQUOTA) || (defined(HAVE_DECL_Q_SETQUOTA) && HAVE_DECL_Q_SETQUOTA)
  XLAT(Q_SETQUOTA),
#endif
#if defined(Q_XQUOTAON) || (defined(HAVE_DECL_Q_XQUOTAON) && HAVE_DECL_Q_XQUOTAON)
  XLAT(Q_XQUOTAON),
#endif
#if defined(Q_XQUOTAOFF) || (defined(HAVE_DECL_Q_XQUOTAOFF) && HAVE_DECL_Q_XQUOTAOFF)
  XLAT(Q_XQUOTAOFF),
#endif
#if defined(Q_XGETQUOTA) || (defined(HAVE_DECL_Q_XGETQUOTA) && HAVE_DECL_Q_XGETQUOTA)
  XLAT(Q_XGETQUOTA),
#endif
#if defined(Q_XSETQLIM) || (defined(HAVE_DECL_Q_XSETQLIM) && HAVE_DECL_Q_XSETQLIM)
  XLAT(Q_XSETQLIM),
#endif
#if defined(Q_XGETQSTAT) || (defined(HAVE_DECL_Q_XGETQSTAT) && HAVE_DECL_Q_XGETQSTAT)
  XLAT(Q_XGETQSTAT),
#endif
#if defined(Q_XQUOTARM) || (defined(HAVE_DECL_Q_XQUOTARM) && HAVE_DECL_Q_XQUOTARM)
  XLAT(Q_XQUOTARM),
#endif
#if defined(Q_XQUOTASYNC) || (defined(HAVE_DECL_Q_XQUOTASYNC) && HAVE_DECL_Q_XQUOTASYNC)
  XLAT(Q_XQUOTASYNC),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
