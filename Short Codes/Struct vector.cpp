#include<stdio.h>
#include<math.h>

struct Vector {
double x;
double y;
};
typedef struct Vector Vect;
void print(Vect vec)
{
    printf("%lf %lf\n",vec.x,vec.y);
    return ;
}

Vect vectorSum( Vect A,Vect B)
{
    Vect V;
   V.x=A.x+B.x;
   V.y=A.y+B.y;
   return V;
}
Vect vectorSubs( Vect A,Vect B)
{
    Vect V;
   V.x=A.x-B.x;
   V.y=A.y-B.y;
   return V;
}
double findDotProduct(Vect A, Vect B)
{
  double result;
  result=A.x*B.x+A.y*B.y;
  return result;
}
double cross_product_Length(Vect P, Vect Q )
{
    return (P.x*Q.y + P.y*Q.x);
}
Vect UnitVector(Vect P)
{
    double a = sqrt(P.x*P.x+P.y*P.y);
    P.x /= a;
    P.y /= a;
    return P;
}
void scale(Vect* A)
{
    A->x*=2;
    A->y*=2;

}

int main()
{
    Vect vec1={12,34} ,vec2={1,2};
    Vect S=vectorSum(vec1,vec2);
    printf("the sum of vectors are ");
    print(S);
    Vect Subs =vectorSubs(vec1,vec2);
    printf("the substraction of vectors are ");
    print(Subs);
    double dp=findDotProduct(vec1,vec2);
    printf("the dotproduct of vectors are ");
    printf("%lf\n",dp);
    double length = cross_product_Length(vec1,vec2);
    printf("Cross product: %lf\n", length);

    Vect unit1 = UnitVector(vec1);
    printf("Unit vector of vector 1: ");
    print(unit1);
    Vect unit2 = UnitVector(vec2);
    printf("Unit vector of vector 2: ");
    print(unit2);
    Vect V=vectorSum(vec1,vec2);
    scale(&S);
    printf("the scale of the vectors are :");
    print(S);

    return 0;
}

