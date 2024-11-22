#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


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

	//testing empty string, should return 0
	printf("Test\t should return 0: %d\n", strncmp("Oi", "Oix", 0));
	printf("Result\t should return 0: %d\n", ft_strncmp("Oi", "Oix", 0));


	printf("Test\t should return -1: %d\n", strncmp("Oi", "OiX", 42));
	printf("Result\t should return -1: %d\n", ft_strncmp("Oi", "OiX", 42));
	
	printf("Test\t should return -1: %d\n", strncmp("", "1", 1));
	printf("Result\t should return -1: %d\n", ft_strncmp("", "1", 1));
} */

/* void test_ft_strchr(void)
{
	//Sunshine
	char *str = "banana com banana";
	char letter = 'a';
	char *test;
	char *result;

	test = strchr(str, letter);
	printf("Test\t should return anana com banana: %s\n", test);

	result = ft_strchr(str, letter);
	printf("Result\t should return anana com banana: %s\n", result);


	//No letter found
	char not_found = 'i';
	char *test2;
	char *result2;
	test2 = strchr(str, 0);
	printf("Test\t : %s\n", test2);

	result2 = strchr(str, 0);
	printf("Result\t : %s\n", result2);



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

	// memcpy(dest_result, src, 20);
	// printf("Result\t after memcpy dest = %s\n", dest_result);

	// memcpy(dest_test, src, 20);
	// printf("Test\t after memcpy dest = %s\n", dest_test);

	//When src and dest are NULL, but size isnt
	//Both functions give segmentation fault
	//memcpy(((void*)0), ((void*)0), 3);
	//ft_memcpy(((void*)1), ((void*)0), 3);

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

/* void	test_ft_memmove(void)
{
	char test_dest_str[] = "oldstring";
	char result_dest_str[] = "oldstring";
	const char src_str[]  = "newstring";
	//Sunshine
	memmove(test_dest_str, src_str, 1);
	printf("Test\t should output |nldstring|: %s\n", test_dest_str);

	ft_memmove(result_dest_str, src_str, 1);
	printf("Result\t should output |nldstring|: %s\n", result_dest_str);

	//N bigger than source
	char *bad_src = "alo";
	char *test_bad_dest = "ola";
	char *result_bad_dest = "ola";

	memmove(test_bad_dest, bad_src, 20);
	printf("Test\t should output |nldstring|: %s\n", test_dest_str);

	//SHIT
	char str[] = "Hello, World!";
	char str_result[] = "Hello, World!"; 
	memmove(str + 6, str, 6);
	printf("%s\n", str);

	ft_memmove(str_result + 6, str_result, 6);
	printf("%s\n", str_result);
} */

/* void test_ft_strlcpy(void){

	int test;
	int result;


	//Sunshine
	char src[] = "Banana";
	char dest[] = "Morango";
	char dest_result[] = "Morango";
	test =	strlcpy(dest, src, 7);
	result = ft_strlcpy(dest_result, src, 7);

	printf("Test\t return %d with dest %s\n", test, dest);
	printf("Result\t return %d with dest %s\n", result, dest_result);
	
	char src[] = "Banana";
	char dest[] = "Ola";
	char dest_result[] = "Ola";
	test =	strlcpy(dest, src, 4);
	result = ft_strlcpy(dest_result, src, 4);

	printf("Test\t return %d with dest %s\n", test, dest);
	printf("Result\t return %d with dest %s\n", result, dest_result);

} */

/* void	test_ft_strnstr(void){
	char str[] = "bananai";
	char find[] = "nan";

	//Sunshine
	printf("Test\t output:%s\n", strnstr(str, find, 10));
	printf("Result\t output:%s\n", ft_strnstr(str, find, 10));

	//Not found
	char notfound[] = "coco";

	printf("Test\t output:%s\n", strnstr(str, notfound, 10));
	printf("Result\t output:%s\n", ft_strnstr(str, notfound, 10));

	//Empty String
	printf("Test\t output:%s\n", strnstr(str, "", 10));
	printf("Result\t output:%s\n", ft_strnstr(str, "", 10));
} */

/* void	test_ft_strlcat(void)
{
	//Sunshine
	char s1[] = "ola";
	char dest[10] = "adeus";
	printf("Test \t output should be 8 : %d\n\tstring should be |adeusola| : |%s|\n", strlcat(dest, s1, 9), dest);
	
	char result_s1[] = "ola";
	char result_dest[10] = "adeus";
	printf("Result \t output should be 8 : %zu\n\tstring should be |adeusola| : |%s|\n", ft_strlcat(result_dest, result_s1, 9), result_dest);

	//If dest size is smaller than full concatenation
	char dest2[10] = "ananas";
	char big_src[] = "banana";

	printf("Test \t output should be 12 : %d\n\tstring should be |ananas| : |%s|\n", strlcat(dest2, big_src, ft_strlen(big_src)), dest2);
	printf("Result \t output should be 12 : %zu\n\tstring should be |ananas| : |%s|\n", ft_strlcat(dest2, big_src, ft_strlen(big_src)), dest2);

	//Transverse size without null
	char dest3[10] = "bola";
	char src3[] = "cola";

	printf("Test \t output should be 4 : %d\n\tstring should be |bola| : |%s|\n", strlcat(dest3, src3, 3), dest3);
	printf("Result \t output should be 4 : %zu\n\tstring should be |bola| : |%s|\n", ft_strlcat(dest3, src3, 3), dest3);
}*/

