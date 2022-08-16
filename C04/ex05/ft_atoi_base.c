/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:51:30 by marvin            #+#    #+#             */
/*   Updated: 2022/08/15 21:51:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi_base(char *str, char *base);

int ft_atoi_base(char *str, char *base)
{
    
}
• Ecrire une fonction qui convertit le début de la chaîne pointée par str en entier de
type int.
• str est dans une base specifique passée en second argument de la fonction.
• A part le système de base, cette fonction doit reproduire le comportement de
ft_atoi.
• Si un paramètre contient une erreur la fonction renvoie 0. Une erreur peut être :
◦ la base est vide ou est de taille 1 ;
◦ la base contient deux fois le même caractère ;
◦ la base contient les caractères + ou - ou des whitespaces ;
• Elle devra être prototypée de la façon suivante :

