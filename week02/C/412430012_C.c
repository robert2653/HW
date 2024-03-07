 #include <stdio.h>

int main() {
    long long int n;
    scanf("%lld", &n); 

    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < 2 * n - 1; j++) { 
            
            if (i == n - 1) { 
                printf("*");
                
            } else if (j == n - i - 1 || j == n + i - 1) {
                printf("*");
                
            } else if(j<n+i-1) { 
                printf(" ");
            }
            
        }printf("\n");
         
    }
            
                for(int i = 0;i<n;i++)
                {
                    for(int j=0;j<2*n-1;j++)
                    {
                        if(j==n-1)
                        {
                            printf("*\n");
                            break;
                        }
                        else
                        {
                            printf(" ");
                        }
                        
                    }//printf("\n");
                }//printf("\n");
    return 0;
}
