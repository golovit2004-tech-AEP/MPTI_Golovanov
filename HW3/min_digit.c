/*
 * min_digit.c
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

int main(int argc, char **argv)
{
	int chislo;
	scanf("%d", &chislo);
	int a1 = chislo/100; 
	int a2 = chislo%100/10; 
	int a3 = chislo%100%10%10;
	
	int max_digit = a1;
    if (a2 > max_digit) max_digit = a2;
    if (a3 > max_digit) max_digit = a3;
    printf("%d\n", max_digit);
	return 0;
}

