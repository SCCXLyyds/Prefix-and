//����һ������Ϊ n ���������С�
//
//������������ m ��ѯ�ʣ�ÿ��ѯ������һ�� l,r��
//
//����ÿ��ѯ�ʣ����ԭ�����дӵ� l �������� r �����ĺ͡�
////
//�����ʽ
//��һ�а����������� n �� m��
//
//�ڶ��а��� n ����������ʾ�������С�
//
//������ m �У�ÿ�а����������� l �� r����ʾһ��ѯ�ʵ����䷶Χ��
//
//�����ʽ
//�� m �У�ÿ�����һ��ѯ�ʵĽ����
//
//���ݷ�Χ
//1��l��r��n,
//1��n,m��100000,
//-1000��������Ԫ�ص�ֵ��1000

#include <iostream>

using namespace std;
const int N=1e5+10;
int a[N],s[N],n,m,l,r;
int main()
{
//    a[0]=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)  s[i]=s[i-1]+a[i];
    while(m--){
        scanf("%d%d",&l,&r);
        printf("%d\n",s[r]-s[l-1]);
    }
    return 0;
}
//��ά����ǰ׺�ͣ�
#include <iostream>

using namespace std;
const int N=101;
int sum[N][N],a[N][N],x,y,l,r,L,R;
int main()
{
	scanf("%d%d%d%d%d%d",&x,&y,&l,&r,&L,&R);  //x<=l<=r<=L<=R<=y
	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			scanf("%d",&a[i][j]);
		}
	}
		for(int i=1;i<=x;i++){
			for(int j=1;j<=y;j++){
				sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];
			}
		}
		printf("%d\n",sum[L][R]-sum[l][r-1]);
	return 0;
}
 
