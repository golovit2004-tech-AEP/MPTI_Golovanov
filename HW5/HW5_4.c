/*
 * HW5_4.c
 * 
 * Copyright 2026 PC <PC@DESKTOP-QOLJ0V8>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
int f(int x) {
	int r=0;
	if (x>=-2 && x<2)
	r=x*x;
	if (x>=2)
	r=x*x+4*x+5;
	if (x<-2) 
	r=4;
	
	return r;
}

int main(int argc, char **argv)
{
	int x=1;
	int result=0;
	int max=1;
	while(x !=0) {
	scanf("%d",&x);
	result=f(x);
	if(result>max)
	max=result;
}
printf("%d",max);
	return 0;
}