void	test_ft_atoi(void)
{
	// //Sunshine
	char test_str[] = "2147483647";
	int test;
	int result;

	test = atoi(test_str);
	result = ft_atoi(test_str);
	printf("Test\t should be 2147483647 : %d\n", test);
	printf("Result\t should be 2147483647 : %d\n", result);

	// //Plus
	char plus[] = "+777";
	
	test = atoi(plus);
	result = ft_atoi(plus);
	printf("Test\t should be 777 : %d\n", test);
	printf("Result\t should be 777 : %d\n", result);

	//Double negative
	char doublenegativestr[] = "--1";

	test = atoi(doublenegativestr);
	result = ft_atoi(doublenegativestr);
	printf("Test\t should be 0 : %d\n", test);
	printf("Result\t should be 0 : %d\n", result);

	//Double positivie
	printf("Test\t should return 0: %d\n", atoi("++123"));
	printf("Result\t should return 0: %d\n", ft_atoi("++123"));

	// One negative
	char negative[] = "-12345";

	test = atoi(negative);
	result = ft_atoi(negative);
	printf("Test\t should be -12345 : %d\n", test);
	printf("Result\t should be -12345 : %d\n", result);

	// //Plus Minus
	char plus_minus[] = "+-12345";

	test = atoi(plus_minus);
	result = ft_atoi(plus_minus);
	printf("Test\t should be 0 : %d\n", test);
	printf("Result\t should be 0 : %d\n", result);

	//Lots of spaces
	char spaces[] = "   1";

	test = atoi(spaces);
	result= ft_atoi(spaces);
	printf("Test\t should be 1 : %d\n", test);
	printf("Result\t should be 1 : %d\n", result);

	// //With nont allowed chars
	char not_allowed[] = " !a";
	test = atoi(not_allowed);
	result= ft_atoi(not_allowed);
	printf("Test\t should be 0 : %d\n", test);
	printf("Result\t should be 0 : %d\n", result);

	// //Biggest negative int
	char big_negative[] = "–2147483648";
	test = atoi(big_negative);
	result= ft_atoi(big_negative);
	printf("Test\t should be 0 : %d\n", test);
	printf("Result\t should be 0 : %d\n", result);

	// //Biggest Positive int
	char big_pos[] = "2147483648";
	test = atoi(big_pos);
	result= ft_atoi(big_pos);
	printf("Test\t should be -2147483648 : %d\n", test);
	printf("Result\t should be -2147483648 : %d\n", result);
	
	// //Seccond biggest bneg int
	char sec_neg[] = "-2147483647";
	test = atoi(sec_neg);
	result= ft_atoi(sec_neg);
	printf("Test\t should be -2147483647 : %d\n", test);
	printf("Result\t should be -2147483647 : %d\n", result);

	// //Split numbers
	char split_numb[] = " 12a2";

	test = atoi(split_numb);
	result= ft_atoi(split_numb);
	printf("Test\t should be 12 : %d\n", test);
	printf("Result\t should be 12 : %d\n", result);

	//Valid big number
	printf("Test\t should be 1111111111 : %d\n", atoi("1111111111"));
	printf("Result\t should be 1111111111 : %d\n", ft_atoi("1111111111"));

	//Int in string is bigger than max int digits
	printf("Test\t should be -1 : %d\n", atoi("1111111111111111111111111111111111"));
	printf("Result\t should be -1 : %d\n", ft_atoi("1111111111111111111111111111111111"));

	//Number starting with zero
	printf("Test\t should be 123 : %d\n", atoi("00123"));
	printf("Result\t should be 123 : %d\n", ft_atoi("00123"));

	//Zero followed by space

    printf("Test\t should be 0 : %d\n", atoi("0 49"));
	printf("Result\t should be 0 : %d\n", ft_atoi("0 49"));

	//+ Followed by zeroes
	printf("Test\t should be 123 : %d\n", atoi("+0000000000000000000000000000000000000000000000000000123"));
	printf("Result\t should be 123 : %d\n", ft_atoi("+0000000000000000000000000000000000000000000000000000123"));
	
	//- Followed by zeroes
	printf("Test\t should be 123 : %d\n", atoi("+0000000000000000000000000000000000000000000000000000123"));
	printf("Result\t should be 123 : %d\n", ft_atoi("+0000000000000000000000000000000000000000000000000000123"));
}

