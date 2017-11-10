for f in *.c
do mv "$f" "`echo $f | sed s/ft_lst/ft_cdlst/`"
done

#change the name of all *.c with ft_lst in to ft_cdlst in
