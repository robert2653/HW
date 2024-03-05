long long int ax , ay , bx , by , cx , cy;

    scanf("%lld %lld %lld %lld %lld %lld",&ax , &ay , &bx , &by , &cx , &cy);

    long long int D = pow(2,31) - 1;

    long long int E = -pow(2,31);

    float f , g , h;

    f = (ay - by)/(float)(ax - bx);

    g = (by - cy)/(float)(bx - cx);

    h = (ay - cy)/(float)(ax - cx);

    if(ax >= E && ax <= D && ay >= E && ay <= D && bx >= E && bx <= D && by >= E && by <= D && cx >= E && cx <= D && cy >= E && cy <= D){

        if(f == g && g == h && h == f){

            printf("yes\n");

        }else{

            printf("no\n");

        }

    }



    return 0;