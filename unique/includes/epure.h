/*
** epure.h for header in /home/mat/epitech/Makefile/unique/includes
** 
** Made by mat
** Login   <mat@epitech.net>
** 
** Started on  Mon Aug 11 21:33:30 2014 mat
** Last update Mon Aug 11 22:06:31 2014 mat
*/

/*
** headers du fichier correct.c
*/

#ifndef EPURE_H_
# define EPURE_H_

void	erase_exess(char *str);
void	eliminate_all_tabs(char *str);
int	no_useless_spaces(char *str);
void	eliminate_first_space(char *str);
void	eliminate_last_space(char *str);

#endif /* !EPURE_H_ */