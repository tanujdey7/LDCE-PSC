#include <stdio.h>
float sine(float x)
{
	int i;
	float t, sum;

	x = (x * 3.14) / 180;
	t = x;
	sum = x;
	for (i = 1; i <= 5; i++)
	{
		t = (t * (-1) * x * x) / (2 * i * (2 * i + 1));
		sum = sum + t;
	}
	return sum;
}
int main()
{
	float x;
	double total;
	printf("Enter the value of x :");
	scanf("%f", &x);
	total = sine(x);
	printf("The value sin(%f) is %f :", x, total);
	return 0;
}
