class Solution {
public:
   int findComplement(int num) {
	ios_base::sync_with_stdio(false);
        cin.tie(NULL);
	int binaryNum[32], i;
	for(i = 0; num > 0; i++)
	{
		binaryNum[i] = num % 2;
		num = num / 2;
	}
	reverse(binaryNum, binaryNum + i);
	for (int j = 0; j < i; j++)
	{
		if (binaryNum[j] == 1)
			binaryNum[j] = 0;
		else
			binaryNum[j] = 1;
	}
	int x = 0, N = 0;
	while (i--)
	{
		x += binaryNum[i] * pow(2, N);
		N++;
	}
	return x;
}
};
