#include &lt;iostream&gt;
using namespace std;
class Student {
public:
static int count;
Student() {
count++;
}
};

int Student::count = 0;
int main() {
Student s1, s2, s3;
cout &lt;&lt; Student::count;
return 0;
}
