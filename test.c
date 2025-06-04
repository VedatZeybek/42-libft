#include "libft.h"
#include <stdio.h>

// // Her string'i büyük harfe çeviren fonksiyon
// void *make_uppercase(void *content)
// {
//     char *old_str = (char *)content;
//     char *new_str = ft_strdup(old_str);  // Yeni string oluştur
    
//     int i = 0;
//     while (new_str[i])
//     {
//         if (new_str[i] >= 'a' && new_str[i] <= 'z')
//             new_str[i] = new_str[i] - 32;  // Büyük harfe çevir
//         i++;
//     }
//     return new_str;
// }

// int main()

// {
// 	//ÖNEMLİİİİİİİİİİİİİİİİİİİİİİİİİİİİİİİİİİ
// 	// /* t_list *node1 = ft_lstnew("vedat");
// 	// t_list *node2 = ft_lstnew("zeybek");
// 	// t_list *node3 = ft_lstnew("yoru"); */

// 	// // Use ft_strdup to create heap-allocated copies of the strings
//     // t_list *node1 = ft_lstnew(ft_strdup("vedat"));
//     // t_list *node2 = ft_lstnew(ft_strdup("zeybek"));
//     // t_list *node3 = ft_lstnew(ft_strdup("yoru"));

// 	// ft_lstadd_back(&node1, node2);
// 	// ft_lstadd_back(&node1, node3);

// 	// // Remove node2 from the list properly
//     // t_list *current = node1;
//     // t_list *prev = NULL;
    

// 	// while (current && current != node2)
// 	// {
// 	// 	prev = current;
// 	// 	current = current->next;
// 	// }

// 	// prev->next = current->next;


//     // ft_lstdelone(node2, free);

//     // // Print remaining nodes
//     // t_list *temp = node1;
//     // while (temp) {
//     //     printf("%s\n", (char*)temp->content);
//     //     temp = temp->next;
//     // }

//     // // Clean up remaining nodes
//     // ft_lstclear(&node1, free);


//  t_list *liste = ft_lstnew(ft_strdup("ahmet"));
//     ft_lstadd_back(&liste, ft_lstnew(ft_strdup("mehmet")));
//     ft_lstadd_back(&liste, ft_lstnew(ft_strdup("ayse")));
    
//     printf("Önce: ");
//     t_list *temp = liste;
//     while (temp)
//     {
//         printf("%s ", (char *)temp->content);
//         temp = temp->next;
//     }
//     printf("\n");
    
//     // ft_lstmap kullan - yeni liste oluştur
//     t_list *yeni_liste = ft_lstmap(liste, make_uppercase, free);
    
//     printf("Sonra: ");
//     temp = yeni_liste;
//     while (temp)
//     {
//         printf("%s ", (char *)temp->content);
//         temp = temp->next;
//     }
//     printf("\n");
    
//     // Temizlik
//     ft_lstclear(&liste, free);
//     ft_lstclear(&yeni_liste, free);

// }

// #include "libft.h"
// #include <stdio.h>

// void *copy_str(void *content)
// {
//     return ft_strdup((char *)content);
// }

// int main()
// {
//     // Orijinal liste
//     t_list *liste1 = ft_lstnew("a");
//     ft_lstadd_back(&liste1, ft_lstnew("b"));
//     ft_lstadd_back(&liste1, ft_lstnew("c"));
    
//     // Yeni liste oluştur
//     t_list *liste2 = ft_lstmap(liste1, copy_str, free);
    
//     // İkisini de yazdır
//     printf("Liste1: ");
//     t_list *temp = liste1;
//     while (temp) {
//         printf("%s ", (char*)temp->content);
//         temp = temp->next;
//     }
    
//     printf("\nListe2: ");
//     temp = liste2;
//     while (temp) {
//         printf("%s ", (char*)temp->content);
//         temp = temp->next;
//     }
    
//     return 0;
// }


// #include <stdio.h>

// // signed versiyon
// int	ft_memcmp_signed(const void *ptr1, const void *ptr2, size_t num)
// {
// 	size_t	i;
// 	char	*buffer1;
// 	char	*buffer2;

// 	i = 0;
// 	buffer1 = (char *)ptr1;
// 	buffer2 = (char *)ptr2;
// 	while (i < num)
// 	{
// 		if (buffer1[i] != buffer2[i])
// 			return (buffer1[i] - buffer2[i]);
// 		i++;
// 	}
// 	return (0);
// }

// // unsigned versiyon
// int	ft_memcmp_unsigned(const void *ptr1, const void *ptr2, size_t num)
// {
// 	size_t			i;
// 	unsigned char	*buffer1;
// 	unsigned char	*buffer2;

// 	i = 0;
// 	buffer1 = (unsigned char *)ptr1;
// 	buffer2 = (unsigned char *)ptr2;
// 	while (i < num)
// 	{
// 		if (buffer1[i] != buffer2[i])
// 			return (buffer1[i] - buffer2[i]);
// 		i++;
// 	}
// 	return (0);
// }

// int main(void)
// {
// 	char a = 127;     // 0x7F
// 	char b = -128;    // 0x80

// 	printf("signed result:   %d\n", ft_memcmp_signed(&a, &b, 1));
// 	printf("unsigned result: %d\n", ft_memcmp_unsigned(&a, &b, 1));

// 	return (0);
// }

#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	char *file_name = "test.txt";
	char *text = "hello sekai\n";

	printf("dosya açma: ");

	printf("%s\n",ft_itoa(12223423));
	fd = open(file_name, O_CREAT | O_WRONLY | O_TRUNC, 0644);

	ft_putstr_fd("selam \n", fd);

	close(fd);
	fd = open(file_name, O_RDONLY);

	char buffer[1024];
    int bytes_read;
        
    while ((bytes_read = read(fd, buffer, sizeof(buffer) - 1)) > 0)
    {
        buffer[bytes_read] = '\0';
        printf("%s", buffer);
    }
}