/* void test_ft_strdup(void)
{
	// Sunshine
	char str[4] = "Ola";

	char *test;
	char *control_test;
	char *result;

	test = strdup(str);
	control_test = strdup(str);
	result = ft_strdup(str);

	printf("Str\t |%s| %p | %p\n", str, str, &str);
	printf("Test\t |%s| %p | %p\n", test, test, &test);
	printf("Control\t |%s| %p | %p\n", control_test, control_test,&control_test);
	printf("Result\t |%s| %p | %p\n", result, result, &result);

	//Empty string
	char empty[] = "";

	char *empty_test;
	char *empty_result;
	empty_test = strdup(empty);
	empty_result = ft_strdup(empty);

	printf("Test\t |%s|%p\n", empty_test, empty_test);
	printf("Result\t |%s|%p\n", empty_result, empty_result);
} */

/* void test_ft_substr(void)
{
	// char str[] = "Submarine";
	// printf("%s\n", ft_substr(str, 0, 3));
	// printf("%s\n", ft_substr(str, 4, 3));

	printf("%s\n", ft_substr("tripouille", 100, 1));
} */

/* void test_ft_join(void){
	char *str = ft_strjoin("Banana", "morango");
	printf("%s\n", str);
} */

/* void test_ft_strtrim(void)
{
	printf("%s\n", ft_strtrim("12ola12", "12"));
	printf("%s\n", ft_strtrim("ola12", "12"));
	printf("%s\n", ft_strtrim("12ola", "12"));
} */

/* void	test_ft_split(void)
{

	// Word . word . word
	char str[] = "apple.berry.orange";
	char **result;

	result = ft_split(str, '.');
	printf("Result[0]: %s\n", result[0]);
	printf("Result[1]: %s\n", result[1]);
	printf("Result[2]: %s\n", result[2]);

    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);  // Free each token
    }
    free(result);

	// . word . word .
	char str2[] = ".banana.morango.laranja.";
	char **result2;

	result2 = ft_split(str2, '.');
	printf("Result[0]: %s\n", result2[0]);
	printf("Result[1]: %s\n", result2[1]);
	printf("Result[2]: %s\n", result2[2]);
    
	for (int i = 0; result2[i] != NULL; i++) {
        free(result2[i]);  
    }
    free(result2);

	//. word . word . word
	char str3[] = ".platano.fresa.naranja";
	char **result3;

	result3 = ft_split(str3, '.');
	printf("Result[0]: %s\n", result3[0]);
	printf("Result[1]: %s\n", result3[1]);
	printf("Result[2]: %s\n", result3[2]);
    
	for (int i = 0; result3[i] != NULL; i++) {
        free(result3[i]);
    }
    free(result3);

	// No delimiter found
	char str4[] = "pato.porco.vaca";
	char **result4;

	result4 = ft_split(str4, 'x');
	printf("Result[0]: %s\n", result4[0]);
	free(result4[0]);
	free(result4);
} */

/* void	test_ft_itoa(void)
{
	int positive = 123;
	printf("%s\n", ft_itoa(positive));

	int negative = -123;
	printf("%s\n", ft_itoa(negative));
	
	int zero = 0;
	printf("%s\n", ft_itoa(zero));

	
	printf("%s\n", ft_itoa(-2147483647));

	printf("%s\n", ft_itoa(-2147483648));

} */

/* void	test_ft_calloc(void){

	int *test_arr;
	int *result_arr;
	int n;

	n = 5;

	test_arr = calloc(n, sizeof(int));
	result_arr = ft_calloc(n, sizeof(int));

	for (size_t i = 0; i < n; i++)
	{
		printf("result_arr[%zu] expected: %d, got %d\n", i, test_arr[i], result_arr[i]);
	}

} */

/* char strmapi_aux(unsigned int n, char c)
{
	return (c - 32);
} */

/* void test_ft_strmapi(void)
{
	char *str = "abcdef";
	printf("OG str\t: %s\n", str);
	printf("New str\t: %s\n", ft_strmapi(str, strmapi_aux));
} */

/* void striteri_aux(unsigned int n, char *c)
{
	*c = *c - 32;
}

void test_striteri(void)
{
	char str[] = "ola";

	printf("OG str\t: %s\n", str);
	ft_striteri(str, striteri_aux);
	printf("OG str\t: %s\n", str);

} */

/* void test_putchar_fd(void)
{
	ft_putchar_fd('a', 1);
	printf("\n");
} */


/* void test_putstr_fd(void)
{
	ft_putstr_fd("banana", 1);
	printf("\n");
} */

/* void test_putendl_fd(void)
{
	ft_putendl_fd("batata", 1);
} */

/* void test_putnbr_fd()
{
	//Nao posso usar o itoa pq so quero imprimir, n quero carregar na RAM
	ft_putnbr_fd(-42, 1);
	printf("\n");
	ft_putnbr_fd(0, 1);
	printf("\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
	ft_putnbr_fd(2147483647, 1);
} */

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
	//test_ft_memmove();
	//test_ft_strlcpy();
	//test_ft_strnstr();
	//test_ft_strlcat();
	test_ft_atoi();
	//test_ft_strdup();
	//test_ft_substr();
	//test_ft_join();
	//test_ft_strtrim();
	//test_ft_split();
	//test_ft_itoa();
	//test_ft_calloc();
	//test_ft_strmapi();
	//test_striteri();
	//test_putchar_fd();
	//test_putstr_fd();
	//test_putendl_fd();
	//test_putnbr_fd();

	return (0);
}