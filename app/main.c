/***************************************************************************** 
* 
* File Name : main.c
* 
* Description: main 
* 
* Copyright (c) 2014 Winner Micro Electronic Design Co., Ltd. 
* All rights reserved. 
* 
* Author : dave
* 
* Date : 2014-6-14
*****************************************************************************/ 
#include "wm_include.h"
#include "wm_cpu.h"

int run_mnist();
int run_cifar();
int run_vww96();
int run_mbnet128();


void UserMain(void)
{
	tls_sys_clk_set(CPU_CLK_240M);
	
	tls_sys_clk sysclk;
	tls_sys_clk_get(&sysclk);

	printf("apbclk:%d\n", sysclk.apbclk);
	printf("cpuclk:%d\n", sysclk.cpuclk);
	printf("wlanclk:%d\n", sysclk.wlanclk);
	
	//run_mnist();
	run_cifar();
	//run_vww96();
	//run_mbnet128();
}
