/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:27:57 by shujiang          #+#    #+#             */
/*   Updated: 2023/03/22 10:33:46 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
//# define BASE16 "0123456789abcdefABCDEF" 
//insted of using static const char, I can define this set of char here.

# include <stdarg.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
int		ft_print_char(char c);
int		ft_print_str(char *str);
void	ft_print_int(int n, int *print_len);
int		ft_printf(const char *str, ...);

#endif 
