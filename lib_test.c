#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* void	test_ft_isalpha(void)
{
	//Testing sunshine
	char c = 'c';
	int test;
	int result;

	test = isalpha(c);
	result = ft_isalpha(c);

	printf("Test should give positive: %d\n", test);
	printf("Result should give positive: %d\n", result);

	//Testing UPPERCASE
	c = 'Z';
	test = isalpha(c);
	result = ft_isalpha(c);

	printf("Test should give positive: %d\n", test);
	printf("Result should give positive: %d\n", result);


	//Testing not alpha
	c = '0';
	test = isalpha(c);
	result = ft_isalpha(c);

	printf("Test should return 0: %d\n", test);
	printf("Result should return 0: %d\n", result);
} */

/* void	test_ft_isdigit(void)
{
	//Sunshine
	char c = '1';
	int	test;
	int result;

	test = isdigit(c);
	result = ft_isdigit(c);
	printf("Test sould return NON zero: %d\n", test);
	printf("Result sould return NON zero: %d\n", result);

	//Alpha
	c = 'A';

	test = isdigit(c);
	result = ft_isdigit(c);
	printf("Test sould return zero: %d\n", test);
	printf("Result sould return zero: %d\n", result);
} */

/* void	test_ft_isalnum(void)
{
	//Sunshide
	char low =  'a';
	char up = 'A';
	char numb = '1';

	int test;
	int result;

	test = isalnum(low);
	printf("Test\t should return NON 0: %d\n", test);
	result = ft_isalnum(low);
	printf("Result\t should return NON 0: %d\n", result);

	test = isalnum(up);
	printf("Test\t should return NON 0: %d\n", test);
	result = ft_isalnum(up);
	printf("Result\t should return NON 0: %d\n", result);

	test = isalnum(numb);
	printf("Test\t should return NON 0: %d\n", test);
	result = ft_isalnum(numb);
	printf("Result\t should return NON 0: %d\n", result);

	//Non Alphanum
	low = '!';

	test = isalnum(low);
	printf("Test\t should return 0: %d\n", test);

	result = ft_isalnum(low);
	printf("Result\t should return 0: %d\n", result);
} */

/* void	test_ft_isascii(void)
{
	//Sunshine
	int	test;
	int result;
	char c = 'a';

	test = isascii(c);
	printf("Test\t should return nonzero: %d\n", test);
	result = ft_isascii(c);
	printf("Result\t should return nonzero: %d\n", result);

	//Non Ascii
	int noascci = 128;
	test = isascii(noascci);
	printf("Test\t should return nonzero: %d\n", test);
	result = ft_isascii(noascci);
	printf("Result\t should return nonzero: %d\n", result);

} */

/* void	test_ft_isprint(void)
{
	int printabele = 66;
	int test;
	int result;

	//Sunhsine
	test = isprint(printabele);
	printf("Test\t should return nonzero: %d\n", test);
	result = ft_isprint(printabele);
	printf("Result\t should return nonzero: %d\n", result);

	//Non print
	printabele = 1;

	test = isprint(printabele);
	printf("Test\t should return zero: %d\n", test);
	result = ft_isprint(printabele);
	printf("Result\t should return zero: %d\n", result);

} */

/* void	test_ft_toupper(void)
{
	//Sunshine
	char c = 'a';
	char test;
	char result;

	test = toupper(c);
	printf("Test\t should return A: %c\n", test);
	result = ft_toupper(c);
	printf("Result\t should return A: %c\n", result);

	//Already Upper
	c = 'Z';
	test = toupper(c);
	printf("Test\t should return Z: %c\n", test);
	result = ft_toupper(c);
	printf("Result\t should return Z: %c\n", result);
} */

/* void test_ft_tolower(void)
{
	//Sunshine
	char c = 'Z';
	char test;
	char result;

	test = tolower(c);
	printf("Test\t should return z: %c\n", test);
	result = ft_tolower(c);
	printf("Result\t should return z: %c\n", result);

	//Already lower
	c = 'a';
	test = tolower(c);
	printf("Test\t should return a: %c\n", test);
	result = ft_tolower(c);
	printf("Result\t should return a: %c\n", result);

} */

