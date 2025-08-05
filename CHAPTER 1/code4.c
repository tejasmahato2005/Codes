 #include <stdio.h>

 const int N=3;

 float average(int lenght, int array[]);

 int main(void)
{
    int N;
    printf("number of scores: ");
    scanf("%d", &N);
    
    int scores[N];
    for (int i=0; i<N; i++)
    {
        printf("Score: ");
        scanf("%d", &scores[i]);
    }

    printf("average: %f\n", average(N,scores));

}
        float average(int length, int array[])
        {
            int sum=0;
            for(int i=0; i<length; i++)
            {
                sum+=array[i];
            }
            return sum/(float) length;
        }
