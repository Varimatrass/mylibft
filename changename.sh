for f in *.c
do mv "$f" "`echo $f | sed s/ft_lst/ft_cdlst/`"
done
