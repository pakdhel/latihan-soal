void menu(int a){
   float p, l, luas, kel, diagonal;
   switch (a) {
      case 1: 
         printf("panjang, lebar :");scanf("%f, %f", &p, &l); 
         luas = p*l;
         printf("Luas = %g\n", luas);
         break;
      case 2:
         printf("panjang, lebar : ");scanf("%f, %f", &p, &l);
         kel = 2*(p+l);
         printf("Keliling = %g\n", kel);
         break;
      case 3:
         printf("panjang, lebar");scanf("%f, %f", &p, &l);
         diagonal = sqrt(pow(p,2) + pow(l,2))
         printf("Diagonal = %g\n", diagonal);
         break;
      default: break;
   }
}