/** 
 * Created by author on 2023/5/5 18:01
*/
#include "iostream"

using namespace std;

int main() {
    int score;
    cout << "please input your score: " << endl;
    cin >> score;
    // 1. if条件后面的括号不能省略
    // 2. if后面不能加分号，加了分号就变成了单独的语句，不再是if的判断语句
    if (score >= 750)
    {
        cout << "invalid score" << endl;
    }
    else if (score >= 600 && score < 750)
    {
        if (score >= 700)
        {
            cout << "congratulations, you are admitted to the Peking university" << endl;
        } else
        {
            cout << "congratulations, you are admitted to Shanghai university" << endl;
        }
        cout << "congratulations, you are admitted to the university" << endl;
    } else if (score >= 500 && score < 600)
    {
        cout << "congratulations, you are admitted to the college" << endl;
    } else if (score >= 400 && score < 500)
    {
        cout << "congratulations, you are admitted to the technical school" << endl;
    } else
    {
        cout << "sorry, you are not admitted" << endl;
    }

    int pig_a;
    int pig_b;
    int pig_c;
    cout << "please input the weight of pig a: " << endl;
    cin >> pig_a;
    cout << "please input the weight of pig b: " << endl;
    cin >> pig_b;
    cout << "please input the weight of pig c: " << endl;
    cin >> pig_c;

    if (pig_a > pig_b)
    {
        if (pig_a > pig_c)
        {
            cout << "pig a is the heaviest" << endl;
        } else
        {
            cout << "pig c is the heaviest" << endl;
        }
    } else
    {
        if (pig_b > pig_c)
        {
            cout << "pig b is the heaviest" << endl;
        } else
        {
            cout << "pig c is the heaviest" << endl;
        }
    }

    return 0;
}