/* void test_ft_strlen(void)
{
	char	*str ="12345";
	int test;
	int result;

	//Sunshine
	test = strlen(str);
	printf("Test\t should return 5: %d\n", test);
	result = ft_strlen(str);
	printf("Result\t should return 5: %d\n", result);

	//Empty string
	str = "";
	test = strlen(str);
	printf("Test\t should return 0: %d\n", test);
	result = ft_strlen(str);
	printf("Result\t should return 0: %d\n", result);
} */

/* void	test_ft_strrchr(void)
{
	char	*str;
	char	letter;
	char	*result;
	char	*test;

	str = "banana com banana";
	letter = 'b';

	// Testing sunshine
	test = strrchr(str, letter);
	result = ft_strrchr(str, letter);

	printf("Test\t string: %s\n", test);
	printf("Reslult\t string: %s\n", result);
	printf("Test\t 1st char in string address: %p\n", test);
	printf("Reslult\t 1st char in string address: %p\n", result);

	//Testing char not found
	letter = 'z';
	test = strrchr(str, letter);
	printf("Test\t string should be null: %s\n", test);
	result = ft_strrchr(str, letter);
	printf("Result\t string should be null: %s\n", result);

	//Testing null string
	letter = 'b';
	str = "";
	test = strrchr(str, letter);
	printf("Test\t string should be null: %s\n", test);
	result = ft_strrchr(str, letter);
	printf("Result\t string should be null: %s\n", result);

} */

/* void	test_ft_strncmp(void)
{
	char *s1 = "Ola";
	char *s2 = "Ola";

	//testing matching strings, should return 0
	printf("Test\t should return 0: %d\n", strncmp(s1, s2, 2));
	printf("Result\t should return 0: %d\n", ft_strncmp(s1, s2, 2));

	//testing different strings, should return 1
	printf("Test\t should return 1: %d\n", strncmp("Oi", "Oa", 2));
	printf("Result\t should return 1: %d\n", ft_strncmp("Oi", "Oa", 2));

	//testing empty string, should return 1
	printf("Test\t should return 1: %d\n", strncmp("Oi", "", 4));
	printf("Result\t should return 1: %d\n", ft_strncmp("Oi", "", 4));
} */

/* void test_ft_strchr(void)
{
	char *str = "banana com banana";
	char letter = 'a';
	char *test;
	char *result;

	test = strchr(str, letter);
	printf("Test\t should return anana com banana: %s\n", test);

	result = ft_strchr(str, letter);
	printf("Result\t should return anana com banana: %s\n", result);
} */

/* void test_ft_memset(void)
{
    char str[15] = "Com banana!";
    char str2[15] = "Com banana!";
    int c = 'u';

	//Sunshine
    memset(str, c, 3);
	ft_memset(str2, c, 3);
    printf("Test\t should return 'uuu banana!': %s\n", str);
    printf("Result\t should return 'uuu banana!': %s\n", str2);

	//Big n, small dest
	memset(str, c, 20);
    printf("Test\t should return undefined behaviour: %s\n", str);
	ft_memset(str2, c, 20);
    printf("Result\t should return undefined behaviour: %s\n", str2);
} */

/* void	test_ft_bezero(void)
{
	char test_str[10];
	char result_str[10];
	
	//Sunshine
	bzero(test_str, sizeof(test_str));
	printf("Test\t should print 0000000000: ");
	for (int i = 0; i < 10; i++) {
        printf("%d", test_str[i]);// printing \0 as a number
    }
	printf("\n");

	ft_bzero(result_str, sizeof(result_str));
	printf("Result\t should print 0000000000: ");
	for (int i = 0; i < 10; i++) {
        printf("%d", result_str[i]);// printing \0 as a number
    }
	printf("\n");

	//When n > str size
	char bad_test_str[0];
	char bad_result_str[0];

	strcpy(bad_test_str, "oi");
	strcpy(bad_result_str, "oi");


	bzero(bad_test_str, sizeof(bad_test_str));
	printf("Test\t should print 00: ");
	for (int i = 0; i < sizeof(bad_test_str); i++) {
        printf("%d", bad_test_str[i]);// printing \0 as a number
    }
	printf("\n");

 	ft_bzero(bad_result_str, sizeof(bad_result_str));
	printf("Result\t should print 00: ");
	for (int i = 0; i < sizeof(bad_result_str); i++) {
        printf("%d", bad_result_str[i]);// printing \0 as a number
    }
	printf("\n");


} */

