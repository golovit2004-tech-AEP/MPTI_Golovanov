/*
 * HW5_16.c
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

int is_prime(int n) {
    if (n < 2) return 0;  
    
    int simple = 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            simple = 0;
            break;  
        }
    }
    return simple;
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (is_prime(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
