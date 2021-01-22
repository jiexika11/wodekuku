typedef struct  
{		 	 
		
	u16 x_qishi;
    u16 y_qishi;
    u16 x_zhongzhi;
    u16 y_zhongzhi;
	U16 x_huodong;
	u16 y_huodong;
	u8  id;
	u16 kuandu;			
	u16 gaodu;
	u8  zhuangtai;				
	u8* lujing;
    void (*gongneng)(void);	
} _tu_biao; 	  

_tu_biao bb;


bb.x_qishi=20;
bb.y_qishi=20;
bb.kuandu=100;
bb.gaodu=100;
bb.zhuangtai=0;
bb.id=0;
bb.lujing=(u8*)icos[0];

typedef struct
{
	u8 (*init)(void);		
	u8 (*scan)(u8);					 
	void (*adjust)(void);		 
	u16 x[CT_MAX_TOUCH]; 		
	u16 y[CT_MAX_TOUCH];		
	u16 sta;					
	float xfac;					
	float yfac;
	short xoff;
	short yoff;	   

	u8 touchtype;
}_m_tp_dev;

extern _m_tp_dev tp_dev;	 	










u8 tubiao_jiancha(_tu_biao tubiao,_m_tp_dev jian)
{
	tubiao.x_huodong=jian.x[0];
	tubiao.y_huodong=jian.y[0];
	if(tubiao.x_huodong>tubiao.x_qishi&&tubiao.x_huodong<tubiao.x_zhongzhi//
	   &&tubiao.y_huodong>tubiao.y_qishi&&tubiao.y_huodong<tubiao.y_zhongzhi)
		tubiao.zhuangtai=1;
   	   else 
		tubiao.zhuangtai=0;
	 return tubiao.id  
}

minibmp_decode(spbdev.icos[j].path,spbdev.icos[j].x+spbdev.spbahwidth,spbdev.icos[j].y-spbdev.stabarheight,//
               spbdev.icos[j].width,spbdev.icos[j].width,0,0);




(480-tubiaokuandu*4-biankuan)/(4-1)
x= 10  110   130   230   250   350  370  470  480  
   

u8 const *pname[10]={"2:/PICTURE/00.jpg",
                       "2:/PICTURE/01.jpg",
                       "2:/PICTURE/02.jpg",
		                   "2:/PICTURE/03.jpg",
		                   "2:/PICTURE/04.jpg",
		                   "2:/PICTURE/05.jpg",
		                   "2:/PICTURE/06.jpg",
		                   "2:/PICTURE/07.jpg",
		                   "2:/PICTURE/08.jpg",
		                   "2:/PICTURE/09.jpg",
	                    } ;

u8*const icos[3]= 
{
	"1:/SYSTEM/SPB/icos/phone_56.bmp",
	"1:/SYSTEM/SPB/icos/app_56.bmp",	    
	"1:/SYSTEM/SPB/icos/sms_56.bmp",	   
};	    



    LCD_Clear(BLACK);
    minibmp_decode(bb.lujing,bb.x_qishi,bb.y_qishi,bb.kuandu,bb.gaodu,0,0);
    tp_dev.scan(0);
    if(tubiao_jiancha(bb,tp_dev))
	gui_fill_circle(240,400,50,GREEN);




         ledpwmval[0]=(u16)USART_RX_BUF[1]<<8|USART_RX_BUF[0];
		 ledpwmval[1]=(u16)USART_RX_BUF[3]<<8|USART_RX_BUF[2];
		 ledpwmval[2]=(u16)USART_RX_BUF[5]<<8|USART_RX_BUF[4];
		 ledpwmval[3]=(u16)USART_RX_BUF[7]<<8|USART_RX_BUF[6];

         switch(a++)
		 {
			 case 100: dir[0]=1;break;
			 case 200: dir[1]=0;break;
			 case 300: dir[2]=0;break;
			 case 400: dir[3]=0;break;
			 case 500: dir[4]=0;break;
			 case 600: dir[5]=0;break;
			 case 700: dir[6]=0;break;
			 case 1000: a=0;break;
		 }




主机usb在没有收到信息时处于睡眠状态。。。。
当主机接受到usb的插入信息时。。。
usb会查询插入的设备信息。。。键盘。。。鼠标。。。存储设备。。。等
针对这些设备做相应处理。。。。










