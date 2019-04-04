/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_specifier.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolfe <mrolfe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 16:27:55 by mrolfe            #+#    #+#             */
/*   Updated: 2019/04/04 14:19:18 by mrolfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strdup.c"
#include "ft_strnew.c"
#include "ft_strlen.c"

char    *type_specifier(t_spec *spec, va_list *ap)
{
	char	*res;

	if (spec->type == 'c')
		type_c(res, ap);
	if (spec->type == 's')
		type_s(res, ap);
	if (spec->type == 'p')
		type_p(res, ap);
	if (spec->type == 'd')
		type_d(res, ap);
	if (spec->type == 'f')
		type_f(res, ap);
	if (spec->type == 'i')
		type_i(res, ap);
	return ();
}

char *type_specifier(t_spec *spec, va_list *ap)
{
	int	nb;
	nb = va_atg(ap, int);
	if (spec->type == 'o')
		res = ft_itoa_base(nb, 8);
	if (spec->type == 'u')
		res = ft_itoa_base(nb, 10);
	if (spec->type == 'x')
		res = ft_itoa_base(nb, 16);
	if (spec->type == 'X')
		res = ft_itoa_base(nb, 16);
	return (res);

}

char    *type_c(char *res, va_list *ap)
{
	char	ch;

	//res = ft_strnew(1);
	res = (char*)malloc(2 * sizeof(char));
	ch = va_arg(ap, char);
	res[0] = ch;
	res[1] = '\0';
	return (res);
}

char    *type_s(char *res, va_list *ap)
{
	char	*s;
	int		len;

    len = (int)ft_strlen(char *res);
    res = (char*)malloc((len + 1) * sizeof(char));
    s = va_arg(ap, char);
    ft_strcpy(res, s);
	return (res);
}

char	*type_p(char *res, va_list *ap)
{
	int	nb;

	nb = va_atg(ap, int);
	res = ft_itoa_base(nb, 16);
	return (res);
}

char	*type_d(char *res, va_list *ap)
{

}

char	*type_f(char *res, va_list *ap)
{

}

char    *type_i(char *res, va_list *ap)
{
	int	nb;

	nb = va_atg(ap, int);
	res = ft_itoa(nb);
	return (res);
}

