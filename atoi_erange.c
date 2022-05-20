#include "push_swap.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\f'
		|| c == '\n' || c == '\r'
		|| c == '\t' || c == '\v');
}

static int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

static int	is_overflows(long current, long sign, char next)
{
	if (0 < sign)
	{
		if (INT_MAX / 10 < current)
			return (1);
		current = current * 10;
		if ((INT_MAX - current) < (next - '0'))
			return (1);
	}
	else
	{
		current = current * (-1);
		if (current < (INT_MIN / 10))
			return (1);
		current = current * 10;
		if (-(next - '0') < (INT_MIN - current))
			return (1);
	}
	return (0);
}

static long	do_conversion(const char *nptr, long sign, int *is_err)
{
	long		ret;

	ret = 0;
	while (ft_isdigit(*nptr))
	{
		if (is_overflows(ret, sign, *nptr))
		{
			if (sign > 0)
			{
				*is_err = 1;
				return (INT_MAX);
			}
			else
			{
				*is_err = 1;
				return (INT_MIN);
			}
		}
		ret = ret * 10 + (*nptr - '0');
		nptr++;
	}
	return (ret);
}

int	ft_atoi_erange(const char *nptr)
{
	long		ret;
	long		sign;
	int			is_err;

	ret = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			sign = -1;
	is_err = 0;
	ret = do_conversion(nptr, sign, &is_err);
	if (is_err)
	{
		errno = ERANGE;
		return ((int)ret);
	}
	return ((int)(sign * ret));
}
