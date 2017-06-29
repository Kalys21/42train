FT_USER=root
export FT_USER

groups $FT_USER | sed "s/ /\,/g" 
