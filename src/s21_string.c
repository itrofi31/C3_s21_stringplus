#include "s21_string.h"

#include <string.h>
int main() {
  // printf("%lu\n", s21_strlen("Hello, World!"));
  // printf("%p\n", (char *)s21_memchr("Hello, World!", 'o', 13));
  // printf("%s\n", s21_strchr("hello", 'e'));
  // printf("%s\n", s21_strrchr("hello", 'l'));
  // printf("%s\n", strrchr("hello", 'l'));
  // printf("%s\n", s21_strpbrk("hello", "ell"));

  // printf("%s\n", strstr("", "Hello"));
  // printf("%s\n", s21_strstr("", "Hello"));
  // printf("%d\n", s21_memcmp("hello", "kel", 3));
  // printf("%d\n", s21_strncmp("h\0o", "hl\0", 3));
  // char str1[12] = "";
  // char str2[] = "hello World";
  // printf("%s\n", (char *)s21_memcpy(str1, str2, 12));
  // char str1[] = "hello World";
  // printf("%s\n", (char *)s21_memset(str1, '_', 3));

  // char str1[12];
  // printf("%lu", sizeof str1);

  // char str2[] = "hello World";
  // printf("%s\n", s21_strncpy(str1, str2, 12));

  // char str[] = "LOST: 4-8-15-16-23-42";
  // char keys[] = "1234567890";
  // printf("%lu\n", s21_strcspn(str, keys));
  // char str1[] = "ABCD";
  // char str2[] = "\0";
  // printf("%lu\n", strcspn(str1, str2));
  // printf("%lu\n", s21_strcspn(str1, str2));
  // printf("%lu\n", strcspn(str, keys));
  // char str1[12] = "hi ";
  // char str2[] = "Mike";
  // s21_strncat(str1, str2, 10);

  // char str[50] = "Hello, World! 123";
  // char delim[] = ", ";

  // char *token = s21_strtok(str, delim);
  // while (token != NULL) {
  //   printf("%s\n", token);
  //   token = s21_strtok(NULL, delim);
  // }
  // for (int i = 0; i < errors_size; i++) {
  // printf("%d %s\n", i, s21_strerror(i));
  // }
  printf("%s\n", s21_strerror(97));
  printf("%s\n", strerror(97));

  return 0;
}
