# include <stdio.h>
int ways (int rows,int columns,int er,int ec){
   int rightways = 0;
   int downways = 0;

   if(rows==er && columns==ec){ return 1; }  // base case 

   if (rows == er) rightways += ways(rows,columns+1,er,ec);
   if (columns == ec) downways += ways(rows+1,columns,er,ec);
   if (rows<er && columns<ec){
     rightways += ways(rows+1,columns,er,ec);
     downways += ways(rows,columns+1,er,ec); }
     int total_ways = rightways + downways;
     return total_ways;
    }
int main ()
{
    int rows,columns;
    printf("enter the number of rows : ");
    scanf("%d",&rows);
    printf("enter the number of columns : ");
    scanf("%d",&columns);

    printf("the number of paths are : %d",ways(1,1,rows,columns));
    return 0;
}






























