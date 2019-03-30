/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_specifier.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolfe <mrolfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 16:27:55 by mrolfe            #+#    #+#             */
/*   Updated: 2019/03/30 17:26:12 by mrolfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    type_specifier(char c) // что еще передается
{
    if (format[*i] == 'c')
        type_c(char *format);
    if (format[*i] == 's')
        type_s(char *format);
    if (format[*i] == 'p')
        type_p(char *format);
    if (format[*i] == 'd')
        type_d(char *format);
    if (format[*i] == 'i')
        type_i(char *format);
    if (format[*i] == 'o')
        type_o(char *format);
    if (format[*i] == 'u')
        type_u(char *format);
    if (format[*i] == 'x')
        type_x(char *format);
    if (format[*i] == 'X')
        type_X(char *format);
}

char    *type_c(char *to_print, int   *ret)
{
    ft_strcpy(ret, to_print);
    return (*ret);
}

char    *type_i(char *to_print, int   *ret)
{
    ft_itoa();
}

// функция для того, чтобы выяснить, что конкретно из формат нужно печатать
char    *value_to_print(int argc, char  *argv, char *format)
{
    int i;
    char to_print;

    i = 0;
    while(argv[1][i])
    {
        to_print = argv[1][i];
        i++;
    }
    return (*to_print);
}