
static char sccsid[] = "@(#)cal.c	4.4 (Berkeley) 87/05/28";

typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;


typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;

typedef __clock_t clock_t;



typedef __time_t time_t;


typedef __clockid_t clockid_t;

typedef __timer_t timer_t;
typedef long unsigned int size_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef int int8_t ;
typedef int int16_t ;
typedef int int32_t ;
typedef int int64_t ;
typedef unsigned int u_int8_t ;
typedef unsigned int u_int16_t ;
typedef unsigned int u_int32_t ;
typedef unsigned int u_int64_t ;
typedef int register_t ;
typedef int __sig_atomic_t;
typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
typedef __sigset_t sigset_t;
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
typedef __suseconds_t suseconds_t;
typedef long int __fd_mask;
typedef struct
  {
    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];
  } fd_set;
typedef __fd_mask fd_mask;

extern int select (int __nfds, fd_set * __readfds,
     fd_set * __writefds,
     fd_set * __exceptfds,
     struct timeval * __timeout);
extern int pselect (int __nfds, fd_set * __readfds,
      fd_set * __writefds,
      fd_set * __exceptfds,
      const struct timespec * __timeout,
      const __sigset_t * __sigmask);



extern unsigned int gnu_dev_major (unsigned long long int __dev)
     ;

extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     ;

extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     ;

typedef __blksize_t blksize_t;
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef unsigned long int pthread_t;
typedef union
{
  char __size[56];
  long int __align;
} pthread_attr_t;
typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    int __spins;
    __pthread_list_t __list;
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;
typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    unsigned long long int __total_seq;
    unsigned long long int __wakeup_seq;
    unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  long long int __align;
} pthread_cond_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
typedef union
{
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;
    unsigned int __flags;
  } __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;
typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;



struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
  long int tm_gmtoff;
  const char *tm_zone;
};


struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
struct sigevent;

extern clock_t clock (void) ;
extern time_t time (time_t *__timer) ;
extern double difftime (time_t __time1, time_t __time0)
     ;
extern time_t mktime (struct tm *__tp) ;
extern size_t strftime (char * __s, size_t __maxsize,
   const char * __format,
   const struct tm * __tp) ;

typedef struct __locale_struct
{
  struct __locale_data *__locales[13];
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
} *__locale_t;
typedef __locale_t locale_t;
extern size_t strftime_l (char * __s, size_t __maxsize,
     const char * __format,
     const struct tm * __tp,
     __locale_t __loc) ;

extern struct tm *gmtime (const time_t *__timer) ;
extern struct tm *localtime (const time_t *__timer) ;

extern struct tm *gmtime_r (const time_t * __timer,
       struct tm * __tp) ;
extern struct tm *localtime_r (const time_t * __timer,
          struct tm * __tp) ;

extern char *asctime (const struct tm *__tp) ;
extern char *ctime (const time_t *__timer) ;

extern char *asctime_r (const struct tm * __tp,
   char * __buf) ;
extern char *ctime_r (const time_t * __timer,
        char * __buf) ;
extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;
extern char *tzname[2];
extern void tzset (void) ;
extern int daylight;
extern long int timezone;
extern int stime (const time_t *__when) ;
extern time_t timegm (struct tm *__tp) ;
extern time_t timelocal (struct tm *__tp) ;
extern int dysize (int __year) ;
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);
extern int clock_getres (clockid_t __clock_id, struct timespec *__res) ;

extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) ;


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     ;






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) ;




extern int timer_create (clockid_t __clock_id,
    struct sigevent * __evp,
    timer_t * __timerid) ;


extern int timer_delete (timer_t __timerid) ;


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec * __value,
     struct itimerspec * __ovalue) ;


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     ;


extern int timer_getoverrun (timer_t __timerid) ;


struct _IO_FILE;

typedef struct _IO_FILE FILE;


typedef struct _IO_FILE __FILE;
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
typedef int _G_int16_t ;
typedef int _G_int32_t ;
typedef unsigned int _G_uint16_t ;
typedef unsigned int _G_uint32_t ;
typedef __gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  int _pos;
};
enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
struct _IO_FILE {
  int _flags;
  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
typedef struct _IO_FILE _IO_FILE;
struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);
typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);
typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);
typedef int __io_close_fn (void *__cookie);
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) ;
extern int _IO_ferror (_IO_FILE *__fp) ;
extern int _IO_peekc_locked (_IO_FILE *__fp);



