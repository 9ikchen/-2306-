#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,z;   //�����ж����㷽ʽ�ķ���
	double x, y, v;  //����������������
    cout << "�������������֣�" << endl;
	cin >> x >> y;
	cout << "���������㷽ʽ��1��2��3��4������" << endl;
	cin >> z;
	switch (z)
	{
	    case 1:
		    v= (x + y);
		    cout << "����ǣ�" << v << endl;
	    break;
	   
        case 2:
		    v = (x - y);
	        cout << "����ǣ�" << v << endl;
		break; 
		
        case 3:
	        v = (x * y);
			cout << "����ǣ�" << v << endl;
	    break;
		

		case 4:
			if (y== 0)
				cout << "����Ϊ0���޷����㣬���������룡" << endl;
		    v = (x / y);
			cout << "����ǣ�" << v << endl;
			
	   break;
		

	    default:                         //������������
	
			cout << "�޷����㣡" << endl;     
	}

	return 0;
}