/* void	test_ft_memchr(void)
{
	const char str[] = "Teleponto";
	char ch = 'p';

	// Sunshine
	char *test;
	test = memchr(str, ch, strlen(str));
	printf("Test\t after |%c| is: |%s|\n", ch, test);

	char *result;
	result = ft_memchr(str, ch, strlen(str));
	printf("Result\t after |%c| is: |%s|\n", ch, test);

	printf("Original string: %s\n", str);

	// No char found
	ch = 'x';
	test = memchr(str, ch, strlen(str));
	printf("Test\t after |%c| is: |%s|\n", ch, test);

	result = ft_memchr(str, ch, strlen(str));
	printf("Result\t after |%c| is: |%s|\n", ch, test);

} */

/* void	test_ft_memcpy(void)
{
	const char src[7] = "Banana";
	char dest_test[8] = "Morango";
	char dest_result[8] = "Morango";

	//Sunshine
	printf("Before memcpy dest = %s\n", dest_test);
 	memcpy(dest_test, src, 2);
	printf("Test\t after memcpy dest = %s\n", dest_test);

 	memcpy(dest_result, src, 2);
	printf("Result\t after memcpy dest = %s\n", dest_result);

	//What if size bbigger than src?
	//Switch order to show same overflow
	memcpy(dest_test, src, 20);
	printf("Test\t after memcpy dest = %s\n", dest_test);

 	memcpy(dest_result, src, 20);
	printf("Result\t after memcpy dest = %s\n", dest_result);

} */

/* void test_ft_memcmp(void)
{
	char str1[15];
	char str2[15];
	int test;
	int result;
	int n;

	n = 5;
	memcpy(str1, "AbCDEF", 6);
	memcpy(str2, "ABCDEF", 6);

	//Sunshine 
	//Postive
	test = memcmp(str1, str2, n);
	printf("Test\t should be 32: %d\n", test);

	result = ft_memcmp(str1, str2, n);
	printf("Result\t should be 32: %d\n", result);

	//Negative
	memcpy(str1, "ABCDEF", 6);
	memcpy(str2, "AbCDEF", 6);
	
	test = memcmp(str1, str2, n);
	printf("Test\t should be -32: %d\n", test);

	result = ft_memcmp(str1, str2, n);
	printf("Result\t should be -32: %d\n", result);

	//Equal 
	memcpy(str1, "ABCDEF", 6);
	memcpy(str2, "ABCDEF", 6);
	
	test = memcmp(str1, str2, n);
	printf("Test\t should be 0: %d\n", test);

	result = ft_memcmp(str1, str2, n);
	printf("Result\t should be 0: %d\n", result);

	//N bigger than strings
	//WHY WHY WHY
 	n = 20;
	result = ft_memcmp(str1, str2, n);
	printf("Result\t should be 255: %d\n", result); 
	test = memcmp(str1, str2, n);
	printf("Test\t should be 255: %d\n", test);



} */

void	test_ft_memmove(void)
{
	char test_dest_str[] = "oldstring";
	char result_dest_str[] = "oldstring";
	const char src_str[]  = "newstring";

	//Sunshine
	memmove(test_dest_str, src_str, 1);
	printf("Test\t should output |nldstring|: %s\n", test_dest_str);

	ft_memmove(result_dest_str, src_str, 1);
	printf("Test\t should output |nldstring|: %s\n", result_dest_str);
}

int	main(void)
{

	//test_ft_isalpha();
	//test_ft_isdigit();
	//test_ft_isalnum();
	//test_ft_isascii();
	//test_ft_isprint();
	//test_ft_toupper();
	//test_ft_tolower();
	//test_ft_strlen(); 
	//test_ft_strrchr();
	//test_ft_strncmp();
	//test_ft_strchr();
	//test_ft_memset();
	//test_ft_bezero();
	//test_ft_memchr();
	//test_ft_memcpy();
	//test_ft_memcmp();
	test_ft_memmove();

	return (0);
}