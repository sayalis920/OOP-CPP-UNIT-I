#include &lt;iostream&gt;
using namespace std;
class Student {
public:
string name;
int age;
void show() {
cout &lt;&lt; name &lt;&lt; &quot; &quot; &lt;&lt; age &lt;&lt; endl;
}
};
int main() {
Student s1;
s1.name = &quot;Amit&quot;;
s1.age = 20;
s1.show();
return 0;
}
