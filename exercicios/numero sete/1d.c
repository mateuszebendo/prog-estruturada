int strcmp (char word1 [], char word2[]) {
	int j = 0, i = -1;
	while(word1[i] != '\0') i++;
	while(word2[j] != '\0') j++;
	if(j == i) return 0;
	if(j < i) return -1;
	if(j > i) return 1;
}