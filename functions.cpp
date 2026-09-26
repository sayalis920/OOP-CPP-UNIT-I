#include &lt;iostream&gt;
using namespace std;
int add(int, int);
int main() {
int a = 10, b = 20;
cout &lt;&lt; &quot;Sum = &quot; &lt;&lt; add(a, b) &lt;&lt; endl;
return 0;
}
int add(int x, int y) {
return x + y;
}
