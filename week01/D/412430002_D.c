long long int ax , ay , bx , by , cx , cy;

    scanf("%lld %lld %lld %lld %lld %lld",&ax , &ay , &bx , &by , &cx , &cy);

    long long int D = pow(2,31) - 1;

    long long int E = -pow(2,31);

    if(ax >= E && ax <= D && ay >= E && ay <= D && bx >= E && bx <= D && by >= E && by <= D && cx >= E && cx <= D && cy >= E && cy <= D){

        if((ax - cx) * (by - cy) - (ay - cy) * (bx - cx) > 0){

            printf("left\n");

        }else if((ax - cx) * (by - cy) - (ay - cy) * (bx - cx) < 0){

            printf("right\n");

        }else if((ax - cx) * (by - cy) - (ay - cy) * (bx - cx) == 0){

            printf("touch\n ");

        }

    }

    

    return 0;