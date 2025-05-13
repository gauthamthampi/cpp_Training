#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

#define MAX 200

char* numberToWord(int[], int, char[]);
int numberToArray(int[], int);
int searchTens(char[]);
int searchOnes(char[]);
int searchBigIndex(char[]);
int wordToNumber(char[]);

char ones[][20] = {
	"one ",
	"two ",
	"three ",
	"four ",
	"five ",
	"six ",
	"seven ",
	"eight ",
	"nine "
};

char tens[][20] = {
	"twenty ",
	"thirty ",
	"forty ",
	"fifty ",
	"sixty ",
	"seventy ",
	"eighty ",
	"ninety "
};

char elevens[][20] = {
	"ten ",
	"eleven ",
	"twelve ",
	"thirteen ",
	"fourteen ",
	"fifteen ",
	"sixteen ",
	"seventeen ",
	"eighteen ",
	"nineteen "
};

char bigIndex[][20] = {
	"thousand ",
	"lakh ",
	"crore "
};
int main()
{
	int choice;
	int arr[MAX], num, size;
	char word[MAX] = "";
	char str[MAX];
	cout << "Choose one option below to do conversion" << endl;
	cout << "1) Number to Word(eg:100 -> Hundred)" << endl;
	cout << "2) Word to Number(eg:one lakh -> 100000)" << endl;
	cout << "Enter choice: ";
	cin >> choice;
	getchar();
	switch (choice)
	{
	case 1:
		cout << "Enter the amount in numbers: ";
		cin >> num;
		cout << endl;
		size = numberToArray(arr, num);
		cout << numberToWord(arr, size, word);
		break;
	case 2:
		cout << "Enter the amount in words: ";
		cin.getline(str, MAX - 1);
		cout << wordToNumber(str);
		break;
	default:
		cout << "Invalid option";
		break;
	}
	cout << endl << endl;
	return 0;
}


char* numberToWord(int arr[], int size, char word[])
{
	if (size == 1)
	{
		strcat(word, ones[arr[0] - 1]);
		return word;
	}
	else if (size == 2)
	{
		if (arr[0] != 1)
		{
			strcat(word, tens[arr[0] - 2]);
			strcat(word, ones[arr[1] - 1]);
		}
		else
		{
			strcat(word, elevens[arr[1]]);
		}

		return word;
	}
	else if (size == 3)
	{
		strcat(word, ones[arr[0] - 1]);
		if (arr[1] != 0 || arr[2] != 0)
			strcat(word, "hundred and ");
		else
			strcat(word, "hundred ");
		if (arr[1] != 1)
		{
			strcat(word, tens[arr[1] - 2]);
			strcat(word, ones[arr[2] - 1]);
		}
		else
		{
			strcat(word, elevens[arr[2]]);
		}

		return word;
	}
	else
	{
		int n = size - 3, i;
		for (i = 0; i < size - 3;++i, --n)
		{
			if (n % 2 == 0)
			{
				if (arr[i] != 1)
				{
					strcat(word, tens[arr[i] - 2]);
				}
				else
				{
					strcat(word, elevens[arr[i + 1]]);
					strcat(word, bigIndex[(n - 1) / 2]);
					i++;
					n--;
				}
			}
			else
			{
				if (arr[i] != 0)
					strcat(word, ones[arr[i] - 1]);
				if (arr[i - 1] != 0)
					strcat(word, bigIndex[n / 2]);
			}
		}
		strcat(word, ones[arr[i] - 1]);
		if (arr[i] != 0)
			strcat(word, "hundred and ");
		if (arr[i + 1] != 1)
		{
			strcat(word, tens[arr[i + 1] - 2]);
			strcat(word, ones[arr[i + 2] - 1]);
		}
		else
		{
			strcat(word, elevens[arr[i + 2]]);
		}
		return word;
	}
	return word;
}

int numberToArray(int split[], int num) {
	int i = 0;
	while (num > 0) {
		split[i] = num % 10;
		i++;
		num /= 10;
	}
	reverse(split, split + i);
	return i;
}

int searchOnes(char str[])
{
	char ch[MAX];
	for (int i = 0; i < 9; ++i)
	{
		strcpy(ch, ones[i]);
		ch[strlen(ch) - 1] = '\0';
		if (strcmp(str, ch) == 0)
			return i;
	}
	return -1;
}

int searchTens(char str[])
{
	char ch[MAX];
	for (int i = 0; i < 7; ++i)
	{
		strcpy(ch, tens[i]);
		ch[strlen(ch) - 1] = '\0';
		if (strcmp(str, ch) == 0)
			return i;
	}
	return -1;
}

int searchElevens(char str[])
{
	char ch[MAX];
	for (int i = 0; i < 7; ++i)
	{
		strcpy(ch, elevens[i]);
		ch[strlen(ch) - 1] = '\0';
		if (strcmp(str, ch) == 0)
			return i;
	}
	return -1;
}

int searchBigIndex(char str[])
{
	char ch[MAX];
	for (int i = 0; i < 3; ++i)
	{
		strcpy(ch, bigIndex[i]);
		ch[strlen(ch) - 1] = '\0';
		if (strcmp(str, ch) == 0)
			return i;
	}
	return -1;
}

int wordToNumber(char str[])
{
	char* token = strtok(str, " ");
	int sum1 = 0, sum2 = 0;
	while (token)
	{

		if (searchBigIndex(token) != -1)
		{
			if (sum1 != 0)
				sum2 += sum1 * pow(10, ((2 * searchBigIndex(token)) + 3));
			else
				sum2 += pow(10, ((2 * searchBigIndex(token)) + 3));
			sum1 = 0;
		}
		else if (searchOnes(token) != -1)
		{
			sum1 += searchOnes(token) + 1;

		}
		else if (searchTens(token) != -1)
		{
			sum1 += ((searchTens(token) + 2) * 10);
		}
		else if (searchElevens(token) != -1)
		{
			sum1 += (searchElevens(token) + 10);
		}
		else if (strcmp(token, "hundred") == 0)
		{
			if (sum1 != 0)
				sum1 *= 100;
			else
				sum1 = 100;
		}
		token = strtok(NULL, " ");
	}
	return sum1 + sum2;
}