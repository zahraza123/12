#include <stdio.h>
#define MAX 10
void multiplyMatrices(int first[MAX][MAX],int second[MAX][MAX], int result[MAX][MAX], int rowfirst , int columnSecond) {
    for (int i = 0; i < rowfirst ; ++i ) {
        for ( int j = 0 ; j < columnSecond ; ++j){
            result[i][j] = 0 ;
            for ( int k = 0 ; k < columnFirst ; ++k){
                result[i][j] += first[i][k] * second [k][j];
            }
        }
    }
}
void printMatrix (int matrix[MAX][MAX], int row , int column){
    for (int i = 0 ; i < row ; ++ i ){
        for (int j = 0 ; j < column ; ++j ){
            printf("%d" , matrix[i][j]);
        }
        printf("n");
    }
}
int main(){
    int first[MAX][MAX], second[MAX][MAX], result [MAX][MAX];
    int rowFirst, columnFirst, rowSecond, columnSecond;
    printf(" Tedad satr ha va sotonhaye matris aval : ");
    scanf ( "%d %d" , &rowFirst , &columnFirst );

    printf ( "Magader matris aval ra vared konid : n" );
    for (int i = 0 ; i < rowFirst ; ++i) {
        for ( int j = 0 ; j < columnFirst ; ++ j ) {
            scanf("%d" , &first[i][j]);
        }
    }
    printf("Tedad satr ha va soton haye matris dovom : ");
    scanf ("%d %d" , &rowSecond , &columnSecond);
    if ( columnFirst != rowSecond) {
        printf("Zarb do matris emkanpazer nist .n");
        return 1;
            }
printf("magader matris dovom ra vared konid :n");
for (int i = 0 ; i < rowSecond ; ++i){
for (int i = 0 ; j < columnSecond ; ++j ){
    scanf ("%d", &second[i][j]);
}
}
multiplyMatrices(first, second, result, rowFirst, columnFirst, rowSecond, columnSecond);
printf("Natege zarb do matris:n");
printMatrix(result, rowFirst, columnSecond);

return 0;
}