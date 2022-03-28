/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kczichow <kczichow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:47:38 by kczichow          #+#    #+#             */
/*   Updated: 2022/03/28 19:40:23 by kczichow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int i)
{
	if (('A' <= i && i <= 'Z') || ('a' <= i && i <= 'z'))
		return (1);
	return (0);
}

int	main(void)
{
	printf("%d", ft_isalpha('0'));
	return (0);
}
