/*
다음과 같은 형태로의 함수 오버로딩은 문제가 있다. 어떠한 문제가 있는지 설명해보자.

int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc(void)
{
	return 10;
}

-> SimpleFunc()을 호출했을 때, SimpleFunc()인지 SimpleFunc(10)인지 알 수 없다.
*/