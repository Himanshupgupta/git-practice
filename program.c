// An example program to demonstrate working 
//array=[5,2,8,6,4,8,9,3]

#include<stdio.h> 

int main() 
{ 
	int i,j,k,x,y,z,n=8,temp;
	int array[]={5,2,8,6,4,8,9,3};
	
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
	}} 
	for(i=0;i<n;i++){
	printf("%d,",array[i]);
}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n-i;j++){
			for(k=i+2;k<n-1-i;k++){
				//printf("These are the three triplets : %d,%d and %d\n",array[i],array[j],array[k]);
				x=array[i];y=array[j];z=array[k];
				x=x*x;y=y*y;z=z*z;{
					if((x+y)==z){
	printf("These are the three triplets : %d,%d and %d\n",array[i],array[j],array[k]);}}}}}
	
	return 0; 
} 