extern void _IO_flockfile (_IO_FILE *) ;
extern void _IO_funlockfile (_IO_FILE *) ;
extern int _IO_ftrylockfile (_IO_FILE *) ;
extern int _IO_vfscanf (_IO_FILE * , const char * ,
   __gnuc_va_list, int *);
extern int _IO_vfprintf (_IO_FILE *, const char *,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);
extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);
extern void _IO_free_backup_area (_IO_FILE *) ;
typedef __gnuc_va_list va_list;

typedef _G_fpos_t fpos_t;

extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;

extern int remove (const char *__filename) ;
extern int rename (const char *__old, const char *__new) ;

extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) ;

extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) ;

extern char *tmpnam_r (char *__s) ;
extern char *tempnam (const char *__dir, const char *__pfx)
     ;

extern int fclose (FILE *__stream);
extern int fflush (FILE *__stream);

extern int fflush_unlocked (FILE *__stream);

extern FILE *fopen (const char * __filename,
      const char * __modes) ;
extern FILE *freopen (const char * __filename,
        const char * __modes,
        FILE * __stream) ;

extern FILE *fdopen (int __fd, const char *__modes) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  ;
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) ;

extern void setbuf (FILE * __stream, char * __buf) ;
extern int setvbuf (FILE * __stream, char * __buf,
      int __modes, size_t __n) ;

extern void setbuffer (FILE * __stream, char * __buf,
         size_t __size) ;
extern void setlinebuf (FILE *__stream) ;

extern int fprintf (FILE * __stream,
      const char * __format, ...);
extern int printf (const char * __format, ...);
extern int sprintf (char * __s,
      const char * __format, ...) ;
extern int vfprintf (FILE * __s, const char * __format,
       __gnuc_va_list __arg);
extern int vprintf (const char * __format, __gnuc_va_list __arg);
extern int vsprintf (char * __s, const char * __format,
       __gnuc_va_list __arg) ;


extern int snprintf (char * __s, size_t __maxlen,
       const char * __format, ...)
     ;
extern int vsnprintf (char * __s, size_t __maxlen,
        const char * __format, __gnuc_va_list __arg)
     ;

extern int vdprintf (int __fd, const char * __fmt,
       __gnuc_va_list __arg)
     ;
extern int dprintf (int __fd, const char * __fmt, ...)
     ;

extern int fscanf (FILE * __stream,
     const char * __format, ...) ;
extern int scanf (const char * __format, ...) ;
extern int sscanf (const char * __s,
     const char * __format, ...) ;
extern int fscanf (FILE * __stream, const char * __format, ...) ;
extern int scanf (const char * __format, ...) ;
extern int sscanf (const char * __s, const char * __format, ...) ;


extern int vfscanf (FILE * __s, const char * __format,
      __gnuc_va_list __arg)
     ;
extern int vscanf (const char * __format, __gnuc_va_list __arg)
     ;
extern int vsscanf (const char * __s,
      const char * __format, __gnuc_va_list __arg)
     ;
extern int vfscanf (FILE * __s, const char * __format, __gnuc_va_list __arg)
     ;
extern int vscanf (const char * __format, __gnuc_va_list __arg)
     ;
extern int vsscanf (const char * __s, const char * __format, __gnuc_va_list __arg)
     ;


extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
extern int getchar (void);

extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);

extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
extern int putchar (int __c);








extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char * __s, int __n, FILE * __stream)
     ;






extern char *gets (char *__s) ;

extern __ssize_t __getdelim (char ** __lineptr,
          size_t * __n, int __delimiter,
          FILE * __stream) ;
extern __ssize_t getdelim (char ** __lineptr,
        size_t * __n, int __delimiter,
        FILE * __stream) ;
extern __ssize_t getline (char ** __lineptr,
       size_t * __n,
       FILE * __stream) ;

extern int fputs (const char * __s, FILE * __stream);
extern int puts (const char *__s);
extern int ungetc (int __c, FILE *__stream);
extern size_t fread (void * __ptr, size_t __size,
       size_t __n, FILE * __stream) ;
extern size_t fwrite (const void * __ptr, size_t __size,
        size_t __n, FILE * __s);

extern size_t fread_unlocked (void * __ptr, size_t __size,
         size_t __n, FILE * __stream) ;
extern size_t fwrite_unlocked (const void * __ptr, size_t __size,
          size_t __n, FILE * __stream);

extern int fseek (FILE *__stream, long int __off, int __whence);
extern long int ftell (FILE *__stream) ;
extern void rewind (FILE *__stream);

extern int fseeko (FILE *__stream, __off_t __off, int __whence);
extern __off_t ftello (FILE *__stream) ;

