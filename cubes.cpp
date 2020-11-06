#include <iostream>
#include <io.h>
#include <fcntl.h>

__int64 size = 0;

std::wstring byFour(wchar_t ch)
{
	return std::wstring(size * 4, ch);
}

int main()
{
	int placebo = _setmode(_fileno(stdout), _O_U16TEXT);

	std::cin >> size;

	if (size <= 0) exit(0);

	std::wcout << std::wstring(size + 1, ' ') << L"\u2588" << byFour(L'\u2500') << L"\u2588\n";

	for (int i = 0; i < size; i++)
	std::wcout << std::wstring(size - i, ' ') << L"\u2571" << byFour(' ') << L"\u2571" << std::wstring(i, ' ') << L"\u2502" << std::endl;

	std::wcout << L"\u2588" << byFour(L'\u2500') << L"\u2588" << std::wstring(size, ' ') << L"\u2502\n";

	for (int i = 0; i < size - 1; i++)
	std::wcout << L"\u2502" << byFour(' ') << L"\u2502" << std::wstring(size, ' ') << L"\u2502\n";

	std::wcout << L"\u2502" << byFour(' ') << L"\u2502" << std::wstring(size, ' ') << L"\u2588\n";

	for (int i = 0; i < size; i++)
	std::wcout << L"\u2502" << byFour(' ') << L"\u2502" << std::wstring(size - i - 1, ' ') << L"\u2571\n";

	std::wcout << L"\u2588" << byFour(L'\u2500') << L"\u2588"; //commit1
}
