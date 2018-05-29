/*
Copyright (c) 2012, Paula Roquero Fuentes <paula.roquero.fuentes@gmail.com>

Permission to use, copy, modify, and/or distribute this software for any purpose with or without fee is hereby granted, provided that the above copyright notice and this permission notice appear in all copies.

THE SOFTWARE IS PROVIDED AS IS AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
#include <string.h>



char *strnstr(const char *s1, const char *s2, size_t n)
{
    char *buf = NULL;
    char *ptr = NULL;
    char *result = NULL;

    buf = malloc(n + 1);
    if(buf == NULL) {
        return NULL;
    }

    memset(buf, 0, n + 1);

    strncpy(buf, s1, n);

    ptr = strstr(buf, s2);
    if (!ptr) {
        result = 0;
    } else {
        result = s1 + (ptr - buf);
    }

    free(buf);
    buf = NULL;

    return result;
}


#if 0
/* Puts the thread to sleep
 * thread: Thread which will be put to sleep
 * sec: amount of seconds it will sleep
 * usec: amount of microseconds it will sleep
 * NOTE: It will sleep seconds + nanoseconds.
 */
void time_sleep(int sec, int usec)
{
    struct timespec t, tr;

    t.tv_sec = sec;
    t.tv_nsec = usec * 1000;

    nanosleep(&t, &tr);

    return;
}
#endif