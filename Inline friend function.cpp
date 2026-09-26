#include &lt;iostream&gt;
using namespace std;
class Test {
private:
int value;
public:
Test(int v) {
value = v;
}
inline int getValue() {
return value;
}
friend void show(Test t);
};
void show(Test t) {
cout &lt;&lt; t.value;
}
int main() {

Test obj(50);
cout &lt;&lt; obj.getValue() &lt;&lt; endl;
show(obj);
return 0;
}
