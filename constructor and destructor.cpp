#include &lt;iostream&gt;
using namespace std;
class Demo {
public:

Demo() {
cout &lt;&lt; &quot;Constructor called
&quot;;
}
~Demo() {
cout &lt;&lt; &quot;Destructor called
&quot;;
}
};
int main() {
Demo d;
return 0;
}
