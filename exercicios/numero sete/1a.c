char *strcopy (char word [], char copy[]){ 
	int i = 0;
	if(word == NULL) return "Error";
	while(1){
		copy[i] = word[i];
		i++;
		if(word[i] == '\0'){
			copy[i] = '\0';
			return copy;
		}
	};
}