extern int fgetpos (FILE * __stream, fpos_t * __pos);
extern int fsetpos (FILE *__stream, const fpos_t *__pos);


extern void clearerr (FILE *__stream) ;
extern int feof (FILE *__stream) ;
extern int ferror (FILE *__stream) ;

extern void clearerr_unlocked (FILE *__stream) ;
extern int feof_unlocked (FILE *__stream) ;
extern int ferror_unlocked (FILE *__stream) ;

extern void perror (const char *__s);

extern int sys_nerr;
extern const char *const sys_errlist[];
extern int fileno (FILE *__stream) ;
extern int fileno_unlocked (FILE *__stream) ;
extern FILE *popen (const char *__command, const char *__modes) ;
extern int pclose (FILE *__stream);
extern char *ctermid (char *__s) ;
extern void flockfile (FILE *__stream) ;
extern int ftrylockfile (FILE *__stream) ;
extern void funlockfile (FILE *__stream) ;

char dayw[] = {
 " S  M Tu  W Th  F  S"
};
char *smon[]= {
 "January", "February", "March", "April",
 "May", "June", "July", "August",
 "September", "October", "November", "December",
};
char string[432];
main(argc, argv)
char *argv[];
{
 int y, i, j;
 int m;
 if(argc == 2)
  goto xlong;
 if(argc < 2) {
  time_t t;
  struct tm *tm;
  t = time(0);
  tm = (struct tm *) localtime(&t);
  m = tm->tm_mon + 1;
  y = tm->tm_year + 1900;
 } else {
  m = atoi(argv[1]);
  if(m<1 || m>12) {
   fprintf(stderr, "cal: %s: Bad month.\n", argv[1]);
   exit(1);
  }
  y = atoi(argv[2]);
  if(y<1 || y>9999) {
   fprintf(stderr, "cal: %s: Bad year.\n", argv[2]);
   exit(2);
  }
 }
 printf("   %s %u\n", smon[m-1], y);
 printf("%s\n", dayw);
 cal(m, y, string, 24);
 for(i=0; i<6*24; i+=24)
  pstr(string+i, 24);
 exit(0);
xlong:
 y = atoi(argv[1]);
 if(y<1 || y>9999) {
  fprintf(stderr, "cal: %s: Bad year.\n", argv[1]);
  exit(2);
 }
 printf("\n\n\n");
 printf("				%u\n", y);
 printf("\n");
 for(i=0; i<12; i+=3) {
  for(j=0; j<6*72; j++)
   string[j] = '\0';
  printf("	 %.3s", smon[i]);
  printf("			%.3s", smon[i+1]);
  printf("		       %.3s\n", smon[i+2]);
  printf("%s   %s   %s\n", dayw, dayw, dayw);
  cal(i+1, y, string, 72);
  cal(i+2, y, string+23, 72);
  cal(i+3, y, string+46, 72);
  for(j=0; j<6*72; j+=72)
   pstr(string+j, 72);
 }
 printf("\n\n\n");
 exit(0);
}
pstr(str, n)
char *str;
{
 register i;
 register char *s;
 s = str;
 i = n;
 while(i--)
  if(*s++ == '\0')
   s[-1] = ' ';
 i = n+1;
 while(i--)
  if(*--s != ' ')
   break;
 s[1] = '\0';
 printf("%s\n", str);
}
char mon[] = {
 0,
 31, 29, 31, 30,
 31, 30, 31, 31,
 30, 31, 30, 31,
};
cal(m, y, p, w)
char *p;
{
 register d, i;
 register char *s;
 s = p;
 d = jan1(y);
 mon[2] = 29;
 mon[9] = 30;
 switch((jan1(y+1)+7-d)%7) {
 case 1:
  mon[2] = 28;
  break;
 default:
  mon[9] = 19;
  break;
 case 2:
  ;
 }
 for(i=1; i<m; i++)
  d += mon[i];
 d %= 7;
 s += 3*d;
 for(i=1; i<=mon[m]; i++) {
  if(i==3 && mon[m]==19) {
   i += 11;
   mon[m] += 11;
  }
  if(i > 9)
   *s = i/10+'0';
  s++;
  *s++ = i%10+'0';
  s++;
  if(++d == 7) {
   d = 0;
   s = p+w;
   p = s;
  }
 }
}
jan1(yr)
{
 register y, d;
 y = yr;
 d = 4+y+(y+3)/4;
 if(y > 1800) {
  d -= (y-1701)/100;
  d += (y-1601)/400;
 }
 if(y > 1752)
  d += 3;
 return(d%7);
}
