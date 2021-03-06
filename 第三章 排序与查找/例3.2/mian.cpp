#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

struct Student {
	int number;
	int score;
};

Student arr[100];

bool Compare(Student x, Student y) {
	if (x.score == y.score) {
		return x.number < y.number;
	}
	else {
		return x.score < y.score;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d%d", &arr[i].number, &arr[i].score);
	}

	sort(arr, arr + n, Compare);

	for (int i = 0; i < n; ++i) {
		printf("%d %d\n", arr[i].number, arr[i].score);
	}
	return 0;
}