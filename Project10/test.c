#define MAX 10000
#include <stdio.h>
//����
//���泣��
//const���εĳ�����
//#define����ı�ʶ������
//ö�ٳ���

int main()
{
	//���泣������
	3.14;
	10;       //�����ͳ���
	'a';      //�ַ�����
	"abcdef"; //�ַ�������
	
	//const���εĳ�����
	/*const*/int num = 10;//���� ����ǰʹ��const�����̶������¾�num���ɸı䣬���򱨴�
	                      //��ʹ��const�������˿�num���ǳ����� - ���г����ԣ����ܱ��ı�����ԣ�
	                      //�������ϻ��Ǳ���
	                      //������int arr[10] = {0};//10��Ԫ��
	                      //const int n = 10��
	                      //int arr2[n] = {0};//n�Ǳ������˴���ʹ�ó������Ͼ���ʹ�ó�������coust���εı��������򱨴�
	num = 20;
	printf("num = %d\n", num);//��ʾֵΪ20

	//#define����ı�ʶ������
	int n = MAX;//��#define���壬MAX���ܸı�
	printf("%d\n", n);

	//ö�ٳ���
	//����һһ�оٵĳ���
	//�Ա�
	enum /*ö�ٹؼ���*/ Sex
	{
		//����ö�����͵ı�����δ������ȡֵ���� Ů ����
		//������ֵ��ö�ٳ���
		MALE,//����ֵ������һ���ʼ��ֵ����MALE = 3�������Ϊ 3 4 5
		FEMALE,
		SECRET
	};
//int main()            �˴�ʹ�ã�����Ӧ�����ĵ�mainͬʱ���֣��ʸ���
	enum Sex s = MALE;//���ֱ���ȡֵֻ�����������ֳ�����ֵ
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);//��ӡ���Ϊ 0 1 2��ö�ٳ�����ֵĬ�ϴ�0��ʼ

	return 0;
}
