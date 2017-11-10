for f in srcs_*
do mv "$f" "`echo $f | sed s/srcs_//`"
done

#remove srcs_ in the name of all files and repo
