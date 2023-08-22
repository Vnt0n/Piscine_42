/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptchoula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:52:00 by ptchoula          #+#    #+#             */
/*   Updated: 2023/08/13 21:32:55 by ptchoula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>

int		ft_newstr(int args[16], char *str);
int		ft_rev_score(int *lign);
int		ft_score(int *lign);
int		ft_setclues(int clues[4][4], char *argv);
int		ft_settab(int tab[4][4]);
int		ft_solvetab(int tab[4][4], int clues[4][4], int index);
int		ft_strlen(char *str);
int		ft_valid_col(int tab[4][4], int clues[4][4], int index);
int		ft_valid_left(int tab[4][4], int index, int value);
int		ft_valid_row(int tab[4][4], int clues[4][4], int index);
int		ft_valid_tab(int tab[4][4], int clues[4][4]);
int		ft_valid_up(int tab[4][4], int index, int value);
int		ft_valid_value(int tab[4][4], int index, int value);
void	ft_errexit(void);
void	ft_putchar(char c);
void	ft_puttab(int tab[4][4]);

#endif
