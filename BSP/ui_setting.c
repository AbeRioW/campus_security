#include "ui_setting.h"
#include "main.h"
void ui_setting(void)
{
	  int position = 0;
	  char show_fire[20]={0},show_smoke[20]={0};
		OLED_ShowString(20,0,(uint8_t*)"Setting",16,1);
	  OLED_Refresh();
		while(1)
		{

			sprintf(show_fire,"Fire_Data:%.2f",fire_ban);
			OLED_ShowString(0,20,(uint8_t*)show_fire,8,position==0?0:1);
			sprintf(show_smoke,"Smoke_Data:%.2f",smoke_ban);
			OLED_ShowString(0,30,(uint8_t*)show_smoke,8,position==1?0:1);
			
			OLED_ShowString(0,40,(uint8_t*)"Back",16,position==2?0:1);
				OLED_Refresh();
			
			if(botton==MIDLE)
			{
					botton = UNPRESS;
					HAL_Delay(300);
					position++;
			
					if(position>2)
					{
							position=0;
					}
			}
			
			if(botton==LEFT)
			{
					botton = UNPRESS;
					switch(position)
					{
						case 0:
							fire_ban=fire_ban-0.1;
							if(fire_ban<0)
							{
								 fire_ban=3.2;
							}
							break;
						case 1:
							
							smoke_ban=smoke_ban-0.1;
							if(smoke_ban<0)
							{
								 smoke_ban=3.2;
							}
							break;
					}
			}
			
			
			if(botton==RIGHT)
			{
					botton = UNPRESS;
					switch(position)
					{
						case 0:
							fire_ban=fire_ban+0.1;
							if(fire_ban>3.2)
							{
								 fire_ban=0;
							}
							break;
						case 1:
							
							smoke_ban=smoke_ban+0.1;
							if(smoke_ban>3.2)
							{
								 smoke_ban=0;
							}
							break;
						case 2:
							OLED_Clear();
								return;
							break;
					}
			}
			
		}	

}