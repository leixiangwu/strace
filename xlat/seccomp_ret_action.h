/* Generated by ./xlat/gen.sh from ./xlat/seccomp_ret_action.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat seccomp_ret_action in mpers mode

#else

static
const struct xlat seccomp_ret_action[] = {
#if defined(SECCOMP_RET_KILL) || (defined(HAVE_DECL_SECCOMP_RET_KILL) && HAVE_DECL_SECCOMP_RET_KILL)
  XLAT(SECCOMP_RET_KILL),
#endif
#if defined(SECCOMP_RET_TRAP) || (defined(HAVE_DECL_SECCOMP_RET_TRAP) && HAVE_DECL_SECCOMP_RET_TRAP)
  XLAT(SECCOMP_RET_TRAP),
#endif
#if defined(SECCOMP_RET_ERRNO) || (defined(HAVE_DECL_SECCOMP_RET_ERRNO) && HAVE_DECL_SECCOMP_RET_ERRNO)
  XLAT(SECCOMP_RET_ERRNO),
#endif
#if defined(SECCOMP_RET_TRACE) || (defined(HAVE_DECL_SECCOMP_RET_TRACE) && HAVE_DECL_SECCOMP_RET_TRACE)
  XLAT(SECCOMP_RET_TRACE),
#endif
#if defined(SECCOMP_RET_ALLOW) || (defined(HAVE_DECL_SECCOMP_RET_ALLOW) && HAVE_DECL_SECCOMP_RET_ALLOW)
  XLAT(SECCOMP_RET_ALLOW),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
