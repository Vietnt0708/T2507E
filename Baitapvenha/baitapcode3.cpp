#include <stdio.h>
int main(){
	int so_tien;
	printf("nhap so tien can rut(la boi cua 10000):");
	scanf("%d", &so_tien);
	
	if(so_tien % 10000 != 0){
		printf("so tien khong hop le");
		return 1;
	}
	 int to_500k=0 , to_200k=0 , to_100k=0 , to_50k=0 , to_20k=0 , to_10k=0 ;
	  
	if(so_tien >= 500000){
		to_500k = so_tien / 500000;
        so_tien = so_tien % 500000;
	}
		if(so_tien >=200000){
			to_200k = so_tien / 200000;
            so_tien = so_tien % 200000;
		}
			if(so_tien >=100000){
				to_100k = so_tien / 100000;
                so_tien = so_tien % 100000;
			}
				if(so_tien >=50000){
					to_50k= so_tien / 50000;
                    so_tien = so_tien % 50000;
				}
					if(so_tien >=20000){
						to_20k = so_tien / 20000;
                        so_tien = so_tien % 20000;
					}
						if(so_tien >=10000){
							to_10k = so_tien / 10000;
                            so_tien = so_tien % 10000;
			
}
        
        if(so_tien >0){
        	if(so_tien >= 200000){
        		to_200k += so_tien / 200000;
                so_tien = so_tien % 200000;
			}else{
				if(so_tien >=100000){
					to_100k += so_tien / 100000;
                    so_tien = so_tien % 100000;
				}else{
					if(so_tien >= 50000){
						to_50k += so_tien / 50000;
                        so_tien = so_tien % 50000;
					}else{
						if(so_tien >= 20000){
							to_20k += so_tien / 20000;
                            so_tien = so_tien % 20000;
						}else{
							if(so_tien >=10000){
								to_10k += so_tien / 10000;
                                so_tien = so_tien % 10000;
							}
						}
					}
				}
			}
        }
        
         printf("\nSo to tien can tra:\n");
    if (to_500k > 0) printf("500k: %d to\n", to_500k);
    if (to_200k > 0) printf("200k: %d to\n", to_200k);
    if (to_100k > 0) printf("100k: %d to\n", to_100k);
    if (to_50k > 0)  printf("50k : %d to\n", to_50k);
    if (to_20k > 0)  printf("20k : %d to\n", to_20k);
    if (to_10k > 0)  printf("10k : %d to\n", to_10k);

	}
    
	 
	
