#include<iostream>
#include<string>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<unistd.h>
#include<cstdlib>
#include<conio.h>
#define random(x) (rand()%x)
using namespace std;

void SetPos(COORD a)
{
	HANDLE out=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(out, a);
}
 
void SetPos(int i, int j)
{
	COORD pos={i, j};
	SetPos(pos);
}
void zz(int ti){
	while(!kbhit()){
		SetPos(0,0);
		cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	}
	SetPos(0,15);
	return;
}
int main(){
	srand((int)time(0));
	cout<<"��ӭ����������Ϸ������1������"<<endl;
	 double a,yt=0;
	 cin>>a;
	 if(a==1){ 
	 cout<<"��ʼ��"<<endl;
	 } 
	 else
	 cout<<"������ʼ��"<<endl;
	 
	 cout<<"P1��ʼѡ���ɫ������"<<endl;
	 cout << "��ѡ�����ݣ�1�����������ˣ���һ��                2�����ӻ����ӣ���2��                          3��ҰӢ�ۣ�������                          4�����ɣ����ģ�                                        5��Xս��"; 
	 int zhenrong;
	 cin >> zhenrong;
	 if(zhenrong == 1)
	 {
		 cout<<"1�Ǹ�����(��14Զ5)��2��֩����(��6Զ12),3�����첩ʿ(��5Զ30(Զ��ȴ3�غ�)),4�������ӳ�(��6Զ20(Զ��ȴ1�غ�)),5�Ǻƿ�(��9Զ7(��Ѫ+8))"<<endl;
		 int b,u=0,b2,g,g2,t=0;
		 cin>>b;
		 switch(b){
	 	case 1:cout<<"P1ѡ���˸�����"<<endl;
		 g=14;
		 g2=5;break;
	 	case 9999:cout<<"��ϲ����ѡ�����������һ��������7��Ѫ)(��100Զ55)"<<endl;
	 	    g=100000;g2=5500;
	 	    u=1;break;
		 default:cout<<"P1ѡ����֩����"<<endl;
		     g=6;
		     g2=12; 
		     break;
		case 3:	cout<<"P1ѡ�������첩ʿ"<<endl; 
		    g=5;
		    g2=30;
		    t=3;
		    break;
		case 4: cout<<"P1ѡ���������ӳ�"<<endl;
		    g=6;
			g2=20;
			t=1;
			break;
		case 5: cout<<"P1ѡ���˺ƿ�"<<endl; 
		    g=9;
		    g2=7;
	 } 
	 
	 cout<<"ѡ��ģʽ��1�ǵ���,2�Ƿ��"<<endl;
	 int mode;
	 cin>>mode;
	 if(mode==1)
	 	cout<<"������ʼ����ģʽ"<<endl;
	 else if(mode==2){
	 	cout<<"������ʼ���ģʽ������Σ�գ�"<<endl;
	 }else cout<<"δ����"<<endl;
	 if(mode==1) cout<<"ѡ���Ѷ� 1�Ǽ� 2������ 3������ 4�Ƿ�� 5�Ǽ��� 6�ǳ����� 7�ǵ��� 8�ǲ����ܣ�����ѡ��5+��"<<endl;
	 if(mode==2) cout<<"ѡ����� 1��������(level 4) 2�ǰ´�(level 6!!) 3����ľ��(level 7!!!) 4�Ǻڰ�����(level 6!!) 5�����(level 7!!!) 6��������(level 7!!!) 7��������(level 7!!!)"<<endl;
	 int d;
	 cin>>d; 
	 cout<<"��ѡ��"<<d<<endl; 
	 cout<<"gogogogo"<<endl;
	 bool game=true;
	 double you=50,kill,f=25,zf=0,h,q,ran,ti=(double)clock()/CLOCKS_PER_SEC,nti,nzt=0,nzt2=0,nzt3=0,du=0;
	 int e,zdp=0,x;
	 long long ze=3*d;            
	 double zomble=30*d,zd=0;
	 if(mode==1){
	 	for(q=1; ;q++){
	 	yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"��ͨС��"<<"                                   "<<"Ѫ����"<<zomble<<endl;
	 	cout<<"����:"<<"��";
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"��"<<"                                     "<<"Ѫ����"<<you<<endl;
	 	cout<<"1�Ǵ�              2�ǲ�Ѫ            3����"<<endl;

	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;

	 	if(t>0&&e==3){
	 		cout<<"������ȴ�С���"<<endl;
	 		e=9;
		 }
	 	switch(e){
	 	   case 1:zomble=zomble-g;
			yt=(random(2))+0.3*d;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"�����30��Ѫ"<<endl;
			         usleep(500000);
			         cout<<"Ѫƿ��ʣ"<<f<<"ƿ"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"��ʹ����DEBUG��Ѫ����99999�Σ�"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:zomble=zomble-g2;
	 }
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2){
	 	you+=8;
	 	cout<<"������8��Ѫ"<<endl;
		usleep(500000); 
	 }
	 you=you-ze;
	 cout<<"С�����������"<<ze<<"���˺�"<<endl;
	 usleep(500000);
	 cout<<"���ܵ���"<<yt<<"�㷴��"<<endl;
	 usleep(500000);
	 if(e==1){
	 	cout<<"С���ܵ���"<<g<<"���˺�"<<endl; 
	 	usleep(500000);
	 }else if(e==3){
	     cout<<"С���ܵ���"<<g2<<"���˺�"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"��"<<"��"<<q<<endl;
	 	cout<<"�㻨��"<<nti<<"��"; 
		sleep(10);
		system("pause");
	 	return 0;
	 }
	 } 
	}else if(mode==2){
		switch(d){
			case 1:zomble=100;ze=15;zdp=65;break;
			case 2:zomble=30;ze=28;zdp=60;break;
			case 3:zomble=150;ze=20;zdp=20;nzt=(double)clock()/CLOCKS_PER_SEC;break;
			case 4:zomble=100;ze=10;zdp=10;du=0;break;
			case 5:zomble=1;ze=1;zdp=98;break;
			case 6:zomble=50;ze=14;zdp=0;zf=25;break;
			case 7:zomble=50;ze=12;zdp=0;zf=25;break;
			default:return 0;
		} 
		for(q=1; ;q++){
		yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"����"<<"                                   "<<"Ѫ����"<<zomble<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"��"<<"                                     "<<"Ѫ����"<<you<<endl;
	 	cout<<"1�Ǵ�              2�ǲ�Ѫ            3����"<<endl;
	 	nzt=(double)clock()/CLOCKS_PER_SEC;
	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;
	 	nzt2=(double)clock()/CLOCKS_PER_SEC;
	 	nzt3=nzt2-nzt-1;
	 	nzt3*=10;
	 	if(nzt2-nzt>0.5&&d==3){
	 		cout<<"��̫���ˣ�����͵Ϯ����"<<endl;
	 		usleep(500000);
	 		cout<<"���ܵ���"<<20+nzt3<<"���˺�"<<endl;
	 		usleep(500000);
	 		you=you-20-nzt3;
		}
		if(d==4){
			nzt=(random(3));
			cout<<"����ж��̶�������"<<nzt<<endl;
			usleep(500000);
			du+=nzt;
		}
		if(d==5){
			you-=(nzt2-nzt)*60;
			cout<<"���˶���������"<<(nzt2-nzt)*60<<"���˺�"<<endl;
		}
		bool d6flag=false;
		d6flag=false; 
		if(d>=6&&d<=7){
			if((e==1||e==3)&&((zomble-g<=1&&e==1)||(zomble-g2<=1&&e==3))&&zf>0){
				cout<<"������ʹ����Ѫƿ����30��Ѫ"<<endl; 
				zf--;
			    cout<<"�������Ѫƿ��ʣ"<<zf<<"ƿ"<<endl;
			    zomble+=30;
			    usleep(500000);
			}else{
				if(d==7){
					cout<<"���������������"<<endl;
				    d6flag=true;
				    usleep(500000);
				}else{
				    cout<<"���������������"<<endl;
				    cout<<"�������ܵ���0.3�㷴��"<<endl;
				    zomble-=0.3;
				    d6flag=true;
			    	usleep(500000);
			    }
			} 
		}
	 	if(t>0&&e==3){
	 		cout<<"������ȴ�С���"<<endl;
	 		usleep(500000);
	 		e=9;
		 }
		 x=(random(100));
	 	switch(e){
	 	   case 1:if(x>=zdp) {zomble=zomble-g;}
			yt=(random(5))+0.3;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"�����30��Ѫ"<<endl; 
			         usleep(500000);
			         cout<<"Ѫƿ��ʣ"<<f<<"ƿ"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"��ʹ����DEBUG��Ѫ����99999�Σ�"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:if(x>=zdp) {zomble=zomble-g2;}
	 }
	 if(x<zdp&&e!=2&&t<=0){
	 	cout<<"��Ĺ�������/�����ˣ�"<<endl;
		 usleep(500000); 
	 } 
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2&&x>=zdp){
	 	you+=8;
	 	cout<<"������8��Ѫ"<<endl;
		usleep(500000); 
	 }
	if(d6flag){
	    cout<<"���˶��������"<<ze<<"���˺�"<<endl;
	    you=you-ze;
	}
	 if(d==4){
	 	cout<<"���ж��ˣ����ܵ���"<<du<<"���˺�"<<endl; 
	 	usleep(500000);
	 	you-=du;
	 }
	 usleep(500000);
	 cout<<"���ܵ���"<<yt<<"�㷴��"<<endl; 
	 usleep(500000);
	 if(e==1&&x>=zdp){
	 	cout<<"�����ܵ���"<<g<<"���˺�"<<endl; 
	 	usleep(500000);
	 }else if(e==3&&x>=zdp){
	     cout<<"�����ܵ���"<<g2<<"���˺�"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"��"<<"��"<<q<<endl;
	 	cout<<"�㻨��"<<nti<<"��";
		sleep(10);
		system("pause"); 
	 	return 0;
	 }
    }
    }
	}
	if(zhenrong == 2)
	{
		cout<<"1���Ǿ�(��10Զ10)��2�ǿ�ħ��(��7Զ12),3�Ǹ�³��(��5Զ30(Զ��ȴ3�غ�)),4�ǻ��(��6Զ20(Զ��ȴ1�غ�)),5�����Ů(��1Զ2(��Ѫ+8))"<<endl;
		 int b,u=0,b2,g,g2,t=0;
		 cin>>b;
		 switch(b){
	 	case 1:cout<<"P1ѡ�����Ǿ�"<<endl;
		 g=10;
		 g2=10;break;
	 	case 9999:cout<<"��ϲ����ѡ�����������һ��������7��Ѫ)(��100Զ55)"<<endl;
	 	    g=100000;g2=5500;
	 	    u=1;break;
		 default:cout<<"P1ѡ���˿�ħ��"<<endl;
		     g=7;
		     g2=12; 
		     break;
		case 3:	cout<<"P1ѡ���˸�³��"<<endl; 
		    g=5;
		    g2=30;
		    t=3;
		    break;
		case 4: cout<<"P1ѡ���˻��"<<endl;
		    g=6;
			g2=20;
			t=1;
			break;
		case 5: cout<<"P1ѡ�������Ů"<<endl; 
		    g=1;
		    g2=2;
	 } 
	 
	 cout<<"ѡ��ģʽ��1�ǵ���,2�Ƿ��"<<endl;
	 int mode;
	 cin>>mode;
	 if(mode==1)
	 	cout<<"������ʼ����ģʽ"<<endl;
	 else if(mode==2){
	 	cout<<"������ʼ���ģʽ������Σ�գ�"<<endl;
	 }else cout<<"δ����"<<endl;
	 if(mode==1) cout<<"ѡ���Ѷ� 1�Ǽ� 2������ 3������ 4�Ƿ�� 5�Ǽ��� 6�ǳ����� 7�ǵ��� 8�ǲ����ܣ�����ѡ��5+��"<<endl;
	 if(mode==2) cout<<"ѡ����� 1��������(level 4) 2�ǰ´�(level 6!!) 3����ľ��(level 7!!!) 4�Ǻڰ�����(level 6!!) 5�����(level 7!!!) 6��������(level 7!!!) 7��������(level 7!!!)"<<endl;
	 int d;
	 cin>>d; 
	 cout<<"��ѡ��"<<d<<endl; 
	 cout<<"gogogogo"<<endl;
	 bool game=true;
	 double you=50,kill,f=25,zf=0,h,q,ran,ti=(double)clock()/CLOCKS_PER_SEC,nti,nzt=0,nzt2=0,nzt3=0,du=0;
	 int e,zdp=0,x;
	 long long ze=3*d;            
	 double zomble=30*d,zd=0;
	 if(mode==1){
	 	for(q=1; ;q++){
	 	yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"��ͨС��"<<"                                   "<<"Ѫ����"<<zomble<<endl;
	 	cout<<"����:"<<"��";
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"��"<<"                                     "<<"Ѫ����"<<you<<endl;
	 	cout<<"1�Ǵ�              2�ǲ�Ѫ            3����"<<endl;

	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;

	 	if(t>0&&e==3){
	 		cout<<"������ȴ�С���"<<endl;
	 		e=9;
		 }
	 	switch(e){
	 	   case 1:zomble=zomble-g;
			yt=(random(2))+0.3*d;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"�����30��Ѫ"<<endl;
			         usleep(500000);
			         cout<<"Ѫƿ��ʣ"<<f<<"ƿ"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"��ʹ����DEBUG��Ѫ����99999�Σ�"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:zomble=zomble-g2;
	 }
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2){
	 	you+=8;
	 	cout<<"������8��Ѫ"<<endl;
		usleep(500000); 
	 }
	 you=you-ze;
	 cout<<"С�����������"<<ze<<"���˺�"<<endl;
	 usleep(500000);
	 cout<<"���ܵ���"<<yt<<"�㷴��"<<endl;
	 usleep(500000);
	 if(e==1){
	 	cout<<"С���ܵ���"<<g<<"���˺�"<<endl; 
	 	usleep(500000);
	 }else if(e==3){
	     cout<<"С���ܵ���"<<g2<<"���˺�"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"��"<<"��"<<q<<endl;
	 	cout<<"�㻨��"<<nti<<"��"; 
		sleep(10);
		system("pause");
	 	return 0;
	 }
	 } 
	}else if(mode==2){
		switch(d){
			case 1:zomble=100;ze=15;zdp=65;break;
			case 2:zomble=30;ze=28;zdp=60;break;
			case 3:zomble=150;ze=20;zdp=20;nzt=(double)clock()/CLOCKS_PER_SEC;break;
			case 4:zomble=100;ze=10;zdp=10;du=0;break;
			case 5:zomble=1;ze=1;zdp=98;break;
			case 6:zomble=50;ze=14;zdp=0;zf=25;break;
			case 7:zomble=50;ze=12;zdp=0;zf=25;break;
			default:return 0;
		} 
		for(q=1; ;q++){
		yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"����"<<"                                   "<<"Ѫ����"<<zomble<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"��"<<"                                     "<<"Ѫ����"<<you<<endl;
	 	cout<<"1�Ǵ�              2�ǲ�Ѫ            3����"<<endl;
	 	nzt=(double)clock()/CLOCKS_PER_SEC;
	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;
	 	nzt2=(double)clock()/CLOCKS_PER_SEC;
	 	nzt3=nzt2-nzt-1;
	 	nzt3*=10;
	 	if(nzt2-nzt>0.5&&d==3){
	 		cout<<"��̫���ˣ�����͵Ϯ����"<<endl;
	 		usleep(500000);
	 		cout<<"���ܵ���"<<20+nzt3<<"���˺�"<<endl;
	 		usleep(500000);
	 		you=you-20-nzt3;
		}
		if(d==4){
			nzt=(random(3));
			cout<<"����ж��̶�������"<<nzt<<endl;
			usleep(500000);
			du+=nzt;
		}
		if(d==5){
			you-=(nzt2-nzt)*60;
			cout<<"���˶���������"<<(nzt2-nzt)*60<<"���˺�"<<endl;
		}
		bool d6flag=false;
		d6flag=false; 
		if(d>=6&&d<=7){
			if((e==1||e==3)&&((zomble-g<=1&&e==1)||(zomble-g2<=1&&e==3))&&zf>0){
				cout<<"������ʹ����Ѫƿ����30��Ѫ"<<endl; 
				zf--;
			    cout<<"�������Ѫƿ��ʣ"<<zf<<"ƿ"<<endl;
			    zomble+=30;
			    usleep(500000);
			}else{
				if(d==7){
					cout<<"���������������"<<endl;
				    d6flag=true;
				    usleep(500000);
				}else{
				    cout<<"���������������"<<endl;
				    cout<<"�������ܵ���0.3�㷴��"<<endl;
				    zomble-=0.3;
				    d6flag=true;
			    	usleep(500000);
			    }
			} 
		}
	 	if(t>0&&e==3){
	 		cout<<"������ȴ�С���"<<endl;
	 		usleep(500000);
	 		e=9;
		 }
		 x=(random(100));
	 	switch(e){
	 	   case 1:if(x>=zdp) {zomble=zomble-g;}
			yt=(random(5))+0.3;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"�����30��Ѫ"<<endl; 
			         usleep(500000);
			         cout<<"Ѫƿ��ʣ"<<f<<"ƿ"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"��ʹ����DEBUG��Ѫ����99999�Σ�"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:if(x>=zdp) {zomble=zomble-g2;}
	 }
	 if(x<zdp&&e!=2&&t<=0){
	 	cout<<"��Ĺ�������/�����ˣ�"<<endl;
		 usleep(500000); 
	 } 
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2&&x>=zdp){
	 	you+=8;
	 	cout<<"������8��Ѫ"<<endl;
		usleep(500000); 
	 }
	if(d6flag){
	    cout<<"���˶��������"<<ze<<"���˺�"<<endl;
	    you=you-ze;
	}
	 if(d==4){
	 	cout<<"���ж��ˣ����ܵ���"<<du<<"���˺�"<<endl; 
	 	usleep(500000);
	 	you-=du;
	 }
	 usleep(500000);
	 cout<<"���ܵ���"<<yt<<"�㷴��"<<endl; 
	 usleep(500000);
	 if(e==1&&x>=zdp){
	 	cout<<"�����ܵ���"<<g<<"���˺�"<<endl; 
	 	usleep(500000);
	 }else if(e==3&&x>=zdp){
	     cout<<"�����ܵ���"<<g2<<"���˺�"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"��"<<"��"<<q<<endl;
	 	cout<<"�㻨��"<<nti<<"��";
		sleep(10);
		system("pause"); 
	 	return 0;
	 }
    }
    }
	}
	if(zhenrong == 3)
	{
		cout<<"1���¹���ʿ����10Զ15��"<<endl;
		 int b,u=0,b2,g,g2,t=0;
		 cin>>b;
		 switch(b){
	 	case 1:cout<<"P1ѡ�����¹���ʿ"<<endl;
		 g=10;
		 g2=15;break;
	 	case 9999:cout<<"��ϲ����ѡ�����������һ��������7��Ѫ)(��100Զ55)"<<endl;
	 	    g=100000;g2=5500;
	 	    u=1;break;
	 } 
	 
	 cout<<"ѡ��ģʽ��1�ǵ���,2�Ƿ��"<<endl;
	 int mode;
	 cin>>mode;
	 if(mode==1)
	 	cout<<"������ʼ����ģʽ"<<endl;
	 else if(mode==2){
	 	cout<<"������ʼ���ģʽ������Σ�գ�"<<endl;
	 }else cout<<"δ����"<<endl;
	 if(mode==1) cout<<"ѡ���Ѷ� 1�Ǽ� 2������ 3������ 4�Ƿ�� 5�Ǽ��� 6�ǳ����� 7�ǵ��� 8�ǲ����ܣ�����ѡ��5+��"<<endl;
	 if(mode==2) cout<<"ѡ����� 1��������(level 4) 2�ǰ´�(level 6!!) 3����ľ��(level 7!!!) 4�Ǻڰ�����(level 6!!) 5�����(level 7!!!) 6��������(level 7!!!) 7��������(level 7!!!)"<<endl;
	 int d;
	 cin>>d; 
	 cout<<"��ѡ��"<<d<<endl; 
	 cout<<"gogogogo"<<endl;
	 bool game=true;
	 double you=50,kill,f=25,zf=0,h,q,ran,ti=(double)clock()/CLOCKS_PER_SEC,nti,nzt=0,nzt2=0,nzt3=0,du=0;
	 int e,zdp=0,x;
	 long long ze=3*d;            
	 double zomble=30*d,zd=0;
	 if(mode==1){
	 	for(q=1; ;q++){
	 	yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"��ͨС��"<<"                                   "<<"Ѫ����"<<zomble<<endl;
	 	cout<<"����:"<<"��";
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"��"<<"                                     "<<"Ѫ����"<<you<<endl;
	 	cout<<"1�Ǵ�              2�ǲ�Ѫ            3����"<<endl;

	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;

	 	if(t>0&&e==3){
	 		cout<<"������ȴ�С���"<<endl;
	 		e=9;
		 }
	 	switch(e){
	 	   case 1:zomble=zomble-g;
			yt=(random(2))+0.3*d;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"�����30��Ѫ"<<endl;
			         usleep(500000);
			         cout<<"Ѫƿ��ʣ"<<f<<"ƿ"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"��ʹ����DEBUG��Ѫ����99999�Σ�"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:zomble=zomble-g2;
	 }
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2){
	 	you+=8;
	 	cout<<"������8��Ѫ"<<endl;
		usleep(500000); 
	 }
	 you=you-ze;
	 cout<<"С�����������"<<ze<<"���˺�"<<endl;
	 usleep(500000);
	 cout<<"���ܵ���"<<yt<<"�㷴��"<<endl;
	 usleep(500000);
	 if(e==1){
	 	cout<<"С���ܵ���"<<g<<"���˺�"<<endl; 
	 	usleep(500000);
	 }else if(e==3){
	     cout<<"С���ܵ���"<<g2<<"���˺�"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"��"<<"��"<<q<<endl;
	 	cout<<"�㻨��"<<nti<<"��"; 
		sleep(10);
		system("pause");
	 	return 0;
	 }
	 } 
	}else if(mode==2){
		switch(d){
			case 1:zomble=100;ze=15;zdp=65;break;
			case 2:zomble=30;ze=28;zdp=60;break;
			case 3:zomble=150;ze=20;zdp=20;nzt=(double)clock()/CLOCKS_PER_SEC;break;
			case 4:zomble=100;ze=10;zdp=10;du=0;break;
			case 5:zomble=1;ze=1;zdp=98;break;
			case 6:zomble=50;ze=14;zdp=0;zf=25;break;
			case 7:zomble=50;ze=12;zdp=0;zf=25;break;
			default:return 0;
		} 
		for(q=1; ;q++){
		yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"����"<<"                                   "<<"Ѫ����"<<zomble<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"��"<<"                                     "<<"Ѫ����"<<you<<endl;
	 	cout<<"1�Ǵ�              2�ǲ�Ѫ            3����"<<endl;
	 	nzt=(double)clock()/CLOCKS_PER_SEC;
	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;
	 	nzt2=(double)clock()/CLOCKS_PER_SEC;
	 	nzt3=nzt2-nzt-1;
	 	nzt3*=10;
	 	if(nzt2-nzt>0.5&&d==3){
	 		cout<<"��̫���ˣ�����͵Ϯ����"<<endl;
	 		usleep(500000);
	 		cout<<"���ܵ���"<<20+nzt3<<"���˺�"<<endl;
	 		usleep(500000);
	 		you=you-20-nzt3;
		}
		if(d==4){
			nzt=(random(3));
			cout<<"����ж��̶�������"<<nzt<<endl;
			usleep(500000);
			du+=nzt;
		}
		if(d==5){
			you-=(nzt2-nzt)*60;
			cout<<"���˶���������"<<(nzt2-nzt)*60<<"���˺�"<<endl;
		}
		bool d6flag=false;
		d6flag=false; 
		if(d>=6&&d<=7){
			if((e==1||e==3)&&((zomble-g<=1&&e==1)||(zomble-g2<=1&&e==3))&&zf>0){
				cout<<"������ʹ����Ѫƿ����30��Ѫ"<<endl; 
				zf--;
			    cout<<"�������Ѫƿ��ʣ"<<zf<<"ƿ"<<endl;
			    zomble+=30;
			    usleep(500000);
			}else{
				if(d==7){
					cout<<"���������������"<<endl;
				    d6flag=true;
				    usleep(500000);
				}else{
				    cout<<"���������������"<<endl;
				    cout<<"�������ܵ���0.3�㷴��"<<endl;
				    zomble-=0.3;
				    d6flag=true;
			    	usleep(500000);
			    }
			} 
		}
	 	if(t>0&&e==3){
	 		cout<<"������ȴ�С���"<<endl;
	 		usleep(500000);
	 		e=9;
		 }
		 x=(random(100));
	 	switch(e){
	 	   case 1:if(x>=zdp) {zomble=zomble-g;}
			yt=(random(5))+0.3;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"�����30��Ѫ"<<endl; 
			         usleep(500000);
			         cout<<"Ѫƿ��ʣ"<<f<<"ƿ"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"��ʹ����DEBUG��Ѫ����99999�Σ�"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:if(x>=zdp) {zomble=zomble-g2;}
	 }
	 if(x<zdp&&e!=2&&t<=0){
	 	cout<<"��Ĺ�������/�����ˣ�"<<endl;
		 usleep(500000); 
	 } 
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2&&x>=zdp){
	 	you+=8;
	 	cout<<"������8��Ѫ"<<endl;
		usleep(500000); 
	 }
	if(d6flag){
	    cout<<"���˶��������"<<ze<<"���˺�"<<endl;
	    you=you-ze;
	}
	 if(d==4){
	 	cout<<"���ж��ˣ����ܵ���"<<du<<"���˺�"<<endl; 
	 	usleep(500000);
	 	you-=du;
	 }
	 usleep(500000);
	 cout<<"���ܵ���"<<yt<<"�㷴��"<<endl; 
	 usleep(500000);
	 if(e==1&&x>=zdp){
	 	cout<<"�����ܵ���"<<g<<"���˺�"<<endl; 
	 	usleep(500000);
	 }else if(e==3&&x>=zdp){
	     cout<<"�����ܵ���"<<g2<<"���˺�"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"��"<<"��"<<q<<endl;
	 	cout<<"�㻨��"<<nti<<"��";
		sleep(10);
		system("pause"); 
	 	return 0;
	 }
    }
    }
	}
	if(zhenrong == 4)
	{
		cout<<"1�����(��14Զ5)��2��������(��6Զ12),3�ǰ�������(��5Զ30(Զ��ȴ3�غ�)),4�Ǳ���֩����(��6Զ20(Զ��ȴ1�غ�)),5�ǻҺƿ�(��9Զ7(��Ѫ+8))"<<endl;
		 int b,u=0,b2,g,g2,t=0;
		 cin>>b;
		 switch(b){
	 	case 1:cout<<"P1ѡ�������"<<endl;
		 g=14;
		 g2=5;break;
	 	case 9999:cout<<"��ϲ����ѡ�����������һ��������7��Ѫ)(��100Զ55)"<<endl;
	 	    g=100000;g2=5500;
	 	    u=1;break;
		 default:cout<<"P1ѡ����������"<<endl;
		     g=6;
		     g2=12; 
		     break;
		case 3:	cout<<"P1ѡ���˺ڰ�����"<<endl; 
		    g=5;
		    g2=30;
		    t=3;
		    break;
		case 4: cout<<"P1ѡ���˱���֩����"<<endl;
		    g=6;
			g2=20;
			t=1;
			break;
		case 5: cout<<"P1ѡ���˻Һƿ�"<<endl; 
		    g=9;
		    g2=7;
	 } 
	 
	 cout<<"ѡ��ģʽ��1�ǵ���,2�Ƿ��"<<endl;
	 int mode;
	 cin>>mode;
	 if(mode==1)
	 	cout<<"������ʼ����ģʽ"<<endl;
	 else if(mode==2){
	 	cout<<"������ʼ���ģʽ������Σ�գ�"<<endl;
	 }else cout<<"δ����"<<endl;
	 if(mode==1) cout<<"ѡ���Ѷ� 1�Ǽ� 2������ 3������ 4�Ƿ�� 5�Ǽ��� 6�ǳ����� 7�ǵ��� 8�ǲ����ܣ�����ѡ��5+��"<<endl;
	 if(mode==2) cout<<"ѡ����� 1��������(level 4) 2�ǰ´�(level 6!!) 3����ľ��(level 7!!!) 4�Ǻڰ�����(level 6!!) 5�����(level 7!!!) 6��������(level 7!!!) 7��������(level 7!!!)"<<endl;
	 int d;
	 cin>>d; 
	 cout<<"��ѡ��"<<d<<endl; 
	 cout<<"gogogogo"<<endl;
	 bool game=true;
	 double you=50,kill,f=25,zf=0,h,q,ran,ti=(double)clock()/CLOCKS_PER_SEC,nti,nzt=0,nzt2=0,nzt3=0,du=0;
	 int e,zdp=0,x;
	 long long ze=3*d;            
	 double zomble=30*d,zd=0;
	 if(mode==1){
	 	for(q=1; ;q++){
	 	yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"��ͨС��"<<"                                   "<<"Ѫ����"<<zomble<<endl;
	 	cout<<"����:"<<"��";
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"��"<<"                                     "<<"Ѫ����"<<you<<endl;
	 	cout<<"1�Ǵ�              2�ǲ�Ѫ            3����"<<endl;

	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;

	 	if(t>0&&e==3){
	 		cout<<"������ȴ�С���"<<endl;
	 		e=9;
		 }
	 	switch(e){
	 	   case 1:zomble=zomble-g;
			yt=(random(2))+0.3*d;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"�����30��Ѫ"<<endl;
			         usleep(500000);
			         cout<<"Ѫƿ��ʣ"<<f<<"ƿ"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"��ʹ����DEBUG��Ѫ����99999�Σ�"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:zomble=zomble-g2;
	 }
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2){
	 	you+=8;
	 	cout<<"������8��Ѫ"<<endl;
		usleep(500000); 
	 }
	 you=you-ze;
	 cout<<"С�����������"<<ze<<"���˺�"<<endl;
	 usleep(500000);
	 cout<<"���ܵ���"<<yt<<"�㷴��"<<endl;
	 usleep(500000);
	 if(e==1){
	 	cout<<"С���ܵ���"<<g<<"���˺�"<<endl; 
	 	usleep(500000);
	 }else if(e==3){
	     cout<<"С���ܵ���"<<g2<<"���˺�"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"��"<<"��"<<q<<endl;
	 	cout<<"�㻨��"<<nti<<"��"; 
		sleep(10);
		system("pause");
	 	return 0;
	 }
	 } 
	}else if(mode==2){
		switch(d){
			case 1:zomble=100;ze=15;zdp=65;break;
			case 2:zomble=30;ze=28;zdp=60;break;
			case 3:zomble=150;ze=20;zdp=20;nzt=(double)clock()/CLOCKS_PER_SEC;break;
			case 4:zomble=100;ze=10;zdp=10;du=0;break;
			case 5:zomble=1;ze=1;zdp=98;break;
			case 6:zomble=50;ze=14;zdp=0;zf=25;break;
			case 7:zomble=50;ze=12;zdp=0;zf=25;break;
			default:return 0;
		} 
		for(q=1; ;q++){
		yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"����"<<"                                   "<<"Ѫ����"<<zomble<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"��"<<"                                     "<<"Ѫ����"<<you<<endl;
	 	cout<<"1�Ǵ�              2�ǲ�Ѫ            3����"<<endl;
	 	nzt=(double)clock()/CLOCKS_PER_SEC;
	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;
	 	nzt2=(double)clock()/CLOCKS_PER_SEC;
	 	nzt3=nzt2-nzt-1;
	 	nzt3*=10;
	 	if(nzt2-nzt>0.5&&d==3){
	 		cout<<"��̫���ˣ�����͵Ϯ����"<<endl;
	 		usleep(500000);
	 		cout<<"���ܵ���"<<20+nzt3<<"���˺�"<<endl;
	 		usleep(500000);
	 		you=you-20-nzt3;
		}
		if(d==4){
			nzt=(random(3));
			cout<<"����ж��̶�������"<<nzt<<endl;
			usleep(500000);
			du+=nzt;
		}
		if(d==5){
			you-=(nzt2-nzt)*60;
			cout<<"���˶���������"<<(nzt2-nzt)*60<<"���˺�"<<endl;
		}
		bool d6flag=false;
		d6flag=false; 
		if(d>=6&&d<=7){
			if((e==1||e==3)&&((zomble-g<=1&&e==1)||(zomble-g2<=1&&e==3))&&zf>0){
				cout<<"������ʹ����Ѫƿ����30��Ѫ"<<endl; 
				zf--;
			    cout<<"�������Ѫƿ��ʣ"<<zf<<"ƿ"<<endl;
			    zomble+=30;
			    usleep(500000);
			}else{
				if(d==7){
					cout<<"���������������"<<endl;
				    d6flag=true;
				    usleep(500000);
				}else{
				    cout<<"���������������"<<endl;
				    cout<<"�������ܵ���0.3�㷴��"<<endl;
				    zomble-=0.3;
				    d6flag=true;
			    	usleep(500000);
			    }
			} 
		}
	 	if(t>0&&e==3){
	 		cout<<"������ȴ�С���"<<endl;
	 		usleep(500000);
	 		e=9;
		 }
		 x=(random(100));
	 	switch(e){
	 	   case 1:if(x>=zdp) {zomble=zomble-g;}
			yt=(random(5))+0.3;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"�����30��Ѫ"<<endl; 
			         usleep(500000);
			         cout<<"Ѫƿ��ʣ"<<f<<"ƿ"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"��ʹ����DEBUG��Ѫ����99999�Σ�"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:if(x>=zdp) {zomble=zomble-g2;}
	 }
	 if(x<zdp&&e!=2&&t<=0){
	 	cout<<"��Ĺ�������/�����ˣ�"<<endl;
		 usleep(500000); 
	 } 
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2&&x>=zdp){
	 	you+=8;
	 	cout<<"������8��Ѫ"<<endl;
		usleep(500000); 
	 }
	if(d6flag){
	    cout<<"���˶��������"<<ze<<"���˺�"<<endl;
	    you=you-ze;
	}
	 if(d==4){
	 	cout<<"���ж��ˣ����ܵ���"<<du<<"���˺�"<<endl; 
	 	usleep(500000);
	 	you-=du;
	 }
	 usleep(500000);
	 cout<<"���ܵ���"<<yt<<"�㷴��"<<endl; 
	 usleep(500000);
	 if(e==1&&x>=zdp){
	 	cout<<"�����ܵ���"<<g<<"���˺�"<<endl; 
	 	usleep(500000);
	 }else if(e==3&&x>=zdp){
	     cout<<"�����ܵ���"<<g2<<"���˺�"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"��"<<"��"<<q<<endl;
	 	cout<<"�㻨��"<<nti<<"��";
		sleep(10);
		system("pause"); 
	 	return 0;
	 }
    }
    }
	}
	if(zhenrong == 5)
	{
		cout<<"1�ǽ����(��14Զ5)��2��X����(��6Զ12),3�������(��5Զ30(Զ��ȴ3�غ�)),4��ħ��Ů(��6Զ20(Զ��ȴ1�غ�)),5�Ƿ��Ů(��9Զ7(��Ѫ+8))"<<endl;
		 int b,u=0,b2,g,g2,t=0;
		 cin>>b;
		 switch(b){
	 	case 1:cout<<"P1ѡ���˽����"<<endl;
		 g=14;
		 g2=5;break;
	 	case 9999:cout<<"��ϲ����ѡ�����������һ��������7��Ѫ)(��100Զ55)"<<endl;
	 	    g=100000;g2=5500;
	 	    u=1;break;
		 default:cout<<"P1ѡ����X����"<<endl;
		     g=6;
		     g2=12; 
		     break;
		case 3:	cout<<"P1ѡ�������"<<endl; 
		    g=5;
		    g2=30;
		    t=3;
		    break;
		case 4: cout<<"P1ѡ����ħ��Ů"<<endl;
		    g=6;
			g2=20;
			t=1;
			break;
		case 5: cout<<"P1ѡ���˷��Ů"<<endl; 
		    g=9;
		    g2=7;
	 } 
	 
	 cout<<"ѡ��ģʽ��1�ǵ���,2�Ƿ��"<<endl;
	 int mode;
	 cin>>mode;
	 if(mode==1)
	 	cout<<"������ʼ����ģʽ"<<endl;
	 else if(mode==2){
	 	cout<<"������ʼ���ģʽ������Σ�գ�"<<endl;
	 }else cout<<"δ����"<<endl;
	 if(mode==1) cout<<"ѡ���Ѷ� 1�Ǽ� 2������ 3������ 4�Ƿ�� 5�Ǽ��� 6�ǳ����� 7�ǵ��� 8�ǲ����ܣ�����ѡ��5+��"<<endl;
	 if(mode==2) cout<<"ѡ����� 1��������(level 4) 2�ǰ´�(level 6!!) 3����ľ��(level 7!!!) 4�Ǻڰ�����(level 6!!) 5�����(level 7!!!) 6��������(level 7!!!) 7��������(level 7!!!)"<<endl;
	 int d;
	 cin>>d; 
	 cout<<"��ѡ��"<<d<<endl; 
	 cout<<"gogogogo"<<endl;
	 bool game=true;
	 double you=50,kill,f=25,zf=0,h,q,ran,ti=(double)clock()/CLOCKS_PER_SEC,nti,nzt=0,nzt2=0,nzt3=0,du=0;
	 int e,zdp=0,x;
	 long long ze=3*d;            
	 double zomble=30*d,zd=0;
	 if(mode==1){
	 	for(q=1; ;q++){
	 	yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"��ͨС��"<<"                                   "<<"Ѫ����"<<zomble<<endl;
	 	cout<<"����:"<<"��";
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"��"<<"                                     "<<"Ѫ����"<<you<<endl;
	 	cout<<"1�Ǵ�              2�ǲ�Ѫ            3����"<<endl;

	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;
	 	if(t>0&&e==3){
	 		cout<<"������ȴ�С���"<<endl;
	 		e=9;
		 }
	 	switch(e){
	 	   case 1:zomble=zomble-g;
			yt=(random(2))+0.3*d;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"�����30��Ѫ"<<endl;
			         usleep(500000);
			         cout<<"Ѫƿ��ʣ"<<f<<"ƿ"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"��ʹ����DEBUG��Ѫ����99999�Σ�"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:zomble=zomble-g2;
	 }
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2){
	 	you+=8;
	 	cout<<"������8��Ѫ"<<endl;
		usleep(500000); 
	 }
	 you=you-ze;
	 cout<<"С�����������"<<ze<<"���˺�"<<endl;
	 usleep(500000);
	 cout<<"���ܵ���"<<yt<<"�㷴��"<<endl;
	 usleep(500000);
	 if(e==1){
	 	cout<<"С���ܵ���"<<g<<"���˺�"<<endl; 
	 	usleep(500000);
	 }else if(e==3){
	     cout<<"С���ܵ���"<<g2<<"���˺�"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"��"<<"��"<<q<<endl;
	 	cout<<"�㻨��"<<nti<<"��"; 
		sleep(10);
		system("pause");
	 	return 0;
	 }
	 } 
	}else if(mode==2){
		switch(d){
			case 1:zomble=100;ze=15;zdp=65;break;
			case 2:zomble=30;ze=28;zdp=60;break;
			case 3:zomble=150;ze=20;zdp=20;nzt=(double)clock()/CLOCKS_PER_SEC;break;
			case 4:zomble=100;ze=10;zdp=10;du=0;break;
			case 5:zomble=1;ze=1;zdp=98;break;
			case 6:zomble=50;ze=14;zdp=0;zf=25;break;
			case 7:zomble=50;ze=12;zdp=0;zf=25;break;
			default:return 0;
		} 
		for(q=1; ;q++){
		yt=0;
	 	if(t<0){
	 		t=0;
		 }
		 system("cls");
	 	cout<<(double)clock()/CLOCKS_PER_SEC-ti<<" seconds"<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl<<endl;
	 	cout<<"����"<<"                                   "<<"Ѫ����"<<zomble<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<endl;
	 	cout<<"��"<<"                                     "<<"Ѫ����"<<you<<endl;
	 	cout<<"1�Ǵ�              2�ǲ�Ѫ            3����"<<endl;
	 	nzt=(double)clock()/CLOCKS_PER_SEC;
	 	int ee;
	 	zz(ti);
	 	ee=getch();
	 	e=ee-48;
	 	nzt2=(double)clock()/CLOCKS_PER_SEC;
	 	nzt3=nzt2-nzt-1;
	 	nzt3*=10;
	 	if(nzt2-nzt>0.5&&d==3){
	 		cout<<"��̫���ˣ�����͵Ϯ����"<<endl;
	 		usleep(500000);
	 		cout<<"���ܵ���"<<20+nzt3<<"���˺�"<<endl;
	 		usleep(500000);
	 		you=you-20-nzt3;
		}
		if(d==4){
			nzt=(random(3));
			cout<<"����ж��̶�������"<<nzt<<endl;
			usleep(500000);
			du+=nzt;
		}
		if(d==5){
			you-=(nzt2-nzt)*60;
			cout<<"���˶���������"<<(nzt2-nzt)*60<<"���˺�"<<endl;
		}
		bool d6flag=false;
		d6flag=false; 
		if(d>=6&&d<=7){
			if((e==1||e==3)&&((zomble-g<=1&&e==1)||(zomble-g2<=1&&e==3))&&zf>0){
				cout<<"������ʹ����Ѫƿ����30��Ѫ"<<endl; 
				zf--;
			    cout<<"�������Ѫƿ��ʣ"<<zf<<"ƿ"<<endl;
			    zomble+=30;
			    usleep(500000);
			}else{
				if(d==7){
					cout<<"���������������"<<endl;
				    d6flag=true;
				    usleep(500000);
				}else{
				    cout<<"���������������"<<endl;
				    cout<<"�������ܵ���0.3�㷴��"<<endl;
				    zomble-=0.3;
				    d6flag=true;
			    	usleep(500000);
			    }
			} 
		}
	 	if(t>0&&e==3){
	 		cout<<"������ȴ�С���"<<endl;
	 		usleep(500000);
	 		e=9;
		 }
		 x=(random(100));
	 	switch(e){
	 	   case 1:if(x>=zdp) {zomble=zomble-g;}
			yt=(random(5))+0.3;
			you-=yt;
			break;
	 	   case 2:
	 	   	        if(f>=1){
			         you=you+30;
			         f--;
			         cout<<"�����30��Ѫ"<<endl; 
			         usleep(500000);
			         cout<<"Ѫƿ��ʣ"<<f<<"ƿ"<<endl;
			         sleep(1);
			         break;
			       }
			case 7:
				   if(u==1){
				   	   you+=99999;
				   	   cout<<"��ʹ����DEBUG��Ѫ����99999�Σ�"<<endl;
				   	   sleep(1);
				   	   break;
				   }
			case 9:break;
	 	   default:if(x>=zdp) {zomble=zomble-g2;}
	 }
	 if(x<zdp&&e!=2&&t<=0){
	 	cout<<"��Ĺ�������/�����ˣ�"<<endl;
		 usleep(500000); 
	 } 
	 t--;
	 if(b==3&&e==3){
		t=3;
	}
	if(b==4&&e==3){
		t=1;
	}
	 if(b==5&&e!=2&&x>=zdp){
	 	you+=8;
	 	cout<<"������8��Ѫ"<<endl;
		usleep(500000); 
	 }
	if(d6flag){
	    cout<<"���˶��������"<<ze<<"���˺�"<<endl;
	    you=you-ze;
	}
	 if(d==4){
	 	cout<<"���ж��ˣ����ܵ���"<<du<<"���˺�"<<endl; 
	 	usleep(500000);
	 	you-=du;
	 }
	 usleep(500000);
	 cout<<"���ܵ���"<<yt<<"�㷴��"<<endl; 
	 usleep(500000);
	 if(e==1&&x>=zdp){
	 	cout<<"�����ܵ���"<<g<<"���˺�"<<endl; 
	 	usleep(500000);
	 }else if(e==3&&x>=zdp){
	     cout<<"�����ܵ���"<<g2<<"���˺�"<<endl; 
	     usleep(500000);
	 }
	 if(you<=0){
	 	cout<<"GAME OVER"<<endl;
	 	sleep(10);
	 	return 0;
	 }
	 if(zomble<=0){
	 	cout<<"YOU WIN"<<endl;
	 	nti=(double)clock()/CLOCKS_PER_SEC-ti;
	 	cout<<"��"<<"��"<<q<<endl;
	 	cout<<"�㻨��"<<nti<<"��";
		sleep(10);
		system("pause"); 
	 	return 0;
	 }
    }
    }
	}
	else
	{
		cout << "����ʲô��˼����������";
	}
	return 0;
}
