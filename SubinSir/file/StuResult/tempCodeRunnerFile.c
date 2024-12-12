#include <stdio.h>

int main()
{
    FILE *fp_in, *fp_in1, *fp_in2, *fp_out;
    char *input_file = "math.txt";
    char *input_file1 = "english.txt";
    char *input_file2 = "bangla.txt";
    char *output_file = "average.txt";
    
    fp_in = fopen(input_file, "r");
    fp_in1 = fopen(input_file1, "r");
    fp_in2 = fopen(input_file2, "r");
    fp_out = fopen(output_file, "w");

    int roll, marks, roll1, marks1, roll2, marks2;
    double average;

    while (fscanf(fp_in, "%d %d", &roll, &marks) != EOF && 
           fscanf(fp_in1, "%d %d", &roll1, &marks1) != EOF &&
           fscanf(fp_in2, "%d %d", &roll2, &marks2) != EOF)
    {
        if (roll == roll1 && roll == roll2)
        {
            average = (marks + marks1 + marks2) / 3.0;
            printf("%d | %.2f\n", roll, average);
            fprintf(fp_out, "%d %d\n", roll, average);
        }
        else
            printf("Roll numbers do not match");
    }

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}