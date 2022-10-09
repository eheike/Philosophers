/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eheike <eheike@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:10:00 by eheike            #+#    #+#             */
/*   Updated: 2022/07/12 18:41:36 by eheike           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <pthread.h>
# include <sys/time.h>

struct	s_data;

typedef struct s_philo
{
	int				num;
	pthread_t		thr_id;
	int				eat_count;
	long long int	last_meal_time;
	int				left_fork;
	int				right_fork;
	struct s_data	*info;
}	t_philo;

typedef struct s_data
{
	int				num_of_ph;
	int				time_d;
	int				time_e;
	int				time_s;
	int				num_of_eat;
	long long		start_time;
	pthread_mutex_t	*forks;
	pthread_mutex_t	mut_print;
	pthread_mutex_t	mut_t;
	pthread_mutex_t	mut_e;
	pthread_t		*threads;
	t_philo			*philos;
}	t_data;

int				ft_atoi(const char *str);
int				start_treads(t_data *data);
long long int	get_time(void);
void			my_usleep(long long time);
void			*ph_rutin(void *philo);
int				print(t_philo *ph, char *str);
void			free_and_destroy(t_data *data);
t_data			*init_data(int argc, int *arg);
int				check_end(t_data *data);
#endif