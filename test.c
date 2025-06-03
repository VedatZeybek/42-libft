#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    
    printf("ft_strlen test:\n");
    char *str = "Hello World";
    printf("   '%s' uzunluğu: %zu (beklenen: %zu)\n", 
           str, ft_strlen(str), strlen(str));
    
    printf("ft_strchr test:\n");
    char *result = ft_strchr(str, 'W');
    printf("   'W' karakteri bulundu: %s\n", result ? result : "NULL");
    
    printf("ft_atoi test:\n");
    char *num_str = "9223372036854775808";
    printf("   '%s' -> %d\n %d\n", num_str, ft_atoi(num_str), atoi(num_str));
    
	int x = 2131;
	printf("%s",ft_itoa(x));
    printf("ft_split test:\n");
    char **split_result = ft_split("apple,banana,cherry", ',');
    if (split_result)
    {
        for (int i = 0; split_result[i]; i++)
            printf("   [%d]: %s\n", i, split_result[i]);
    }
    
    printf("ft_substr test:\n");
    char *sub = ft_substr("Hello World", 6, 5);
    printf("   Substring: '%s'\n", sub);
    
    t_list *node1 = ft_lstnew("First");
    t_list *node2 = ft_lstnew("Second");
    t_list *node3 = ft_lstnew("Third");
    

    node1->next = node2;
    node2->next = node3;
    
    printf("Liste boyutu: %d\n", ft_lstsize(node1));
    printf("Son eleman: %s\n", (char*)ft_lstlast(node1)->content);
    
    return 0;
}