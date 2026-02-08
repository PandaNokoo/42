/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreboux <mreboux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:32:46 by sofombar          #+#    #+#             */
/*   Updated: 2026/02/08 16:47:15 by mreboux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPER_H
# define SKYSCRAPER_H
# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(char *str);
int		casposcol(char *copy);
int		cas_pos_col_inv_p2(char *copy);
int		cas_pos_col_inv_p1(char *copy);
int		cas_pos_col_p2(char *copy);
int		cas_pos_col_p1(char *copy);
int		casposli(char *copy);
int		cas_pos_col_inv_p2(char *copy);
int		cas_pos_li_inv_p1(char *copy);
int		cas_pos_li_p2(char *copy);
int		cas_pos_li_p1(char *copy);
void	affichage(char tab[6][6]);
char	*verif(int argc, char **argv, char *copy);
char	**creation_tableau(char *copy);
char	*pas_bon_arg(char *copy, char **argv);
char	*pas_bon_nb_arg(int argc, char *copy);
char	*resolver_si_4_col_p1(char tab[6][6]);
char	*resolver_si_4_col_p2(char tab[6][6]);
char	*resolver_si_4_li_p2(char tab[6][6]);
char	*resolver_si_4_li_p2(char tab[6][6]);

#endif
